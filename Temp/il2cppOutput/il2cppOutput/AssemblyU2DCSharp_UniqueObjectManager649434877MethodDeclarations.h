#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UniqueObjectManager
struct UniqueObjectManager_t649434877;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void UniqueObjectManager::.ctor()
extern "C"  void UniqueObjectManager__ctor_m2883979534 (UniqueObjectManager_t649434877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniqueObjectManager::.cctor()
extern "C"  void UniqueObjectManager__cctor_m3021923423 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UniqueObjectManager::InstantiatePrefab(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t4012695102 * UniqueObjectManager_InstantiatePrefab_m2902059147 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, Vector3_t3525329789  ___position1, Quaternion_t1891715979  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UniqueObjectManager::InstantiatePrefab(System.String)
extern "C"  GameObject_t4012695102 * UniqueObjectManager_InstantiatePrefab_m2443417203 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniqueObjectManager::DestroyObject(UnityEngine.GameObject)
extern "C"  void UniqueObjectManager_DestroyObject_m965192317 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UniqueObjectManager::FindPrefabWithName(System.String)
extern "C"  GameObject_t4012695102 * UniqueObjectManager_FindPrefabWithName_m2135741459 (Il2CppObject * __this /* static, unused */, String_t* ___prefabName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniqueObjectManager::Awake()
extern "C"  void UniqueObjectManager_Awake_m3121584753 (UniqueObjectManager_t649434877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] UniqueObjectManager::get_SceneObjects()
extern "C"  GameObjectU5BU5D_t3499186955* UniqueObjectManager_get_SceneObjects_m3130890292 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] UniqueObjectManager::get_Prefabs()
extern "C"  GameObjectU5BU5D_t3499186955* UniqueObjectManager_get_Prefabs_m2589573 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> UniqueObjectManager::get_CreatedObjects()
extern "C"  List_1_t514686775 * UniqueObjectManager_get_CreatedObjects_m2931016592 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
