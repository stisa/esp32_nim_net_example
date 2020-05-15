/* Generated by Nim Compiler v1.3.3 */
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
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;

/* section: NIM_merge_TYPES */
struct NimStrPayload {NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {NI len;
NimStrPayload* p;
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__CiCiZV9c7F9alrF1xV3QD1ag)(NU8* x, NI xLen_0);
N_LIB_PRIVATE N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NIM_BOOL, nimMulInt)(NI a, NI b, NI* res);
static N_INLINE(NF, toFloat__y1Fm9aHmxw9bS2jir137Fu5gsystem)(NI i);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NF, abs__BRaAqinz6OWTHkALb4oj6Qsystem)(NF x);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a, NI b, NI* res);
static N_INLINE(NU32, rotl32__7D6LSWJ2oWPOMqrc3axXgwhashes)(NU32 x, NI r);
static N_INLINE(NIM_BOOL, nimSubInt)(NI a, NI b, NI* res);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError)(void);

/* section: NIM_merge_VARS */
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */

#line 122 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res) {	NIM_BOOL result;	result = (NIM_BOOL)0;
#line 117 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	{		NIM_BOOL T3_;
#line 117 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (NIM_BOOL)0;
#line 117 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (a == ((NI) (-2147483647 -1)));		if (!(T3_)) goto LA4_;

#line 117 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (b == ((NI) -1));		LA4_: ;
		if (!T3_) goto LA5_;

#line 118 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		result = NIM_TRUE;	}
	goto LA1_;
	LA5_: ;
	{
#line 120 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 120 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		(*res) = (NI)(a / b);	}
	LA1_: ;
	return result;}

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

#line 1386 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
static N_INLINE(NF, toFloat__y1Fm9aHmxw9bS2jir137Fu5gsystem)(NI i) {	NF result;	nimfr_("toFloat", "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim");	result = (NF)0;
#line 1387 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
	nimln_(1387, "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim");	result = ((NF) (i));	popFrame();	return result;}

#line 1485 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
static N_INLINE(NF, abs__BRaAqinz6OWTHkALb4oj6Qsystem)(NF x) {	NF result;	result = (NF)0;
#line 1486 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"

#line 1486 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
	{
#line 1486 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
		if (!(x < 0.0)) goto LA3_;

#line 1486 "/home/elcritch/.asdf/installs/nim/devel/lib/system.nim"
		result = -(x);	}
	goto LA1_;
	LA3_: ;
	{		result = x;	}
	LA1_: ;
	return result;}

#line 110 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
static N_INLINE(NIM_BOOL, nimMulInt)(NI a, NI b, NI* res) {	NIM_BOOL result;	NI r;	NF floatProd;	NF T1_;	NF T2_;	NF resAsFloat;	result = (NIM_BOOL)0;
#line 90 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 90 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	r = ((NI) ((NU)((NU32)(((NU) (a))) * (NU32)(((NU) (b))))));
#line 91 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 91 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 91 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 91 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	T1_ = (NF)0;	T1_ = toFloat__y1Fm9aHmxw9bS2jir137Fu5gsystem(a);
#line 91 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 91 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	T2_ = (NF)0;	T2_ = toFloat__y1Fm9aHmxw9bS2jir137Fu5gsystem(b);	floatProd = ((NF)(T1_) * (NF)(T2_));
#line 92 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 92 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	resAsFloat = toFloat__y1Fm9aHmxw9bS2jir137Fu5gsystem(r);
#line 95 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	{
#line 95 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		if (!(resAsFloat == floatProd)) goto LA5_;

#line 96 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		(*res) = r;	}
	goto LA3_;
	LA5_: ;
	{
#line 105 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		{			NF T10_;			NF T11_;
#line 105 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 105 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 105 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 105 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 105 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
			T10_ = (NF)0;			T10_ = abs__BRaAqinz6OWTHkALb4oj6Qsystem(((NF)(resAsFloat) - (NF)(floatProd)));
#line 105 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 105 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
			T11_ = (NF)0;			T11_ = abs__BRaAqinz6OWTHkALb4oj6Qsystem(floatProd);			if (!(((NF)(3.2000000000000000e+01) * (NF)(T10_)) <= T11_)) goto LA12_;

#line 106 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
			(*res) = r;		}
		goto LA8_;
		LA12_: ;
		{
#line 108 "/home/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
			result = NIM_TRUE;		}
		LA8_: ;
	}
	LA3_: ;
	return result;}

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

