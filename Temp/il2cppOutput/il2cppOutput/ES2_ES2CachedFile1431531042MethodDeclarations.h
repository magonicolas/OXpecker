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

// ES2CachedFile
struct ES2CachedFile_t1431531042;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2Tag2053637046.h"

// System.Void ES2CachedFile::.ctor()
extern "C"  void ES2CachedFile__ctor_m2540724883 (ES2CachedFile_t1431531042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2CachedFile::AddTag(System.String,System.Int64,System.Int64,System.Int64)
extern "C"  void ES2CachedFile_AddTag_m363141216 (ES2CachedFile_t1431531042 * __this, String_t* ___tag0, int64_t ___position1, int64_t ___settingsPosition2, int64_t ___nextTagPosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2CachedFile::AddTag(ES2Tag)
extern "C"  void ES2CachedFile_AddTag_m897057684 (ES2CachedFile_t1431531042 * __this, ES2Tag_t2053637046  ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Tag ES2CachedFile::AddOrUpdateTag(System.String,System.Int64,System.Int64,System.Int64)
extern "C"  ES2Tag_t2053637046  ES2CachedFile_AddOrUpdateTag_m2763057569 (ES2CachedFile_t1431531042 * __this, String_t* ___tag0, int64_t ___position1, int64_t ___settingsPosition2, int64_t ___nextTagPosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Tag ES2CachedFile::GetTag(System.String)
extern "C"  ES2Tag_t2053637046  ES2CachedFile_GetTag_m1302619552 (ES2CachedFile_t1431531042 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2CachedFile::RemoveTag(System.String)
extern "C"  bool ES2CachedFile_RemoveTag_m2903281243 (ES2CachedFile_t1431531042 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2CachedFile::RenameTag(System.String,System.String)
extern "C"  void ES2CachedFile_RenameTag_m715507569 (ES2CachedFile_t1431531042 * __this, String_t* ___oldTag0, String_t* ___newTag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2CachedFile::ToString()
extern "C"  String_t* ES2CachedFile_ToString_m650672506 (ES2CachedFile_t1431531042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
