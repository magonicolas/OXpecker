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
// Equipo[]
struct EquipoU5BU5D_t2437643590;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Producto
struct  Producto_t3355850112  : public Il2CppObject
{
public:
	// System.String Producto::producto
	String_t* ___producto_0;
	// Equipo[] Producto::equipos
	EquipoU5BU5D_t2437643590* ___equipos_1;

public:
	inline static int32_t get_offset_of_producto_0() { return static_cast<int32_t>(offsetof(Producto_t3355850112, ___producto_0)); }
	inline String_t* get_producto_0() const { return ___producto_0; }
	inline String_t** get_address_of_producto_0() { return &___producto_0; }
	inline void set_producto_0(String_t* value)
	{
		___producto_0 = value;
		Il2CppCodeGenWriteBarrier(&___producto_0, value);
	}

	inline static int32_t get_offset_of_equipos_1() { return static_cast<int32_t>(offsetof(Producto_t3355850112, ___equipos_1)); }
	inline EquipoU5BU5D_t2437643590* get_equipos_1() const { return ___equipos_1; }
	inline EquipoU5BU5D_t2437643590** get_address_of_equipos_1() { return &___equipos_1; }
	inline void set_equipos_1(EquipoU5BU5D_t2437643590* value)
	{
		___equipos_1 = value;
		Il2CppCodeGenWriteBarrier(&___equipos_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
