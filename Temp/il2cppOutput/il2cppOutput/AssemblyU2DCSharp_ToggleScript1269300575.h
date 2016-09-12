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
// Controller
struct Controller_t2630893500;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Toggle
struct Toggle_t1499417981;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToggleScript
struct  ToggleScript_t1269300575  : public MonoBehaviour_t3012272455
{
public:
	// System.String ToggleScript::name
	String_t* ___name_2;
	// Controller ToggleScript::controller
	Controller_t2630893500 * ___controller_3;
	// UnityEngine.UI.Text ToggleScript::myLabel
	Text_t3286458198 * ___myLabel_4;
	// UnityEngine.UI.Toggle ToggleScript::myToggle
	Toggle_t1499417981 * ___myToggle_5;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ToggleScript_t1269300575, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_controller_3() { return static_cast<int32_t>(offsetof(ToggleScript_t1269300575, ___controller_3)); }
	inline Controller_t2630893500 * get_controller_3() const { return ___controller_3; }
	inline Controller_t2630893500 ** get_address_of_controller_3() { return &___controller_3; }
	inline void set_controller_3(Controller_t2630893500 * value)
	{
		___controller_3 = value;
		Il2CppCodeGenWriteBarrier(&___controller_3, value);
	}

	inline static int32_t get_offset_of_myLabel_4() { return static_cast<int32_t>(offsetof(ToggleScript_t1269300575, ___myLabel_4)); }
	inline Text_t3286458198 * get_myLabel_4() const { return ___myLabel_4; }
	inline Text_t3286458198 ** get_address_of_myLabel_4() { return &___myLabel_4; }
	inline void set_myLabel_4(Text_t3286458198 * value)
	{
		___myLabel_4 = value;
		Il2CppCodeGenWriteBarrier(&___myLabel_4, value);
	}

	inline static int32_t get_offset_of_myToggle_5() { return static_cast<int32_t>(offsetof(ToggleScript_t1269300575, ___myToggle_5)); }
	inline Toggle_t1499417981 * get_myToggle_5() const { return ___myToggle_5; }
	inline Toggle_t1499417981 ** get_address_of_myToggle_5() { return &___myToggle_5; }
	inline void set_myToggle_5(Toggle_t1499417981 * value)
	{
		___myToggle_5 = value;
		Il2CppCodeGenWriteBarrier(&___myToggle_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
