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

// ES2Data
struct ES2Data_t3532730126;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void ES2Data::.ctor()
extern "C"  void ES2Data__ctor_m2140915879 (ES2Data_t3532730126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Data::Add(System.String,System.Object)
extern "C"  void ES2Data_Add_m670913386 (ES2Data_t3532730126 * __this, String_t* ___tag0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Data::TagExists(System.String)
extern "C"  bool ES2Data_TagExists_m1866568359 (ES2Data_t3532730126 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2Data::GetTags()
extern "C"  StringU5BU5D_t2956870243* ES2Data_GetTags_m2875001493 (ES2Data_t3532730126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
