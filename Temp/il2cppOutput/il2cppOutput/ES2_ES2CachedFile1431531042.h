#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,ES2Tag>
struct Dictionary_2_t3691334950;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2CachedFile
struct  ES2CachedFile_t1431531042  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,ES2Tag> ES2CachedFile::tagCache
	Dictionary_2_t3691334950 * ___tagCache_0;

public:
	inline static int32_t get_offset_of_tagCache_0() { return static_cast<int32_t>(offsetof(ES2CachedFile_t1431531042, ___tagCache_0)); }
	inline Dictionary_2_t3691334950 * get_tagCache_0() const { return ___tagCache_0; }
	inline Dictionary_2_t3691334950 ** get_address_of_tagCache_0() { return &___tagCache_0; }
	inline void set_tagCache_0(Dictionary_2_t3691334950 * value)
	{
		___tagCache_0 = value;
		Il2CppCodeGenWriteBarrier(&___tagCache_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
