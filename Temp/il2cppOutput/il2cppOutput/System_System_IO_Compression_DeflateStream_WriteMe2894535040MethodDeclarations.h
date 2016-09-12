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

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t2894535040;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte2778693821.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteMethod__ctor_m3646165827 (WriteMethod_t2894535040 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  void WriteMethod_Invoke_m4147400684 (WriteMethod_t2894535040 * __this, ByteU5BU5D_t58506160* ___array0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteMethod_t2894535040(Il2CppObject* delegate, ByteU5BU5D_t58506160* ___array0, int32_t ___offset1, int32_t ___count2);
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WriteMethod_BeginInvoke_m703457547 (WriteMethod_t2894535040 * __this, ByteU5BU5D_t58506160* ___array0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
extern "C"  void WriteMethod_EndInvoke_m3252788947 (WriteMethod_t2894535040 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
