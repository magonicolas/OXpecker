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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "ES2_ES2Tag2053637046.h"
#include "mscorlib_System_String968488902.h"

// System.Void ES2Tag::.ctor(System.String,System.Int64,System.Int64,System.Int64)
extern "C"  void ES2Tag__ctor_m3173068913 (ES2Tag_t2053637046 * __this, String_t* ___tag0, int64_t ___position1, int64_t ___settingsPosition2, int64_t ___nextTagPosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ES2Tag::.ctor(System.Boolean)
extern "C"  void ES2Tag__ctor_m2982647314 (ES2Tag_t2053637046 * __this, bool ___isNull0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ES2Tag_t2053637046;
struct ES2Tag_t2053637046_marshaled_pinvoke;

extern "C" void ES2Tag_t2053637046_marshal_pinvoke(const ES2Tag_t2053637046& unmarshaled, ES2Tag_t2053637046_marshaled_pinvoke& marshaled);
extern "C" void ES2Tag_t2053637046_marshal_pinvoke_back(const ES2Tag_t2053637046_marshaled_pinvoke& marshaled, ES2Tag_t2053637046& unmarshaled);
extern "C" void ES2Tag_t2053637046_marshal_pinvoke_cleanup(ES2Tag_t2053637046_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ES2Tag_t2053637046;
struct ES2Tag_t2053637046_marshaled_com;

extern "C" void ES2Tag_t2053637046_marshal_com(const ES2Tag_t2053637046& unmarshaled, ES2Tag_t2053637046_marshaled_com& marshaled);
extern "C" void ES2Tag_t2053637046_marshal_com_back(const ES2Tag_t2053637046_marshaled_com& marshaled, ES2Tag_t2053637046& unmarshaled);
extern "C" void ES2Tag_t2053637046_marshal_com_cleanup(ES2Tag_t2053637046_marshaled_com& marshaled);
