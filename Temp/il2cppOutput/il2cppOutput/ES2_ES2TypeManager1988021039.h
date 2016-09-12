#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,ES2Type>
struct Dictionary_2_t1350810145;
// ES2Type
struct ES2Type_t3533229726;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2TypeManager
struct  ES2TypeManager_t1988021039  : public Il2CppObject
{
public:

public:
};

struct ES2TypeManager_t1988021039_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,ES2Type> ES2TypeManager::types
	Dictionary_2_t1350810145 * ___types_0;
	// ES2Type ES2TypeManager::cachedType
	ES2Type_t3533229726 * ___cachedType_1;

public:
	inline static int32_t get_offset_of_types_0() { return static_cast<int32_t>(offsetof(ES2TypeManager_t1988021039_StaticFields, ___types_0)); }
	inline Dictionary_2_t1350810145 * get_types_0() const { return ___types_0; }
	inline Dictionary_2_t1350810145 ** get_address_of_types_0() { return &___types_0; }
	inline void set_types_0(Dictionary_2_t1350810145 * value)
	{
		___types_0 = value;
		Il2CppCodeGenWriteBarrier(&___types_0, value);
	}

	inline static int32_t get_offset_of_cachedType_1() { return static_cast<int32_t>(offsetof(ES2TypeManager_t1988021039_StaticFields, ___cachedType_1)); }
	inline ES2Type_t3533229726 * get_cachedType_1() const { return ___cachedType_1; }
	inline ES2Type_t3533229726 ** get_address_of_cachedType_1() { return &___cachedType_1; }
	inline void set_cachedType_1(ES2Type_t3533229726 * value)
	{
		___cachedType_1 = value;
		Il2CppCodeGenWriteBarrier(&___cachedType_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
