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
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2Settings_ES2FileMode584151715.h"

// System.Void ES2FileUtility::Delete(System.String)
extern "C"  void ES2FileUtility_Delete_m3093663000 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FileUtility::Exists(System.String)
extern "C"  bool ES2FileUtility_Exists_m2092241127 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2FileUtility::Move(System.String,System.String)
extern "C"  void ES2FileUtility_Move_m2197964654 (Il2CppObject * __this /* static, unused */, String_t* ___from0, String_t* ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2FileUtility::ReadAllBytes(System.String)
extern "C"  ByteU5BU5D_t58506160* ES2FileUtility_ReadAllBytes_m3697425145 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ES2FileUtility::CreateFileStream(System.String,ES2Settings/ES2FileMode,System.Int32)
extern "C"  Stream_t219029575 * ES2FileUtility_CreateFileStream_m116208123 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___filemode1, int32_t ___bufferSize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
