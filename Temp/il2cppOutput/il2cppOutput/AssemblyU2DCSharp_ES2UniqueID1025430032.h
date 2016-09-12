#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<ES2UniqueID>
struct List_1_t1822389001;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2UniqueID
struct  ES2UniqueID_t1025430032  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 ES2UniqueID::id
	int32_t ___id_2;
	// System.String ES2UniqueID::prefabName
	String_t* ___prefabName_3;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(ES2UniqueID_t1025430032, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_prefabName_3() { return static_cast<int32_t>(offsetof(ES2UniqueID_t1025430032, ___prefabName_3)); }
	inline String_t* get_prefabName_3() const { return ___prefabName_3; }
	inline String_t** get_address_of_prefabName_3() { return &___prefabName_3; }
	inline void set_prefabName_3(String_t* value)
	{
		___prefabName_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefabName_3, value);
	}
};

struct ES2UniqueID_t1025430032_StaticFields
{
public:
	// System.Collections.Generic.List`1<ES2UniqueID> ES2UniqueID::uniqueIDList
	List_1_t1822389001 * ___uniqueIDList_4;

public:
	inline static int32_t get_offset_of_uniqueIDList_4() { return static_cast<int32_t>(offsetof(ES2UniqueID_t1025430032_StaticFields, ___uniqueIDList_4)); }
	inline List_1_t1822389001 * get_uniqueIDList_4() const { return ___uniqueIDList_4; }
	inline List_1_t1822389001 ** get_address_of_uniqueIDList_4() { return &___uniqueIDList_4; }
	inline void set_uniqueIDList_4(List_1_t1822389001 * value)
	{
		___uniqueIDList_4 = value;
		Il2CppCodeGenWriteBarrier(&___uniqueIDList_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
