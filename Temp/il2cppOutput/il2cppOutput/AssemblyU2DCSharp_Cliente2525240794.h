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
// Sucursal[]
struct SucursalU5BU5D_t3251769057;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cliente
struct  Cliente_t2525240794  : public Il2CppObject
{
public:
	// System.String Cliente::cliente
	String_t* ___cliente_0;
	// Sucursal[] Cliente::sucursales
	SucursalU5BU5D_t3251769057* ___sucursales_1;
	// System.String Cliente::imagen
	String_t* ___imagen_2;

public:
	inline static int32_t get_offset_of_cliente_0() { return static_cast<int32_t>(offsetof(Cliente_t2525240794, ___cliente_0)); }
	inline String_t* get_cliente_0() const { return ___cliente_0; }
	inline String_t** get_address_of_cliente_0() { return &___cliente_0; }
	inline void set_cliente_0(String_t* value)
	{
		___cliente_0 = value;
		Il2CppCodeGenWriteBarrier(&___cliente_0, value);
	}

	inline static int32_t get_offset_of_sucursales_1() { return static_cast<int32_t>(offsetof(Cliente_t2525240794, ___sucursales_1)); }
	inline SucursalU5BU5D_t3251769057* get_sucursales_1() const { return ___sucursales_1; }
	inline SucursalU5BU5D_t3251769057** get_address_of_sucursales_1() { return &___sucursales_1; }
	inline void set_sucursales_1(SucursalU5BU5D_t3251769057* value)
	{
		___sucursales_1 = value;
		Il2CppCodeGenWriteBarrier(&___sucursales_1, value);
	}

	inline static int32_t get_offset_of_imagen_2() { return static_cast<int32_t>(offsetof(Cliente_t2525240794, ___imagen_2)); }
	inline String_t* get_imagen_2() const { return ___imagen_2; }
	inline String_t** get_address_of_imagen_2() { return &___imagen_2; }
	inline void set_imagen_2(String_t* value)
	{
		___imagen_2 = value;
		Il2CppCodeGenWriteBarrier(&___imagen_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
