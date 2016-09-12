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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "ES2_ES2Settings_SaveLocation2000964722.h"
#include "ES2_ES2Settings_OptimizeMode3362430528.h"
#include "ES2_ES2Settings_Format2110055447.h"
#include "ES2_ES2Settings_EncryptionType2170316157.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2GlobalSettings
struct  ES2GlobalSettings_t2086347594  : public MonoBehaviour_t3012272455
{
public:
	// ES2Settings/SaveLocation ES2GlobalSettings::saveLocation
	int32_t ___saveLocation_15;
	// ES2Settings/OptimizeMode ES2GlobalSettings::optimizeMode
	int32_t ___optimizeMode_16;
	// System.String ES2GlobalSettings::PCDataPath
	String_t* ___PCDataPath_17;
	// System.String ES2GlobalSettings::MacDataPath
	String_t* ___MacDataPath_18;
	// System.Boolean ES2GlobalSettings::encrypt
	bool ___encrypt_19;
	// System.String ES2GlobalSettings::encryptionPassword
	String_t* ___encryptionPassword_20;
	// ES2Settings/EncryptionType ES2GlobalSettings::encryptionType
	int32_t ___encryptionType_21;
	// System.String ES2GlobalSettings::webUsername
	String_t* ___webUsername_22;
	// System.String ES2GlobalSettings::webPassword
	String_t* ___webPassword_23;
	// System.Int32 ES2GlobalSettings::bufferSize
	int32_t ___bufferSize_24;

public:
	inline static int32_t get_offset_of_saveLocation_15() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___saveLocation_15)); }
	inline int32_t get_saveLocation_15() const { return ___saveLocation_15; }
	inline int32_t* get_address_of_saveLocation_15() { return &___saveLocation_15; }
	inline void set_saveLocation_15(int32_t value)
	{
		___saveLocation_15 = value;
	}

	inline static int32_t get_offset_of_optimizeMode_16() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___optimizeMode_16)); }
	inline int32_t get_optimizeMode_16() const { return ___optimizeMode_16; }
	inline int32_t* get_address_of_optimizeMode_16() { return &___optimizeMode_16; }
	inline void set_optimizeMode_16(int32_t value)
	{
		___optimizeMode_16 = value;
	}

	inline static int32_t get_offset_of_PCDataPath_17() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___PCDataPath_17)); }
	inline String_t* get_PCDataPath_17() const { return ___PCDataPath_17; }
	inline String_t** get_address_of_PCDataPath_17() { return &___PCDataPath_17; }
	inline void set_PCDataPath_17(String_t* value)
	{
		___PCDataPath_17 = value;
		Il2CppCodeGenWriteBarrier(&___PCDataPath_17, value);
	}

	inline static int32_t get_offset_of_MacDataPath_18() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___MacDataPath_18)); }
	inline String_t* get_MacDataPath_18() const { return ___MacDataPath_18; }
	inline String_t** get_address_of_MacDataPath_18() { return &___MacDataPath_18; }
	inline void set_MacDataPath_18(String_t* value)
	{
		___MacDataPath_18 = value;
		Il2CppCodeGenWriteBarrier(&___MacDataPath_18, value);
	}

	inline static int32_t get_offset_of_encrypt_19() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___encrypt_19)); }
	inline bool get_encrypt_19() const { return ___encrypt_19; }
	inline bool* get_address_of_encrypt_19() { return &___encrypt_19; }
	inline void set_encrypt_19(bool value)
	{
		___encrypt_19 = value;
	}

	inline static int32_t get_offset_of_encryptionPassword_20() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___encryptionPassword_20)); }
	inline String_t* get_encryptionPassword_20() const { return ___encryptionPassword_20; }
	inline String_t** get_address_of_encryptionPassword_20() { return &___encryptionPassword_20; }
	inline void set_encryptionPassword_20(String_t* value)
	{
		___encryptionPassword_20 = value;
		Il2CppCodeGenWriteBarrier(&___encryptionPassword_20, value);
	}

	inline static int32_t get_offset_of_encryptionType_21() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___encryptionType_21)); }
	inline int32_t get_encryptionType_21() const { return ___encryptionType_21; }
	inline int32_t* get_address_of_encryptionType_21() { return &___encryptionType_21; }
	inline void set_encryptionType_21(int32_t value)
	{
		___encryptionType_21 = value;
	}

	inline static int32_t get_offset_of_webUsername_22() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___webUsername_22)); }
	inline String_t* get_webUsername_22() const { return ___webUsername_22; }
	inline String_t** get_address_of_webUsername_22() { return &___webUsername_22; }
	inline void set_webUsername_22(String_t* value)
	{
		___webUsername_22 = value;
		Il2CppCodeGenWriteBarrier(&___webUsername_22, value);
	}

	inline static int32_t get_offset_of_webPassword_23() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___webPassword_23)); }
	inline String_t* get_webPassword_23() const { return ___webPassword_23; }
	inline String_t** get_address_of_webPassword_23() { return &___webPassword_23; }
	inline void set_webPassword_23(String_t* value)
	{
		___webPassword_23 = value;
		Il2CppCodeGenWriteBarrier(&___webPassword_23, value);
	}

	inline static int32_t get_offset_of_bufferSize_24() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594, ___bufferSize_24)); }
	inline int32_t get_bufferSize_24() const { return ___bufferSize_24; }
	inline int32_t* get_address_of_bufferSize_24() { return &___bufferSize_24; }
	inline void set_bufferSize_24(int32_t value)
	{
		___bufferSize_24 = value;
	}
};

