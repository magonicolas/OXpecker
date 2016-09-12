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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "ES2_ES2Settings_SaveLocation2000964722.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Auto
struct  ES2Auto_t3532659987  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean ES2Auto::saveOnDisable
	bool ___saveOnDisable_2;
	// System.Boolean ES2Auto::saveOnInterval
	bool ___saveOnInterval_3;
	// System.Single ES2Auto::saveInterval
	float ___saveInterval_4;
	// System.Boolean ES2Auto::loadOnEnable
	bool ___loadOnEnable_5;
	// System.Boolean ES2Auto::loadOnAwake
	bool ___loadOnAwake_6;
	// System.Boolean ES2Auto::loadOnStart
	bool ___loadOnStart_7;
	// System.Boolean ES2Auto::isPlayMaker
	bool ___isPlayMaker_8;
	// System.String ES2Auto::uniqueTag
	String_t* ___uniqueTag_9;
	// System.Boolean ES2Auto::savePosition
	bool ___savePosition_10;
	// System.Boolean ES2Auto::saveRotation
	bool ___saveRotation_11;
	// System.Boolean ES2Auto::saveScale
	bool ___saveScale_12;
	// System.Boolean ES2Auto::saveMesh
	bool ___saveMesh_13;
	// System.Boolean ES2Auto::saveSphereCollider
	bool ___saveSphereCollider_14;
	// System.Boolean ES2Auto::saveBoxCollider
	bool ___saveBoxCollider_15;
	// System.Boolean ES2Auto::saveCapsuleCollider
	bool ___saveCapsuleCollider_16;
	// System.Boolean ES2Auto::saveMeshCollider
	bool ___saveMeshCollider_17;
	// System.String ES2Auto::saveFile
	String_t* ___saveFile_18;
	// ES2Settings/SaveLocation ES2Auto::saveLocation
	int32_t ___saveLocation_19;
	// System.Boolean ES2Auto::encrypt
	bool ___encrypt_20;
	// System.String ES2Auto::encryptionPassword
	String_t* ___encryptionPassword_21;
	// System.String ES2Auto::webUsername
	String_t* ___webUsername_22;
	// System.String ES2Auto::webPassword
	String_t* ___webPassword_23;
	// System.Boolean ES2Auto::isQuitting
	bool ___isQuitting_24;
	// ES2Settings ES2Auto::settings
	ES2Settings_t2754521479 * ___settings_25;

