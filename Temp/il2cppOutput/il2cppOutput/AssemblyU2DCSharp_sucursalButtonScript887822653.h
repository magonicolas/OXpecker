#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Controller
struct Controller_t2630893500;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sucursalButtonScript
struct  sucursalButtonScript_t887822653  : public MonoBehaviour_t3012272455
{
public:
	// Controller sucursalButtonScript::controller
	Controller_t2630893500 * ___controller_2;
	// UnityEngine.UI.Text sucursalButtonScript::sucursal
	Text_t3286458198 * ___sucursal_3;
	// UnityEngine.UI.Text sucursalButtonScript::porcentaje
	Text_t3286458198 * ___porcentaje_4;

public:
	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(sucursalButtonScript_t887822653, ___controller_2)); }
	inline Controller_t2630893500 * get_controller_2() const { return ___controller_2; }
	inline Controller_t2630893500 ** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(Controller_t2630893500 * value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier(&___controller_2, value);
	}

	inline static int32_t get_offset_of_sucursal_3() { return static_cast<int32_t>(offsetof(sucursalButtonScript_t887822653, ___sucursal_3)); }
	inline Text_t3286458198 * get_sucursal_3() const { return ___sucursal_3; }
	inline Text_t3286458198 ** get_address_of_sucursal_3() { return &___sucursal_3; }
	inline void set_sucursal_3(Text_t3286458198 * value)
	{
		___sucursal_3 = value;
		Il2CppCodeGenWriteBarrier(&___sucursal_3, value);
	}

	inline static int32_t get_offset_of_porcentaje_4() { return static_cast<int32_t>(offsetof(sucursalButtonScript_t887822653, ___porcentaje_4)); }
	inline Text_t3286458198 * get_porcentaje_4() const { return ___porcentaje_4; }
	inline Text_t3286458198 ** get_address_of_porcentaje_4() { return &___porcentaje_4; }
	inline void set_porcentaje_4(Text_t3286458198 * value)
	{
		___porcentaje_4 = value;
		Il2CppCodeGenWriteBarrier(&___porcentaje_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
