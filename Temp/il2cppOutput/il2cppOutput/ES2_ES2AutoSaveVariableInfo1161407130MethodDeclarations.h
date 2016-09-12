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

// ES2AutoSaveVariableInfo
struct ES2AutoSaveVariableInfo_t1161407130;
// System.String
struct String_t;
// System.Type
struct Type_t;
// ES2AutoSave
struct ES2AutoSave_t2758578480;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"
#include "ES2_ES2AutoSave2758578480.h"
#include "ES2_ES2AutoSaveVariableInfo1161407130.h"

// System.Void ES2AutoSaveVariableInfo::.ctor()
extern "C"  void ES2AutoSaveVariableInfo__ctor_m2390648475 (ES2AutoSaveVariableInfo_t1161407130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveVariableInfo::.ctor(System.String,System.Type,System.Boolean,ES2AutoSave,ES2AutoSaveVariableInfo)
extern "C"  void ES2AutoSaveVariableInfo__ctor_m2585064977 (ES2AutoSaveVariableInfo_t1161407130 * __this, String_t* ___name0, Type_t * ___type1, bool ___isProperty2, ES2AutoSave_t2758578480 * ___autoSave3, ES2AutoSaveVariableInfo_t1161407130 * ___previous4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSaveVariableInfo::get_selected()
extern "C"  bool ES2AutoSaveVariableInfo_get_selected_m2823406125 (ES2AutoSaveVariableInfo_t1161407130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveVariableInfo::set_selected(System.Boolean)
extern "C"  void ES2AutoSaveVariableInfo_set_selected_m817754808 (ES2AutoSaveVariableInfo_t1161407130 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSaveVariableInfo::get_selectionChanged()
extern "C"  bool ES2AutoSaveVariableInfo_get_selectionChanged_m2606258906 (ES2AutoSaveVariableInfo_t1161407130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveVariableInfo::set_selectionChanged(System.Boolean)
extern "C"  void ES2AutoSaveVariableInfo_set_selectionChanged_m1790461093 (ES2AutoSaveVariableInfo_t1161407130 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSaveVariableInfo::get_buttonSelected()
extern "C"  bool ES2AutoSaveVariableInfo_get_buttonSelected_m4058312255 (ES2AutoSaveVariableInfo_t1161407130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveVariableInfo::set_buttonSelected(System.Boolean)
extern "C"  void ES2AutoSaveVariableInfo_set_buttonSelected_m1074063434 (ES2AutoSaveVariableInfo_t1161407130 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSaveVariableInfo::get_buttonSelectionChanged()
extern "C"  bool ES2AutoSaveVariableInfo_get_buttonSelectionChanged_m1238848748 (ES2AutoSaveVariableInfo_t1161407130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveVariableInfo::set_buttonSelectionChanged(System.Boolean)
extern "C"  void ES2AutoSaveVariableInfo_set_buttonSelectionChanged_m3779168311 (ES2AutoSaveVariableInfo_t1161407130 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSave ES2AutoSaveVariableInfo::get_autoSave()
extern "C"  ES2AutoSave_t2758578480 * ES2AutoSaveVariableInfo_get_autoSave_m1624334011 (ES2AutoSaveVariableInfo_t1161407130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveVariableInfo::set_autoSave(ES2AutoSave)
extern "C"  void ES2AutoSaveVariableInfo_set_autoSave_m1796297104 (ES2AutoSaveVariableInfo_t1161407130 * __this, ES2AutoSave_t2758578480 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object ES2AutoSaveVariableInfo::get_undoRecordObject()
extern "C"  Object_t3878351788 * ES2AutoSaveVariableInfo_get_undoRecordObject_m2783386003 (ES2AutoSaveVariableInfo_t1161407130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ES2AutoSaveVariableInfo::get_type()
extern "C"  Type_t * ES2AutoSaveVariableInfo_get_type_m1453224850 (ES2AutoSaveVariableInfo_t1161407130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveVariableInfo::set_type(System.Type)
extern "C"  void ES2AutoSaveVariableInfo_set_type_m113403161 (ES2AutoSaveVariableInfo_t1161407130 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2AutoSaveVariableInfo::get_HasButtonSelectedVariables()
extern "C"  bool ES2AutoSaveVariableInfo_get_HasButtonSelectedVariables_m1577684034 (ES2AutoSaveVariableInfo_t1161407130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSaveVariableInfo ES2AutoSaveVariableInfo::GetVariableInfo(System.String)
extern "C"  ES2AutoSaveVariableInfo_t1161407130 * ES2AutoSaveVariableInfo_GetVariableInfo_m2745664848 (ES2AutoSaveVariableInfo_t1161407130 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2AutoSaveVariableInfo ES2AutoSaveVariableInfo::AddVariableInfo(System.String,System.Type,System.Boolean,ES2AutoSave,ES2AutoSaveVariableInfo)
extern "C"  ES2AutoSaveVariableInfo_t1161407130 * ES2AutoSaveVariableInfo_AddVariableInfo_m2323265907 (ES2AutoSaveVariableInfo_t1161407130 * __this, String_t* ___name0, Type_t * ___type1, bool ___isProperty2, ES2AutoSave_t2758578480 * ___autoSave3, ES2AutoSaveVariableInfo_t1161407130 * ___previous4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2AutoSaveVariableInfo::DeleteVariableInfo(System.String)
extern "C"  void ES2AutoSaveVariableInfo_DeleteVariableInfo_m2693953828 (ES2AutoSaveVariableInfo_t1161407130 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
