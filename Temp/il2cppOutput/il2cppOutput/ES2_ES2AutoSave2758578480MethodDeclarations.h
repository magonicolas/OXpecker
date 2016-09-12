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

// ES2AutoSave
struct ES2AutoSave_t2758578480;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// ES2AutoSaveVariableInfo
struct ES2AutoSaveVariableInfo_t1161407130;
// System.String
struct String_t;
// ES2AutoSaveComponentInfo
struct ES2AutoSaveComponentInfo_t2033007611;
// UnityEngine.Component
struct Component_t2126946602;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2AutoSaveVariableInfo1161407130.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "ES2_ES2AutoSaveComponentInfo2033007611.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void ES2AutoSave::.ctor()
extern "C"  void ES2AutoSave__ctor_m3484328901 (ES2AutoSave_t2758578480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object ES2AutoSave::get_undoRecordObject()
extern "C"  Object_t3878351788 * ES2AutoSave_get_undoRecordObject_m1345281705 (ES2AutoSave_t2758578480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSave::get_selected()
extern "C"  bool ES2AutoSave_get_selected_m4007866819 (ES2AutoSave_t2758578480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSave::set_selected(System.Boolean)
extern "C"  void ES2AutoSave_set_selected_m2096526286 (ES2AutoSave_t2758578480 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSave::get_selectionChanged()
extern "C"  bool ES2AutoSave_get_selectionChanged_m3307983984 (ES2AutoSave_t2758578480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSave::set_selectionChanged(System.Boolean)
extern "C"  void ES2AutoSave_set_selectionChanged_m952192955 (ES2AutoSave_t2758578480 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSave::get_buttonSelected()
extern "C"  bool ES2AutoSave_get_buttonSelected_m4099265877 (ES2AutoSave_t2758578480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSave::set_buttonSelected(System.Boolean)
extern "C"  void ES2AutoSave_set_buttonSelected_m300007648 (ES2AutoSave_t2758578480 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSave::get_buttonSelectionChanged()
extern "C"  bool ES2AutoSave_get_buttonSelectionChanged_m1515374082 (ES2AutoSave_t2758578480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSave::set_buttonSelectionChanged(System.Boolean)
extern "C"  void ES2AutoSave_set_buttonSelectionChanged_m3034540749 (ES2AutoSave_t2758578480 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSave::get_hasButtonSelectedComponents()
extern "C"  bool ES2AutoSave_get_hasButtonSelectedComponents_m2199805207 (ES2AutoSave_t2758578480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSave::get_isPrefab()
extern "C"  bool ES2AutoSave_get_isPrefab_m3581247926 (ES2AutoSave_t2758578480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSaveVariableInfo ES2AutoSave::GetCachedVariableInfo(System.String)
extern "C"  ES2AutoSaveVariableInfo_t1161407130 * ES2AutoSave_GetCachedVariableInfo_m431105444 (ES2AutoSave_t2758578480 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSaveVariableInfo ES2AutoSave::CacheVariableInfo(ES2AutoSaveVariableInfo)
extern "C"  ES2AutoSaveVariableInfo_t1161407130 * ES2AutoSave_CacheVariableInfo_m3933922448 (ES2AutoSave_t2758578480 * __this, ES2AutoSaveVariableInfo_t1161407130 * ___variable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSave::RemoveCachedVariableInfo(System.String)
extern "C"  void ES2AutoSave_RemoveCachedVariableInfo_m713989715 (ES2AutoSave_t2758578480 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSave::Awake()
extern "C"  void ES2AutoSave_Awake_m3721934120 (ES2AutoSave_t2758578480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSaveComponentInfo ES2AutoSave::GetComponentInfo(UnityEngine.Component)
extern "C"  ES2AutoSaveComponentInfo_t2033007611 * ES2AutoSave_GetComponentInfo_m2091675750 (ES2AutoSave_t2758578480 * __this, Component_t2126946602 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSaveComponentInfo ES2AutoSave::GetComponentInfo(System.String)
extern "C"  ES2AutoSaveComponentInfo_t2033007611 * ES2AutoSave_GetComponentInfo_m1405581724 (ES2AutoSave_t2758578480 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSaveComponentInfo ES2AutoSave::AddComponentInfo(ES2AutoSaveComponentInfo)
extern "C"  ES2AutoSaveComponentInfo_t2033007611 * ES2AutoSave_AddComponentInfo_m3742029792 (ES2AutoSave_t2758578480 * __this, ES2AutoSaveComponentInfo_t2033007611 * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSave ES2AutoSave::AddAutoSave(UnityEngine.GameObject,UnityEngine.Color,System.Boolean,System.Boolean,System.String)
extern "C"  ES2AutoSave_t2758578480 * ES2AutoSave_AddAutoSave_m114736455 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go0, Color_t1588175760  ___color1, bool ___hide2, bool ___generateID3, String_t* ___id4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSave ES2AutoSave::GetAutoSave(UnityEngine.GameObject)
extern "C"  ES2AutoSave_t2758578480 * ES2AutoSave_GetAutoSave_m3207029824 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2AutoSave::GenerateID()
extern "C"  String_t* ES2AutoSave_GenerateID_m519548268 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
