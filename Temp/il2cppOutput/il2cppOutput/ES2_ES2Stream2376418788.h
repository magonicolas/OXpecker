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
// System.IO.Stream
struct Stream_t219029575;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Stream
struct  ES2Stream_t2376418788  : public Il2CppObject
{
public:
	// ES2Settings ES2Stream::settings
	ES2Settings_t2754521479 * ___settings_0;
	// System.IO.Stream ES2Stream::stream
	Stream_t219029575 * ___stream_1;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(ES2Stream_t2376418788, ___settings_0)); }
	inline ES2Settings_t2754521479 * get_settings_0() const { return ___settings_0; }
	inline ES2Settings_t2754521479 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(ES2Settings_t2754521479 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier(&___settings_0, value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(ES2Stream_t2376418788, ___stream_1)); }
	inline Stream_t219029575 * get_stream_1() const { return ___stream_1; }
	inline Stream_t219029575 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t219029575 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___stream_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
