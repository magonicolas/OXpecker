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

// ES2Stream
struct ES2Stream_t2376418788;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.Stream
struct Stream_t219029575;
// ES2Settings
struct ES2Settings_t2754521479;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "ES2_ES2Settings2754521479.h"
#include "ES2_ES2Stream_Operation3666670919.h"

// System.Void ES2Stream::.ctor()
extern "C"  void ES2Stream__ctor_m1867181585 (ES2Stream_t2376418788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ES2Stream::get_Length()
extern "C"  int64_t ES2Stream_get_Length_m4069730215 (ES2Stream_t2376418788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Stream::set_Length(System.Int64)
extern "C"  void ES2Stream_set_Length_m2378756104 (ES2Stream_t2376418788 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ES2Stream::get_Position()
extern "C"  int64_t ES2Stream_get_Position_m2811998506 (ES2Stream_t2376418788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Stream::set_Position(System.Int64)
extern "C"  void ES2Stream_set_Position_m4214097227 (ES2Stream_t2376418788 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2Stream::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t58506160* ES2Stream_ReadBytes_m1233816735 (ES2Stream_t2376418788 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2Stream::ReadAllBytes()
extern "C"  ByteU5BU5D_t58506160* ES2Stream_ReadAllBytes_m2645396713 (ES2Stream_t2376418788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Stream::WriteToStreamFast(System.IO.Stream)
extern "C"  void ES2Stream_WriteToStreamFast_m3948207004 (ES2Stream_t2376418788 * __this, Stream_t219029575 * ___writableStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Stream::WriteToStreamLowMemory(System.IO.Stream)
extern "C"  void ES2Stream_WriteToStreamLowMemory_m890864677 (ES2Stream_t2376418788 * __this, Stream_t219029575 * ___writableStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Stream ES2Stream::Create(System.Byte[],ES2Settings)
extern "C"  ES2Stream_t2376418788 * ES2Stream_Create_m1661424270 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Stream ES2Stream::Create(ES2Settings,ES2Stream/Operation)
extern "C"  ES2Stream_t2376418788 * ES2Stream_Create_m2490822235 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, int32_t ___operation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
