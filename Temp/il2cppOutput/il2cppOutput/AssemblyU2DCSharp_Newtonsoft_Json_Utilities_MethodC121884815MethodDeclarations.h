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

// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t121884815;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void MethodCall_2__ctor_m42691767_gshared (MethodCall_2_t121884815 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define MethodCall_2__ctor_m42691767(__this, ___object0, ___method1, method) ((  void (*) (MethodCall_2_t121884815 *, Il2CppObject *, IntPtr_t, const MethodInfo*))MethodCall_2__ctor_m42691767_gshared)(__this, ___object0, ___method1, method)
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
extern "C"  Il2CppObject * MethodCall_2_Invoke_m393306683_gshared (MethodCall_2_t121884815 * __this, Il2CppObject * ___target0, ObjectU5BU5D_t11523773* ___args1, const MethodInfo* method);
#define MethodCall_2_Invoke_m393306683(__this, ___target0, ___args1, method) ((  Il2CppObject * (*) (MethodCall_2_t121884815 *, Il2CppObject *, ObjectU5BU5D_t11523773*, const MethodInfo*))MethodCall_2_Invoke_m393306683_gshared)(__this, ___target0, ___args1, method)
// System.IAsyncResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::BeginInvoke(T,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MethodCall_2_BeginInvoke_m1081648150_gshared (MethodCall_2_t121884815 * __this, Il2CppObject * ___target0, ObjectU5BU5D_t11523773* ___args1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define MethodCall_2_BeginInvoke_m1081648150(__this, ___target0, ___args1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (MethodCall_2_t121884815 *, Il2CppObject *, ObjectU5BU5D_t11523773*, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))MethodCall_2_BeginInvoke_m1081648150_gshared)(__this, ___target0, ___args1, ___callback2, ___object3, method)
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * MethodCall_2_EndInvoke_m643072357_gshared (MethodCall_2_t121884815 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define MethodCall_2_EndInvoke_m643072357(__this, ___result0, method) ((  Il2CppObject * (*) (MethodCall_2_t121884815 *, Il2CppObject *, const MethodInfo*))MethodCall_2_EndInvoke_m643072357_gshared)(__this, ___result0, method)
