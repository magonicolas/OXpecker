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
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Text.Encoding
struct Encoding_t180559927;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "MoodkieSecurity_MoodkieSecurity_ABCDStruct1432589895.h"

// System.String MoodkieSecurity.MD5Core::GetHashString(System.Byte[])
extern "C"  String_t* MD5Core_GetHashString_m1307769001 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MoodkieSecurity.MD5Core::GetHashString(System.String,System.Text.Encoding)
extern "C"  String_t* MD5Core_GetHashString_m3163183215 (Il2CppObject * __this /* static, unused */, String_t* ___input0, Encoding_t180559927 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MoodkieSecurity.MD5Core::GetHashString(System.String)
extern "C"  String_t* MD5Core_GetHashString_m3365574626 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MoodkieSecurity.MD5Core::GetHash(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* MD5Core_GetHash_m2082019027 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MoodkieSecurity.MD5Core::GetHashFinalBlock(System.Byte[],System.Int32,System.Int32,MoodkieSecurity.ABCDStruct,System.Int64)
extern "C"  ByteU5BU5D_t58506160* MD5Core_GetHashFinalBlock_m3699959939 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___input0, int32_t ___ibStart1, int32_t ___cbSize2, ABCDStruct_t1432589895  ___ABCD3, int64_t ___len4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoodkieSecurity.MD5Core::GetHashBlock(System.Byte[],MoodkieSecurity.ABCDStruct&,System.Int32)
extern "C"  void MD5Core_GetHashBlock_m762909782 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___input0, ABCDStruct_t1432589895 * ___ABCDValue1, int32_t ___ibStart2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 MoodkieSecurity.MD5Core::r1(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Int32,System.UInt32)
extern "C"  uint32_t MD5Core_r1_m3060154495 (Il2CppObject * __this /* static, unused */, uint32_t ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, int32_t ___s5, uint32_t ___t6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 MoodkieSecurity.MD5Core::r2(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Int32,System.UInt32)
extern "C"  uint32_t MD5Core_r2_m3575674944 (Il2CppObject * __this /* static, unused */, uint32_t ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, int32_t ___s5, uint32_t ___t6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 MoodkieSecurity.MD5Core::r3(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Int32,System.UInt32)
extern "C"  uint32_t MD5Core_r3_m4091195393 (Il2CppObject * __this /* static, unused */, uint32_t ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, int32_t ___s5, uint32_t ___t6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 MoodkieSecurity.MD5Core::r4(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Int32,System.UInt32)
extern "C"  uint32_t MD5Core_r4_m311748546 (Il2CppObject * __this /* static, unused */, uint32_t ___a0, uint32_t ___b1, uint32_t ___c2, uint32_t ___d3, uint32_t ___x4, int32_t ___s5, uint32_t ___t6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 MoodkieSecurity.MD5Core::LSR(System.UInt32,System.Int32)
extern "C"  uint32_t MD5Core_LSR_m1059937227 (Il2CppObject * __this /* static, unused */, uint32_t ___i0, int32_t ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] MoodkieSecurity.MD5Core::Converter(System.Byte[],System.Int32)
extern "C"  UInt32U5BU5D_t2133601851* MD5Core_Converter_m3366608975 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___input0, int32_t ___ibStart1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
