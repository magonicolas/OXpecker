#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Data
struct  ES2Data_t3532730126  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> ES2Data::loadedData
	Dictionary_2_t2474804324 * ___loadedData_0;

public:
	inline static int32_t get_offset_of_loadedData_0() { return static_cast<int32_t>(offsetof(ES2Data_t3532730126, ___loadedData_0)); }
	inline Dictionary_2_t2474804324 * get_loadedData_0() const { return ___loadedData_0; }
	inline Dictionary_2_t2474804324 ** get_address_of_loadedData_0() { return &___loadedData_0; }
	inline void set_loadedData_0(Dictionary_2_t2474804324 * value)
	{
		___loadedData_0 = value;
		Il2CppCodeGenWriteBarrier(&___loadedData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
