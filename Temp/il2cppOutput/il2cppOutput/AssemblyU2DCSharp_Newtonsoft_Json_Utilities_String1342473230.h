﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.String>
struct Func_2_t2601891118;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringUtils/<ForgivingCaseSensitiveFind>c__AnonStorey2E`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  U3CForgivingCaseSensitiveFindU3Ec__AnonStorey2E_1_t1342473230  : public Il2CppObject
{
public:
	// System.Func`2<TSource,System.String> Newtonsoft.Json.Utilities.StringUtils/<ForgivingCaseSensitiveFind>c__AnonStorey2E`1::valueSelector
	Func_2_t2601891118 * ___valueSelector_0;
	// System.String Newtonsoft.Json.Utilities.StringUtils/<ForgivingCaseSensitiveFind>c__AnonStorey2E`1::testValue
	String_t* ___testValue_1;

public:
	inline static int32_t get_offset_of_valueSelector_0() { return static_cast<int32_t>(offsetof(U3CForgivingCaseSensitiveFindU3Ec__AnonStorey2E_1_t1342473230, ___valueSelector_0)); }
	inline Func_2_t2601891118 * get_valueSelector_0() const { return ___valueSelector_0; }
	inline Func_2_t2601891118 ** get_address_of_valueSelector_0() { return &___valueSelector_0; }
	inline void set_valueSelector_0(Func_2_t2601891118 * value)
	{
		___valueSelector_0 = value;
		Il2CppCodeGenWriteBarrier(&___valueSelector_0, value);
	}

	inline static int32_t get_offset_of_testValue_1() { return static_cast<int32_t>(offsetof(U3CForgivingCaseSensitiveFindU3Ec__AnonStorey2E_1_t1342473230, ___testValue_1)); }
	inline String_t* get_testValue_1() const { return ___testValue_1; }
	inline String_t** get_address_of_testValue_1() { return &___testValue_1; }
	inline void set_testValue_1(String_t* value)
	{
		___testValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___testValue_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
