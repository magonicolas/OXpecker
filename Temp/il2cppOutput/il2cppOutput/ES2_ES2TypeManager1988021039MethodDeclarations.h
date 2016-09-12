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

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Type3533229726.h"
#include "mscorlib_System_Type2779229935.h"
#include "ES2_ES2Keys_Key75327.h"

// System.Void ES2TypeManager::AddES2Type(ES2Type)
extern "C"  void ES2TypeManager_AddES2Type_m3536994133 (Il2CppObject * __this /* static, unused */, ES2Type_t3533229726 * ___es2Type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Type ES2TypeManager::GetES2Type(System.Type)
extern "C"  ES2Type_t3533229726 * ES2TypeManager_GetES2Type_m487886362 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Type ES2TypeManager::GetES2Type(System.Byte)
extern "C"  ES2Type_t3533229726 * ES2TypeManager_GetES2Type_m471266828 (Il2CppObject * __this /* static, unused */, uint8_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Type ES2TypeManager::GetES2Type(ES2Keys/Key)
extern "C"  ES2Type_t3533229726 * ES2TypeManager_GetES2Type_m3225038475 (Il2CppObject * __this /* static, unused */, uint8_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Type ES2TypeManager::GetES2Type(System.Int32)
extern "C"  ES2Type_t3533229726 * ES2TypeManager_GetES2Type_m1914567376 (Il2CppObject * __this /* static, unused */, int32_t ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2TypeManager::.cctor()
extern "C"  void ES2TypeManager__cctor_m3093822827 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
