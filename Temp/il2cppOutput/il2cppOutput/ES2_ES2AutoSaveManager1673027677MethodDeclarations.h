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

// ES2AutoSaveManager
struct ES2AutoSaveManager_t1673027677;
// System.String
struct String_t;
// ES2AutoSave
struct ES2AutoSave_t2758578480;
// ES2Writer
struct ES2Writer_t2488834775;
// UnityEngine.Transform
struct Transform_t284553113;
// ES2AutoSaveVariableInfo
struct ES2AutoSaveVariableInfo_t1161407130;
// System.Object
struct Il2CppObject;
// ES2Reader
struct ES2Reader_t2333429543;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2AutoSave2758578480.h"
#include "ES2_ES2Writer2488834775.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "ES2_ES2AutoSaveVariableInfo1161407130.h"
#include "mscorlib_System_Object837106420.h"
#include "ES2_ES2Reader2333429543.h"

// System.Void ES2AutoSaveManager::.ctor()
extern "C"  void ES2AutoSaveManager__ctor_m2009933332 (ES2AutoSaveManager_t1673027677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSaveManager ES2AutoSaveManager::get_Instance()
extern "C"  ES2AutoSaveManager_t1673027677 * ES2AutoSaveManager_get_Instance_m4150120442 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::SetFilePath(System.String)
extern "C"  void ES2AutoSaveManager_SetFilePath_m1110264109 (ES2AutoSaveManager_t1673027677 * __this, String_t* ___filePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::Awake()
extern "C"  void ES2AutoSaveManager_Awake_m2247538551 (ES2AutoSaveManager_t1673027677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::AddAutoSave(ES2AutoSave,System.String)
extern "C"  void ES2AutoSaveManager_AddAutoSave_m1508181919 (ES2AutoSaveManager_t1673027677 * __this, ES2AutoSave_t2758578480 * ___autoSave0, String_t* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSave ES2AutoSaveManager::GetAutoSave(System.String)
extern "C"  ES2AutoSave_t2758578480 * ES2AutoSaveManager_GetAutoSave_m1588188017 (ES2AutoSaveManager_t1673027677 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::AddChildAutoSave(ES2AutoSave,System.String)
extern "C"  void ES2AutoSaveManager_AddChildAutoSave_m2017564423 (ES2AutoSaveManager_t1673027677 * __this, ES2AutoSave_t2758578480 * ___autoSave0, String_t* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::Save()
extern "C"  void ES2AutoSaveManager_Save_m291031789 (ES2AutoSaveManager_t1673027677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::Load()
extern "C"  void ES2AutoSaveManager_Load_m102930454 (ES2AutoSaveManager_t1673027677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::WriteAutoSaves(ES2Writer)
extern "C"  void ES2AutoSaveManager_WriteAutoSaves_m3819760707 (ES2AutoSaveManager_t1673027677 * __this, ES2Writer_t2488834775 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::WriteAutoSaveRecursive(UnityEngine.Transform,ES2AutoSave,ES2Writer)
extern "C"  void ES2AutoSaveManager_WriteAutoSaveRecursive_m916572215 (ES2AutoSaveManager_t1673027677 * __this, Transform_t284553113 * ___transform0, ES2AutoSave_t2758578480 * ___autoSave1, ES2Writer_t2488834775 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::WriteAutoSave(ES2AutoSave,UnityEngine.Transform,ES2Writer)
extern "C"  void ES2AutoSaveManager_WriteAutoSave_m1231275665 (ES2AutoSaveManager_t1673027677 * __this, ES2AutoSave_t2758578480 * ___autoSave0, Transform_t284553113 * ___transform1, ES2Writer_t2488834775 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::WriteVariableRecursive(ES2AutoSave,ES2AutoSaveVariableInfo,ES2Writer,System.Object)
extern "C"  void ES2AutoSaveManager_WriteVariableRecursive_m1838518416 (ES2AutoSaveManager_t1673027677 * __this, ES2AutoSave_t2758578480 * ___autoSave0, ES2AutoSaveVariableInfo_t1161407130 * ___variable1, ES2Writer_t2488834775 * ___writer2, Il2CppObject * ___obj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::ReadAutoSaves(ES2Reader)
extern "C"  void ES2AutoSaveManager_ReadAutoSaves_m134711336 (ES2AutoSaveManager_t1673027677 * __this, ES2Reader_t2333429543 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSaveManager::ReadAutoSave(ES2Reader,ES2AutoSave)
extern "C"  bool ES2AutoSaveManager_ReadAutoSave_m1299993877 (ES2AutoSaveManager_t1673027677 * __this, ES2Reader_t2333429543 * ___reader0, ES2AutoSave_t2758578480 * ___autoSave1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::ReadComponent(ES2AutoSave,ES2Reader)
extern "C"  void ES2AutoSaveManager_ReadComponent_m3256893838 (ES2AutoSaveManager_t1673027677 * __this, ES2AutoSave_t2758578480 * ___autoSave0, ES2Reader_t2333429543 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::ReadVariableRecursive(ES2AutoSave,ES2AutoSaveVariableInfo,ES2Reader,System.Object)
extern "C"  void ES2AutoSaveManager_ReadVariableRecursive_m2859490357 (ES2AutoSaveManager_t1673027677 * __this, ES2AutoSave_t2758578480 * ___autoSave0, ES2AutoSaveVariableInfo_t1161407130 * ___variable1, ES2Reader_t2333429543 * ___reader2, Il2CppObject * ___obj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::WriteAllComponents(ES2AutoSave,ES2Writer)
extern "C"  void ES2AutoSaveManager_WriteAllComponents_m1476321615 (ES2AutoSaveManager_t1673027677 * __this, ES2AutoSave_t2758578480 * ___autoSave0, ES2Writer_t2488834775 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::Start()
extern "C"  void ES2AutoSaveManager_Start_m957071124 (ES2AutoSaveManager_t1673027677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::OnApplicationPause(System.Boolean)
extern "C"  void ES2AutoSaveManager_OnApplicationPause_m3797587052 (ES2AutoSaveManager_t1673027677 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::OnApplicationQuit()
extern "C"  void ES2AutoSaveManager_OnApplicationQuit_m780735890 (ES2AutoSaveManager_t1673027677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::OnDisable()
extern "C"  void ES2AutoSaveManager_OnDisable_m4025176187 (ES2AutoSaveManager_t1673027677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveManager::.cctor()
extern "C"  void ES2AutoSaveManager__cctor_m1696294937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
