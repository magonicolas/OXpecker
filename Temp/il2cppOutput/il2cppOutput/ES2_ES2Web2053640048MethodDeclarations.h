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

// ES2Web
struct ES2Web_t2053640048;
// System.String
struct String_t;
// ES2Settings
struct ES2Settings_t2754521479;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.String[]
struct StringU5BU5D_t2956870243;
// UnityEngine.WWWForm
struct WWWForm_t3999572776;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2Settings2754521479.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"

// System.Void ES2Web::.ctor(System.String)
extern "C"  void ES2Web__ctor_m1359209281 (ES2Web_t2053640048 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Web::.ctor(System.String,ES2Settings)
extern "C"  void ES2Web__ctor_m1337697478 (ES2Web_t2053640048 * __this, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2Web::get_data()
extern "C"  ByteU5BU5D_t58506160* ES2Web_get_data_m1258526400 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2Web::get_text()
extern "C"  String_t* ES2Web_get_text_m3273210492 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ES2Web::get_progress()
extern "C"  float ES2Web_get_progress_m1709968997 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ES2Web::get_uploadProgress()
extern "C"  float ES2Web_get_uploadProgress_m2468623878 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ES2Web::UploadRaw(System.String)
extern "C"  Il2CppObject * ES2Web_UploadRaw_m840372624 (ES2Web_t2053640048 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ES2Web::UploadRaw(System.Byte[])
extern "C"  Il2CppObject * ES2Web_UploadRaw_m3077534295 (ES2Web_t2053640048 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ES2Web::UploadImage(UnityEngine.Texture2D)
extern "C"  Il2CppObject * ES2Web_UploadImage_m3063947863 (ES2Web_t2053640048 * __this, Texture2D_t2509538522 * ___tex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ES2Web::UploadFile(System.String)
extern "C"  Il2CppObject * ES2Web_UploadFile_m2366385774 (ES2Web_t2053640048 * __this, String_t* ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D ES2Web::LoadImage()
extern "C"  Texture2D_t2509538522 * ES2Web_LoadImage_m1287026807 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2Web::LoadRaw()
extern "C"  ByteU5BU5D_t58506160* ES2Web_LoadRaw_m2843474103 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Web::SaveToFile(System.String)
extern "C"  void ES2Web_SaveToFile_m2303306923 (ES2Web_t2053640048 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Web::SaveToFile(System.String,ES2Settings)
extern "C"  void ES2Web_SaveToFile_m3940327216 (ES2Web_t2053640048 * __this, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Web::AppendToFile(System.String)
extern "C"  void ES2Web_AppendToFile_m1458613166 (ES2Web_t2053640048 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Web::AppendToFile(System.String,ES2Settings)
extern "C"  void ES2Web_AppendToFile_m3196465587 (ES2Web_t2053640048 * __this, String_t* ___identifier0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ES2Web::DownloadFilenames()
extern "C"  Il2CppObject * ES2Web_DownloadFilenames_m65467055 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ES2Web::GetFilenames()
extern "C"  StringU5BU5D_t2956870243* ES2Web_GetFilenames_m2861845850 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ES2Web::Download()
extern "C"  Il2CppObject * ES2Web_Download_m330101055 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ES2Web::Delete()
extern "C"  Il2CppObject * ES2Web_Delete_m160950050 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm ES2Web::CreateUploadForm(System.Byte[])
extern "C"  WWWForm_t3999572776 * ES2Web_CreateUploadForm_m1597462838 (ES2Web_t2053640048 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm ES2Web::CreateDownloadForm()
extern "C"  WWWForm_t3999572776 * ES2Web_CreateDownloadForm_m442086266 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm ES2Web::CreateGetFilesForm()
extern "C"  WWWForm_t3999572776 * ES2Web_CreateGetFilesForm_m861699315 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Web::CheckWWWUsage()
extern "C"  void ES2Web_CheckWWWUsage_m2610732913 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Web::CheckDownloadUsage()
extern "C"  void ES2Web_CheckDownloadUsage_m2752258516 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Web::getError()
extern "C"  bool ES2Web_getError_m2801193941 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm ES2Web::CreateForm()
extern "C"  WWWForm_t3999572776 * ES2Web_CreateForm_m566747602 (ES2Web_t2053640048 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2Web::StringToMD5(System.String)
extern "C"  String_t* ES2Web_StringToMD5_m2379198068 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
