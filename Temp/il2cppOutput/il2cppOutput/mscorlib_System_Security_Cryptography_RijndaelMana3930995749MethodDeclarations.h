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

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t3930995749;
// System.Security.Cryptography.Rijndael
struct Rijndael_t277002104;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_Rijndael277002104.h"

// System.Void System.Security.Cryptography.RijndaelManagedTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void RijndaelManagedTransform__ctor_m380188472 (RijndaelManagedTransform_t3930995749 * __this, Rijndael_t277002104 * ___algo0, bool ___encryption1, ByteU5BU5D_t58506160* ___key2, ByteU5BU5D_t58506160* ___iv3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::System.IDisposable.Dispose()
extern "C"  void RijndaelManagedTransform_System_IDisposable_Dispose_m2279034794 (RijndaelManagedTransform_t3930995749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::get_BlockSizeValue()
extern "C"  int32_t RijndaelManagedTransform_get_BlockSizeValue_m1601774175 (RijndaelManagedTransform_t3930995749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanTransformMultipleBlocks()
extern "C"  bool RijndaelManagedTransform_get_CanTransformMultipleBlocks_m1596781800 (RijndaelManagedTransform_t3930995749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RijndaelManagedTransform::get_CanReuseTransform()
extern "C"  bool RijndaelManagedTransform_get_CanReuseTransform_m1112862356 (RijndaelManagedTransform_t3930995749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::get_InputBlockSize()
extern "C"  int32_t RijndaelManagedTransform_get_InputBlockSize_m877686720 (RijndaelManagedTransform_t3930995749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::get_OutputBlockSize()
extern "C"  int32_t RijndaelManagedTransform_get_OutputBlockSize_m183750931 (RijndaelManagedTransform_t3930995749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::Clear()
extern "C"  void RijndaelManagedTransform_Clear_m2412964672 (RijndaelManagedTransform_t3930995749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManagedTransform::Reset()
extern "C"  void RijndaelManagedTransform_Reset_m2653264322 (RijndaelManagedTransform_t3930995749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t RijndaelManagedTransform_TransformBlock_m549345503 (RijndaelManagedTransform_t3930995749 * __this, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t58506160* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t58506160* RijndaelManagedTransform_TransformFinalBlock_m1653937417 (RijndaelManagedTransform_t3930995749 * __this, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
