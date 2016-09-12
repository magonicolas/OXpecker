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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.DictionaryEntry>
struct Transform_1_t171333374;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "ES2_ES2Tag2053637046.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4165077913_gshared (Transform_1_t171333374 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4165077913(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t171333374 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4165077913_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Transform_1_Invoke_m158213443_gshared (Transform_1_t171333374 * __this, Il2CppObject * ___key0, ES2Tag_t2053637046  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m158213443(__this, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t171333374 *, Il2CppObject *, ES2Tag_t2053637046 , const MethodInfo*))Transform_1_Invoke_m158213443_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2161374498_gshared (Transform_1_t171333374 * __this, Il2CppObject * ___key0, ES2Tag_t2053637046  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2161374498(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t171333374 *, Il2CppObject *, ES2Tag_t2053637046 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2161374498_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Tag,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t130027246  Transform_1_EndInvoke_m551658343_gshared (Transform_1_t171333374 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m551658343(__this, ___result0, method) ((  DictionaryEntry_t130027246  (*) (Transform_1_t171333374 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m551658343_gshared)(__this, ___result0, method)
