#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyExampleScript
struct  MyExampleScript_t1046874217  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32[] MyExampleScript::intArray
	Int32U5BU5D_t1809983122* ___intArray_2;
	// System.String MyExampleScript::myString
	String_t* ___myString_3;

public:
	inline static int32_t get_offset_of_intArray_2() { return static_cast<int32_t>(offsetof(MyExampleScript_t1046874217, ___intArray_2)); }
	inline Int32U5BU5D_t1809983122* get_intArray_2() const { return ___intArray_2; }
	inline Int32U5BU5D_t1809983122** get_address_of_intArray_2() { return &___intArray_2; }
	inline void set_intArray_2(Int32U5BU5D_t1809983122* value)
	{
		___intArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___intArray_2, value);
	}

	inline static int32_t get_offset_of_myString_3() { return static_cast<int32_t>(offsetof(MyExampleScript_t1046874217, ___myString_3)); }
	inline String_t* get_myString_3() const { return ___myString_3; }
	inline String_t** get_address_of_myString_3() { return &___myString_3; }
	inline void set_myString_3(String_t* value)
	{
		___myString_3 = value;
		Il2CppCodeGenWriteBarrier(&___myString_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