#line 217 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
static N_INLINE(NU32, rotl32__7D6LSWJ2oWPOMqrc3axXgwhashes)(NU32 x, NI r) {	NU32 result;	NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_5;	nimfr_("rotl32", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");{	result = (NU32)0;
#line 218 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(218, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 218 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 218 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 218 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 218 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	if (nimSubInt(((NI) 32), r, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_5)) { raiseOverflow(); goto BeforeRet_;};	result = (NU32)((NU32)((NU32)(x) << (NU32)(r)) | (NU32)((NU32)(x) >> (NU32)((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_5))));	}BeforeRet_: ;
	popFrame();	return result;}

#line 424 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {	NIM_BOOL* result;	result = (NIM_BOOL*)0;
#line 425 "/home/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);	return result;}

#line 220 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__CiCiZV9c7F9alrF1xV3QD1ag)(NU8* x, NI xLen_0) {	NI result;	NI size;	NI stepSize;	NI n;	NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_2;	NU32 h1;	NI i;	NU32 k1_2;	NI rem;	NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_6;NIM_BOOL* nimErr_;	nimfr_("murmurHash", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");{nimErr_ = nimErrorFlag();	result = (NI)0;
#line 229 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(229, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 229 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	size = xLen_0;
#line 230 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(230, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");	stepSize = ((NI) 4);
#line 231 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(231, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 231 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	if (stepSize == 0){ raiseDivByZero(); goto BeforeRet_;}	if (nimDivInt(size, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_2)) { raiseOverflow(); goto BeforeRet_;};	n = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_2);	h1 = (NU32)0;
#line 234 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(234, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");	i = ((NI) 0);	{
#line 237 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
		nimln_(237, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");		while (1) {			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_3;			NU32 k1;			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_4;
#line 237 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 237 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			if (nimMulInt(n, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_3)) { raiseOverflow(); goto BeforeRet_;};			if (!(i < (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_3))) goto LA2;
			k1 = (NU32)0;
#line 245 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(245, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");			if ((NU)(i) >= (NU)(xLen_0)){ raiseIndexError2(i,xLen_0-1); goto BeforeRet_;}			k1 = (*((NU32*) ((&x[i]))));
#line 246 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(246, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");			if (nimAddInt(i, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_4)) { raiseOverflow(); goto BeforeRet_;};			i = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_4);
#line 248 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(248, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 248 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32) IL64(3432918353))));
#line 249 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(249, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 249 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			k1 = rotl32__7D6LSWJ2oWPOMqrc3axXgwhashes(k1, ((NI) 15));			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 250 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(250, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 250 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32) 461845907)));
#line 252 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(252, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 252 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			h1 = (NU32)(h1 ^ k1);
#line 253 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(253, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 253 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			h1 = rotl32__7D6LSWJ2oWPOMqrc3axXgwhashes(h1, ((NI) 13));			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 254 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(254, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 254 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 254 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			h1 = (NU32)((NU32)((NU32)((NU32)(h1) * (NU32)(((NU32) 5)))) + (NU32)(((NU32) IL64(3864292196))));		} LA2: ;
	}
	k1_2 = (NU32)0;
#line 258 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(258, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 258 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	if (stepSize == 0){ raiseDivByZero(); goto BeforeRet_;}	if (nimModInt(size, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_6)) { raiseOverflow(); goto BeforeRet_;};	rem = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_6);	{
#line 259 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
		nimln_(259, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");		while (1) {			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_7;			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_8;
#line 259 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			if (!(((NI) 0) < rem)) goto LA4;

#line 260 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(260, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");			if (nimSubInt(rem, ((NI) 1), &TM__7tkD9cFJSchVDwHuwaY9bP9bA_7)) { raiseOverflow(); goto BeforeRet_;};			rem = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_7);
#line 261 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			nimln_(261, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 261 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 261 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 261 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 261 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
			if (nimAddInt(i, rem, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_8)) { raiseOverflow(); goto BeforeRet_;};			if ((NU)((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8)) >= (NU)(xLen_0)){ raiseIndexError2((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8),xLen_0-1); goto BeforeRet_;}			k1_2 = (NU32)((NU32)((NU32)(k1_2) << (NU32)(((NI) 8))) | ((NU32) (x[(NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8)])));		} LA4: ;
	}

#line 262 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(262, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 262 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32) IL64(3432918353))));
#line 263 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(263, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 263 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	k1_2 = rotl32__7D6LSWJ2oWPOMqrc3axXgwhashes(k1_2, ((NI) 15));	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 264 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(264, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 264 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32) 461845907)));
#line 265 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(265, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 265 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	h1 = (NU32)(h1 ^ k1_2);
#line 268 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(268, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 268 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	h1 = (NU32)(h1 ^ ((NU32) (size)));
#line 269 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(269, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 269 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 269 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU32)(((NI) 16))));
#line 270 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(270, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 270 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32) IL64(2246822507))));
#line 271 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(271, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 271 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 271 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU32)(((NI) 13))));
#line 272 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(272, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 272 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32) IL64(3266489909))));
#line 273 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(273, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 273 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"

#line 273 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU32)(((NI) 16))));
#line 274 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(274, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 274 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	result = ((NI) (h1));	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();	return result;}

#line 285 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
N_LIB_PRIVATE N_NIMCALL(NI, hash__6PCYkKlCNhq9cnRLnqWKkwQ)(NimStringV2 x) {	NI result;NIM_BOOL* nimErr_;	nimfr_("hash", "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");{nimErr_ = nimErrorFlag();	result = (NI)0;
#line 303 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	nimln_(303, "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim");
#line 303 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	if ((x.len-1)-((NI) 0) != -1 && ((NU)(((NI) 0)) >= (NU)x.len || (NU)((x.len-1)) >= (NU)x.len)){ raiseIndexError(); goto BeforeRet_;}
#line 303 "/home/elcritch/.asdf/installs/nim/devel/lib/pure/hashes.nim"
	result = murmurHash__CiCiZV9c7F9alrF1xV3QD1ag((NU8*)x.p->data+(((NI) 0)), ((x.len-1))-(((NI) 0))+1);	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();	return result;}
