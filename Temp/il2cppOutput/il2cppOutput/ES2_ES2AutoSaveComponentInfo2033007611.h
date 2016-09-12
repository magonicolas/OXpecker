#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Component
struct Component_t2126946602;

#include "ES2_ES2AutoSaveVariableInfo1161407130.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2AutoSaveComponentInfo
struct  ES2AutoSaveComponentInfo_t2033007611  : public ES2AutoSaveVariableInfo_t1161407130
{
public:
	// UnityEngine.Component ES2AutoSaveComponentInfo::component
	Component_t2126946602 * ___component_13;

public:
	inline static int32_t get_offset_of_component_13() { return static_cast<int32_t>(offsetof(ES2AutoSaveComponentInfo_t2033007611, ___component_13)); }
	inline Component_t2126946602 * get_component_13() const { return ___component_13; }
	inline Component_t2126946602 ** get_address_of_component_13() { return &___component_13; }
	inline void set_component_13(Component_t2126946602 * value)
	{
		___component_13 = value;
		Il2CppCodeGenWriteBarrier(&___component_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