struct ES2GlobalSettings_t2086347594_StaticFields
{
public:
	// System.Boolean ES2GlobalSettings::hasInitialized
	bool ___hasInitialized_2;
	// ES2Settings/SaveLocation ES2GlobalSettings::_defaultSaveLocation
	int32_t ____defaultSaveLocation_3;
	// ES2Settings/OptimizeMode ES2GlobalSettings::defaultOptimizeMode
	int32_t ___defaultOptimizeMode_4;
	// ES2Settings/Format ES2GlobalSettings::defaultFormat
	int32_t ___defaultFormat_5;
	// System.String ES2GlobalSettings::defaultPCDataPath
	String_t* ___defaultPCDataPath_6;
	// System.String ES2GlobalSettings::defaultMacDataPath
	String_t* ___defaultMacDataPath_7;
	// System.Boolean ES2GlobalSettings::defaultEncrypt
	bool ___defaultEncrypt_8;
	// System.String ES2GlobalSettings::defaultEncryptionPassword
	String_t* ___defaultEncryptionPassword_9;
	// ES2Settings/EncryptionType ES2GlobalSettings::defaultEncryptionType
	int32_t ___defaultEncryptionType_10;
	// System.String ES2GlobalSettings::defaultWebUsername
	String_t* ___defaultWebUsername_11;
	// System.String ES2GlobalSettings::defaultWebPassword
	String_t* ___defaultWebPassword_12;
	// System.String ES2GlobalSettings::defaultWebFilename
	String_t* ___defaultWebFilename_13;
	// System.Int32 ES2GlobalSettings::defaultBufferSize
	int32_t ___defaultBufferSize_14;

public:
	inline static int32_t get_offset_of_hasInitialized_2() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___hasInitialized_2)); }
	inline bool get_hasInitialized_2() const { return ___hasInitialized_2; }
	inline bool* get_address_of_hasInitialized_2() { return &___hasInitialized_2; }
	inline void set_hasInitialized_2(bool value)
	{
		___hasInitialized_2 = value;
	}

	inline static int32_t get_offset_of__defaultSaveLocation_3() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ____defaultSaveLocation_3)); }
	inline int32_t get__defaultSaveLocation_3() const { return ____defaultSaveLocation_3; }
	inline int32_t* get_address_of__defaultSaveLocation_3() { return &____defaultSaveLocation_3; }
	inline void set__defaultSaveLocation_3(int32_t value)
	{
		____defaultSaveLocation_3 = value;
	}

	inline static int32_t get_offset_of_defaultOptimizeMode_4() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultOptimizeMode_4)); }
	inline int32_t get_defaultOptimizeMode_4() const { return ___defaultOptimizeMode_4; }
	inline int32_t* get_address_of_defaultOptimizeMode_4() { return &___defaultOptimizeMode_4; }
	inline void set_defaultOptimizeMode_4(int32_t value)
	{
		___defaultOptimizeMode_4 = value;
	}

	inline static int32_t get_offset_of_defaultFormat_5() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultFormat_5)); }
	inline int32_t get_defaultFormat_5() const { return ___defaultFormat_5; }
	inline int32_t* get_address_of_defaultFormat_5() { return &___defaultFormat_5; }
	inline void set_defaultFormat_5(int32_t value)
	{
		___defaultFormat_5 = value;
	}

	inline static int32_t get_offset_of_defaultPCDataPath_6() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultPCDataPath_6)); }
	inline String_t* get_defaultPCDataPath_6() const { return ___defaultPCDataPath_6; }
	inline String_t** get_address_of_defaultPCDataPath_6() { return &___defaultPCDataPath_6; }
	inline void set_defaultPCDataPath_6(String_t* value)
	{
		___defaultPCDataPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___defaultPCDataPath_6, value);
	}

	inline static int32_t get_offset_of_defaultMacDataPath_7() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultMacDataPath_7)); }
	inline String_t* get_defaultMacDataPath_7() const { return ___defaultMacDataPath_7; }
	inline String_t** get_address_of_defaultMacDataPath_7() { return &___defaultMacDataPath_7; }
	inline void set_defaultMacDataPath_7(String_t* value)
	{
		___defaultMacDataPath_7 = value;
		Il2CppCodeGenWriteBarrier(&___defaultMacDataPath_7, value);
	}

	inline static int32_t get_offset_of_defaultEncrypt_8() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultEncrypt_8)); }
	inline bool get_defaultEncrypt_8() const { return ___defaultEncrypt_8; }
	inline bool* get_address_of_defaultEncrypt_8() { return &___defaultEncrypt_8; }
	inline void set_defaultEncrypt_8(bool value)
	{
		___defaultEncrypt_8 = value;
	}

	inline static int32_t get_offset_of_defaultEncryptionPassword_9() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultEncryptionPassword_9)); }
	inline String_t* get_defaultEncryptionPassword_9() const { return ___defaultEncryptionPassword_9; }
	inline String_t** get_address_of_defaultEncryptionPassword_9() { return &___defaultEncryptionPassword_9; }
	inline void set_defaultEncryptionPassword_9(String_t* value)
	{
		___defaultEncryptionPassword_9 = value;
		Il2CppCodeGenWriteBarrier(&___defaultEncryptionPassword_9, value);
	}

	inline static int32_t get_offset_of_defaultEncryptionType_10() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultEncryptionType_10)); }
	inline int32_t get_defaultEncryptionType_10() const { return ___defaultEncryptionType_10; }
	inline int32_t* get_address_of_defaultEncryptionType_10() { return &___defaultEncryptionType_10; }
	inline void set_defaultEncryptionType_10(int32_t value)
	{
		___defaultEncryptionType_10 = value;
	}

	inline static int32_t get_offset_of_defaultWebUsername_11() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultWebUsername_11)); }
	inline String_t* get_defaultWebUsername_11() const { return ___defaultWebUsername_11; }
	inline String_t** get_address_of_defaultWebUsername_11() { return &___defaultWebUsername_11; }
	inline void set_defaultWebUsername_11(String_t* value)
	{
		___defaultWebUsername_11 = value;
		Il2CppCodeGenWriteBarrier(&___defaultWebUsername_11, value);
	}

	inline static int32_t get_offset_of_defaultWebPassword_12() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultWebPassword_12)); }
	inline String_t* get_defaultWebPassword_12() const { return ___defaultWebPassword_12; }
	inline String_t** get_address_of_defaultWebPassword_12() { return &___defaultWebPassword_12; }
	inline void set_defaultWebPassword_12(String_t* value)
	{
		___defaultWebPassword_12 = value;
		Il2CppCodeGenWriteBarrier(&___defaultWebPassword_12, value);
	}

	inline static int32_t get_offset_of_defaultWebFilename_13() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultWebFilename_13)); }
	inline String_t* get_defaultWebFilename_13() const { return ___defaultWebFilename_13; }
	inline String_t** get_address_of_defaultWebFilename_13() { return &___defaultWebFilename_13; }
	inline void set_defaultWebFilename_13(String_t* value)
	{
		___defaultWebFilename_13 = value;
		Il2CppCodeGenWriteBarrier(&___defaultWebFilename_13, value);
	}

	inline static int32_t get_offset_of_defaultBufferSize_14() { return static_cast<int32_t>(offsetof(ES2GlobalSettings_t2086347594_StaticFields, ___defaultBufferSize_14)); }
	inline int32_t get_defaultBufferSize_14() const { return ___defaultBufferSize_14; }
	inline int32_t* get_address_of_defaultBufferSize_14() { return &___defaultBufferSize_14; }
	inline void set_defaultBufferSize_14(int32_t value)
	{
		___defaultBufferSize_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
