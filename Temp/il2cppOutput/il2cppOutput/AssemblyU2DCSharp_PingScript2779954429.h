#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PingScript
struct  PingScript_t2779954429  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text PingScript::nombreText
	Text_t3286458198 * ___nombreText_2;
	// UnityEngine.UI.Text PingScript::fechaText
	Text_t3286458198 * ___fechaText_3;

public:
	inline static int32_t get_offset_of_nombreText_2() { return static_cast<int32_t>(offsetof(PingScript_t2779954429, ___nombreText_2)); }
	inline Text_t3286458198 * get_nombreText_2() const { return ___nombreText_2; }
	inline Text_t3286458198 ** get_address_of_nombreText_2() { return &___nombreText_2; }
	inline void set_nombreText_2(Text_t3286458198 * value)
	{
		___nombreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___nombreText_2, value);
	}

	inline static int32_t get_offset_of_fechaText_3() { return static_cast<int32_t>(offsetof(PingScript_t2779954429, ___fechaText_3)); }
	inline Text_t3286458198 * get_fechaText_3() const { return ___fechaText_3; }
	inline Text_t3286458198 ** get_address_of_fechaText_3() { return &___fechaText_3; }
	inline void set_fechaText_3(Text_t3286458198 * value)
	{
		___fechaText_3 = value;
		Il2CppCodeGenWriteBarrier(&___fechaText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
