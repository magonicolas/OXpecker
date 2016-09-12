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

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Tag
struct  ES2Tag_t2053637046 
{
public:
	// System.String ES2Tag::tag
	String_t* ___tag_0;
	// System.Int64 ES2Tag::position
	int64_t ___position_1;
	// System.Int64 ES2Tag::settingsPosition
	int64_t ___settingsPosition_2;
	// System.Int64 ES2Tag::nextTagPosition
	int64_t ___nextTagPosition_3;
	// System.Boolean ES2Tag::isNull
	bool ___isNull_4;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(ES2Tag_t2053637046, ___tag_0)); }
	inline String_t* get_tag_0() const { return ___tag_0; }
	inline String_t** get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(String_t* value)
	{
		___tag_0 = value;
		Il2CppCodeGenWriteBarrier(&___tag_0, value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(ES2Tag_t2053637046, ___position_1)); }
	inline int64_t get_position_1() const { return ___position_1; }
	inline int64_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int64_t value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_settingsPosition_2() { return static_cast<int32_t>(offsetof(ES2Tag_t2053637046, ___settingsPosition_2)); }
	inline int64_t get_settingsPosition_2() const { return ___settingsPosition_2; }
	inline int64_t* get_address_of_settingsPosition_2() { return &___settingsPosition_2; }
	inline void set_settingsPosition_2(int64_t value)
	{
		___settingsPosition_2 = value;
	}

	inline static int32_t get_offset_of_nextTagPosition_3() { return static_cast<int32_t>(offsetof(ES2Tag_t2053637046, ___nextTagPosition_3)); }
	inline int64_t get_nextTagPosition_3() const { return ___nextTagPosition_3; }
	inline int64_t* get_address_of_nextTagPosition_3() { return &___nextTagPosition_3; }
	inline void set_nextTagPosition_3(int64_t value)
	{
		___nextTagPosition_3 = value;
	}

	inline static int32_t get_offset_of_isNull_4() { return static_cast<int32_t>(offsetof(ES2Tag_t2053637046, ___isNull_4)); }
	inline bool get_isNull_4() const { return ___isNull_4; }
	inline bool* get_address_of_isNull_4() { return &___isNull_4; }
	inline void set_isNull_4(bool value)
	{
		___isNull_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ES2Tag
struct ES2Tag_t2053637046_marshaled_pinvoke
{
	char* ___tag_0;
	int64_t ___position_1;
	int64_t ___settingsPosition_2;
	int64_t ___nextTagPosition_3;
	int32_t ___isNull_4;
};
// Native definition for marshalling of: ES2Tag
struct ES2Tag_t2053637046_marshaled_com
{
	uint16_t* ___tag_0;
	int64_t ___position_1;
	int64_t ___settingsPosition_2;
	int64_t ___nextTagPosition_3;
	int32_t ___isNull_4;
};
