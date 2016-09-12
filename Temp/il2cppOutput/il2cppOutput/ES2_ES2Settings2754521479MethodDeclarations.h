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

// ES2Settings
struct ES2Settings_t2754521479;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2Settings_SaveLocation2000964722.h"

// System.Void ES2Settings::.ctor(System.String)
extern "C"  void ES2Settings__ctor_m939208820 (ES2Settings_t2754521479 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Settings::.ctor(ES2Settings/SaveLocation)
extern "C"  void ES2Settings__ctor_m2505463188 (ES2Settings_t2754521479 * __this, int32_t ___saveLocation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Settings::.ctor()
extern "C"  void ES2Settings__ctor_m1371340110 (ES2Settings_t2754521479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Settings::Init()
extern "C"  void ES2Settings_Init_m3598004038 (ES2Settings_t2754521479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Settings ES2Settings::Clone()
extern "C"  ES2Settings_t2754521479 * ES2Settings_Clone_m3741987189 (ES2Settings_t2754521479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2Settings ES2Settings::Clone(System.String)
extern "C"  ES2Settings_t2754521479 * ES2Settings_Clone_m3851170733 (ES2Settings_t2754521479 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ES2Settings::MeshSettingsToByteArray()
extern "C"  ByteU5BU5D_t58506160* ES2Settings_MeshSettingsToByteArray_m1799237564 (ES2Settings_t2754521479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Settings::MeshSettingsFromByteArray(System.Byte[])
extern "C"  void ES2Settings_MeshSettingsFromByteArray_m835917094 (ES2Settings_t2754521479 * __this, ByteU5BU5D_t58506160* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2Settings::get_tag()
extern "C"  String_t* ES2Settings_get_tag_m3490415136 (ES2Settings_t2754521479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Settings::set_tag(System.String)
extern "C"  void ES2Settings_set_tag_m260803289 (ES2Settings_t2754521479 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2Settings::get_IsImageFile()
extern "C"  bool ES2Settings_get_IsImageFile_m2226916624 (ES2Settings_t2754521479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
