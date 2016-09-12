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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_ValueType4014882752.h"
#include "ES2_ES2FilenameData_PathType1299067167.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2FilenameData
struct  ES2FilenameData_t816641461 
{
public:
	// System.String ES2FilenameData::fullString
	String_t* ___fullString_0;
	// System.String ES2FilenameData::persistentPath
	String_t* ___persistentPath_1;
	// System.String ES2FilenameData::userFolder
	String_t* ___userFolder_2;
	// System.String ES2FilenameData::filename
	String_t* ___filename_3;
	// System.String ES2FilenameData::extension
	String_t* ___extension_4;
	// System.String ES2FilenameData::tag
	String_t* ___tag_5;
	// System.String ES2FilenameData::playerPrefsPath
	String_t* ___playerPrefsPath_6;
	// System.String ES2FilenameData::filePath
	String_t* ___filePath_7;
	// ES2FilenameData/PathType ES2FilenameData::pathType
	int32_t ___pathType_8;
	// System.Boolean ES2FilenameData::isAbsolute
	bool ___isAbsolute_9;

public:
	inline static int32_t get_offset_of_fullString_0() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___fullString_0)); }
	inline String_t* get_fullString_0() const { return ___fullString_0; }
	inline String_t** get_address_of_fullString_0() { return &___fullString_0; }
	inline void set_fullString_0(String_t* value)
	{
		___fullString_0 = value;
		Il2CppCodeGenWriteBarrier(&___fullString_0, value);
	}

	inline static int32_t get_offset_of_persistentPath_1() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___persistentPath_1)); }
	inline String_t* get_persistentPath_1() const { return ___persistentPath_1; }
	inline String_t** get_address_of_persistentPath_1() { return &___persistentPath_1; }
	inline void set_persistentPath_1(String_t* value)
	{
		___persistentPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___persistentPath_1, value);
	}

	inline static int32_t get_offset_of_userFolder_2() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___userFolder_2)); }
	inline String_t* get_userFolder_2() const { return ___userFolder_2; }
	inline String_t** get_address_of_userFolder_2() { return &___userFolder_2; }
	inline void set_userFolder_2(String_t* value)
	{
		___userFolder_2 = value;
		Il2CppCodeGenWriteBarrier(&___userFolder_2, value);
	}

	inline static int32_t get_offset_of_filename_3() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___filename_3)); }
	inline String_t* get_filename_3() const { return ___filename_3; }
	inline String_t** get_address_of_filename_3() { return &___filename_3; }
	inline void set_filename_3(String_t* value)
	{
		___filename_3 = value;
		Il2CppCodeGenWriteBarrier(&___filename_3, value);
	}

	inline static int32_t get_offset_of_extension_4() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___extension_4)); }
	inline String_t* get_extension_4() const { return ___extension_4; }
	inline String_t** get_address_of_extension_4() { return &___extension_4; }
	inline void set_extension_4(String_t* value)
	{
		___extension_4 = value;
		Il2CppCodeGenWriteBarrier(&___extension_4, value);
	}

	inline static int32_t get_offset_of_tag_5() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___tag_5)); }
	inline String_t* get_tag_5() const { return ___tag_5; }
	inline String_t** get_address_of_tag_5() { return &___tag_5; }
	inline void set_tag_5(String_t* value)
	{
		___tag_5 = value;
		Il2CppCodeGenWriteBarrier(&___tag_5, value);
	}

	inline static int32_t get_offset_of_playerPrefsPath_6() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___playerPrefsPath_6)); }
	inline String_t* get_playerPrefsPath_6() const { return ___playerPrefsPath_6; }
	inline String_t** get_address_of_playerPrefsPath_6() { return &___playerPrefsPath_6; }
	inline void set_playerPrefsPath_6(String_t* value)
	{
		___playerPrefsPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerPrefsPath_6, value);
	}

	inline static int32_t get_offset_of_filePath_7() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___filePath_7)); }
	inline String_t* get_filePath_7() const { return ___filePath_7; }
	inline String_t** get_address_of_filePath_7() { return &___filePath_7; }
	inline void set_filePath_7(String_t* value)
	{
		___filePath_7 = value;
		Il2CppCodeGenWriteBarrier(&___filePath_7, value);
	}

	inline static int32_t get_offset_of_pathType_8() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___pathType_8)); }
	inline int32_t get_pathType_8() const { return ___pathType_8; }
	inline int32_t* get_address_of_pathType_8() { return &___pathType_8; }
	inline void set_pathType_8(int32_t value)
	{
		___pathType_8 = value;
	}

	inline static int32_t get_offset_of_isAbsolute_9() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461, ___isAbsolute_9)); }
	inline bool get_isAbsolute_9() const { return ___isAbsolute_9; }
	inline bool* get_address_of_isAbsolute_9() { return &___isAbsolute_9; }
	inline void set_isAbsolute_9(bool value)
	{
		___isAbsolute_9 = value;
	}
};

struct ES2FilenameData_t816641461_StaticFields
{
public:
	// System.String ES2FilenameData::persistentDataPath
	String_t* ___persistentDataPath_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES2FilenameData::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ES2FilenameData::<>f__switch$map1
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1_12;

public:
	inline static int32_t get_offset_of_persistentDataPath_10() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461_StaticFields, ___persistentDataPath_10)); }
	inline String_t* get_persistentDataPath_10() const { return ___persistentDataPath_10; }
	inline String_t** get_address_of_persistentDataPath_10() { return &___persistentDataPath_10; }
	inline void set_persistentDataPath_10(String_t* value)
	{
		___persistentDataPath_10 = value;
		Il2CppCodeGenWriteBarrier(&___persistentDataPath_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_11() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461_StaticFields, ___U3CU3Ef__switchU24map0_11)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map0_11() const { return ___U3CU3Ef__switchU24map0_11; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map0_11() { return &___U3CU3Ef__switchU24map0_11; }
	inline void set_U3CU3Ef__switchU24map0_11(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_12() { return static_cast<int32_t>(offsetof(ES2FilenameData_t816641461_StaticFields, ___U3CU3Ef__switchU24map1_12)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1_12() const { return ___U3CU3Ef__switchU24map1_12; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1_12() { return &___U3CU3Ef__switchU24map1_12; }
	inline void set_U3CU3Ef__switchU24map1_12(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: ES2FilenameData
struct ES2FilenameData_t816641461_marshaled_pinvoke
{
	char* ___fullString_0;
	char* ___persistentPath_1;
	char* ___userFolder_2;
	char* ___filename_3;
	char* ___extension_4;
	char* ___tag_5;
	char* ___playerPrefsPath_6;
	char* ___filePath_7;
	int32_t ___pathType_8;
	int32_t ___isAbsolute_9;
};
// Native definition for marshalling of: ES2FilenameData
struct ES2FilenameData_t816641461_marshaled_com
{
	uint16_t* ___fullString_0;
	uint16_t* ___persistentPath_1;
	uint16_t* ___userFolder_2;
	uint16_t* ___filename_3;
	uint16_t* ___extension_4;
	uint16_t* ___tag_5;
	uint16_t* ___playerPrefsPath_6;
	uint16_t* ___filePath_7;
	int32_t ___pathType_8;
	int32_t ___isAbsolute_9;
};
