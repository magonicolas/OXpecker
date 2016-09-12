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


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct ABCDStruct_t1432589895;
struct ABCDStruct_t1432589895_marshaled_pinvoke;

extern "C" void ABCDStruct_t1432589895_marshal_pinvoke(const ABCDStruct_t1432589895& unmarshaled, ABCDStruct_t1432589895_marshaled_pinvoke& marshaled);
extern "C" void ABCDStruct_t1432589895_marshal_pinvoke_back(const ABCDStruct_t1432589895_marshaled_pinvoke& marshaled, ABCDStruct_t1432589895& unmarshaled);
extern "C" void ABCDStruct_t1432589895_marshal_pinvoke_cleanup(ABCDStruct_t1432589895_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ABCDStruct_t1432589895;
struct ABCDStruct_t1432589895_marshaled_com;

extern "C" void ABCDStruct_t1432589895_marshal_com(const ABCDStruct_t1432589895& unmarshaled, ABCDStruct_t1432589895_marshaled_com& marshaled);
extern "C" void ABCDStruct_t1432589895_marshal_com_back(const ABCDStruct_t1432589895_marshaled_com& marshaled, ABCDStruct_t1432589895& unmarshaled);
extern "C" void ABCDStruct_t1432589895_marshal_com_cleanup(ABCDStruct_t1432589895_marshaled_com& marshaled);
