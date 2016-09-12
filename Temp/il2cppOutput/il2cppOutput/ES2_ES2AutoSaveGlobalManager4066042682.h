#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ES2AutoSave[]
struct ES2AutoSaveU5BU5D_t1705022481;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2AutoSaveGlobalManager
struct  ES2AutoSaveGlobalManager_t4066042682  : public MonoBehaviour_t3012272455
{
public:
	// ES2AutoSave[] ES2AutoSaveGlobalManager::prefabArray
	ES2AutoSaveU5BU5D_t1705022481* ___prefabArray_2;
	// System.Collections.Generic.HashSet`1<System.String> ES2AutoSaveGlobalManager::ids
	HashSet_1_t3667177573 * ___ids_3;

public:
	inline static int32_t get_offset_of_prefabArray_2() { return static_cast<int32_t>(offsetof(ES2AutoSaveGlobalManager_t4066042682, ___prefabArray_2)); }
	inline ES2AutoSaveU5BU5D_t1705022481* get_prefabArray_2() const { return ___prefabArray_2; }
	inline ES2AutoSaveU5BU5D_t1705022481** get_address_of_prefabArray_2() { return &___prefabArray_2; }
	inline void set_prefabArray_2(ES2AutoSaveU5BU5D_t1705022481* value)
	{
		___prefabArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefabArray_2, value);
	}

	inline static int32_t get_offset_of_ids_3() { return static_cast<int32_t>(offsetof(ES2AutoSaveGlobalManager_t4066042682, ___ids_3)); }
	inline HashSet_1_t3667177573 * get_ids_3() const { return ___ids_3; }
	inline HashSet_1_t3667177573 ** get_address_of_ids_3() { return &___ids_3; }
	inline void set_ids_3(HashSet_1_t3667177573 * value)
	{
		___ids_3 = value;
		Il2CppCodeGenWriteBarrier(&___ids_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
