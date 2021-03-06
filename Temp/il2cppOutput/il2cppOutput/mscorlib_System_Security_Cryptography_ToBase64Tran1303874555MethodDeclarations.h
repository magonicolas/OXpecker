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

// System.Security.Cryptography.ToBase64Transform
struct ToBase64Transform_t1303874555;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.ToBase64Transform::.ctor()
extern "C"  void ToBase64Transform__ctor_m299770307 (ToBase64Transform_t1303874555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::System.IDisposable.Dispose()
extern "C"  void ToBase64Transform_System_IDisposable_Dispose_m3306649020 (ToBase64Transform_t1303874555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Finalize()
extern "C"  void ToBase64Transform_Finalize_m1322714047 (ToBase64Transform_t1303874555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.ToBase64Transform::get_CanTransformMultipleBlocks()
extern "C"  bool ToBase64Transform_get_CanTransformMultipleBlocks_m1599725118 (ToBase64Transform_t1303874555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.ToBase64Transform::get_CanReuseTransform()
extern "C"  bool ToBase64Transform_get_CanReuseTransform_m1085934718 (ToBase64Transform_t1303874555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_InputBlockSize()
extern "C"  int32_t ToBase64Transform_get_InputBlockSize_m3015719818 (ToBase64Transform_t1303874555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::get_OutputBlockSize()
extern "C"  int32_t ToBase64Transform_get_OutputBlockSize_m2038267529 (ToBase64Transform_t1303874555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Clear()
extern "C"  void ToBase64Transform_Clear_m2000870894 (ToBase64Transform_t1303874555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::Dispose(System.Boolean)
extern "C"  void ToBase64Transform_Dispose_m171060919 (ToBase64Transform_t1303874555 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.ToBase64Transform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t ToBase64Transform_TransformBlock_m3037413161 (ToBase64Transform_t1303874555 * __this, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t58506160* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  void ToBase64Transform_InternalTransformBlock_m4265320362 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t58506160* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t58506160* ToBase64Transform_TransformFinalBlock_m3613045167 (ToBase64Transform_t1303874555 * __this, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.ToBase64Transform::InternalTransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t58506160* ToBase64Transform_InternalTransformFinalBlock_m1422663948 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
