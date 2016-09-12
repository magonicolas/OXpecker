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

// ES2FileStream
struct ES2FileStream_t3200862336;
// ES2Settings
struct ES2Settings_t2754521479;
// System.IO.Stream
struct Stream_t219029575;

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Settings2754521479.h"
#include "ES2_ES2Stream_Operation3666670919.h"

// System.Void ES2FileStream::.ctor(ES2Settings,ES2Stream/Operation)
extern "C"  void ES2FileStream__ctor_m2827579526 (ES2FileStream_t3200862336 * __this, ES2Settings_t2754521479 * ___settings0, int32_t ___operation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2FileStream::Store()
extern "C"  void ES2FileStream_Store_m15399860 (ES2FileStream_t3200862336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ES2FileStream::CreateStorageStream()
extern "C"  Stream_t219029575 * ES2FileStream_CreateStorageStream_m1221931922 (ES2FileStream_t3200862336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ES2FileStream::CreateWriteStream()
extern "C"  Stream_t219029575 * ES2FileStream_CreateWriteStream_m2309229174 (ES2FileStream_t3200862336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream ES2FileStream::CreateReadStream()
extern "C"  Stream_t219029575 * ES2FileStream_CreateReadStream_m281615489 (ES2FileStream_t3200862336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FileStream::MayRequireOverwrite()
extern "C"  bool ES2FileStream_MayRequireOverwrite_m3742421342 (ES2FileStream_t3200862336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
