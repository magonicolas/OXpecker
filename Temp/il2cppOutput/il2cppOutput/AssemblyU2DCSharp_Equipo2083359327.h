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

// Equipo
struct  Equipo_t2083359327  : public Il2CppObject
{
public:
	// System.String Equipo::uniqueID
	String_t* ___uniqueID_0;
	// System.Boolean Equipo::online
	bool ___online_1;
	// System.String Equipo::version
	String_t* ___version_2;
	// System.String Equipo::ultimaConexion
	String_t* ___ultimaConexion_3;
	// System.String Equipo::hora
	String_t* ___hora_4;
	// System.String Equipo::modeloReal
	String_t* ___modeloReal_5;
	// System.String Equipo::MAC
	String_t* ___MAC_6;
	// System.String Equipo::idPunto
	String_t* ___idPunto_7;

public:
	inline static int32_t get_offset_of_uniqueID_0() { return static_cast<int32_t>(offsetof(Equipo_t2083359327, ___uniqueID_0)); }
	inline String_t* get_uniqueID_0() const { return ___uniqueID_0; }
	inline String_t** get_address_of_uniqueID_0() { return &___uniqueID_0; }
	inline void set_uniqueID_0(String_t* value)
	{
		___uniqueID_0 = value;
		Il2CppCodeGenWriteBarrier(&___uniqueID_0, value);
	}

	inline static int32_t get_offset_of_online_1() { return static_cast<int32_t>(offsetof(Equipo_t2083359327, ___online_1)); }
	inline bool get_online_1() const { return ___online_1; }
	inline bool* get_address_of_online_1() { return &___online_1; }
	inline void set_online_1(bool value)
	{
		___online_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Equipo_t2083359327, ___version_2)); }
	inline String_t* get_version_2() const { return ___version_2; }
	inline String_t** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(String_t* value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier(&___version_2, value);
	}

	inline static int32_t get_offset_of_ultimaConexion_3() { return static_cast<int32_t>(offsetof(Equipo_t2083359327, ___ultimaConexion_3)); }
	inline String_t* get_ultimaConexion_3() const { return ___ultimaConexion_3; }
	inline String_t** get_address_of_ultimaConexion_3() { return &___ultimaConexion_3; }
	inline void set_ultimaConexion_3(String_t* value)
	{
		___ultimaConexion_3 = value;
		Il2CppCodeGenWriteBarrier(&___ultimaConexion_3, value);
	}

	inline static int32_t get_offset_of_hora_4() { return static_cast<int32_t>(offsetof(Equipo_t2083359327, ___hora_4)); }
	inline String_t* get_hora_4() const { return ___hora_4; }
	inline String_t** get_address_of_hora_4() { return &___hora_4; }
	inline void set_hora_4(String_t* value)
	{
		___hora_4 = value;
		Il2CppCodeGenWriteBarrier(&___hora_4, value);
	}

	inline static int32_t get_offset_of_modeloReal_5() { return static_cast<int32_t>(offsetof(Equipo_t2083359327, ___modeloReal_5)); }
	inline String_t* get_modeloReal_5() const { return ___modeloReal_5; }
	inline String_t** get_address_of_modeloReal_5() { return &___modeloReal_5; }
	inline void set_modeloReal_5(String_t* value)
	{
		___modeloReal_5 = value;
		Il2CppCodeGenWriteBarrier(&___modeloReal_5, value);
	}

	inline static int32_t get_offset_of_MAC_6() { return static_cast<int32_t>(offsetof(Equipo_t2083359327, ___MAC_6)); }
	inline String_t* get_MAC_6() const { return ___MAC_6; }
	inline String_t** get_address_of_MAC_6() { return &___MAC_6; }
	inline void set_MAC_6(String_t* value)
	{
		___MAC_6 = value;
		Il2CppCodeGenWriteBarrier(&___MAC_6, value);
	}

	inline static int32_t get_offset_of_idPunto_7() { return static_cast<int32_t>(offsetof(Equipo_t2083359327, ___idPunto_7)); }
	inline String_t* get_idPunto_7() const { return ___idPunto_7; }
	inline String_t** get_address_of_idPunto_7() { return &___idPunto_7; }
	inline void set_idPunto_7(String_t* value)
	{
		___idPunto_7 = value;
		Il2CppCodeGenWriteBarrier(&___idPunto_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
