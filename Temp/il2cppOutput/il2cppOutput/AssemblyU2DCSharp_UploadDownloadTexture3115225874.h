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
#include "AssemblyU2DCSharp_UploadDownloadTexture_Mode2403779.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UploadDownloadTexture
struct  UploadDownloadTexture_t3115225874  : public MonoBehaviour_t3012272455
{
public:
	// UploadDownloadTexture/Mode UploadDownloadTexture::mode
	int32_t ___mode_2;
	// System.String UploadDownloadTexture::url
	String_t* ___url_3;
	// System.String UploadDownloadTexture::filename
	String_t* ___filename_4;
	// System.String UploadDownloadTexture::textureTag
	String_t* ___textureTag_5;
	// System.String UploadDownloadTexture::webUsername
	String_t* ___webUsername_6;
	// System.String UploadDownloadTexture::webPassword
	String_t* ___webPassword_7;

public:
	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(UploadDownloadTexture_t3115225874, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(UploadDownloadTexture_t3115225874, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier(&___url_3, value);
	}

	inline static int32_t get_offset_of_filename_4() { return static_cast<int32_t>(offsetof(UploadDownloadTexture_t3115225874, ___filename_4)); }
	inline String_t* get_filename_4() const { return ___filename_4; }
	inline String_t** get_address_of_filename_4() { return &___filename_4; }
	inline void set_filename_4(String_t* value)
	{
		___filename_4 = value;
		Il2CppCodeGenWriteBarrier(&___filename_4, value);
	}

	inline static int32_t get_offset_of_textureTag_5() { return static_cast<int32_t>(offsetof(UploadDownloadTexture_t3115225874, ___textureTag_5)); }
	inline String_t* get_textureTag_5() const { return ___textureTag_5; }
	inline String_t** get_address_of_textureTag_5() { return &___textureTag_5; }
	inline void set_textureTag_5(String_t* value)
	{
		___textureTag_5 = value;
		Il2CppCodeGenWriteBarrier(&___textureTag_5, value);
	}

	inline static int32_t get_offset_of_webUsername_6() { return static_cast<int32_t>(offsetof(UploadDownloadTexture_t3115225874, ___webUsername_6)); }
	inline String_t* get_webUsername_6() const { return ___webUsername_6; }
	inline String_t** get_address_of_webUsername_6() { return &___webUsername_6; }
	inline void set_webUsername_6(String_t* value)
	{
		___webUsername_6 = value;
		Il2CppCodeGenWriteBarrier(&___webUsername_6, value);
	}

	inline static int32_t get_offset_of_webPassword_7() { return static_cast<int32_t>(offsetof(UploadDownloadTexture_t3115225874, ___webPassword_7)); }
	inline String_t* get_webPassword_7() const { return ___webPassword_7; }
	inline String_t** get_address_of_webPassword_7() { return &___webPassword_7; }
	inline void set_webPassword_7(String_t* value)
	{
		___webPassword_7 = value;
		Il2CppCodeGenWriteBarrier(&___webPassword_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
