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

// ES2_Mesh
struct ES2_Mesh_t2164777000;
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

// System.Void ES2_Mesh::.ctor()
extern "C"  void ES2_Mesh__ctor_m1544217641 (ES2_Mesh_t2164777000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2_Mesh::Write(System.Object,ES2Writer)
extern "C"  void ES2_Mesh_Write_m1469896931 (ES2_Mesh_t2164777000 * __this, Il2CppObject * ___data0, ES2Writer_t2488834775 * ___writer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ES2_Mesh::Read(ES2Reader)
extern "C"  Il2CppObject * ES2_Mesh_Read_m446669413 (ES2_Mesh_t2164777000 * __this, ES2Reader_t2333429543 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2_Mesh::Read(ES2Reader,System.Object)
extern "C"  void ES2_Mesh_Read_m1965857864 (ES2_Mesh_t2164777000 * __this, ES2Reader_t2333429543 * ___reader0, Il2CppObject * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
