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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Header,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Header>>
struct Transform_1_t2848283046;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_228020765.h"
#include "ES2_ES2Header2047138033.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Header,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Header>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1326917634_gshared (Transform_1_t2848283046 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1326917634(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2848283046 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1326917634_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Header,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Header>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t228020765  Transform_1_Invoke_m2327384502_gshared (Transform_1_t2848283046 * __this, Il2CppObject * ___key0, ES2Header_t2047138033  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2327384502(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t228020765  (*) (Transform_1_t2848283046 *, Il2CppObject *, ES2Header_t2047138033 , const MethodInfo*))Transform_1_Invoke_m2327384502_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Header,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Header>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1488679777_gshared (Transform_1_t2848283046 * __this, Il2CppObject * ___key0, ES2Header_t2047138033  ___value1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1488679777(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2848283046 *, Il2CppObject *, ES2Header_t2047138033 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1488679777_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,ES2Header,System.Collections.Generic.KeyValuePair`2<System.Object,ES2Header>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t228020765  Transform_1_EndInvoke_m110657812_gshared (Transform_1_t2848283046 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m110657812(__this, ___result0, method) ((  KeyValuePair_2_t228020765  (*) (Transform_1_t2848283046 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m110657812_gshared)(__this, ___result0, method)
