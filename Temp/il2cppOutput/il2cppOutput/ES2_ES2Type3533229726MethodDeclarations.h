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

// ES2Type
struct ES2Type_t3533229726;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// ES2Reader
struct ES2Reader_t2333429543;
// UnityEngine.Component
struct Component_t2126946602;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "ES2_ES2Reader2333429543.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "mscorlib_System_String968488902.h"

// System.Void ES2Type::.ctor(System.Type)
extern "C"  void ES2Type__ctor_m1092177922 (ES2Type_t3533229726 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2Type::Read(ES2Reader)
extern "C"  Il2CppObject * ES2Type_Read_m1267850013 (ES2Type_t3533229726 * __this, ES2Reader_t2333429543 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Type::Read(ES2Reader,System.Object)
extern "C"  void ES2Type_Read_m2408340662 (ES2Type_t3533229726 * __this, ES2Reader_t2333429543 * ___reader0, Il2CppObject * ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Type::Read(ES2Reader,UnityEngine.Component)
extern "C"  void ES2Type_Read_m1271867630 (ES2Type_t3533229726 * __this, ES2Reader_t2333429543 * ___reader0, Component_t2126946602 * ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ES2Type::GetHash(System.Type)
extern "C"  int32_t ES2Type_GetHash_m4275912230 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ES2Type::GetHash(System.String)
extern "C"  int32_t ES2Type_GetHash_m2134304367 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
