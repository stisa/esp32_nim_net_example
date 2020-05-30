/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <sys/socket.h>
#include <errno.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_FORWARD_TYPES */
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;

/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ;
typedef NU8 tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg;
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg;
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a, NI b, NI* res);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__4xio0cAXR7XG4pF9bVcpxEg_;

/* section: NIM_merge_VARS */
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */

#line 549 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, nimFrame)(TFrame* s) {
#line 550 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 550 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;

#line 551 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = ((NI16) 0);	}
	goto LA1_;
	LA3_: ;
	{
#line 554 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 554 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));	}
	LA1_: ;

#line 556 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
#line 557 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
#line 558 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 558 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;

#line 558 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 558 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}

#line 85 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, popFrame)(void) {
#line 86 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;}

#line 1033 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
N_LIB_PRIVATE N_NIMCALL(int, toCInt__jdGcpZaHg8FvJJ7dgE9b75w)(tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ opt) {	int result;	nimfr_("toCInt", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	result = (int)0;
#line 1034 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(1034, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");
#line 1035 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(1035, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	switch (opt) {
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 0):
	{		result = SO_ACCEPTCONN;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 1):
	{		result = SO_BROADCAST;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 2):
	{		result = SO_DEBUG;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 3):
	{		result = SO_DONTROUTE;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 4):
	{		result = SO_KEEPALIVE;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 5):
	{		result = SO_OOBINLINE;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 6):
	{		result = SO_REUSEADDR;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 7):
	{		result = SO_REUSEPORT;	}
	break;
	case ((tyEnum_SOBool__SDlZUtKctfhvUZ58547HWQ) 8):
	{		result = TCP_NODELAY;	}
	break;
	}
	popFrame();	return result;}

#line 177 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDisconnectionError__XxybNfLJKXhPAkMhmPhNzQ)(tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg flags, NI32 lastError) {	NIM_BOOL result;	NIM_BOOL T1_;	NIM_BOOL T3_;	NIM_BOOL T4_;	nimfr_("isDisconnectionError", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	result = (NIM_BOOL)0;
#line 179 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(179, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");
#line 189 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(189, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T1_ = (NIM_BOOL)0;
#line 189 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	T1_ = ((flags &(1U<<((NU)(((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1))&7U)))!=0);	if (!(T1_)) goto LA2_;

#line 191 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(191, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T3_ = (NIM_BOOL)0;
#line 190 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(190, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T4_ = (NIM_BOOL)0;
#line 190 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	T4_ = (lastError == ECONNRESET);	if (T4_) goto LA5_;

#line 191 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(191, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T4_ = (lastError == EPIPE);	LA5_: ;
	T3_ = T4_;	if (T3_) goto LA6_;

#line 192 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
	nimln_(192, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	T3_ = (lastError == ENETRESET);	LA6_: ;
	T1_ = T3_;	LA2_: ;
	result = T1_;	popFrame();	return result;}

