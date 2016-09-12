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
// ES2Settings
struct ES2Settings_t2754521479;
// UnityEngine.WWW
struct WWW_t1522972100;

#include "mscorlib_System_Object837106420.h"
#include "ES2_ES2Web_HashType212857224.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Web
struct  ES2Web_t2053640048  : public Il2CppObject
{
public:
	// System.Boolean ES2Web::isDone
	bool ___isDone_0;
	// System.Boolean ES2Web::isError
	bool ___isError_1;
	// System.String ES2Web::error
	String_t* ___error_2;
	// System.String ES2Web::errorCode
	String_t* ___errorCode_3;
	// ES2Web/HashType ES2Web::hashType
	int32_t ___hashType_4;
	// ES2Settings ES2Web::settings
	ES2Settings_t2754521479 * ___settings_5;
	// UnityEngine.WWW ES2Web::www
	WWW_t1522972100 * ___www_6;

public:
	inline static int32_t get_offset_of_isDone_0() { return static_cast<int32_t>(offsetof(ES2Web_t2053640048, ___isDone_0)); }
	inline bool get_isDone_0() const { return ___isDone_0; }
	inline bool* get_address_of_isDone_0() { return &___isDone_0; }
	inline void set_isDone_0(bool value)
	{
		___isDone_0 = value;
	}

	inline static int32_t get_offset_of_isError_1() { return static_cast<int32_t>(offsetof(ES2Web_t2053640048, ___isError_1)); }
	inline bool get_isError_1() const { return ___isError_1; }
	inline bool* get_address_of_isError_1() { return &___isError_1; }
	inline void set_isError_1(bool value)
	{
		___isError_1 = value;
	}

	inline static int32_t get_offset_of_error_2() { return static_cast<int32_t>(offsetof(ES2Web_t2053640048, ___error_2)); }
	inline String_t* get_error_2() const { return ___error_2; }
	inline String_t** get_address_of_error_2() { return &___error_2; }
	inline void set_error_2(String_t* value)
	{
		___error_2 = value;
		Il2CppCodeGenWriteBarrier(&___error_2, value);
	}

	inline static int32_t get_offset_of_errorCode_3() { return static_cast<int32_t>(offsetof(ES2Web_t2053640048, ___errorCode_3)); }
	inline String_t* get_errorCode_3() const { return ___errorCode_3; }
	inline String_t** get_address_of_errorCode_3() { return &___errorCode_3; }
	inline void set_errorCode_3(String_t* value)
	{
		___errorCode_3 = value;
		Il2CppCodeGenWriteBarrier(&___errorCode_3, value);
	}

	inline static int32_t get_offset_of_hashType_4() { return static_cast<int32_t>(offsetof(ES2Web_t2053640048, ___hashType_4)); }
	inline int32_t get_hashType_4() const { return ___hashType_4; }
	inline int32_t* get_address_of_hashType_4() { return &___hashType_4; }
	inline void set_hashType_4(int32_t value)
	{
		___hashType_4 = value;
	}

	inline static int32_t get_offset_of_settings_5() { return static_cast<int32_t>(offsetof(ES2Web_t2053640048, ___settings_5)); }
	inline ES2Settings_t2754521479 * get_settings_5() const { return ___settings_5; }
	inline ES2Settings_t2754521479 ** get_address_of_settings_5() { return &___settings_5; }
	inline void set_settings_5(ES2Settings_t2754521479 * value)
	{
		___settings_5 = value;
		Il2CppCodeGenWriteBarrier(&___settings_5, value);
	}

	inline static int32_t get_offset_of_www_6() { return static_cast<int32_t>(offsetof(ES2Web_t2053640048, ___www_6)); }
	inline WWW_t1522972100 * get_www_6() const { return ___www_6; }
	inline WWW_t1522972100 ** get_address_of_www_6() { return &___www_6; }
	inline void set_www_6(WWW_t1522972100 * value)
	{
		___www_6 = value;
		Il2CppCodeGenWriteBarrier(&___www_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
