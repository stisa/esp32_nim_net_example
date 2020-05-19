/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <errno.h>
#include <string.h>
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
typedef struct tyObject_Table__Ji6x6JQ0gVMaFr8AIk18Ug tyObject_Table__Ji6x6JQ0gVMaFr8AIk18Ug;
typedef struct tySequence__SFipDZIkFtPcrLs0AGBBjQ tySequence__SFipDZIkFtPcrLs0AGBBjQ;
typedef struct tySequence__SFipDZIkFtPcrLs0AGBBjQ_Content tySequence__SFipDZIkFtPcrLs0AGBBjQ_Content;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct TNimType TNimType;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct TNimNode TNimNode;
typedef struct tyTuple__8ZxhPt1NwfElsJs8zUSV9bg tyTuple__8ZxhPt1NwfElsJs8zUSV9bg;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct tySequence__SFipDZIkFtPcrLs0AGBBjQ {
  NI len; tySequence__SFipDZIkFtPcrLs0AGBBjQ_Content* p;
};
struct tyObject_Table__Ji6x6JQ0gVMaFr8AIk18Ug {tySequence__SFipDZIkFtPcrLs0AGBBjQ data;
NI counter;
};
struct NimStrPayload {NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {NI len;
NimStrPayload* p;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {NI rc;
NI rootIdx;
};
struct TNimType {void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* disposeImpl;
};
struct RootObj {TNimType* m_type;};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {  RootObj Sup;Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {  Exception Sup;};
struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA {  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;NI32 errorCode;
};
struct TNimNode {char dummy;
};
struct tyTuple__8ZxhPt1NwfElsJs8zUSV9bg {
NI Field0;
NimStringV2 Field1;
NimStringV2 Field2;
};


#ifndef tySequence__SFipDZIkFtPcrLs0AGBBjQ_Content_PP
#define tySequence__SFipDZIkFtPcrLs0AGBBjQ_Content_PP
struct tySequence__SFipDZIkFtPcrLs0AGBBjQ_Content { NI cap; tyTuple__8ZxhPt1NwfElsJs8zUSV9bg data[SEQ_DECL_SIZE];};
#endif

      struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, eqsink___aBBXmHFBEivKqERloP6zmA_2)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*, newOSError__JXEuze9ctNbkn51HYBflQLg)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q)(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA** dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y);
static N_INLINE(NIM_BOOL, nimSubInt)(NI a, NI b, NI* res);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__rZpBQsvfK07ByA9blOaSPOg)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimType* desc);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode);
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringV2 s, NI i);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a, NI b, NI* res);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__45fPtFhY4FavRaYwDhRfuA)(NimStringV2* s, NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);

/* section: NIM_merge_DATA */
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_3 = {0, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_2};
extern TNimType NTI__BeJgrOdDsczOwEWOZbRfKA_;
static const struct {
  NI cap; NIM_CHAR data[17+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_6 = { 17 | NIM_STRLIT_FLAG, "Additional info: " };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_7 = {17, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_6};
static const struct {
  NI cap; NIM_CHAR data[16+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_10 = { 16 | NIM_STRLIT_FLAG, "unknown OS error" };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_11 = {16, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_10};

/* section: NIM_merge_VARS */
N_LIB_PRIVATE tyObject_Table__Ji6x6JQ0gVMaFr8AIk18Ug customEnvs__CMOOgY0OnFeLZvQ9bvVtIlQ;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */

#line 97 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void) {	NI32 result;	result = (NI32)0;
#line 119 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	result = errno;	return result;}

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

#line 18 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode) {	NimStringV2 result;	nimfr_("osErrorMsg", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");	result.len = 0; result.p = NIM_NIL;
#line 39 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(39, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");	result = TM__yu6cxgKBBXbNsTkT9cyMd4g_3;
#line 57 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(57, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");	{		NCSTRING T5_;		NimStringV2 T6_;
#line 57 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 57 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		if (!!((errorCode == ((NI32) 0)))) goto LA3_;

#line 49 "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		nimln_(49, "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");
#line 58 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimln_(58, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");
#line 58 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 58 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		T5_ = (NCSTRING)0;		T5_ = strerror(errorCode);		T6_.len = 0; T6_.p = NIM_NIL;		T6_ = cstrToNimstr(T5_);
#line 49 "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		nimln_(49, "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");		eqsink___aBBXmHFBEivKqERloP6zmA_2((&result), T6_);
	}
	LA3_: ;
	popFrame();	return result;}

#line 436 "/home/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics.nim"
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y) {	NI result;	nimfr_("-%", "/home/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics."
"nim");	result = (NI)0;
#line 437 "/home/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics.nim"
	nimln_(437, "/home/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics."
"nim");
#line 441 "/home/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics.nim"
	nimln_(441, "/home/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics."
"nim");	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));	popFrame();	return result;}

