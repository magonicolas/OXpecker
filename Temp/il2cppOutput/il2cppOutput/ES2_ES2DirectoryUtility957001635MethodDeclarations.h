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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ES2DirectoryUtility::Delete(System.String,System.Boolean)
extern "C"  void ES2DirectoryUtility_Delete_m1744233400 (Il2CppObject * __this /* static, unused */, String_t* ___path0, bool ___recursive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2DirectoryUtility::Exists(System.String)
extern "C"  bool ES2DirectoryUtility_Exists_m3819500468 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2DirectoryUtility::Move(System.String,System.String)
extern "C"  void ES2DirectoryUtility_Move_m3189141499 (Il2CppObject * __this /* static, unused */, String_t* ___from0, String_t* ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2DirectoryUtility::CreateDirectory(System.String)
extern "C"  void ES2DirectoryUtility_CreateDirectory_m4029010177 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2DirectoryUtility::GetDirectories(System.String)
extern "C"  StringU5BU5D_t2956870243* ES2DirectoryUtility_GetDirectories_m3397283068 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2DirectoryUtility::GetFiles(System.String,System.String)
extern "C"  StringU5BU5D_t2956870243* ES2DirectoryUtility_GetFiles_m3280176524 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___searchPattern1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
