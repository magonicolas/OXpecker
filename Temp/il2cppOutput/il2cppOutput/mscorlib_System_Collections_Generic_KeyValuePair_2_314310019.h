﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// ES2AutoSave
struct ES2AutoSave_t2758578480;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Transform,ES2AutoSave>
struct  KeyValuePair_2_t314310019 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Transform_t284553113 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ES2AutoSave_t2758578480 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t314310019, ___key_0)); }
	inline Transform_t284553113 * get_key_0() const { return ___key_0; }
	inline Transform_t284553113 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Transform_t284553113 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t314310019, ___value_1)); }
	inline ES2AutoSave_t2758578480 * get_value_1() const { return ___value_1; }
	inline ES2AutoSave_t2758578480 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ES2AutoSave_t2758578480 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
