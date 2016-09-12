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

// ES2Spreadsheet
struct ES2Spreadsheet_t2599601128;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// ES2Settings
struct ES2Settings_t2754521479;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2Settings2754521479.h"

// System.Void ES2Spreadsheet::.ctor()
extern "C"  void ES2Spreadsheet__ctor_m2690999785 (ES2Spreadsheet_t2599601128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Spreadsheet::SetCell(System.Int32,System.Int32,System.Object)
extern "C"  void ES2Spreadsheet_SetCell_m2344894377 (ES2Spreadsheet_t2599601128 * __this, int32_t ___col0, int32_t ___row1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2Spreadsheet::GetCell(System.Int32,System.Int32)
extern "C"  String_t* ES2Spreadsheet_GetCell_m805797770 (ES2Spreadsheet_t2599601128 * __this, int32_t ___col0, int32_t ___row1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Spreadsheet::SizeSpreadsheetToFitRow(System.Int32)
extern "C"  void ES2Spreadsheet_SizeSpreadsheetToFitRow_m672818855 (ES2Spreadsheet_t2599601128 * __this, int32_t ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Spreadsheet::Save(System.String)
extern "C"  void ES2Spreadsheet_Save_m2242569610 (ES2Spreadsheet_t2599601128 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Spreadsheet::Save(System.String,ES2Settings)
extern "C"  void ES2Spreadsheet_Save_m3410788751 (ES2Spreadsheet_t2599601128 * __this, String_t* ___path0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Spreadsheet::GetCharacterConstants()
extern "C"  void ES2Spreadsheet_GetCharacterConstants_m3703029283 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2Spreadsheet::get_Item(System.Int32,System.Int32)
extern "C"  String_t* ES2Spreadsheet_get_Item_m1907497452 (ES2Spreadsheet_t2599601128 * __this, int32_t ___col0, int32_t ___row1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Spreadsheet::set_Item(System.Int32,System.Int32,System.String)
extern "C"  void ES2Spreadsheet_set_Item_m1664475255 (ES2Spreadsheet_t2599601128 * __this, int32_t ___col0, int32_t ___row1, String_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2Spreadsheet::ToString()
extern "C"  String_t* ES2Spreadsheet_ToString_m1358514826 (ES2Spreadsheet_t2599601128 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Spreadsheet::.cctor()
extern "C"  void ES2Spreadsheet__cctor_m1334518500 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
