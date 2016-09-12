#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ping
struct  Ping_t2487698  : public Il2CppObject
{
public:
	// System.String Ping::nombre
	String_t* ___nombre_0;
	// System.String Ping::fecha
	String_t* ___fecha_1;

public:
	inline static int32_t get_offset_of_nombre_0() { return static_cast<int32_t>(offsetof(Ping_t2487698, ___nombre_0)); }
	inline String_t* get_nombre_0() const { return ___nombre_0; }
	inline String_t** get_address_of_nombre_0() { return &___nombre_0; }
	inline void set_nombre_0(String_t* value)
	{
		___nombre_0 = value;
		Il2CppCodeGenWriteBarrier(&___nombre_0, value);
	}

	inline static int32_t get_offset_of_fecha_1() { return static_cast<int32_t>(offsetof(Ping_t2487698, ___fecha_1)); }
	inline String_t* get_fecha_1() const { return ___fecha_1; }
	inline String_t** get_address_of_fecha_1() { return &___fecha_1; }
	inline void set_fecha_1(String_t* value)
	{
		___fecha_1 = value;
		Il2CppCodeGenWriteBarrier(&___fecha_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
