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

// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t1833047712;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
extern "C"  void UnmanagedReadOrWrite__ctor_m1253704923 (UnmanagedReadOrWrite_t1833047712 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t UnmanagedReadOrWrite_Invoke_m1047666038 (UnmanagedReadOrWrite_t1833047712 * __this, IntPtr_t ___buffer0, int32_t ___length1, IntPtr_t ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_UnmanagedReadOrWrite_t1833047712(Il2CppObject* delegate, IntPtr_t ___buffer0, int32_t ___length1, IntPtr_t ___data2);
// System.IAsyncResult System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * UnmanagedReadOrWrite_BeginInvoke_m2861877311 (UnmanagedReadOrWrite_t1833047712 * __this, IntPtr_t ___buffer0, int32_t ___length1, IntPtr_t ___data2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::EndInvoke(System.IAsyncResult)
extern "C"  int32_t UnmanagedReadOrWrite_EndInvoke_m2398053531 (UnmanagedReadOrWrite_t1833047712 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
