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

// ES2Reader
struct ES2Reader_t2333429543;
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
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.String
struct String_t;
// ES2Writer
struct ES2Writer_t2488834775;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.String[]
struct StringU5BU5D_t2956870243;
// ES2Data
struct ES2Data_t3532730126;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.Dictionary`2<System.String,ES2Header>
struct Dictionary_2_t3684835937;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Settings2754521479.h"
#include "ES2_ES2Type3533229726.h"
#include "mscorlib_System_Type2779229935.h"
#include "ES2_ES2Keys_Key75327.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2Header2047138033.h"
#include "ES2_ES2Writer2488834775.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void ES2Reader::.ctor(ES2Settings)
extern "C"  void ES2Reader__ctor_m3779928669 (ES2Reader_t2333429543 * __this, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::.ctor(System.Byte[],ES2Settings)
extern "C"  void ES2Reader__ctor_m3512108256 (ES2Reader_t2333429543 * __this, ByteU5BU5D_t58506160* ___bytes0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ES2Reader::ReadSystemArray(ES2Type)
extern "C"  Il2CppArray * ES2Reader_ReadSystemArray_m3018660581 (ES2Reader_t2333429543 * __this, ES2Type_t3533229726 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection ES2Reader::ReadICollection(System.Type,ES2Type)
extern "C"  Il2CppObject * ES2Reader_ReadICollection_m2764505424 (ES2Reader_t2333429543 * __this, Type_t * ___collectionType0, ES2Type_t3533229726 * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ES2Reader::ReadIDictionary(System.Type,ES2Type,ES2Type)
extern "C"  Il2CppObject * ES2Reader_ReadIDictionary_m757243550 (ES2Reader_t2333429543 * __this, Type_t * ___dictionaryType0, ES2Type_t3533229726 * ___keyType1, ES2Type_t3533229726 * ___valueType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ES2Reader::ReadEncryptedSystemArray(ES2Type)
extern "C"  Il2CppArray * ES2Reader_ReadEncryptedSystemArray_m2048562961 (ES2Reader_t2333429543 * __this, ES2Type_t3533229726 * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection ES2Reader::ReadEncryptedICollection(System.Type,ES2Type)
extern "C"  Il2CppObject * ES2Reader_ReadEncryptedICollection_m1982049522 (ES2Reader_t2333429543 * __this, Type_t * ___collectionType0, ES2Type_t3533229726 * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ES2Reader::ReadEncryptedIDictionary(System.Type,ES2Type,ES2Type)
extern "C"  Il2CppObject * ES2Reader_ReadEncryptedIDictionary_m2003651408 (ES2Reader_t2333429543 * __this, Type_t * ___dictionaryType0, ES2Type_t3533229726 * ___keyType1, ES2Type_t3533229726 * ___valueType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::ProcessHeader(ES2Keys/Key,ES2Type,ES2Type,System.String)
extern "C"  void ES2Reader_ProcessHeader_m674960410 (ES2Reader_t2333429543 * __this, uint8_t ___expectedCollectionType0, ES2Type_t3533229726 * ___expectedValue1, ES2Type_t3533229726 * ___expectedKey2, String_t* ___tag3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::ProcessHeader(ES2Keys/Key,ES2Type,ES2Type)
extern "C"  void ES2Reader_ProcessHeader_m728164446 (ES2Reader_t2333429543 * __this, uint8_t ___expectedCollectionType0, ES2Type_t3533229726 * ___expectedValue1, ES2Type_t3533229726 * ___expectedKey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Header ES2Reader::ReadHeader()
extern "C"  ES2Header_t2047138033  ES2Reader_ReadHeader_m529686103 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::Next()
extern "C"  bool ES2Reader_Next_m2780480553 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::Skip()
extern "C"  void ES2Reader_Skip_m1492832533 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::WriteBytesBeforeTag(System.String,ES2Writer)
extern "C"  bool ES2Reader_WriteBytesBeforeTag_m3016241596 (ES2Reader_t2333429543 * __this, String_t* ___tag0, ES2Writer_t2488834775 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::WriteRemainingBytes(ES2Writer)
extern "C"  bool ES2Reader_WriteRemainingBytes_m338590203 (ES2Reader_t2333429543 * __this, ES2Writer_t2488834775 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::WriteBytesBeforeTagLowMemory(System.String,ES2Writer)
extern "C"  bool ES2Reader_WriteBytesBeforeTagLowMemory_m1383029499 (ES2Reader_t2333429543 * __this, String_t* ___tag0, ES2Writer_t2488834775 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::WriteRemainingBytesLowMemory(ES2Writer)
extern "C"  bool ES2Reader_WriteRemainingBytesLowMemory_m3670709092 (ES2Reader_t2333429543 * __this, ES2Writer_t2488834775 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::RenameTag(System.String,System.String,ES2Writer)
extern "C"  bool ES2Reader_RenameTag_m3526485515 (ES2Reader_t2333429543 * __this, String_t* ___oldTag0, String_t* ___newTag1, ES2Writer_t2488834775 * ___writer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::DeleteTag(System.String,ES2Writer)
extern "C"  bool ES2Reader_DeleteTag_m1345566524 (ES2Reader_t2333429543 * __this, String_t* ___tag0, ES2Writer_t2488834775 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::WriteCurrentTag(ES2Writer)
extern "C"  void ES2Reader_WriteCurrentTag_m1713357711 (ES2Reader_t2333429543 * __this, ES2Writer_t2488834775 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::DeleteTags(System.Collections.Generic.ICollection`1<System.String>,ES2Writer)
extern "C"  bool ES2Reader_DeleteTags_m3822526476 (ES2Reader_t2333429543 * __this, Il2CppObject* ___tags0, ES2Writer_t2488834775 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2Reader::GetTags()
extern "C"  StringU5BU5D_t2956870243* ES2Reader_GetTags_m4207468572 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2Reader::ReadMeshSettings()
extern "C"  ByteU5BU5D_t58506160* ES2Reader_ReadMeshSettings_m2125036562 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2Reader::GetDecryptedBytes()
extern "C"  ByteU5BU5D_t58506160* ES2Reader_GetDecryptedBytes_m2352459851 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Reader ES2Reader::GetEncryptedReader()
extern "C"  ES2Reader_t2333429543 * ES2Reader_GetEncryptedReader_m2774897595 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ES2Reader::get_Length()
extern "C"  int32_t ES2Reader_get_Length_m3644828747 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::Reset()
extern "C"  void ES2Reader_Reset_m2277837531 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::Dispose()
extern "C"  void ES2Reader_Dispose_m1091975403 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::CacheFile()
extern "C"  void ES2Reader_CacheFile_m1014685802 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::ScanToTag(System.String)
extern "C"  bool ES2Reader_ScanToTag_m2951293556 (ES2Reader_t2333429543 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::ScanToTag()
extern "C"  bool ES2Reader_ScanToTag_m1822475086 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::TagExists(System.String)
extern "C"  bool ES2Reader_TagExists_m1477095936 (ES2Reader_t2333429543 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Reader::TagExists()
extern "C"  bool ES2Reader_TagExists_m1465772098 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2Reader::ReadRaw()
extern "C"  ByteU5BU5D_t58506160* ES2Reader_ReadRaw_m2275899432 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Data ES2Reader::ReadAll()
extern "C"  ES2Data_t3532730126 * ES2Reader_ReadAll_m3864448060 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2Reader::ReadObject()
extern "C"  Il2CppObject * ES2Reader_ReadObject_m4256269558 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::ReadObject(System.Object)
extern "C"  void ES2Reader_ReadObject_m3417034921 (ES2Reader_t2333429543 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2Reader::ReadObject(System.String)
extern "C"  Il2CppObject * ES2Reader_ReadObject_m3345373644 (ES2Reader_t2333429543 * __this, String_t* ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::ReadObject(System.String,System.Object)
extern "C"  void ES2Reader_ReadObject_m949159077 (ES2Reader_t2333429543 * __this, String_t* ___tag0, Il2CppObject * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::ReadComponent(UnityEngine.GameObject)
extern "C"  void ES2Reader_ReadComponent_m100687819 (ES2Reader_t2333429543 * __this, GameObject_t4012695102 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Reader::ReadComponent(System.String,UnityEngine.GameObject)
extern "C"  void ES2Reader_ReadComponent_m1177856335 (ES2Reader_t2333429543 * __this, String_t* ___tag0, GameObject_t4012695102 * ___go1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,ES2Header> ES2Reader::ReadAllHeaders()
extern "C"  Dictionary_2_t3684835937 * ES2Reader_ReadAllHeaders_m1829692726 (ES2Reader_t2333429543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ES2Reader::GetMultidimensionalIndices(System.Array,System.Int32)
extern "C"  Int32U5BU5D_t1809983122* ES2Reader_GetMultidimensionalIndices_m2592244794 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___a0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Reader ES2Reader::Create(System.String)
extern "C"  ES2Reader_t2333429543 * ES2Reader_Create_m3283829436 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Reader ES2Reader::Create(System.String,ES2Settings)
extern "C"  ES2Reader_t2333429543 * ES2Reader_Create_m2689639361 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Reader ES2Reader::Create(ES2Settings)
extern "C"  ES2Reader_t2333429543 * ES2Reader_Create_m3342226821 (Il2CppObject * __this /* static, unused */, ES2Settings_t2754521479 * ___settings0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Reader ES2Reader::Create(System.Byte[],ES2Settings)
extern "C"  ES2Reader_t2333429543 * ES2Reader_Create_m1811091976 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
