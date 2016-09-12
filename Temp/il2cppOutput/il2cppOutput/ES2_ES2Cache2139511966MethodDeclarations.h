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

// ES2CachedFile ES2Cache::AddNewCachedFile(System.String)
extern "C"  ES2CachedFile_t1431531042 * ES2Cache_AddNewCachedFile_m3799012579 (Il2CppObject * __this /* static, unused */, String_t* ___absolutePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Cache::DeleteCachedFile(System.String)
extern "C"  bool ES2Cache_DeleteCachedFile_m4028136936 (Il2CppObject * __this /* static, unused */, String_t* ___absolutePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2CachedFile ES2Cache::GetOrCreateCachedFile(System.String)
extern "C"  ES2CachedFile_t1431531042 * ES2Cache_GetOrCreateCachedFile_m1415816591 (Il2CppObject * __this /* static, unused */, String_t* ___absolutePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2CachedFile ES2Cache::GetCachedFile(System.String)
extern "C"  ES2CachedFile_t1431531042 * ES2Cache_GetCachedFile_m2321727630 (Il2CppObject * __this /* static, unused */, String_t* ___absolutePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2Cache::ToString()
extern "C"  String_t* ES2Cache_ToString_m2534639104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Cache::.cctor()
extern "C"  void ES2Cache__cctor_m3918744986 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
