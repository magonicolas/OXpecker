#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PrefabManager
struct  PrefabManager_t2427332969  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject PrefabManager::prefab
	GameObject_t4012695102 * ___prefab_2;
	// System.String PrefabManager::filename
	String_t* ___filename_3;
	// System.Int32 PrefabManager::buttonPositionX
	int32_t ___buttonPositionX_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PrefabManager::createdPrefabs
	List_1_t514686775 * ___createdPrefabs_5;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(PrefabManager_t2427332969, ___prefab_2)); }
	inline GameObject_t4012695102 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_t4012695102 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_t4012695102 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}

	inline static int32_t get_offset_of_filename_3() { return static_cast<int32_t>(offsetof(PrefabManager_t2427332969, ___filename_3)); }
	inline String_t* get_filename_3() const { return ___filename_3; }
	inline String_t** get_address_of_filename_3() { return &___filename_3; }
	inline void set_filename_3(String_t* value)
	{
		___filename_3 = value;
		Il2CppCodeGenWriteBarrier(&___filename_3, value);
	}

	inline static int32_t get_offset_of_buttonPositionX_4() { return static_cast<int32_t>(offsetof(PrefabManager_t2427332969, ___buttonPositionX_4)); }
	inline int32_t get_buttonPositionX_4() const { return ___buttonPositionX_4; }
	inline int32_t* get_address_of_buttonPositionX_4() { return &___buttonPositionX_4; }
	inline void set_buttonPositionX_4(int32_t value)
	{
		___buttonPositionX_4 = value;
	}

	inline static int32_t get_offset_of_createdPrefabs_5() { return static_cast<int32_t>(offsetof(PrefabManager_t2427332969, ___createdPrefabs_5)); }
	inline List_1_t514686775 * get_createdPrefabs_5() const { return ___createdPrefabs_5; }
	inline List_1_t514686775 ** get_address_of_createdPrefabs_5() { return &___createdPrefabs_5; }
	inline void set_createdPrefabs_5(List_1_t514686775 * value)
	{
		___createdPrefabs_5 = value;
		Il2CppCodeGenWriteBarrier(&___createdPrefabs_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
