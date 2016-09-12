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
// ES2AutoSave[]
struct ES2AutoSaveU5BU5D_t1705022481;
// System.Collections.Generic.Dictionary`2<System.String,ES2AutoSave>
struct Dictionary_2_t101309088;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,ES2AutoSave>
struct Dictionary_2_t825778721;
// ES2AutoSaveGlobalManager
struct ES2AutoSaveGlobalManager_t4066042682;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3667177573;
// ES2AutoSaveManager
struct ES2AutoSaveManager_t1673027677;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "ES2_ES2AutoSaveManager_LoadEvent3369598260.h"
#include "ES2_ES2AutoSaveManager_SaveEvent2164147965.h"
#include "ES2_ES2Settings_EncryptionType2170316157.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2AutoSaveManager
struct  ES2AutoSaveManager_t1673027677  : public MonoBehaviour_t3012272455
{
public:
	// ES2AutoSaveManager/LoadEvent ES2AutoSaveManager::loadEvent
	int32_t ___loadEvent_2;
	// ES2AutoSaveManager/SaveEvent ES2AutoSaveManager::saveEvent
	int32_t ___saveEvent_3;
	// System.String ES2AutoSaveManager::filePath
	String_t* ___filePath_4;
	// System.String ES2AutoSaveManager::tag
	String_t* ___tag_5;
	// System.Boolean ES2AutoSaveManager::encrypt
	bool ___encrypt_6;
	// System.String ES2AutoSaveManager::encryptionPassword
	String_t* ___encryptionPassword_7;
	// ES2Settings/EncryptionType ES2AutoSaveManager::encryptionType
	int32_t ___encryptionType_8;
	// System.Boolean ES2AutoSaveManager::deletePrefabsOnLoad
	bool ___deletePrefabsOnLoad_9;
	// System.Boolean ES2AutoSaveManager::convertPrefabsToSceneObjectsOnImport
	bool ___convertPrefabsToSceneObjectsOnImport_10;
	// ES2AutoSave[] ES2AutoSaveManager::sceneObjects
	ES2AutoSaveU5BU5D_t1705022481* ___sceneObjects_11;
	// System.Collections.Generic.Dictionary`2<System.String,ES2AutoSave> ES2AutoSaveManager::autoSaves
	Dictionary_2_t101309088 * ___autoSaves_12;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,ES2AutoSave> ES2AutoSaveManager::transforms
	Dictionary_2_t825778721 * ___transforms_13;
	// ES2AutoSaveGlobalManager ES2AutoSaveManager::globalManager
	ES2AutoSaveGlobalManager_t4066042682 * ___globalManager_14;
	// System.Collections.Generic.HashSet`1<System.String> ES2AutoSaveManager::ids
	HashSet_1_t3667177573 * ___ids_15;

public:
	inline static int32_t get_offset_of_loadEvent_2() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___loadEvent_2)); }
	inline int32_t get_loadEvent_2() const { return ___loadEvent_2; }
	inline int32_t* get_address_of_loadEvent_2() { return &___loadEvent_2; }
	inline void set_loadEvent_2(int32_t value)
	{
		___loadEvent_2 = value;
	}

	inline static int32_t get_offset_of_saveEvent_3() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___saveEvent_3)); }
	inline int32_t get_saveEvent_3() const { return ___saveEvent_3; }
	inline int32_t* get_address_of_saveEvent_3() { return &___saveEvent_3; }
	inline void set_saveEvent_3(int32_t value)
	{
		___saveEvent_3 = value;
	}

	inline static int32_t get_offset_of_filePath_4() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___filePath_4)); }
	inline String_t* get_filePath_4() const { return ___filePath_4; }
	inline String_t** get_address_of_filePath_4() { return &___filePath_4; }
	inline void set_filePath_4(String_t* value)
	{
		___filePath_4 = value;
		Il2CppCodeGenWriteBarrier(&___filePath_4, value);
	}

	inline static int32_t get_offset_of_tag_5() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___tag_5)); }
	inline String_t* get_tag_5() const { return ___tag_5; }
	inline String_t** get_address_of_tag_5() { return &___tag_5; }
	inline void set_tag_5(String_t* value)
	{
		___tag_5 = value;
		Il2CppCodeGenWriteBarrier(&___tag_5, value);
	}

	inline static int32_t get_offset_of_encrypt_6() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___encrypt_6)); }
	inline bool get_encrypt_6() const { return ___encrypt_6; }
	inline bool* get_address_of_encrypt_6() { return &___encrypt_6; }
	inline void set_encrypt_6(bool value)
	{
		___encrypt_6 = value;
	}

	inline static int32_t get_offset_of_encryptionPassword_7() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___encryptionPassword_7)); }
	inline String_t* get_encryptionPassword_7() const { return ___encryptionPassword_7; }
	inline String_t** get_address_of_encryptionPassword_7() { return &___encryptionPassword_7; }
	inline void set_encryptionPassword_7(String_t* value)
	{
		___encryptionPassword_7 = value;
		Il2CppCodeGenWriteBarrier(&___encryptionPassword_7, value);
	}

	inline static int32_t get_offset_of_encryptionType_8() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___encryptionType_8)); }
	inline int32_t get_encryptionType_8() const { return ___encryptionType_8; }
	inline int32_t* get_address_of_encryptionType_8() { return &___encryptionType_8; }
	inline void set_encryptionType_8(int32_t value)
	{
		___encryptionType_8 = value;
	}

	inline static int32_t get_offset_of_deletePrefabsOnLoad_9() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___deletePrefabsOnLoad_9)); }
	inline bool get_deletePrefabsOnLoad_9() const { return ___deletePrefabsOnLoad_9; }
	inline bool* get_address_of_deletePrefabsOnLoad_9() { return &___deletePrefabsOnLoad_9; }
	inline void set_deletePrefabsOnLoad_9(bool value)
	{
		___deletePrefabsOnLoad_9 = value;
	}

	inline static int32_t get_offset_of_convertPrefabsToSceneObjectsOnImport_10() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___convertPrefabsToSceneObjectsOnImport_10)); }
	inline bool get_convertPrefabsToSceneObjectsOnImport_10() const { return ___convertPrefabsToSceneObjectsOnImport_10; }
	inline bool* get_address_of_convertPrefabsToSceneObjectsOnImport_10() { return &___convertPrefabsToSceneObjectsOnImport_10; }
	inline void set_convertPrefabsToSceneObjectsOnImport_10(bool value)
	{
		___convertPrefabsToSceneObjectsOnImport_10 = value;
	}

	inline static int32_t get_offset_of_sceneObjects_11() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___sceneObjects_11)); }
	inline ES2AutoSaveU5BU5D_t1705022481* get_sceneObjects_11() const { return ___sceneObjects_11; }
	inline ES2AutoSaveU5BU5D_t1705022481** get_address_of_sceneObjects_11() { return &___sceneObjects_11; }
	inline void set_sceneObjects_11(ES2AutoSaveU5BU5D_t1705022481* value)
	{
		___sceneObjects_11 = value;
		Il2CppCodeGenWriteBarrier(&___sceneObjects_11, value);
	}

	inline static int32_t get_offset_of_autoSaves_12() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___autoSaves_12)); }
	inline Dictionary_2_t101309088 * get_autoSaves_12() const { return ___autoSaves_12; }
	inline Dictionary_2_t101309088 ** get_address_of_autoSaves_12() { return &___autoSaves_12; }
	inline void set_autoSaves_12(Dictionary_2_t101309088 * value)
	{
		___autoSaves_12 = value;
		Il2CppCodeGenWriteBarrier(&___autoSaves_12, value);
	}

	inline static int32_t get_offset_of_transforms_13() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___transforms_13)); }
	inline Dictionary_2_t825778721 * get_transforms_13() const { return ___transforms_13; }
	inline Dictionary_2_t825778721 ** get_address_of_transforms_13() { return &___transforms_13; }
	inline void set_transforms_13(Dictionary_2_t825778721 * value)
	{
		___transforms_13 = value;
		Il2CppCodeGenWriteBarrier(&___transforms_13, value);
	}

	inline static int32_t get_offset_of_globalManager_14() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___globalManager_14)); }
	inline ES2AutoSaveGlobalManager_t4066042682 * get_globalManager_14() const { return ___globalManager_14; }
	inline ES2AutoSaveGlobalManager_t4066042682 ** get_address_of_globalManager_14() { return &___globalManager_14; }
	inline void set_globalManager_14(ES2AutoSaveGlobalManager_t4066042682 * value)
	{
		___globalManager_14 = value;
		Il2CppCodeGenWriteBarrier(&___globalManager_14, value);
	}

	inline static int32_t get_offset_of_ids_15() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677, ___ids_15)); }
	inline HashSet_1_t3667177573 * get_ids_15() const { return ___ids_15; }
	inline HashSet_1_t3667177573 ** get_address_of_ids_15() { return &___ids_15; }
	inline void set_ids_15(HashSet_1_t3667177573 * value)
	{
		___ids_15 = value;
		Il2CppCodeGenWriteBarrier(&___ids_15, value);
	}
};

struct ES2AutoSaveManager_t1673027677_StaticFields
{
public:
	// ES2AutoSaveManager ES2AutoSaveManager::_instance
	ES2AutoSaveManager_t1673027677 * ____instance_16;

public:
	inline static int32_t get_offset_of__instance_16() { return static_cast<int32_t>(offsetof(ES2AutoSaveManager_t1673027677_StaticFields, ____instance_16)); }
	inline ES2AutoSaveManager_t1673027677 * get__instance_16() const { return ____instance_16; }
	inline ES2AutoSaveManager_t1673027677 ** get_address_of__instance_16() { return &____instance_16; }
	inline void set__instance_16(ES2AutoSaveManager_t1673027677 * value)
	{
		____instance_16 = value;
		Il2CppCodeGenWriteBarrier(&____instance_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
