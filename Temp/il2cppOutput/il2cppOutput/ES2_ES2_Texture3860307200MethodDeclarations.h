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

// ES2_Texture
struct ES2_Texture_t3860307200;
// System.Object
struct Il2CppObject;
// ES2Writer
struct ES2Writer_t2488834775;
// ES2Reader
struct ES2Reader_t2333429543;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "ES2_ES2Writer2488834775.h"
#include "ES2_ES2Reader2333429543.h"

// System.Void ES2_Texture::.ctor()
extern "C"  void ES2_Texture__ctor_m3790332405 (ES2_Texture_t3860307200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2_Texture::Write(System.Object,ES2Writer)
extern "C"  void ES2_Texture_Write_m2435650967 (ES2_Texture_t3860307200 * __this, Il2CppObject * ___data0, ES2Writer_t2488834775 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2_Texture::Read(ES2Reader)
extern "C"  Il2CppObject * ES2_Texture_Read_m134394235 (ES2_Texture_t3860307200 * __this, ES2Reader_t2333429543 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2_Texture::Read(ES2Reader,System.Object)
extern "C"  void ES2_Texture_Read_m1997011220 (ES2_Texture_t3860307200 * __this, ES2Reader_t2333429543 * ___reader0, Il2CppObject * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
