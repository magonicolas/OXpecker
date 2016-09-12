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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// ES2AutoSave
struct ES2AutoSave_t2758578480;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2AutoSaveVariableInfo
struct  ES2AutoSaveVariableInfo_t1161407130  : public Il2CppObject
{
public:
	// System.String ES2AutoSaveVariableInfo::name
	String_t* ___name_0;
	// System.String ES2AutoSaveVariableInfo::id
	String_t* ___id_1;
	// System.String ES2AutoSaveVariableInfo::previousID
	String_t* ___previousID_2;
	// System.Boolean ES2AutoSaveVariableInfo::isComponent
	bool ___isComponent_3;
	// System.Boolean ES2AutoSaveVariableInfo::_selected
	bool ____selected_4;
	// System.Boolean ES2AutoSaveVariableInfo::<selectionChanged>k__BackingField
	bool ___U3CselectionChangedU3Ek__BackingField_5;
	// System.Boolean ES2AutoSaveVariableInfo::saveButtonSelected
	bool ___saveButtonSelected_6;
	// System.Boolean ES2AutoSaveVariableInfo::isProperty
	bool ___isProperty_7;
	// System.Boolean ES2AutoSaveVariableInfo::<buttonSelectionChanged>k__BackingField
	bool ___U3CbuttonSelectionChangedU3Ek__BackingField_8;
	// System.String ES2AutoSaveVariableInfo::assemblyQualifiedTypeName
	String_t* ___assemblyQualifiedTypeName_9;
	// System.Collections.Generic.List`1<System.String> ES2AutoSaveVariableInfo::variableIDs
	List_1_t1765447871 * ___variableIDs_10;
	// UnityEngine.GameObject ES2AutoSaveVariableInfo::gameObject
	GameObject_t4012695102 * ___gameObject_11;
	// ES2AutoSave ES2AutoSaveVariableInfo::_autoSave
	ES2AutoSave_t2758578480 * ____autoSave_12;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier(&___id_1, value);
	}

	inline static int32_t get_offset_of_previousID_2() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___previousID_2)); }
	inline String_t* get_previousID_2() const { return ___previousID_2; }
	inline String_t** get_address_of_previousID_2() { return &___previousID_2; }
	inline void set_previousID_2(String_t* value)
	{
		___previousID_2 = value;
		Il2CppCodeGenWriteBarrier(&___previousID_2, value);
	}

	inline static int32_t get_offset_of_isComponent_3() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___isComponent_3)); }
	inline bool get_isComponent_3() const { return ___isComponent_3; }
	inline bool* get_address_of_isComponent_3() { return &___isComponent_3; }
	inline void set_isComponent_3(bool value)
	{
		___isComponent_3 = value;
	}

	inline static int32_t get_offset_of__selected_4() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ____selected_4)); }
	inline bool get__selected_4() const { return ____selected_4; }
	inline bool* get_address_of__selected_4() { return &____selected_4; }
	inline void set__selected_4(bool value)
	{
		____selected_4 = value;
	}

	inline static int32_t get_offset_of_U3CselectionChangedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___U3CselectionChangedU3Ek__BackingField_5)); }
	inline bool get_U3CselectionChangedU3Ek__BackingField_5() const { return ___U3CselectionChangedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CselectionChangedU3Ek__BackingField_5() { return &___U3CselectionChangedU3Ek__BackingField_5; }
	inline void set_U3CselectionChangedU3Ek__BackingField_5(bool value)
	{
		___U3CselectionChangedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_saveButtonSelected_6() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___saveButtonSelected_6)); }
	inline bool get_saveButtonSelected_6() const { return ___saveButtonSelected_6; }
	inline bool* get_address_of_saveButtonSelected_6() { return &___saveButtonSelected_6; }
	inline void set_saveButtonSelected_6(bool value)
	{
		___saveButtonSelected_6 = value;
	}

	inline static int32_t get_offset_of_isProperty_7() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___isProperty_7)); }
	inline bool get_isProperty_7() const { return ___isProperty_7; }
	inline bool* get_address_of_isProperty_7() { return &___isProperty_7; }
	inline void set_isProperty_7(bool value)
	{
		___isProperty_7 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonSelectionChangedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___U3CbuttonSelectionChangedU3Ek__BackingField_8)); }
	inline bool get_U3CbuttonSelectionChangedU3Ek__BackingField_8() const { return ___U3CbuttonSelectionChangedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CbuttonSelectionChangedU3Ek__BackingField_8() { return &___U3CbuttonSelectionChangedU3Ek__BackingField_8; }
	inline void set_U3CbuttonSelectionChangedU3Ek__BackingField_8(bool value)
	{
		___U3CbuttonSelectionChangedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_assemblyQualifiedTypeName_9() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___assemblyQualifiedTypeName_9)); }
	inline String_t* get_assemblyQualifiedTypeName_9() const { return ___assemblyQualifiedTypeName_9; }
	inline String_t** get_address_of_assemblyQualifiedTypeName_9() { return &___assemblyQualifiedTypeName_9; }
	inline void set_assemblyQualifiedTypeName_9(String_t* value)
	{
		___assemblyQualifiedTypeName_9 = value;
		Il2CppCodeGenWriteBarrier(&___assemblyQualifiedTypeName_9, value);
	}

	inline static int32_t get_offset_of_variableIDs_10() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___variableIDs_10)); }
	inline List_1_t1765447871 * get_variableIDs_10() const { return ___variableIDs_10; }
	inline List_1_t1765447871 ** get_address_of_variableIDs_10() { return &___variableIDs_10; }
	inline void set_variableIDs_10(List_1_t1765447871 * value)
	{
		___variableIDs_10 = value;
		Il2CppCodeGenWriteBarrier(&___variableIDs_10, value);
	}

	inline static int32_t get_offset_of_gameObject_11() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ___gameObject_11)); }
	inline GameObject_t4012695102 * get_gameObject_11() const { return ___gameObject_11; }
	inline GameObject_t4012695102 ** get_address_of_gameObject_11() { return &___gameObject_11; }
	inline void set_gameObject_11(GameObject_t4012695102 * value)
	{
		___gameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_11, value);
	}

	inline static int32_t get_offset_of__autoSave_12() { return static_cast<int32_t>(offsetof(ES2AutoSaveVariableInfo_t1161407130, ____autoSave_12)); }
	inline ES2AutoSave_t2758578480 * get__autoSave_12() const { return ____autoSave_12; }
	inline ES2AutoSave_t2758578480 ** get_address_of__autoSave_12() { return &____autoSave_12; }
	inline void set__autoSave_12(ES2AutoSave_t2758578480 * value)
	{
		____autoSave_12 = value;
		Il2CppCodeGenWriteBarrier(&____autoSave_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
