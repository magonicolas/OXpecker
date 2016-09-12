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

// ES2_object
struct ES2_object_t2556878490;
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

// System.Void ES2_object::.ctor()
extern "C"  void ES2_object__ctor_m1257605751 (ES2_object_t2556878490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2_object::Write(System.Object,ES2Writer)
extern "C"  void ES2_object_Write_m210827989 (ES2_object_t2556878490 * __this, Il2CppObject * ___data0, ES2Writer_t2488834775 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2_object::Read(ES2Reader)
extern "C"  Il2CppObject * ES2_object_Read_m2802248691 (ES2_object_t2556878490 * __this, ES2Reader_t2333429543 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
