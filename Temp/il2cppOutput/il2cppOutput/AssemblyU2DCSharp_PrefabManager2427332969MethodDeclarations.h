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

// PrefabManager
struct PrefabManager_t2427332969;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void PrefabManager::.ctor()
extern "C"  void PrefabManager__ctor_m789167650 (PrefabManager_t2427332969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabManager::Start()
extern "C"  void PrefabManager_Start_m4031272738 (PrefabManager_t2427332969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabManager::LoadAllPrefabs()
extern "C"  void PrefabManager_LoadAllPrefabs_m1847572662 (PrefabManager_t2427332969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabManager::LoadPrefab(System.Int32)
extern "C"  void PrefabManager_LoadPrefab_m3647130877 (PrefabManager_t2427332969 * __this, int32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabManager::CreateRandomPrefab()
extern "C"  void PrefabManager_CreateRandomPrefab_m4133584805 (PrefabManager_t2427332969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabManager::OnApplicationQuit()
extern "C"  void PrefabManager_OnApplicationQuit_m3268151456 (PrefabManager_t2427332969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabManager::OnApplicationPause(System.Boolean)
extern "C"  void PrefabManager_OnApplicationPause_m3446498206 (PrefabManager_t2427332969 * __this, bool ___isPaused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabManager::SavePrefab(UnityEngine.GameObject,System.Int32)
extern "C"  void PrefabManager_SavePrefab_m2744533564 (PrefabManager_t2427332969 * __this, GameObject_t4012695102 * ___prefabToSave0, int32_t ___tag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabManager::OnGUI()
extern "C"  void PrefabManager_OnGUI_m284566300 (PrefabManager_t2427332969 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
