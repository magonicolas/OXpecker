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

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2FilenameData816641461.h"
#include "mscorlib_System_String968488902.h"
#include "ES2_ES2Settings2754521479.h"
#include "ES2_ES2FilenameData_PathType1299067167.h"
#include "ES2_ES2Settings_SaveLocation2000964722.h"

// System.Void ES2FilenameData::.ctor(System.String,ES2Settings,System.Boolean)
extern "C"  void ES2FilenameData__ctor_m718690678 (ES2FilenameData_t816641461 * __this, String_t* ___path0, ES2Settings_t2754521479 * ___settings1, bool ___useParameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2FilenameData::.ctor(System.String,ES2Settings)
extern "C"  void ES2FilenameData__ctor_m267904807 (ES2FilenameData_t816641461 * __this, String_t* ___path0, ES2Settings_t2754521479 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2FilenameData::Init(System.String,ES2Settings,System.Boolean)
extern "C"  void ES2FilenameData_Init_m1578651658 (ES2FilenameData_t816641461 * __this, String_t* ___path0, ES2Settings_t2754521479 * ___settings1, bool ___useParameters2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2FilenameData::ProcessParameter(System.String,System.String,ES2Settings)
extern "C"  void ES2FilenameData_ProcessParameter_m1209145253 (ES2FilenameData_t816641461 * __this, String_t* ___name0, String_t* ___value1, ES2Settings_t2754521479 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ES2FilenameData/PathType ES2FilenameData::GetPathType(System.String)
extern "C"  int32_t ES2FilenameData_GetPathType_m354088607 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FilenameData::PathIsURL(System.String)
extern "C"  bool ES2FilenameData_PathIsURL_m175961380 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FilenameData::PathIsAbsolute(System.String)
extern "C"  bool ES2FilenameData_PathIsAbsolute_m674450872 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FilenameData::PathIsFolder(System.String)
extern "C"  bool ES2FilenameData_PathIsFolder_m1761400161 (Il2CppObject * __this /* static, unused */, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FilenameData::HasTag()
extern "C"  bool ES2FilenameData_HasTag_m67678692 (ES2FilenameData_t816641461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2FilenameData::GetPersistentPath()
extern "C"  String_t* ES2FilenameData_GetPersistentPath_m954104691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FilenameData::IsURL()
extern "C"  bool ES2FilenameData_IsURL_m4286718211 (ES2FilenameData_t816641461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FilenameData::IsFolder()
extern "C"  bool ES2FilenameData_IsFolder_m3928506044 (ES2FilenameData_t816641461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FilenameData::IsFile()
extern "C"  bool ES2FilenameData_IsFile_m3632061322 (ES2FilenameData_t816641461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ES2FilenameData::IsAbsolute()
extern "C"  bool ES2FilenameData_IsAbsolute_m3715568197 (ES2FilenameData_t816641461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2FilenameData::GetSavePath(ES2Settings/SaveLocation)
extern "C"  String_t* ES2FilenameData_GetSavePath_m352115103 (ES2FilenameData_t816641461 * __this, int32_t ___saveLocation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2FilenameData::get_directoryPath()
extern "C"  String_t* ES2FilenameData_get_directoryPath_m4062878858 (ES2FilenameData_t816641461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ES2FilenameData::get_resourcesPath()
extern "C"  String_t* ES2FilenameData_get_resourcesPath_m2828964418 (ES2FilenameData_t816641461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2FilenameData::.cctor()
extern "C"  void ES2FilenameData__cctor_m3851504589 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ES2FilenameData_t816641461;
struct ES2FilenameData_t816641461_marshaled_pinvoke;

extern "C" void ES2FilenameData_t816641461_marshal_pinvoke(const ES2FilenameData_t816641461& unmarshaled, ES2FilenameData_t816641461_marshaled_pinvoke& marshaled);
extern "C" void ES2FilenameData_t816641461_marshal_pinvoke_back(const ES2FilenameData_t816641461_marshaled_pinvoke& marshaled, ES2FilenameData_t816641461& unmarshaled);
extern "C" void ES2FilenameData_t816641461_marshal_pinvoke_cleanup(ES2FilenameData_t816641461_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ES2FilenameData_t816641461;
struct ES2FilenameData_t816641461_marshaled_com;

extern "C" void ES2FilenameData_t816641461_marshal_com(const ES2FilenameData_t816641461& unmarshaled, ES2FilenameData_t816641461_marshaled_com& marshaled);
extern "C" void ES2FilenameData_t816641461_marshal_com_back(const ES2FilenameData_t816641461_marshaled_com& marshaled, ES2FilenameData_t816641461& unmarshaled);
extern "C" void ES2FilenameData_t816641461_marshal_com_cleanup(ES2FilenameData_t816641461_marshaled_com& marshaled);
