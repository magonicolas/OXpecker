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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Tag>>
struct Transform_1_t275825906;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_234519778.h"
#include "ES2_ES2Tag2053637046.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Tag>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m209333266_gshared (Transform_1_t275825906 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m209333266(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t275825906 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m209333266_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Tag>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t234519778  Transform_1_Invoke_m3934926374_gshared (Transform_1_t275825906 * __this, Il2CppObject * ___key0, ES2Tag_t2053637046  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3934926374(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t234519778  (*) (Transform_1_t275825906 *, Il2CppObject *, ES2Tag_t2053637046 , const MethodInfo*))Transform_1_Invoke_m3934926374_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Tag>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3017397329_gshared (Transform_1_t275825906 * __this, Il2CppObject * ___key0, ES2Tag_t2053637046  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3017397329(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t275825906 *, Il2CppObject *, ES2Tag_t2053637046 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3017397329_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Tag>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t234519778  Transform_1_EndInvoke_m2736862884_gshared (Transform_1_t275825906 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2736862884(__this, ___result0, method) ((  KeyValuePair_2_t234519778  (*) (Transform_1_t275825906 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2736862884_gshared)(__this, ___result0, method)
