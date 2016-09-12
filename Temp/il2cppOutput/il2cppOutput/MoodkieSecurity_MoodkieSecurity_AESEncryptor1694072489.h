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
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"
#include "MoodkieSecurity_MoodkieSecurity_AESBits749531621.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoodkieSecurity.AESEncryptor
struct  AESEncryptor_t1694072489  : public Il2CppObject
{
public:
	// System.String MoodkieSecurity.AESEncryptor::fPassword
	String_t* ___fPassword_0;
	// MoodkieSecurity.AESBits MoodkieSecurity.AESEncryptor::fEncryptionBits
	int32_t ___fEncryptionBits_1;
	// System.Byte[] MoodkieSecurity.AESEncryptor::fSalt
	ByteU5BU5D_t58506160* ___fSalt_2;

public:
	inline static int32_t get_offset_of_fPassword_0() { return static_cast<int32_t>(offsetof(AESEncryptor_t1694072489, ___fPassword_0)); }
	inline String_t* get_fPassword_0() const { return ___fPassword_0; }
	inline String_t** get_address_of_fPassword_0() { return &___fPassword_0; }
	inline void set_fPassword_0(String_t* value)
	{
		___fPassword_0 = value;
		Il2CppCodeGenWriteBarrier(&___fPassword_0, value);
	}

	inline static int32_t get_offset_of_fEncryptionBits_1() { return static_cast<int32_t>(offsetof(AESEncryptor_t1694072489, ___fEncryptionBits_1)); }
	inline int32_t get_fEncryptionBits_1() const { return ___fEncryptionBits_1; }
	inline int32_t* get_address_of_fEncryptionBits_1() { return &___fEncryptionBits_1; }
	inline void set_fEncryptionBits_1(int32_t value)
	{
		___fEncryptionBits_1 = value;
	}

	inline static int32_t get_offset_of_fSalt_2() { return static_cast<int32_t>(offsetof(AESEncryptor_t1694072489, ___fSalt_2)); }
	inline ByteU5BU5D_t58506160* get_fSalt_2() const { return ___fSalt_2; }
	inline ByteU5BU5D_t58506160** get_address_of_fSalt_2() { return &___fSalt_2; }
	inline void set_fSalt_2(ByteU5BU5D_t58506160* value)
	{
		___fSalt_2 = value;
		Il2CppCodeGenWriteBarrier(&___fSalt_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
