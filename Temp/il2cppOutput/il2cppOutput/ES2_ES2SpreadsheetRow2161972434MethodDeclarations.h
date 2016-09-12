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

// ES2SpreadsheetRow
struct ES2SpreadsheetRow_t2161972434;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ES2SpreadsheetRow::.ctor()
extern "C"  void ES2SpreadsheetRow__ctor_m3775461603 (ES2SpreadsheetRow_t2161972434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ES2SpreadsheetRow::get_cellCount()
extern "C"  int32_t ES2SpreadsheetRow_get_cellCount_m316945407 (ES2SpreadsheetRow_t2161972434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2SpreadsheetRow::SetCell(System.Int32,System.String)
extern "C"  void ES2SpreadsheetRow_SetCell_m4109411698 (ES2SpreadsheetRow_t2161972434 * __this, int32_t ___col0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2SpreadsheetRow::GetCell(System.Int32)
extern "C"  String_t* ES2SpreadsheetRow_GetCell_m1060688461 (ES2SpreadsheetRow_t2161972434 * __this, int32_t ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2SpreadsheetRow::GetCellBytes(System.Int32)
extern "C"  ByteU5BU5D_t58506160* ES2SpreadsheetRow_GetCellBytes_m415894491 (ES2SpreadsheetRow_t2161972434 * __this, int32_t ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2SpreadsheetRow::SizeRowToFitColumn(System.Int32)
extern "C"  void ES2SpreadsheetRow_SizeRowToFitColumn_m2522640709 (ES2SpreadsheetRow_t2161972434 * __this, int32_t ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2SpreadsheetRow::GetBytes(System.String)
extern "C"  ByteU5BU5D_t58506160* ES2SpreadsheetRow_GetBytes_m2574553398 (ES2SpreadsheetRow_t2161972434 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2SpreadsheetRow::get_Item(System.Int32)
extern "C"  String_t* ES2SpreadsheetRow_get_Item_m3057599723 (ES2SpreadsheetRow_t2161972434 * __this, int32_t ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2SpreadsheetRow::set_Item(System.Int32,System.String)
extern "C"  void ES2SpreadsheetRow_set_Item_m4041962846 (ES2SpreadsheetRow_t2161972434 * __this, int32_t ___col0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2SpreadsheetRow::ToString()
extern "C"  String_t* ES2SpreadsheetRow_ToString_m3424475818 (ES2SpreadsheetRow_t2161972434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
