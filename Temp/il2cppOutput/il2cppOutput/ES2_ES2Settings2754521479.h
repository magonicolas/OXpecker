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

#include "mscorlib_System_Object837106420.h"
#include "ES2_ES2FilenameData816641461.h"
#include "ES2_ES2Settings_SaveLocation2000964722.h"
#include "ES2_ES2Settings_OptimizeMode3362430528.h"
#include "ES2_ES2Settings_Format2110055447.h"
#include "ES2_ES2Settings_EncryptionType2170316157.h"
#include "ES2_ES2Settings_ES2FileMode584151715.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Settings
struct  ES2Settings_t2754521479  : public Il2CppObject
{
public:
	// ES2FilenameData ES2Settings::filenameData
	ES2FilenameData_t816641461  ___filenameData_0;
	// ES2Settings/SaveLocation ES2Settings::saveLocation
	int32_t ___saveLocation_1;
	// ES2Settings/OptimizeMode ES2Settings::optimizeMode
	int32_t ___optimizeMode_2;
	// ES2Settings/Format ES2Settings::format
	int32_t ___format_3;
	// System.Boolean ES2Settings::encrypt
	bool ___encrypt_4;
	// System.String ES2Settings::encryptionPassword
	String_t* ___encryptionPassword_5;
	// ES2Settings/EncryptionType ES2Settings::encryptionType
	int32_t ___encryptionType_6;
	// System.String ES2Settings::webUsername
	String_t* ___webUsername_7;
	// System.String ES2Settings::webPassword
	String_t* ___webPassword_8;
	// System.String ES2Settings::webFilename
	String_t* ___webFilename_9;
	// System.Boolean ES2Settings::saveNormals
	bool ___saveNormals_10;
	// System.Boolean ES2Settings::saveUV
	bool ___saveUV_11;
	// System.Boolean ES2Settings::saveUV2
	bool ___saveUV2_12;
	// System.Boolean ES2Settings::saveTangents
	bool ___saveTangents_13;
	// System.Boolean ES2Settings::saveSubmeshes
	bool ___saveSubmeshes_14;
	// System.Boolean ES2Settings::saveSkinning
	bool ___saveSkinning_15;
	// System.Boolean ES2Settings::saveColors
	bool ___saveColors_16;
	// System.Byte ES2Settings::meshSettingsCount
	uint8_t ___meshSettingsCount_17;
	// System.String ES2Settings::name
	String_t* ___name_18;
	// ES2Settings/ES2FileMode ES2Settings::fileMode
	int32_t ___fileMode_19;
	// System.Int32 ES2Settings::bufferSize
	int32_t ___bufferSize_20;

public:
	inline static int32_t get_offset_of_filenameData_0() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___filenameData_0)); }
	inline ES2FilenameData_t816641461  get_filenameData_0() const { return ___filenameData_0; }
	inline ES2FilenameData_t816641461 * get_address_of_filenameData_0() { return &___filenameData_0; }
	inline void set_filenameData_0(ES2FilenameData_t816641461  value)
	{
		___filenameData_0 = value;
	}

	inline static int32_t get_offset_of_saveLocation_1() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___saveLocation_1)); }
	inline int32_t get_saveLocation_1() const { return ___saveLocation_1; }
	inline int32_t* get_address_of_saveLocation_1() { return &___saveLocation_1; }
	inline void set_saveLocation_1(int32_t value)
	{
		___saveLocation_1 = value;
	}

	inline static int32_t get_offset_of_optimizeMode_2() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___optimizeMode_2)); }
	inline int32_t get_optimizeMode_2() const { return ___optimizeMode_2; }
	inline int32_t* get_address_of_optimizeMode_2() { return &___optimizeMode_2; }
	inline void set_optimizeMode_2(int32_t value)
	{
		___optimizeMode_2 = value;
	}

	inline static int32_t get_offset_of_format_3() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___format_3)); }
	inline int32_t get_format_3() const { return ___format_3; }
	inline int32_t* get_address_of_format_3() { return &___format_3; }
	inline void set_format_3(int32_t value)
	{
		___format_3 = value;
	}

	inline static int32_t get_offset_of_encrypt_4() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___encrypt_4)); }
	inline bool get_encrypt_4() const { return ___encrypt_4; }
	inline bool* get_address_of_encrypt_4() { return &___encrypt_4; }
	inline void set_encrypt_4(bool value)
	{
		___encrypt_4 = value;
	}

	inline static int32_t get_offset_of_encryptionPassword_5() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___encryptionPassword_5)); }
	inline String_t* get_encryptionPassword_5() const { return ___encryptionPassword_5; }
	inline String_t** get_address_of_encryptionPassword_5() { return &___encryptionPassword_5; }
	inline void set_encryptionPassword_5(String_t* value)
	{
		___encryptionPassword_5 = value;
		Il2CppCodeGenWriteBarrier(&___encryptionPassword_5, value);
	}

	inline static int32_t get_offset_of_encryptionType_6() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___encryptionType_6)); }
	inline int32_t get_encryptionType_6() const { return ___encryptionType_6; }
	inline int32_t* get_address_of_encryptionType_6() { return &___encryptionType_6; }
	inline void set_encryptionType_6(int32_t value)
	{
		___encryptionType_6 = value;
	}

	inline static int32_t get_offset_of_webUsername_7() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___webUsername_7)); }
	inline String_t* get_webUsername_7() const { return ___webUsername_7; }
	inline String_t** get_address_of_webUsername_7() { return &___webUsername_7; }
	inline void set_webUsername_7(String_t* value)
	{
		___webUsername_7 = value;
		Il2CppCodeGenWriteBarrier(&___webUsername_7, value);
	}

	inline static int32_t get_offset_of_webPassword_8() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___webPassword_8)); }
	inline String_t* get_webPassword_8() const { return ___webPassword_8; }
	inline String_t** get_address_of_webPassword_8() { return &___webPassword_8; }
	inline void set_webPassword_8(String_t* value)
	{
		___webPassword_8 = value;
		Il2CppCodeGenWriteBarrier(&___webPassword_8, value);
	}

	inline static int32_t get_offset_of_webFilename_9() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___webFilename_9)); }
	inline String_t* get_webFilename_9() const { return ___webFilename_9; }
	inline String_t** get_address_of_webFilename_9() { return &___webFilename_9; }
	inline void set_webFilename_9(String_t* value)
	{
		___webFilename_9 = value;
		Il2CppCodeGenWriteBarrier(&___webFilename_9, value);
	}

	inline static int32_t get_offset_of_saveNormals_10() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___saveNormals_10)); }
	inline bool get_saveNormals_10() const { return ___saveNormals_10; }
	inline bool* get_address_of_saveNormals_10() { return &___saveNormals_10; }
	inline void set_saveNormals_10(bool value)
	{
		___saveNormals_10 = value;
	}

	inline static int32_t get_offset_of_saveUV_11() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___saveUV_11)); }
	inline bool get_saveUV_11() const { return ___saveUV_11; }
	inline bool* get_address_of_saveUV_11() { return &___saveUV_11; }
	inline void set_saveUV_11(bool value)
	{
		___saveUV_11 = value;
	}

	inline static int32_t get_offset_of_saveUV2_12() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___saveUV2_12)); }
	inline bool get_saveUV2_12() const { return ___saveUV2_12; }
	inline bool* get_address_of_saveUV2_12() { return &___saveUV2_12; }
	inline void set_saveUV2_12(bool value)
	{
		___saveUV2_12 = value;
	}

	inline static int32_t get_offset_of_saveTangents_13() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___saveTangents_13)); }
	inline bool get_saveTangents_13() const { return ___saveTangents_13; }
	inline bool* get_address_of_saveTangents_13() { return &___saveTangents_13; }
	inline void set_saveTangents_13(bool value)
	{
		___saveTangents_13 = value;
	}

	inline static int32_t get_offset_of_saveSubmeshes_14() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___saveSubmeshes_14)); }
	inline bool get_saveSubmeshes_14() const { return ___saveSubmeshes_14; }
	inline bool* get_address_of_saveSubmeshes_14() { return &___saveSubmeshes_14; }
	inline void set_saveSubmeshes_14(bool value)
	{
		___saveSubmeshes_14 = value;
	}

	inline static int32_t get_offset_of_saveSkinning_15() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___saveSkinning_15)); }
	inline bool get_saveSkinning_15() const { return ___saveSkinning_15; }
	inline bool* get_address_of_saveSkinning_15() { return &___saveSkinning_15; }
	inline void set_saveSkinning_15(bool value)
	{
		___saveSkinning_15 = value;
	}

	inline static int32_t get_offset_of_saveColors_16() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___saveColors_16)); }
	inline bool get_saveColors_16() const { return ___saveColors_16; }
	inline bool* get_address_of_saveColors_16() { return &___saveColors_16; }
	inline void set_saveColors_16(bool value)
	{
		___saveColors_16 = value;
	}

	inline static int32_t get_offset_of_meshSettingsCount_17() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___meshSettingsCount_17)); }
	inline uint8_t get_meshSettingsCount_17() const { return ___meshSettingsCount_17; }
	inline uint8_t* get_address_of_meshSettingsCount_17() { return &___meshSettingsCount_17; }
	inline void set_meshSettingsCount_17(uint8_t value)
	{
		___meshSettingsCount_17 = value;
	}

	inline static int32_t get_offset_of_name_18() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___name_18)); }
	inline String_t* get_name_18() const { return ___name_18; }
	inline String_t** get_address_of_name_18() { return &___name_18; }
	inline void set_name_18(String_t* value)
	{
		___name_18 = value;
		Il2CppCodeGenWriteBarrier(&___name_18, value);
	}

	inline static int32_t get_offset_of_fileMode_19() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___fileMode_19)); }
	inline int32_t get_fileMode_19() const { return ___fileMode_19; }
	inline int32_t* get_address_of_fileMode_19() { return &___fileMode_19; }
	inline void set_fileMode_19(int32_t value)
	{
		___fileMode_19 = value;
	}

	inline static int32_t get_offset_of_bufferSize_20() { return static_cast<int32_t>(offsetof(ES2Settings_t2754521479, ___bufferSize_20)); }
	inline int32_t get_bufferSize_20() const { return ___bufferSize_20; }
	inline int32_t* get_address_of_bufferSize_20() { return &___bufferSize_20; }
	inline void set_bufferSize_20(int32_t value)
	{
		___bufferSize_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