#line 64 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
static N_INLINE(NIM_BOOL, nimSubInt)(NI a, NI b, NI* res) {	NIM_BOOL result;	NI r;	result = (NIM_BOOL)0;
#line 58 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 58 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	r = ((NI) ((NU)((NU32)(((NU) (a))) - (NU32)(((NU) (b))))));
#line 59 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	{		NIM_BOOL T3_;
#line 59 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (NIM_BOOL)0;
#line 59 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 59 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (((NI) 0) <= (NI)(r ^ a));		if (T3_) goto LA4_;

#line 59 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 59 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 59 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (((NI) 0) <= (NI)(r ^ (NI)((NU32) ~(b))));		LA4_: ;
		if (!T3_) goto LA5_;

#line 60 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		(*res) = r;	}
	goto LA1_;
	LA5_: ;
	{
#line 62 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		result = NIM_TRUE;	}
	LA1_: ;
	return result;}

#line 424 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {	NIM_BOOL* result;	result = (NIM_BOOL*)0;
#line 425 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);	return result;}

#line 344 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p) {	NIM_BOOL result;NIM_BOOL* nimErr_;	nimfr_("nimDecRefIsLastCyclicDyn", "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_b"
"acon.nim");{nimErr_ = nimErrorFlag();	result = (NIM_BOOL)0;
#line 345 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
	nimln_(345, "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_b"
"acon.nim");	{		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;		NI T5_;
#line 345 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"

#line 345 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
		if (!!((p == NIM_NIL))) goto LA3_;

#line 346 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
		nimln_(346, "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_b"
"acon.nim");
#line 65 "/home/elcritch/.asdf/installs/nim/devel/lib/system/refs_v2.nim"
		nimln_(65, "/home/elcritch/.asdf/installs/nim/devel/lib/system/refs_v2.nim");
#line 65 "/home/elcritch/.asdf/installs/nim/devel/lib/system/refs_v2.nim"
		T5_ = (NI)0;		T5_ = minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem(((NI) (ptrdiff_t) (p)), ((NI) 8));		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
#line 347 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
		nimln_(347, "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_b"
"acon.nim");		{
#line 347 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"

#line 347 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
			if (!((NI)((*cell).rc & ((NI) -16)) == ((NI) 0))) goto LA8_;

#line 348 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
			nimln_(348, "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_b"
"acon.nim");			result = NIM_TRUE;		}
		goto LA6_;
		LA8_: ;
		{			NI TM__yu6cxgKBBXbNsTkT9cyMd4g_4;
#line 351 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
			nimln_(351, "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_b"
"acon.nim");			if (nimSubInt((*cell).rc, ((NI) 16), &TM__yu6cxgKBBXbNsTkT9cyMd4g_4)) { raiseOverflow(); goto BeforeRet_;};			(*cell).rc = (NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_4);		}
		LA6_: ;

#line 352 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
		nimln_(352, "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_b"
"acon.nim");		{
#line 352 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"

#line 352 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
			if (!((NI)((*cell).rc & ((NI) 3)) == ((NI) 3))) goto LA13_;

#line 353 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
			nimln_(353, "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_b"
"acon.nim");
#line 353 "/home/elcritch/.asdf/installs/nim/devel/lib/system/cyclicrefs_bacon.nim"
			rememberCycle__rZpBQsvfK07ByA9blOaSPOg(result, cell, (*((TNimType**) (p))));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;		}
		LA13_: ;
	}
	LA3_: ;
	}BeforeRet_: ;
	popFrame();	return result;}

#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q)(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA** dest) {
#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	{		NIM_BOOL T3_;
#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		T3_ = (NIM_BOOL)0;		T3_ = nimDecRefIsLastCyclicDyn((*dest));		if (!T3_) goto LA4_;

#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimDestroyAndDispose((*dest));

#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		(*dest) = NIM_NIL;	}
	LA4_: ;
}

#line 2536 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringV2 s, NI i) {	NIM_CHAR result;	NI TM__yu6cxgKBBXbNsTkT9cyMd4g_5;	nimfr_("[]", "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim");{	result = (NIM_CHAR)0;
#line 2536 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
	nimln_(2536, "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim");
#line 2536 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"

#line 2536 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
	if (nimSubInt(s.len, i, &TM__yu6cxgKBBXbNsTkT9cyMd4g_5)) { raiseOverflow(); goto BeforeRet_;};	if ((NU)((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_5)) >= (NU)s.len){ raiseIndexError2((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_5),s.len-1); goto BeforeRet_;}	result = s.p->data[(NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_5)];	}BeforeRet_: ;
	popFrame();	return result;}

#line 11 "/home/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
#line 13 "/home/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 13 "/home/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memcpy(dest, source, ((size_t) (size)));}

#line 2133 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {
#line 2134 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"

#line 2134 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
	nimCopyMem(dest, source, size);
}

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

