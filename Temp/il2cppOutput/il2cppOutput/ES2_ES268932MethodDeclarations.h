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
// ES2Settings
struct ES2Settings_t2754521479;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.TextAsset
struct TextAsset_t2461560304;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.Object
struct Il2CppObject;
// ES2Data
struct ES2Data_t3532730126;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2Settings2754521479.h"
#include "UnityEngine_UnityEngine_TextAsset2461560304.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"

// System.Void ES2::Init()
extern "C"  void ES2_Init_m296858627 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::SaveRaw(System.String,System.String)
extern "C"  void ES2_SaveRaw_m2731000580 (Il2CppObject * __this /* static, unused */, String_t* ___param0, String_t* ___identifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::SaveRaw(System.String,System.String,ES2Settings)
extern "C"  void ES2_SaveRaw_m3849779209 (Il2CppObject * __this /* static, unused */, String_t* ___param0, String_t* ___identifier1, ES2Settings_t2754521479 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::SaveRaw(System.Byte[],System.String)
extern "C"  void ES2_SaveRaw_m260553611 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___param0, String_t* ___identifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::SaveRaw(System.Byte[],System.String,ES2Settings)
extern "C"  void ES2_SaveRaw_m3776667152 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___param0, String_t* ___identifier1, ES2Settings_t2754521479 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::SaveRaw(UnityEngine.TextAsset,System.String)
extern "C"  void ES2_SaveRaw_m1677161160 (Il2CppObject * __this /* static, unused */, TextAsset_t2461560304 * ___param0, String_t* ___identifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::SaveRaw(UnityEngine.TextAsset,System.String,ES2Settings)
extern "C"  void ES2_SaveRaw_m2246648269 (Il2CppObject * __this /* static, unused */, TextAsset_t2461560304 * ___param0, String_t* ___identifier1, ES2Settings_t2754521479 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::AppendRaw(System.String,System.String)
extern "C"  void ES2_AppendRaw_m3091482657 (Il2CppObject * __this /* static, unused */, String_t* ___param0, String_t* ___identifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::AppendRaw(System.String,System.String,ES2Settings)
extern "C"  void ES2_AppendRaw_m3089873318 (Il2CppObject * __this /* static, unused */, String_t* ___param0, String_t* ___identifier1, ES2Settings_t2754521479 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::AppendRaw(System.Byte[],System.String)
extern "C"  void ES2_AppendRaw_m621035688 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___param0, String_t* ___identifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::AppendRaw(System.Byte[],System.String,ES2Settings)
extern "C"  void ES2_AppendRaw_m3016761261 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___param0, String_t* ___identifier1, ES2Settings_t2754521479 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::AppendRaw(UnityEngine.TextAsset,System.String)
extern "C"  void ES2_AppendRaw_m2531232485 (Il2CppObject * __this /* static, unused */, TextAsset_t2461560304 * ___param0, String_t* ___identifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::AppendRaw(UnityEngine.TextAsset,System.String,ES2Settings)
extern "C"  void ES2_AppendRaw_m3930388074 (Il2CppObject * __this /* static, unused */, TextAsset_t2461560304 * ___param0, String_t* ___identifier1, ES2Settings_t2754521479 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::SaveImage(UnityEngine.Texture2D,System.String)
extern "C"  void ES2_SaveImage_m510215563 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___tex0, String_t* ___identifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2::LoadRaw(System.String)
extern "C"  ByteU5BU5D_t58506160* ES2_LoadRaw_m562946375 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2::LoadRaw(System.String,ES2Settings)
extern "C"  ByteU5BU5D_t58506160* ES2_LoadRaw_m843762124 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2::LoadObject(System.String)
extern "C"  Il2CppObject * ES2_LoadObject_m1486807423 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2::LoadObject(System.String,ES2Settings)
extern "C"  Il2CppObject * ES2_LoadObject_m2223322628 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Data ES2::LoadAll(System.String)
extern "C"  ES2Data_t3532730126 * ES2_LoadAll_m80196979 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Data ES2::LoadAll(System.String,ES2Settings)
extern "C"  ES2Data_t3532730126 * ES2_LoadAll_m2280373240 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D ES2::LoadImage(System.String)
extern "C"  Texture2D_t2509538522 * ES2_LoadImage_m415459009 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D ES2::LoadImage(System.Byte[])
extern "C"  Texture2D_t2509538522 * ES2_LoadImage_m2652620680 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip ES2::LoadAudio(System.String)
extern "C"  AudioClip_t3714538611 * ES2_LoadAudio_m1399067839 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::CacheFile(System.String)
extern "C"  void ES2_CacheFile_m1667789109 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2::Exists(System.String)
extern "C"  bool ES2_Exists_m240104691 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2::Exists(System.String,ES2Settings)
extern "C"  bool ES2_Exists_m1139833720 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::Delete(System.String)
extern "C"  void ES2_Delete_m3380109924 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::Delete(System.String,ES2Settings)
extern "C"  void ES2_Delete_m1448314729 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::DeleteDefaultFolder()
extern "C"  void ES2_DeleteDefaultFolder_m159104499 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::Rename(System.String,System.String)
extern "C"  void ES2_Rename_m3904833261 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, String_t* ___newIdentifier1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::Rename(System.String,System.String,ES2Settings)
extern "C"  void ES2_Rename_m1357031026 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, String_t* ___newIdentifier1, ES2Settings_t2754521479 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2::GetFiles(System.String)
extern "C"  StringU5BU5D_t2956870243* ES2_GetFiles_m3784784079 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2::GetFiles(System.String,ES2Settings)
extern "C"  StringU5BU5D_t2956870243* ES2_GetFiles_m1772426580 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2::GetFiles(System.String,System.String)
extern "C"  StringU5BU5D_t2956870243* ES2_GetFiles_m2239318731 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, String_t* ___extension1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2::GetFolders(System.String)
extern "C"  StringU5BU5D_t2956870243* ES2_GetFolders_m1687891585 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2::GetFolders(System.String,ES2Settings)
extern "C"  StringU5BU5D_t2956870243* ES2_GetFolders_m3162247174 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2::GetTags(System.String)
extern "C"  StringU5BU5D_t2956870243* ES2_GetTags_m2204092739 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2::GetTags(System.String,ES2Settings)
extern "C"  StringU5BU5D_t2956870243* ES2_GetTags_m1718917064 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2::.cctor()
extern "C"  void ES2__cctor_m659866012 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
