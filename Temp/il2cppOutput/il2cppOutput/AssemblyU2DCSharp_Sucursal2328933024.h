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
// Producto[]
struct ProductoU5BU5D_t1244316801;
// Ping[]
struct PingU5BU5D_t4000544743;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sucursal
struct  Sucursal_t2328933024  : public Il2CppObject
{
public:
	// System.String Sucursal::sucursal
	String_t* ___sucursal_0;
	// Producto[] Sucursal::producto
	ProductoU5BU5D_t1244316801* ___producto_1;
	// Ping[] Sucursal::ping
	PingU5BU5D_t4000544743* ___ping_2;

public:
	inline static int32_t get_offset_of_sucursal_0() { return static_cast<int32_t>(offsetof(Sucursal_t2328933024, ___sucursal_0)); }
	inline String_t* get_sucursal_0() const { return ___sucursal_0; }
	inline String_t** get_address_of_sucursal_0() { return &___sucursal_0; }
	inline void set_sucursal_0(String_t* value)
	{
		___sucursal_0 = value;
		Il2CppCodeGenWriteBarrier(&___sucursal_0, value);
	}

	inline static int32_t get_offset_of_producto_1() { return static_cast<int32_t>(offsetof(Sucursal_t2328933024, ___producto_1)); }
	inline ProductoU5BU5D_t1244316801* get_producto_1() const { return ___producto_1; }
	inline ProductoU5BU5D_t1244316801** get_address_of_producto_1() { return &___producto_1; }
	inline void set_producto_1(ProductoU5BU5D_t1244316801* value)
	{
		___producto_1 = value;
		Il2CppCodeGenWriteBarrier(&___producto_1, value);
	}

	inline static int32_t get_offset_of_ping_2() { return static_cast<int32_t>(offsetof(Sucursal_t2328933024, ___ping_2)); }
	inline PingU5BU5D_t4000544743* get_ping_2() const { return ___ping_2; }
	inline PingU5BU5D_t4000544743** get_address_of_ping_2() { return &___ping_2; }
	inline void set_ping_2(PingU5BU5D_t4000544743* value)
	{
		___ping_2 = value;
		Il2CppCodeGenWriteBarrier(&___ping_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
