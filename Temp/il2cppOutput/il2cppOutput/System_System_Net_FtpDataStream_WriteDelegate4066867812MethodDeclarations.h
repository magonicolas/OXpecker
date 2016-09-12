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

// System.Net.FtpDataStream/WriteDelegate
struct WriteDelegate_t4066867813;
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

// System.Void System.Net.FtpDataStream/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteDelegate__ctor_m4253415927 (WriteDelegate_t4066867813 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream/WriteDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C"  void WriteDelegate_Invoke_m4256820664 (WriteDelegate_t4066867813 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t4066867813(Il2CppObject* delegate, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___size2);
// System.IAsyncResult System.Net.FtpDataStream/WriteDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WriteDelegate_BeginInvoke_m3502042447 (WriteDelegate_t4066867813 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___size2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpDataStream/WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void WriteDelegate_EndInvoke_m937099143 (WriteDelegate_t4066867813 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