#line 52 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
static N_INLINE(NIM_BOOL, nimAddInt)(NI a, NI b, NI* res) {	NIM_BOOL result;	NI r;	result = (NIM_BOOL)0;
#line 46 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 46 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	r = ((NI) ((NU)((NU32)(((NU) (a))) + (NU32)(((NU) (b))))));
#line 47 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	{		NIM_BOOL T3_;
#line 47 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (NIM_BOOL)0;
#line 47 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 47 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (((NI) 0) <= (NI)(r ^ a));		if (T3_) goto LA4_;

#line 47 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 47 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (((NI) 0) <= (NI)(r ^ b));		LA4_: ;
		if (!T3_) goto LA5_;

#line 48 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		(*res) = r;	}
	goto LA1_;
	LA5_: ;
	{
#line 50 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		result = NIM_TRUE;	}
	LA1_: ;
	return result;}

#line 194 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
N_LIB_PRIVATE N_NIMCALL(int, toOSFlags__o0FbRanOjUQrx1x33AiBQA)(tySet_tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg socketFlags) {	int result;	nimfr_("toOSFlags", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");	result = (int)0;	{		tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg f;		NI i;		f = (tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg)0;
#line 62 "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
		nimln_(62, "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.ni"
"m");		i = ((NI) 0);		{
#line 63 "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
			nimln_(63, "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.ni"
"m");			while (1) {				NI TM__XqsrSBxhOTPgLQ9cX4MmV4A_5;
#line 63 "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
				if (!(i <= ((NI) 1))) goto LA3;

#line 64 "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
				nimln_(64, "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.ni"
"m");				{
#line 64 "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
					if ((i) < ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0) || (i) > ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1)){ raiseRangeErrorI(i, ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0), ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1)); }					if (!((socketFlags &(1U<<((NU)(((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) (i)))&7U)))!=0)) goto LA6_;

#line 196 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
					nimln_(196, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");					if ((i) < ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0) || (i) > ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1)){ raiseRangeErrorI(i, ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0), ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1)); }					f = ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) (i));					{
#line 197 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
						nimln_(197, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");						switch (f) {
						case ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 0):
						{
#line 199 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
							nimln_(199, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");
#line 199 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
							result = (NI32)(result | MSG_PEEK);						}
						break;
						case ((tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg) 1):
						{
#line 200 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim"
							nimln_(200, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/net.nim");							goto LA8;
						}
						break;
						}
					} LA8: ;
				}
				LA6_: ;

#line 65 "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.nim"
				nimln_(65, "/home/elcritch/.asdf/installs/nim/devel/lib/system/iterators.ni"
"m");				if (nimAddInt(i, ((NI) 1), &TM__XqsrSBxhOTPgLQ9cX4MmV4A_5)) { raiseOverflow(); };				i = (NI)(TM__XqsrSBxhOTPgLQ9cX4MmV4A_5);			} LA3: ;
		}
	}
	popFrame();	return result;}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_netDatInit000)(void) {

#line 999999 "generated_not_to_break_here"

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__XqsrSBxhOTPgLQ9cX4MmV4A_2_2[2];
NI TM__XqsrSBxhOTPgLQ9cX4MmV4A_4;
static char* NIM_CONST TM__XqsrSBxhOTPgLQ9cX4MmV4A_3[2] = {
"Peek", 
"SafeDisconn"};
static TNimNode TM__XqsrSBxhOTPgLQ9cX4MmV4A_0[3];
/* section: NIM_merge_TYPE_INIT3 */
NTI__4xio0cAXR7XG4pF9bVcpxEg_.size = sizeof(tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg);
NTI__4xio0cAXR7XG4pF9bVcpxEg_.align = NIM_ALIGNOF(tyEnum_SocketFlag__4xio0cAXR7XG4pF9bVcpxEg);
NTI__4xio0cAXR7XG4pF9bVcpxEg_.kind = 14;
NTI__4xio0cAXR7XG4pF9bVcpxEg_.base = 0;
NTI__4xio0cAXR7XG4pF9bVcpxEg_.flags = 3;
for (TM__XqsrSBxhOTPgLQ9cX4MmV4A_4 = 0; TM__XqsrSBxhOTPgLQ9cX4MmV4A_4 < 2; TM__XqsrSBxhOTPgLQ9cX4MmV4A_4++) {
TM__XqsrSBxhOTPgLQ9cX4MmV4A_0[TM__XqsrSBxhOTPgLQ9cX4MmV4A_4+0].kind = 1;
TM__XqsrSBxhOTPgLQ9cX4MmV4A_0[TM__XqsrSBxhOTPgLQ9cX4MmV4A_4+0].offset = TM__XqsrSBxhOTPgLQ9cX4MmV4A_4;
TM__XqsrSBxhOTPgLQ9cX4MmV4A_0[TM__XqsrSBxhOTPgLQ9cX4MmV4A_4+0].name = TM__XqsrSBxhOTPgLQ9cX4MmV4A_3[TM__XqsrSBxhOTPgLQ9cX4MmV4A_4];
TM__XqsrSBxhOTPgLQ9cX4MmV4A_2_2[TM__XqsrSBxhOTPgLQ9cX4MmV4A_4] = &TM__XqsrSBxhOTPgLQ9cX4MmV4A_0[TM__XqsrSBxhOTPgLQ9cX4MmV4A_4+0];
}
TM__XqsrSBxhOTPgLQ9cX4MmV4A_0[2].len = 2; TM__XqsrSBxhOTPgLQ9cX4MmV4A_0[2].kind = 2; TM__XqsrSBxhOTPgLQ9cX4MmV4A_0[2].sons = &TM__XqsrSBxhOTPgLQ9cX4MmV4A_2_2[0];
NTI__4xio0cAXR7XG4pF9bVcpxEg_.node = &TM__XqsrSBxhOTPgLQ9cX4MmV4A_0[2];
}

