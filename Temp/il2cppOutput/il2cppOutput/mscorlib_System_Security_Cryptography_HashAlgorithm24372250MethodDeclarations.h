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

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
extern "C"  void HashAlgorithm__ctor_m1204858244 (HashAlgorithm_t24372250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::System.IDisposable.Dispose()
extern "C"  void HashAlgorithm_System_IDisposable_Dispose_m562789531 (HashAlgorithm_t24372250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.HashAlgorithm::get_CanTransformMultipleBlocks()
extern "C"  bool HashAlgorithm_get_CanTransformMultipleBlocks_m1330851485 (HashAlgorithm_t24372250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.HashAlgorithm::get_CanReuseTransform()
extern "C"  bool HashAlgorithm_get_CanReuseTransform_m3088450879 (HashAlgorithm_t24372250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::Clear()
extern "C"  void HashAlgorithm_Clear_m2905958831 (HashAlgorithm_t24372250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* HashAlgorithm_ComputeHash_m1325366732 (HashAlgorithm_t24372250 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t58506160* HashAlgorithm_ComputeHash_m2755161132 (HashAlgorithm_t24372250 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.IO.Stream)
extern "C"  ByteU5BU5D_t58506160* HashAlgorithm_ComputeHash_m2093180340 (HashAlgorithm_t24372250 * __this, Stream_t219029575 * ___inputStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create()
extern "C"  HashAlgorithm_t24372250 * HashAlgorithm_Create_m497729881 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
extern "C"  HashAlgorithm_t24372250 * HashAlgorithm_Create_m2014549577 (Il2CppObject * __this /* static, unused */, String_t* ___hashName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash()
extern "C"  ByteU5BU5D_t58506160* HashAlgorithm_get_Hash_m376137601 (HashAlgorithm_t24372250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize()
extern "C"  int32_t HashAlgorithm_get_HashSize_m2207294548 (HashAlgorithm_t24372250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::Dispose(System.Boolean)
extern "C"  void HashAlgorithm_Dispose_m666835064 (HashAlgorithm_t24372250 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::get_InputBlockSize()
extern "C"  int32_t HashAlgorithm_get_InputBlockSize_m1064304489 (HashAlgorithm_t24372250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::get_OutputBlockSize()
extern "C"  int32_t HashAlgorithm_get_OutputBlockSize_m1673934474 (HashAlgorithm_t24372250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t HashAlgorithm_TransformBlock_m3829135048 (HashAlgorithm_t24372250 * __this, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t58506160* ___outputBuffer3, int32_t ___outputOffset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t58506160* HashAlgorithm_TransformFinalBlock_m1193599374 (HashAlgorithm_t24372250 * __this, ByteU5BU5D_t58506160* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
