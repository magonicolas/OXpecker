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

// ES2Writer
struct ES2Writer_t2488834775;
// ES2Settings
struct ES2Settings_t2754521479;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Array
struct Il2CppArray;
// ES2Type
struct ES2Type_t3533229726;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Settings2754521479.h"
#include "mscorlib_System_Array2840145358.h"
#include "ES2_ES2Type3533229726.h"
#include "ES2_ES2Keys_Key75327.h"
#include "mscorlib_System_String968488902.h"

// System.Void ES2Writer::.ctor(ES2Settings)
extern "C"  void ES2Writer__ctor_m606451213 (ES2Writer_t2488834775 * __this, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteRaw(System.Byte[])
extern "C"  void ES2Writer_WriteRaw_m1817744922 (ES2Writer_t2488834775 * __this, ByteU5BU5D_t58506160* ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteSystemArray(System.Array,ES2Type)
extern "C"  void ES2Writer_WriteSystemArray_m3321617797 (ES2Writer_t2488834775 * __this, Il2CppArray * ___param0, ES2Type_t3533229726 * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteICollection(System.Collections.ICollection,ES2Type)
extern "C"  void ES2Writer_WriteICollection_m624336973 (ES2Writer_t2488834775 * __this, Il2CppObject * ___param0, ES2Type_t3533229726 * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteIDictionary(System.Collections.IDictionary,ES2Type,ES2Type)
extern "C"  void ES2Writer_WriteIDictionary_m4019106971 (ES2Writer_t2488834775 * __this, Il2CppObject * ___param0, ES2Type_t3533229726 * ___keyType1, ES2Type_t3533229726 * ___valueType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteEncryptedSystemArray(System.Array,ES2Type)
extern "C"  void ES2Writer_WriteEncryptedSystemArray_m1414744853 (ES2Writer_t2488834775 * __this, Il2CppArray * ___param0, ES2Type_t3533229726 * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteEncryptedICollection(System.Collections.ICollection,ES2Type)
extern "C"  void ES2Writer_WriteEncryptedICollection_m2806237661 (ES2Writer_t2488834775 * __this, Il2CppObject * ___param0, ES2Type_t3533229726 * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteEncryptedIDictionary(System.Collections.IDictionary,ES2Type,ES2Type)
extern "C"  void ES2Writer_WriteEncryptedIDictionary_m1893813803 (ES2Writer_t2488834775 * __this, Il2CppObject * ___param0, ES2Type_t3533229726 * ___keyType1, ES2Type_t3533229726 * ___valueType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteHeader(ES2Keys/Key,ES2Type,ES2Type)
extern "C"  void ES2Writer_WriteHeader_m3905051102 (ES2Writer_t2488834775 * __this, uint8_t ___collectionType0, ES2Type_t3533229726 * ___valueType1, ES2Type_t3533229726 * ___keyType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteHeader(System.String,ES2Keys/Key,ES2Type,ES2Type)
extern "C"  void ES2Writer_WriteHeader_m4070663066 (ES2Writer_t2488834775 * __this, String_t* ___tag0, uint8_t ___collectionType1, ES2Type_t3533229726 * ___valueType2, ES2Type_t3533229726 * ___keyType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteLength()
extern "C"  void ES2Writer_WriteLength_m1998046657 (ES2Writer_t2488834775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WriteTerminator()
extern "C"  void ES2Writer_WriteTerminator_m2867609858 (ES2Writer_t2488834775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Writer ES2Writer::CreateEncryptedWriter()
extern "C"  ES2Writer_t2488834775 * ES2Writer_CreateEncryptedWriter_m103573363 (ES2Writer_t2488834775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2Writer::GetEncryptedBytes(System.String)
extern "C"  ByteU5BU5D_t58506160* ES2Writer_GetEncryptedBytes_m2424276767 (ES2Writer_t2488834775 * __this, String_t* ___password0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::Dispose()
extern "C"  void ES2Writer_Dispose_m898088763 (ES2Writer_t2488834775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Writer::Rename(System.String)
extern "C"  bool ES2Writer_Rename_m3936119134 (ES2Writer_t2488834775 * __this, String_t* ___newTag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ES2Writer::WritePropertyPrefix()
extern "C"  int32_t ES2Writer_WritePropertyPrefix_m2812139420 (ES2Writer_t2488834775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::WritePropertyLength(System.Int32)
extern "C"  void ES2Writer_WritePropertyLength_m2916334855 (ES2Writer_t2488834775 * __this, int32_t ___startPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::Save()
extern "C"  void ES2Writer_Save_m1783120195 (ES2Writer_t2488834775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::Save(System.Boolean)
extern "C"  void ES2Writer_Save_m152438138 (ES2Writer_t2488834775 * __this, bool ___checkForOverwrite0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Writer::Rename(System.String,System.String)
extern "C"  bool ES2Writer_Rename_m926602522 (ES2Writer_t2488834775 * __this, String_t* ___oldTag0, String_t* ___newTag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Writer::Delete(System.String)
extern "C"  void ES2Writer_Delete_m2247180785 (ES2Writer_t2488834775 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Writer::Delete()
extern "C"  bool ES2Writer_Delete_m3980457809 (ES2Writer_t2488834775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Writer ES2Writer::Create(System.String)
extern "C"  ES2Writer_t2488834775 * ES2Writer_Create_m1953413980 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Writer ES2Writer::Create(System.String,ES2Settings)
extern "C"  ES2Writer_t2488834775 * ES2Writer_Create_m1500785761 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Writer ES2Writer::Create(ES2Settings)
extern "C"  ES2Writer_t2488834775 * ES2Writer_Create_m833582629 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
