﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Schema.JsonSchemaType,Newtonsoft.Json.Schema.JsonSchemaType>
struct Transform_1_t3171042666;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Schema_JsonSchem2257008021.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Schema.JsonSchemaType,Newtonsoft.Json.Schema.JsonSchemaType>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1185491017_gshared (Transform_1_t3171042666 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1185491017(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3171042666 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1185491017_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Schema.JsonSchemaType,Newtonsoft.Json.Schema.JsonSchemaType>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m3682491923_gshared (Transform_1_t3171042666 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3682491923(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t3171042666 *, Il2CppObject *, int32_t, const MethodInfo*))Transform_1_Invoke_m3682491923_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Schema.JsonSchemaType,Newtonsoft.Json.Schema.JsonSchemaType>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m295632754_gshared (Transform_1_t3171042666 * __this, Il2CppObject * ___key0, int32_t ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m295632754(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3171042666 *, Il2CppObject *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m295632754_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Newtonsoft.Json.Schema.JsonSchemaType,Newtonsoft.Json.Schema.JsonSchemaType>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m2169817239_gshared (Transform_1_t3171042666 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2169817239(__this, ___result0, method) ((  int32_t (*) (Transform_1_t3171042666 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2169817239_gshared)(__this, ___result0, method)
