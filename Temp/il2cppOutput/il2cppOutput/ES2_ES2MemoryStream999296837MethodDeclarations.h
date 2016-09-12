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

// ES2MemoryStream
struct ES2MemoryStream_t999296837;
// ES2Settings
struct ES2Settings_t2754521479;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Settings2754521479.h"

// System.Void ES2MemoryStream::.ctor(ES2Settings)
extern "C"  void ES2MemoryStream__ctor_m2745013499 (ES2MemoryStream_t999296837 * __this, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2MemoryStream::.ctor(System.Byte[],ES2Settings)
extern "C"  void ES2MemoryStream__ctor_m1919093502 (ES2MemoryStream_t999296837 * __this, ByteU5BU5D_t58506160* ___bytes0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2MemoryStream::.ctor()
extern "C"  void ES2MemoryStream__ctor_m2513085520 (ES2MemoryStream_t999296837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2MemoryStream::Store()
extern "C"  void ES2MemoryStream_Store_m1473138191 (ES2MemoryStream_t999296837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2MemoryStream::MayRequireOverwrite()
extern "C"  bool ES2MemoryStream_MayRequireOverwrite_m2647167097 (ES2MemoryStream_t999296837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2MemoryStream::ReadAllBytes()
extern "C"  ByteU5BU5D_t58506160* ES2MemoryStream_ReadAllBytes_m804596042 (ES2MemoryStream_t999296837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