public:
	inline static int32_t get_offset_of_saveOnDisable_2() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveOnDisable_2)); }
	inline bool get_saveOnDisable_2() const { return ___saveOnDisable_2; }
	inline bool* get_address_of_saveOnDisable_2() { return &___saveOnDisable_2; }
	inline void set_saveOnDisable_2(bool value)
	{
		___saveOnDisable_2 = value;
	}

	inline static int32_t get_offset_of_saveOnInterval_3() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveOnInterval_3)); }
	inline bool get_saveOnInterval_3() const { return ___saveOnInterval_3; }
	inline bool* get_address_of_saveOnInterval_3() { return &___saveOnInterval_3; }
	inline void set_saveOnInterval_3(bool value)
	{
		___saveOnInterval_3 = value;
	}

	inline static int32_t get_offset_of_saveInterval_4() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveInterval_4)); }
	inline float get_saveInterval_4() const { return ___saveInterval_4; }
	inline float* get_address_of_saveInterval_4() { return &___saveInterval_4; }
	inline void set_saveInterval_4(float value)
	{
		___saveInterval_4 = value;
	}

	inline static int32_t get_offset_of_loadOnEnable_5() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___loadOnEnable_5)); }
	inline bool get_loadOnEnable_5() const { return ___loadOnEnable_5; }
	inline bool* get_address_of_loadOnEnable_5() { return &___loadOnEnable_5; }
	inline void set_loadOnEnable_5(bool value)
	{
		___loadOnEnable_5 = value;
	}

	inline static int32_t get_offset_of_loadOnAwake_6() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___loadOnAwake_6)); }
	inline bool get_loadOnAwake_6() const { return ___loadOnAwake_6; }
	inline bool* get_address_of_loadOnAwake_6() { return &___loadOnAwake_6; }
	inline void set_loadOnAwake_6(bool value)
	{
		___loadOnAwake_6 = value;
	}

	inline static int32_t get_offset_of_loadOnStart_7() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___loadOnStart_7)); }
	inline bool get_loadOnStart_7() const { return ___loadOnStart_7; }
	inline bool* get_address_of_loadOnStart_7() { return &___loadOnStart_7; }
	inline void set_loadOnStart_7(bool value)
	{
		___loadOnStart_7 = value;
	}

	inline static int32_t get_offset_of_isPlayMaker_8() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___isPlayMaker_8)); }
	inline bool get_isPlayMaker_8() const { return ___isPlayMaker_8; }
	inline bool* get_address_of_isPlayMaker_8() { return &___isPlayMaker_8; }
	inline void set_isPlayMaker_8(bool value)
	{
		___isPlayMaker_8 = value;
	}

	inline static int32_t get_offset_of_uniqueTag_9() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___uniqueTag_9)); }
	inline String_t* get_uniqueTag_9() const { return ___uniqueTag_9; }
	inline String_t** get_address_of_uniqueTag_9() { return &___uniqueTag_9; }
	inline void set_uniqueTag_9(String_t* value)
	{
		___uniqueTag_9 = value;
		Il2CppCodeGenWriteBarrier(&___uniqueTag_9, value);
	}

	inline static int32_t get_offset_of_savePosition_10() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___savePosition_10)); }
	inline bool get_savePosition_10() const { return ___savePosition_10; }
	inline bool* get_address_of_savePosition_10() { return &___savePosition_10; }
	inline void set_savePosition_10(bool value)
	{
		___savePosition_10 = value;
	}

	inline static int32_t get_offset_of_saveRotation_11() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveRotation_11)); }
	inline bool get_saveRotation_11() const { return ___saveRotation_11; }
	inline bool* get_address_of_saveRotation_11() { return &___saveRotation_11; }
	inline void set_saveRotation_11(bool value)
	{
		___saveRotation_11 = value;
	}

	inline static int32_t get_offset_of_saveScale_12() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveScale_12)); }
	inline bool get_saveScale_12() const { return ___saveScale_12; }
	inline bool* get_address_of_saveScale_12() { return &___saveScale_12; }
	inline void set_saveScale_12(bool value)
	{
		___saveScale_12 = value;
	}

	inline static int32_t get_offset_of_saveMesh_13() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveMesh_13)); }
	inline bool get_saveMesh_13() const { return ___saveMesh_13; }
	inline bool* get_address_of_saveMesh_13() { return &___saveMesh_13; }
	inline void set_saveMesh_13(bool value)
	{
		___saveMesh_13 = value;
	}

	inline static int32_t get_offset_of_saveSphereCollider_14() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveSphereCollider_14)); }
	inline bool get_saveSphereCollider_14() const { return ___saveSphereCollider_14; }
	inline bool* get_address_of_saveSphereCollider_14() { return &___saveSphereCollider_14; }
	inline void set_saveSphereCollider_14(bool value)
	{
		___saveSphereCollider_14 = value;
	}

	inline static int32_t get_offset_of_saveBoxCollider_15() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveBoxCollider_15)); }
	inline bool get_saveBoxCollider_15() const { return ___saveBoxCollider_15; }
	inline bool* get_address_of_saveBoxCollider_15() { return &___saveBoxCollider_15; }
	inline void set_saveBoxCollider_15(bool value)
	{
		___saveBoxCollider_15 = value;
	}

	inline static int32_t get_offset_of_saveCapsuleCollider_16() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveCapsuleCollider_16)); }
	inline bool get_saveCapsuleCollider_16() const { return ___saveCapsuleCollider_16; }
	inline bool* get_address_of_saveCapsuleCollider_16() { return &___saveCapsuleCollider_16; }
	inline void set_saveCapsuleCollider_16(bool value)
	{
		___saveCapsuleCollider_16 = value;
	}

	inline static int32_t get_offset_of_saveMeshCollider_17() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveMeshCollider_17)); }
	inline bool get_saveMeshCollider_17() const { return ___saveMeshCollider_17; }
	inline bool* get_address_of_saveMeshCollider_17() { return &___saveMeshCollider_17; }
	inline void set_saveMeshCollider_17(bool value)
	{
		___saveMeshCollider_17 = value;
	}

	inline static int32_t get_offset_of_saveFile_18() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveFile_18)); }
	inline String_t* get_saveFile_18() const { return ___saveFile_18; }
	inline String_t** get_address_of_saveFile_18() { return &___saveFile_18; }
	inline void set_saveFile_18(String_t* value)
	{
		___saveFile_18 = value;
		Il2CppCodeGenWriteBarrier(&___saveFile_18, value);
	}

	inline static int32_t get_offset_of_saveLocation_19() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___saveLocation_19)); }
	inline int32_t get_saveLocation_19() const { return ___saveLocation_19; }
	inline int32_t* get_address_of_saveLocation_19() { return &___saveLocation_19; }
	inline void set_saveLocation_19(int32_t value)
	{
		___saveLocation_19 = value;
	}

	inline static int32_t get_offset_of_encrypt_20() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___encrypt_20)); }
	inline bool get_encrypt_20() const { return ___encrypt_20; }
	inline bool* get_address_of_encrypt_20() { return &___encrypt_20; }
	inline void set_encrypt_20(bool value)
	{
		___encrypt_20 = value;
	}

	inline static int32_t get_offset_of_encryptionPassword_21() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___encryptionPassword_21)); }
	inline String_t* get_encryptionPassword_21() const { return ___encryptionPassword_21; }
	inline String_t** get_address_of_encryptionPassword_21() { return &___encryptionPassword_21; }
	inline void set_encryptionPassword_21(String_t* value)
	{
		___encryptionPassword_21 = value;
		Il2CppCodeGenWriteBarrier(&___encryptionPassword_21, value);
	}

	inline static int32_t get_offset_of_webUsername_22() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___webUsername_22)); }
	inline String_t* get_webUsername_22() const { return ___webUsername_22; }
	inline String_t** get_address_of_webUsername_22() { return &___webUsername_22; }
	inline void set_webUsername_22(String_t* value)
	{
		___webUsername_22 = value;
		Il2CppCodeGenWriteBarrier(&___webUsername_22, value);
	}

	inline static int32_t get_offset_of_webPassword_23() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___webPassword_23)); }
	inline String_t* get_webPassword_23() const { return ___webPassword_23; }
	inline String_t** get_address_of_webPassword_23() { return &___webPassword_23; }
	inline void set_webPassword_23(String_t* value)
	{
		___webPassword_23 = value;
		Il2CppCodeGenWriteBarrier(&___webPassword_23, value);
	}

	inline static int32_t get_offset_of_isQuitting_24() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___isQuitting_24)); }
	inline bool get_isQuitting_24() const { return ___isQuitting_24; }
	inline bool* get_address_of_isQuitting_24() { return &___isQuitting_24; }
	inline void set_isQuitting_24(bool value)
	{
		___isQuitting_24 = value;
	}

	inline static int32_t get_offset_of_settings_25() { return static_cast<int32_t>(offsetof(ES2Auto_t3532659987, ___settings_25)); }
	inline ES2Settings_t2754521479 * get_settings_25() const { return ___settings_25; }
	inline ES2Settings_t2754521479 ** get_address_of_settings_25() { return &___settings_25; }
	inline void set_settings_25(ES2Settings_t2754521479 * value)
	{
		___settings_25 = value;
		Il2CppCodeGenWriteBarrier(&___settings_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
