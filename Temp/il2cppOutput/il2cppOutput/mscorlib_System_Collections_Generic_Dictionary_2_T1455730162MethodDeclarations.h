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

// System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>
struct Transform_1_t1455730162;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_503092386.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Serialization_De4116944666.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2422727666_gshared (Transform_1_t1455730162 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2422727666(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1455730162 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2422727666_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t503092386  Transform_1_Invoke_m2520148294_gshared (Transform_1_t1455730162 * __this, TypeNameKey_t4116944666  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2520148294(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t503092386  (*) (Transform_1_t1455730162 *, TypeNameKey_t4116944666 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m2520148294_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m321575537_gshared (Transform_1_t1455730162 * __this, TypeNameKey_t4116944666  ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m321575537(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1455730162 *, TypeNameKey_t4116944666 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m321575537_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t503092386  Transform_1_EndInvoke_m2384187268_gshared (Transform_1_t1455730162 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2384187268(__this, ___result0, method) ((  KeyValuePair_2_t503092386  (*) (Transform_1_t1455730162 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2384187268_gshared)(__this, ___result0, method)
