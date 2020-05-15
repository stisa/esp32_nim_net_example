/* Generated by Nim Compiler v1.3.3 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
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
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;

/* section: NIM_merge_TYPES */
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {  TGenericSeq Sup;  NimStringDesc* data[SEQ_DECL_SIZE];};
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op);
static N_NIMCALL(void, TM__yu6cxgKBBXbNsTkT9cyMd4g_2)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);

/* section: NIM_merge_DATA */
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTI__sM4lkSb7zS6F7OVMvW9cffQ_;

/* section: NIM_merge_VARS */
N_LIB_PRIVATE NIM_THREADVAR NIM_BOOL envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ;
N_LIB_PRIVATE NIM_THREADVAR tySequence__sM4lkSb7zS6F7OVMvW9cffQ* environment__mlhK49b6YMgc9cgrcYkKq9a3g;
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* a;
	NI T1_;	a = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)p;
	T1_ = (NI)0;	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);	}
}
static N_NIMCALL(void, TM__yu6cxgKBBXbNsTkT9cyMd4g_2)(void) {
	nimGCvisit((void*)environment__mlhK49b6YMgc9cgrcYkKq9a3g, 0);}

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
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osInit000)(void) {

#line 999999 "generated_not_to_break_here"
{
	nimfr_("os", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/os.nim");	nimRegisterThreadLocalMarker(TM__yu6cxgKBBXbNsTkT9cyMd4g_2);	popFrame();}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_osDatInit000)(void) {

#line 999999 "generated_not_to_break_here"

/* section: NIM_merge_TYPE_INIT3 */
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.size = sizeof(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*);
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.align = NIM_ALIGNOF(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*);
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.kind = 24;
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.base = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.flags = 2;
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.marker = Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
}

