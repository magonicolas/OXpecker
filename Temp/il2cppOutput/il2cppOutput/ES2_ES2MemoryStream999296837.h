#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "ES2_ES2Stream2376418788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2MemoryStream
struct  ES2MemoryStream_t999296837  : public ES2Stream_t2376418788
{
public:
	// System.Byte[] ES2MemoryStream::storedBytes
	ByteU5BU5D_t58506160* ___storedBytes_2;

public:
	inline static int32_t get_offset_of_storedBytes_2() { return static_cast<int32_t>(offsetof(ES2MemoryStream_t999296837, ___storedBytes_2)); }
	inline ByteU5BU5D_t58506160* get_storedBytes_2() const { return ___storedBytes_2; }
	inline ByteU5BU5D_t58506160** get_address_of_storedBytes_2() { return &___storedBytes_2; }
	inline void set_storedBytes_2(ByteU5BU5D_t58506160* value)
	{
		___storedBytes_2 = value;
		Il2CppCodeGenWriteBarrier(&___storedBytes_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
