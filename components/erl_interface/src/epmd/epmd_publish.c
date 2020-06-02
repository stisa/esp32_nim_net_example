/*
 * %CopyrightBegin%
 * 
 * Copyright Ericsson AB 1998-2020. All Rights Reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * %CopyrightEnd%
 */

#include "eidef.h"

#ifdef __WIN32__
#include <winsock2.h>
#include <windows.h>
#include <winbase.h>

#elif  VXWORKS
#include <vxWorks.h>
#include <ifLib.h>
#include <sockLib.h>
#include <inetLib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#else
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#endif

#include <stdlib.h>
#include <string.h>

#include "ei_internal.h"
#include "putget.h"
#include "ei_epmd.h"
#include "ei_portio.h"


/* publish our listen port and alive name */
/* return the (useless) creation number */
/* publish our listen port and alive name */
/* return the (useless) creation number */
/* this protocol is a lot more complex than the old one */
static int ei_epmd_r4_publish (int port, const char *alive, unsigned ms)
{
  char buf[EPMDBUF];
  char *s = buf;
  int fd;
  int elen = 0;
  int nlen = strlen(alive);
  int len = elen + nlen + 13; /* hard coded: be careful! */
  int n;
  int err, res, creation;
  ssize_t dlen;
  unsigned tmo = ms == 0 ? EI_SCLBK_INF_TMO : ms;

  printf("ei_epmd_r4_publish: \n");

  if (len > sizeof(buf)-2)
  {
    erl_errno = ERANGE;
    printf("ei_epmd_r4_publish: erange\n");
    return -1;
  }

  s = buf;
  put16be(s,len);

  put8(s,EI_EPMD_ALIVE2_REQ);
  put16be(s,port); /* port number */
  put8(s,'h');            /* h = r4 hidden node */
  put8(s, EI_MYPROTO);      /* protocol 0 ?? */
  put16be(s,EI_DIST_HIGH);   /* highest understood version: 1 = R4 */
  put16be(s,EI_DIST_LOW);    /* lowest:  0 = R3 */
  put16be(s,nlen);        /* length of alivename */
  strcpy(s, alive);
  s += nlen;
  put16be(s,elen);        /* length of extra string = 0 */
                          /* no extra string */

  if ((fd = ei_epmd_connect_tmo(NULL,ms)) < 0) return fd;

  dlen = (ssize_t) len+2;
  err = ei_write_fill_t__(fd, buf, &dlen, tmo);
  if (!err && dlen != (ssize_t) len + 2) {
      printf("ei_epmd_r4_publish: EIO\n");
      erl_errno = EIO;
  }
  if (err) {
      printf("ei_epmd_r4_publish: erange\n");
      ei_close__(fd);
      EI_CONN_SAVE_ERRNO__(err);
      return -1;
  }

  printf(
		 "-> ALIVE2_REQ alive=%s port=%d ntype=%d "
		 "proto=%d dist-high=%d dist-low=%d\n",
		 alive,port,'H',EI_MYPROTO,EI_DIST_HIGH,EI_DIST_LOW);

  dlen = (ssize_t) 4;
  err = ei_read_fill_t__(fd, buf, &dlen, tmo);
  n = (int) dlen;
  if (!err && n != 4) {
      printf("ei_epmd_r4_publish: EIO\n");
      err = EIO;
  }
  if (err) {
    printf("ei_epmd_r4_publish" "<- CLOSE\n");
    ei_close__(fd);
    EI_CONN_SAVE_ERRNO__(err);
    return -2;			/* version mismatch */
  }

  /* Don't close fd here! It keeps us registered with epmd */
  s = buf;
  if (((res=get8(s)) != EI_EPMD_ALIVE2_RESP)) {  /* response */
    printf("ei_epmd_r4_publish" "<- unknown (%d)\n",res);
    printf("ei_epmd_r4_publish" "-> CLOSE\n");
    ei_close__(fd);
    erl_errno = EIO;
    return -1;
  }

  printf("ei_epmd_r4_publish" "<- ALIVE2_RESP\n");

  if (((res=get8(s)) != 0)) {           /* 0 == success */
    printf("ei_epmd_r4_publish" " result=%d (fail)\n",res);
    ei_close__(fd);
    erl_errno = EIO;
    return -1;
  }

  creation = get16be(s);

  printf("ei_epmd_r4_publish"
		 " result=%d (ok) creation=%d\n",res,creation);

  /* probably should save fd so we can close it later... */
  /* epmd_saveconn(OPEN,fd,alive); */

  /* return the creation number, for no good reason */
  /* return creation;*/

  /* no - return the descriptor */
  return fd;
}

int ei_epmd_publish(int port, const char *alive)
{
    return ei_epmd_publish_tmo(port, alive, 0);
}

int ei_epmd_publish_tmo(int port, const char *alive, unsigned ms)
{
  return ei_epmd_r4_publish(port,alive, ms);;
}


/* 
 * Publish a name for our C-node. 
 * a file descriptor is returned - close it to unpublish.
 * 
 */
int ei_publish(ei_cnode* ec, int port)
{
  return ei_epmd_publish(port, ei_thisalivename(ec));
}

int ei_publish_tmo(ei_cnode* ec, int port, unsigned ms)
{
  return ei_epmd_publish_tmo(port, ei_thisalivename(ec), ms);
}
