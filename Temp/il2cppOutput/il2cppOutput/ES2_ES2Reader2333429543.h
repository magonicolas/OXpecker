#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ES2Stream
struct ES2Stream_t2376418788;
// ES2Settings
struct ES2Settings_t2754521479;
// ES2CachedFile
struct ES2CachedFile_t1431531042;
// System.IO.BinaryReader
struct BinaryReader_t2158806251;

#include "mscorlib_System_Object837106420.h"
#include "ES2_ES2Tag2053637046.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Reader
struct  ES2Reader_t2333429543  : public Il2CppObject
{
public:
	// ES2Stream ES2Reader::stream
	ES2Stream_t2376418788 * ___stream_0;
	// ES2Settings ES2Reader::settings
	ES2Settings_t2754521479 * ___settings_1;
	// ES2CachedFile ES2Reader::cachedFile
	ES2CachedFile_t1431531042 * ___cachedFile_2;
	// ES2Tag ES2Reader::currentTag
	ES2Tag_t2053637046  ___currentTag_3;
	// System.IO.BinaryReader ES2Reader::reader
	BinaryReader_t2158806251 * ___reader_4;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(ES2Reader_t2333429543, ___stream_0)); }
	inline ES2Stream_t2376418788 * get_stream_0() const { return ___stream_0; }
	inline ES2Stream_t2376418788 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(ES2Stream_t2376418788 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_settings_1() { return static_cast<int32_t>(offsetof(ES2Reader_t2333429543, ___settings_1)); }
	inline ES2Settings_t2754521479 * get_settings_1() const { return ___settings_1; }
	inline ES2Settings_t2754521479 ** get_address_of_settings_1() { return &___settings_1; }
	inline void set_settings_1(ES2Settings_t2754521479 * value)
	{
		___settings_1 = value;
		Il2CppCodeGenWriteBarrier(&___settings_1, value);
	}

	inline static int32_t get_offset_of_cachedFile_2() { return static_cast<int32_t>(offsetof(ES2Reader_t2333429543, ___cachedFile_2)); }
	inline ES2CachedFile_t1431531042 * get_cachedFile_2() const { return ___cachedFile_2; }
	inline ES2CachedFile_t1431531042 ** get_address_of_cachedFile_2() { return &___cachedFile_2; }
	inline void set_cachedFile_2(ES2CachedFile_t1431531042 * value)
	{
		___cachedFile_2 = value;
		Il2CppCodeGenWriteBarrier(&___cachedFile_2, value);
	}

	inline static int32_t get_offset_of_currentTag_3() { return static_cast<int32_t>(offsetof(ES2Reader_t2333429543, ___currentTag_3)); }
	inline ES2Tag_t2053637046  get_currentTag_3() const { return ___currentTag_3; }
	inline ES2Tag_t2053637046 * get_address_of_currentTag_3() { return &___currentTag_3; }
	inline void set_currentTag_3(ES2Tag_t2053637046  value)
	{
		___currentTag_3 = value;
	}

	inline static int32_t get_offset_of_reader_4() { return static_cast<int32_t>(offsetof(ES2Reader_t2333429543, ___reader_4)); }
	inline BinaryReader_t2158806251 * get_reader_4() const { return ___reader_4; }
	inline BinaryReader_t2158806251 ** get_address_of_reader_4() { return &___reader_4; }
	inline void set_reader_4(BinaryReader_t2158806251 * value)
	{
		___reader_4 = value;
		Il2CppCodeGenWriteBarrier(&___reader_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
