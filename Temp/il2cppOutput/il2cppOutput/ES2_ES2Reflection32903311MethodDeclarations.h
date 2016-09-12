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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Type2779229935.h"

// System.Boolean ES2Reflection::SetValue(System.Object,System.String,System.Object,System.Boolean)
extern "C"  bool ES2Reflection_SetValue_m4106210156 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, String_t* ___name1, Il2CppObject * ___value2, bool ___isProperty3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2Reflection::GetValue(System.Object,System.String,System.Boolean)
extern "C"  Il2CppObject * ES2Reflection_GetValue_m1515563345 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, String_t* ___name1, bool ___isProperty2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reflection::IsAssignableFrom(System.Type,System.Type)
extern "C"  bool ES2Reflection_IsAssignableFrom_m2656461649 (Il2CppObject * __this /* static, unused */, Type_t * ___a0, Type_t * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reflection::IsGenericType(System.Type)
extern "C"  bool ES2Reflection_IsGenericType_m373053422 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] ES2Reflection::GetGenericArguments(System.Type)
extern "C"  TypeU5BU5D_t3431720054* ES2Reflection_GetGenericArguments_m2332672968 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2Reflection::CreateGenericInstance(System.Type,System.Type)
extern "C"  Il2CppObject * ES2Reflection_CreateGenericInstance_m2998846403 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2Reflection::CreateGenericInstance(System.Type,System.Type,System.Type)
extern "C"  Il2CppObject * ES2Reflection_CreateGenericInstance_m1827653238 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericType1, Type_t * ___genericType22, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reflection::IsCollectionType(System.Type)
extern "C"  bool ES2Reflection_IsCollectionType_m2286305369 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
