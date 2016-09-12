#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UniqueObjectManager
struct UniqueObjectManager_t649434877;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniqueObjectManager
struct  UniqueObjectManager_t649434877  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] UniqueObjectManager::sceneObjects
	GameObjectU5BU5D_t3499186955* ___sceneObjects_2;
	// UnityEngine.GameObject[] UniqueObjectManager::prefabs
	GameObjectU5BU5D_t3499186955* ___prefabs_3;

public:
	inline static int32_t get_offset_of_sceneObjects_2() { return static_cast<int32_t>(offsetof(UniqueObjectManager_t649434877, ___sceneObjects_2)); }
	inline GameObjectU5BU5D_t3499186955* get_sceneObjects_2() const { return ___sceneObjects_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_sceneObjects_2() { return &___sceneObjects_2; }
	inline void set_sceneObjects_2(GameObjectU5BU5D_t3499186955* value)
	{
		___sceneObjects_2 = value;
		Il2CppCodeGenWriteBarrier(&___sceneObjects_2, value);
	}

	inline static int32_t get_offset_of_prefabs_3() { return static_cast<int32_t>(offsetof(UniqueObjectManager_t649434877, ___prefabs_3)); }
	inline GameObjectU5BU5D_t3499186955* get_prefabs_3() const { return ___prefabs_3; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_prefabs_3() { return &___prefabs_3; }
	inline void set_prefabs_3(GameObjectU5BU5D_t3499186955* value)
	{
		___prefabs_3 = value;
		Il2CppCodeGenWriteBarrier(&___prefabs_3, value);
	}
};

struct UniqueObjectManager_t649434877_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UniqueObjectManager::createdObjects
	List_1_t514686775 * ___createdObjects_4;
	// UniqueObjectManager UniqueObjectManager::mgr
	UniqueObjectManager_t649434877 * ___mgr_5;

public:
	inline static int32_t get_offset_of_createdObjects_4() { return static_cast<int32_t>(offsetof(UniqueObjectManager_t649434877_StaticFields, ___createdObjects_4)); }
	inline List_1_t514686775 * get_createdObjects_4() const { return ___createdObjects_4; }
	inline List_1_t514686775 ** get_address_of_createdObjects_4() { return &___createdObjects_4; }
	inline void set_createdObjects_4(List_1_t514686775 * value)
	{
		___createdObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___createdObjects_4, value);
	}

	inline static int32_t get_offset_of_mgr_5() { return static_cast<int32_t>(offsetof(UniqueObjectManager_t649434877_StaticFields, ___mgr_5)); }
	inline UniqueObjectManager_t649434877 * get_mgr_5() const { return ___mgr_5; }
	inline UniqueObjectManager_t649434877 ** get_address_of_mgr_5() { return &___mgr_5; }
	inline void set_mgr_5(UniqueObjectManager_t649434877 * value)
	{
		___mgr_5 = value;
		Il2CppCodeGenWriteBarrier(&___mgr_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
