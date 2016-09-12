#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ES2Settings
struct ES2Settings_t2754521479;

#include "mscorlib_System_ValueType4014882752.h"
#include "ES2_ES2Keys_Key75327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Header
struct  ES2Header_t2047138033 
{
public:
	// ES2Keys/Key ES2Header::collectionType
	uint8_t ___collectionType_0;
	// System.Int32 ES2Header::keyType
	int32_t ___keyType_1;
	// System.Int32 ES2Header::valueType
	int32_t ___valueType_2;
	// ES2Settings ES2Header::settings
	ES2Settings_t2754521479 * ___settings_3;

public:
	inline static int32_t get_offset_of_collectionType_0() { return static_cast<int32_t>(offsetof(ES2Header_t2047138033, ___collectionType_0)); }
	inline uint8_t get_collectionType_0() const { return ___collectionType_0; }
	inline uint8_t* get_address_of_collectionType_0() { return &___collectionType_0; }
	inline void set_collectionType_0(uint8_t value)
	{
		___collectionType_0 = value;
	}

	inline static int32_t get_offset_of_keyType_1() { return static_cast<int32_t>(offsetof(ES2Header_t2047138033, ___keyType_1)); }
	inline int32_t get_keyType_1() const { return ___keyType_1; }
	inline int32_t* get_address_of_keyType_1() { return &___keyType_1; }
	inline void set_keyType_1(int32_t value)
	{
		___keyType_1 = value;
	}

	inline static int32_t get_offset_of_valueType_2() { return static_cast<int32_t>(offsetof(ES2Header_t2047138033, ___valueType_2)); }
	inline int32_t get_valueType_2() const { return ___valueType_2; }
	inline int32_t* get_address_of_valueType_2() { return &___valueType_2; }
	inline void set_valueType_2(int32_t value)
	{
		___valueType_2 = value;
	}

	inline static int32_t get_offset_of_settings_3() { return static_cast<int32_t>(offsetof(ES2Header_t2047138033, ___settings_3)); }
	inline ES2Settings_t2754521479 * get_settings_3() const { return ___settings_3; }
	inline ES2Settings_t2754521479 ** get_address_of_settings_3() { return &___settings_3; }
	inline void set_settings_3(ES2Settings_t2754521479 * value)
	{
		___settings_3 = value;
		Il2CppCodeGenWriteBarrier(&___settings_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
