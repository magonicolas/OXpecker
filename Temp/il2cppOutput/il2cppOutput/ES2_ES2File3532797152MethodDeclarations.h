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

// ES2Settings
struct ES2Settings_t2754521479;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Settings2754521479.h"
#include "mscorlib_System_String968488902.h"

// System.Void ES2File::Delete(ES2Settings)
extern "C"  void ES2File_Delete_m3994691601 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2File::DeleteFile(ES2Settings)
extern "C"  void ES2File_DeleteFile_m2507124853 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2File::Delete(System.String)
extern "C"  void ES2File_Delete_m3237257800 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2File::Exists(ES2Settings)
extern "C"  bool ES2File_Exists_m4057670240 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2File::CheckForTagInBytes(System.String,System.Byte[])
extern "C"  bool ES2File_CheckForTagInBytes_m1958613449 (Il2CppObject * __this /* static, unused */, String_t* ___tag0, ByteU5BU5D_t58506160* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2File::CreateFolder(System.String)
extern "C"  void ES2File_CreateFolder_m2609685513 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2File::Rename(ES2Settings,ES2Settings)
extern "C"  void ES2File_Rename_m3068156771 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, ES2Settings_t2754521479 * ___newSettings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2File::MoveFile(ES2Settings,ES2Settings)
extern "C"  void ES2File_MoveFile_m440675348 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, ES2Settings_t2754521479 * ___newSettings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2File::GetFolders(ES2Settings)
extern "C"  StringU5BU5D_t2956870243* ES2File_GetFolders_m2800647406 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2File::GetFiles(ES2Settings)
extern "C"  StringU5BU5D_t2956870243* ES2File_GetFiles_m714935228 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2File::GetFiles(ES2Settings,System.String)
extern "C"  StringU5BU5D_t2956870243* ES2File_GetFiles_m1325988600 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, String_t* ___extension1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2File::GetTags(ES2Settings)
extern "C"  StringU5BU5D_t2956870243* ES2File_GetTags_m125828584 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
