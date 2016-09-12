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

// ES2PlayerPrefsStream
struct ES2PlayerPrefsStream_t3209241547;
// ES2Settings
struct ES2Settings_t2754521479;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Settings2754521479.h"
#include "ES2_ES2Stream_Operation3666670919.h"
#include "mscorlib_System_String968488902.h"

// System.Void ES2PlayerPrefsStream::.ctor(ES2Settings,ES2Stream/Operation)
extern "C"  void ES2PlayerPrefsStream__ctor_m3777798517 (ES2PlayerPrefsStream_t3209241547 * __this, ES2Settings_t2754521479 * ___settings0, int32_t ___operation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2PlayerPrefsStream::Store()
extern "C"  void ES2PlayerPrefsStream_Store_m1280699557 (ES2PlayerPrefsStream_t3209241547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2PlayerPrefsStream::StoreRaw()
extern "C"  void ES2PlayerPrefsStream_StoreRaw_m1166584037 (ES2PlayerPrefsStream_t3209241547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2PlayerPrefsStream::StoreRaw(System.Byte[])
extern "C"  void ES2PlayerPrefsStream_StoreRaw_m3941053188 (ES2PlayerPrefsStream_t3209241547 * __this, ByteU5BU5D_t58506160* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2PlayerPrefsStream::StoreRaw(System.String)
extern "C"  void ES2PlayerPrefsStream_StoreRaw_m1703891517 (ES2PlayerPrefsStream_t3209241547 * __this, String_t* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2PlayerPrefsStream::AppendRaw(System.Byte[])
extern "C"  void ES2PlayerPrefsStream_AppendRaw_m1247081303 (ES2PlayerPrefsStream_t3209241547 * __this, ByteU5BU5D_t58506160* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ES2PlayerPrefsStream::CreateStorageStream()
extern "C"  Stream_t219029575 * ES2PlayerPrefsStream_CreateStorageStream_m881608643 (ES2PlayerPrefsStream_t3209241547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ES2PlayerPrefsStream::CreateReadStream()
extern "C"  Stream_t219029575 * ES2PlayerPrefsStream_CreateReadStream_m966843888 (ES2PlayerPrefsStream_t3209241547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ES2PlayerPrefsStream::CreateWriteStream()
extern "C"  Stream_t219029575 * ES2PlayerPrefsStream_CreateWriteStream_m2076473063 (ES2PlayerPrefsStream_t3209241547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2PlayerPrefsStream::MayRequireOverwrite()
extern "C"  bool ES2PlayerPrefsStream_MayRequireOverwrite_m4268538319 (ES2PlayerPrefsStream_t3209241547 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
