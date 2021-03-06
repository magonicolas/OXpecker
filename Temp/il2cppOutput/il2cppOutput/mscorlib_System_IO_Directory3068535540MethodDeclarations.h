﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.DirectoryInfo
struct DirectoryInfo_t3421965634;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_FileAttributes2606923962.h"

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C"  DirectoryInfo_t3421965634 * Directory_CreateDirectory_m677877474 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
extern "C"  DirectoryInfo_t3421965634 * Directory_CreateDirectoriesInternal_m1545778887 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::Delete(System.String)
extern "C"  void Directory_Delete_m1796764451 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::RecursiveDelete(System.String)
extern "C"  void Directory_RecursiveDelete_m184278935 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::Delete(System.String,System.Boolean)
extern "C"  void Directory_Delete_m1791284730 (Il2CppObject * __this /* static, unused */, String_t* ___path0, bool ___recursive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C"  bool Directory_Exists_m4117375188 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
extern "C"  String_t* Directory_GetCurrentDirectory_m3403080603 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetDirectories(System.String)
extern "C"  StringU5BU5D_t2956870243* Directory_GetDirectories_m888334714 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetDirectories(System.String,System.String)
extern "C"  StringU5BU5D_t2956870243* Directory_GetDirectories_m1009841206 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___searchPattern1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String)
extern "C"  StringU5BU5D_t2956870243* Directory_GetFiles_m3665304654 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern "C"  StringU5BU5D_t2956870243* Directory_GetFiles_m2573902858 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___searchPattern1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::Move(System.String,System.String)
extern "C"  void Directory_Move_m2989323513 (Il2CppObject * __this /* static, unused */, String_t* ___sourceDirName0, String_t* ___destDirName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Directory::CheckPathExceptions(System.String)
extern "C"  void Directory_CheckPathExceptions_m3281597667 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
extern "C"  StringU5BU5D_t2956870243* Directory_GetFileSystemEntries_m3873165372 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___searchPattern1, int32_t ___mask2, int32_t ___attrs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