#line 80 "/home/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {{
#line 81 "/home/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
	{		NI TM__yu6cxgKBBXbNsTkT9cyMd4g_8;		NI TM__yu6cxgKBBXbNsTkT9cyMd4g_9;
#line 81 "/home/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		if (!(((NI) 0) < src.len)) goto LA3_;

#line 83 "/home/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"

#line 83 "/home/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		if (nimAddInt(src.len, ((NI) 1), &TM__yu6cxgKBBXbNsTkT9cyMd4g_8)) { raiseOverflow(); goto BeforeRet_;};		if (((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_8)) < ((NI) 0) || ((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_8)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_8), ((NI) 0), ((NI) 2147483647)); goto BeforeRet_;}
#line 83 "/home/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		copyMem__M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*(*dest).p).data[(*dest).len]))), ((void*) ((&(*src.p).data[((NI) 0)]))), ((NI) ((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_8))));

#line 84 "/home/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		if (nimAddInt((*dest).len, src.len, &TM__yu6cxgKBBXbNsTkT9cyMd4g_9)) { raiseOverflow(); goto BeforeRet_;};		(*dest).len = (NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_9);	}
	LA3_: ;
	}BeforeRet_: ;
}

#line 60 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*, newOSError__JXEuze9ctNbkn51HYBflQLg)(NI32 errorCode, NimStringV2 additionalInfo) {	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* result;	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* e;	NimStringV2 T2_;NIM_BOOL oldNimErrFin1_;NIM_BOOL* nimErr_;	nimfr_("newOSError", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");{nimErr_ = nimErrorFlag();	result = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;	e = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;
#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(78, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");
#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q(&e);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	e = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*) nimNewObj(sizeof(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA));	(*e).Sup.Sup.Sup.m_type = (&NTI__BeJgrOdDsczOwEWOZbRfKA_);	(*e).Sup.Sup.name = "OSError";
#line 79 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(79, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");	(*e).errorCode = errorCode;
#line 49 "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	nimln_(49, "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");
#line 80 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(80, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");
#line 80 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	T2_.len = 0; T2_.p = NIM_NIL;	T2_ = osErrorMsg__33xViSVWAmDrexoKkLfMhg(errorCode);	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
#line 49 "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	nimln_(49, "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");	eqsink___aBBXmHFBEivKqERloP6zmA_2((&(*e).Sup.Sup.message), T2_);

#line 81 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(81, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");	{
#line 81 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 81 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		if (!(((NI) 0) < additionalInfo.len)) goto LA5_;

#line 82 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimln_(82, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");		{			NIM_BOOL T9_;			NIM_CHAR T11_;
#line 82 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
			T9_ = (NIM_BOOL)0;
#line 82 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 82 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
			T9_ = (((NI) 0) < (*e).Sup.Sup.message.len);			if (!(T9_)) goto LA10_;

#line 82 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 82 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 82 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 82 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
			T11_ = (NIM_CHAR)0;			T11_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*e).Sup.Sup.message, ((NI) 1));			T9_ = !(((NU8)(T11_) == (NU8)(10)));			LA10_: ;
			if (!T9_) goto LA12_;

#line 82 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
			nimAddCharV1((&(*e).Sup.Sup.message), 10);		}
		LA12_: ;

#line 83 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimln_(83, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");		prepareAdd((&(*e).Sup.Sup.message), 17);appendString((&(*e).Sup.Sup.message), TM__yu6cxgKBBXbNsTkT9cyMd4g_7);
#line 84 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimln_(84, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");
#line 84 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		addQuoted__45fPtFhY4FavRaYwDhRfuA((&(*e).Sup.Sup.message), additionalInfo);
	}
	LA5_: ;

#line 85 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(85, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");	{
#line 85 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		if (!((*e).Sup.Sup.message.len == 0)) goto LA16_;

#line 49 "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		nimln_(49, "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");
#line 49 "/home/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		eqsink___aBBXmHFBEivKqERloP6zmA_2((&(*e).Sup.Sup.message), TM__yu6cxgKBBXbNsTkT9cyMd4g_11);
	}
	LA16_: ;

#line 87 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(87, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");
#line 87 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	result = e;
#line 87 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	e = 0;
#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(78, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");
#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q(&e);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	goto BeforeRet_;
	{		LA1_:;	}
	{		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 78 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q(&e);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;		*nimErr_ = oldNimErrFin1_;	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();	return result;}

#line 89 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringV2 additionalInfo) {	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* T1_;NIM_BOOL* nimErr_;	nimfr_("raiseOSError", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");{nimErr_ = nimErrorFlag();
#line 94 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(94, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim");
#line 94 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	T1_ = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;	T1_ = newOSError__JXEuze9ctNbkn51HYBflQLg(errorCode, additionalInfo);	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 94 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	raiseExceptionEx((Exception*)T1_, "OSError", "raiseOSError", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr"
".nim", 94);	goto BeforeRet_;	}BeforeRet_: ;
	popFrame();}
