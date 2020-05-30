/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

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
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ;
typedef struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
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
struct RootObj {TNimType* m_type;};
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Exception {  RootObj Sup;Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA {  Exception Sup;};
struct tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ {  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__uB9b75OUPRENsBAu4AnoePA {  TGenericSeq Sup;  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__Wh5ttbeloG9bmWh5PzCK0Mw)(void* p, NI op);

/* section: NIM_merge_DATA */
extern TNimType NTI__LbeSGvgPzGzXnW9caIkJqMA_;
N_LIB_PRIVATE TNimType NTI__bq5YFIFutDsA2ou9cpZuWAQ_;
N_LIB_PRIVATE TNimType NTI__Wh5ttbeloG9bmWh5PzCK0Mw_;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tyRef__Wh5ttbeloG9bmWh5PzCK0Mw)(void* p, NI op) {
	tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* a;
	a = (tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*)p;
	nimGCvisit((void*)(*a).Sup.Sup.parent, op);	nimGCvisit((void*)(*a).Sup.Sup.message, op);	nimGCvisit((void*)(*a).Sup.Sup.trace, op);	nimGCvisit((void*)(*a).Sup.Sup.up, op);}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_optionsDatInit000)(void) {

#line 999999 "generated_not_to_break_here"

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode TM__4DNs4bMUkswhWc4o4dM9bbg_0[1];
/* section: NIM_merge_TYPE_INIT3 */
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.size = sizeof(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ);
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.align = NIM_ALIGNOF(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ);
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.kind = 17;
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.base = (&NTI__LbeSGvgPzGzXnW9caIkJqMA_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[0].len = 0; TM__4DNs4bMUkswhWc4o4dM9bbg_0[0].kind = 2;
NTI__bq5YFIFutDsA2ou9cpZuWAQ_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[0];
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.size = sizeof(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*);
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.align = NIM_ALIGNOF(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ*);
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.kind = 22;
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.base = (&NTI__bq5YFIFutDsA2ou9cpZuWAQ_);
NTI__Wh5ttbeloG9bmWh5PzCK0Mw_.marker = Marker_tyRef__Wh5ttbeloG9bmWh5PzCK0Mw;
}

