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

// System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>>
struct Transform_1_t1913663074;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_640975206.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_Utilities_Conver3846323878.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m542678812_gshared (Transform_1_t1913663074 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m542678812(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1913663074 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m542678812_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t640975206  Transform_1_Invoke_m3807657948_gshared (Transform_1_t1913663074 * __this, TypeConvertKey_t3846323878  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3807657948(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t640975206  (*) (Transform_1_t1913663074 *, TypeConvertKey_t3846323878 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3807657948_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1413603719_gshared (Transform_1_t1913663074 * __this, TypeConvertKey_t3846323878  ___key0, Il2CppObject * ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1413603719(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1913663074 *, TypeConvertKey_t3846323878 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1413603719_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t640975206  Transform_1_EndInvoke_m3683852078_gshared (Transform_1_t1913663074 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3683852078(__this, ___result0, method) ((  KeyValuePair_2_t640975206  (*) (Transform_1_t1913663074 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3683852078_gshared)(__this, ___result0, method)
