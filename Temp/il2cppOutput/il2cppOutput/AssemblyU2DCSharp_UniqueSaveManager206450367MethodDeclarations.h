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

// UniqueSaveManager
struct UniqueSaveManager_t206450367;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_String968488902.h"

// System.Void UniqueSaveManager::.ctor()
extern "C"  void UniqueSaveManager__ctor_m4167345548 (UniqueSaveManager_t206450367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniqueSaveManager::OnApplicationQuit()
extern "C"  void UniqueSaveManager_OnApplicationQuit_m1380262154 (UniqueSaveManager_t206450367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniqueSaveManager::OnApplicationPause()
extern "C"  void UniqueSaveManager_OnApplicationPause_m2684445501 (UniqueSaveManager_t206450367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniqueSaveManager::Start()
extern "C"  void UniqueSaveManager_Start_m3114483340 (UniqueSaveManager_t206450367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniqueSaveManager::Save()
extern "C"  void UniqueSaveManager_Save_m2023193717 (UniqueSaveManager_t206450367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniqueSaveManager::SaveObject(UnityEngine.GameObject,System.Int32,System.String)
extern "C"  void UniqueSaveManager_SaveObject_m1565849543 (UniqueSaveManager_t206450367 * __this, GameObject_t4012695102 * ___obj0, int32_t ___i1, String_t* ___file2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniqueSaveManager::LoadObject(System.Int32,System.String)
extern "C"  void UniqueSaveManager_LoadObject_m1480981770 (UniqueSaveManager_t206450367 * __this, int32_t ___i0, String_t* ___file1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
