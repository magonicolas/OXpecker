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

// System.String
struct String_t;
// ES2Keys/Key[]
struct KeyU5BU5D_t4172649958;
// ES2Type
struct ES2Type_t3533229726;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Keys_Key75327.h"
#include "ES2_ES2Type3533229726.h"
#include "mscorlib_System_Type2779229935.h"

// System.String ES2Keys::TypeFromKeys(ES2Keys/Key,ES2Keys/Key,ES2Keys/Key)
extern "C"  String_t* ES2Keys_TypeFromKeys_m4067398294 (Il2CppObject * __this /* static, unused */, uint8_t ___collection0, uint8_t ___value1, uint8_t ___key2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Keys/Key[] ES2Keys::KeysFromType(ES2Keys/Key,ES2Keys/Key,ES2Keys/Key)
extern "C"  KeyU5BU5D_t4172649958* ES2Keys_KeysFromType_m3079736988 (Il2CppObject * __this /* static, unused */, uint8_t ___collectionType0, uint8_t ___valueType1, uint8_t ___keyType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Keys/Key ES2Keys::KeyFromES2Type(ES2Type)
extern "C"  uint8_t ES2Keys_KeyFromES2Type_m2978375299 (Il2CppObject * __this /* static, unused */, ES2Type_t3533229726 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Keys/Key[] ES2Keys::KeysFromES2Type(ES2Type)
extern "C"  KeyU5BU5D_t4172649958* ES2Keys_KeysFromES2Type_m2975983056 (Il2CppObject * __this /* static, unused */, ES2Type_t3533229726 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Keys/Key[] ES2Keys::KeysFromES2Type(ES2Type,ES2Keys/Key)
extern "C"  KeyU5BU5D_t4172649958* ES2Keys_KeysFromES2Type_m3049053556 (Il2CppObject * __this /* static, unused */, ES2Type_t3533229726 * ___type0, uint8_t ___collectionType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Keys/Key[] ES2Keys::KeysFromES2Type(ES2Type,ES2Type,ES2Keys/Key)
extern "C"  KeyU5BU5D_t4172649958* ES2Keys_KeysFromES2Type_m2980666050 (Il2CppObject * __this /* static, unused */, ES2Type_t3533229726 * ___keyType0, ES2Type_t3533229726 * ___valueType1, uint8_t ___collectionType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Keys/Key ES2Keys::GetCollectionType(System.Type)
extern "C"  uint8_t ES2Keys_GetCollectionType_m1526396357 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
