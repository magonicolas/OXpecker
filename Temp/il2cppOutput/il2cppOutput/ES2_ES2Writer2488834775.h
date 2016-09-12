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
// ES2Stream
struct ES2Stream_t2376418788;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Writer
struct  ES2Writer_t2488834775  : public Il2CppObject
{
public:
	// ES2Settings ES2Writer::settings
	ES2Settings_t2754521479 * ___settings_0;
	// ES2Stream ES2Writer::stream
	ES2Stream_t2376418788 * ___stream_1;
	// System.Collections.Generic.HashSet`1<System.String> ES2Writer::tagsToDelete
	HashSet_1_t3667177573 * ___tagsToDelete_2;
	// System.IO.BinaryWriter ES2Writer::writer
	BinaryWriter_t2314211483 * ___writer_3;
	// System.Int64 ES2Writer::lengthPosition
	int64_t ___lengthPosition_4;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(ES2Writer_t2488834775, ___settings_0)); }
	inline ES2Settings_t2754521479 * get_settings_0() const { return ___settings_0; }
	inline ES2Settings_t2754521479 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(ES2Settings_t2754521479 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier(&___settings_0, value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(ES2Writer_t2488834775, ___stream_1)); }
	inline ES2Stream_t2376418788 * get_stream_1() const { return ___stream_1; }
	inline ES2Stream_t2376418788 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(ES2Stream_t2376418788 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___stream_1, value);
	}

	inline static int32_t get_offset_of_tagsToDelete_2() { return static_cast<int32_t>(offsetof(ES2Writer_t2488834775, ___tagsToDelete_2)); }
	inline HashSet_1_t3667177573 * get_tagsToDelete_2() const { return ___tagsToDelete_2; }
	inline HashSet_1_t3667177573 ** get_address_of_tagsToDelete_2() { return &___tagsToDelete_2; }
	inline void set_tagsToDelete_2(HashSet_1_t3667177573 * value)
	{
		___tagsToDelete_2 = value;
		Il2CppCodeGenWriteBarrier(&___tagsToDelete_2, value);
	}

	inline static int32_t get_offset_of_writer_3() { return static_cast<int32_t>(offsetof(ES2Writer_t2488834775, ___writer_3)); }
	inline BinaryWriter_t2314211483 * get_writer_3() const { return ___writer_3; }
	inline BinaryWriter_t2314211483 ** get_address_of_writer_3() { return &___writer_3; }
	inline void set_writer_3(BinaryWriter_t2314211483 * value)
	{
		___writer_3 = value;
		Il2CppCodeGenWriteBarrier(&___writer_3, value);
	}

	inline static int32_t get_offset_of_lengthPosition_4() { return static_cast<int32_t>(offsetof(ES2Writer_t2488834775, ___lengthPosition_4)); }
	inline int64_t get_lengthPosition_4() const { return ___lengthPosition_4; }
	inline int64_t* get_address_of_lengthPosition_4() { return &___lengthPosition_4; }
	inline void set_lengthPosition_4(int64_t value)
	{
		___lengthPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
