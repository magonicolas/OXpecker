#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ES2AutoSaveVariableInfo>
struct List_1_t1958366099;
// System.Collections.Generic.List`1<ES2AutoSaveComponentInfo>
struct List_1_t2829966580;
// ES2AutoSaveVariableInfo
struct ES2AutoSaveVariableInfo_t1161407130;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2AutoSave
struct  ES2AutoSave_t2758578480  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<ES2AutoSaveVariableInfo> ES2AutoSave::variableCache
	List_1_t1958366099 * ___variableCache_2;
	// System.Collections.Generic.List`1<ES2AutoSaveComponentInfo> ES2AutoSave::components
	List_1_t2829966580 * ___components_3;
	// ES2AutoSaveVariableInfo ES2AutoSave::activeSelfVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___activeSelfVariable_4;
	// ES2AutoSaveVariableInfo ES2AutoSave::nameVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___nameVariable_5;
	// ES2AutoSaveVariableInfo ES2AutoSave::tagVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___tagVariable_6;
	// ES2AutoSaveVariableInfo ES2AutoSave::layerVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___layerVariable_7;
	// ES2AutoSaveVariableInfo ES2AutoSave::parentVariable
	ES2AutoSaveVariableInfo_t1161407130 * ___parentVariable_8;
	// System.String ES2AutoSave::id
	String_t* ___id_9;
	// System.String ES2AutoSave::prefabID
	String_t* ___prefabID_10;
	// System.Boolean ES2AutoSave::isInitialised
	bool ___isInitialised_11;
	// System.Boolean ES2AutoSave::_selected
	bool ____selected_12;
	// System.Boolean ES2AutoSave::<selectionChanged>k__BackingField
	bool ___U3CselectionChangedU3Ek__BackingField_13;
	// System.Boolean ES2AutoSave::saveButtonSelected
	bool ___saveButtonSelected_14;
	// System.Boolean ES2AutoSave::<buttonSelectionChanged>k__BackingField
	bool ___U3CbuttonSelectionChangedU3Ek__BackingField_15;
	// UnityEngine.Color ES2AutoSave::color
	Color_t1588175760  ___color_16;
	// UnityEngine.Transform ES2AutoSave::transform
	Transform_t284553113 * ___transform_17;

public:
	inline static int32_t get_offset_of_variableCache_2() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___variableCache_2)); }
	inline List_1_t1958366099 * get_variableCache_2() const { return ___variableCache_2; }
	inline List_1_t1958366099 ** get_address_of_variableCache_2() { return &___variableCache_2; }
	inline void set_variableCache_2(List_1_t1958366099 * value)
	{
		___variableCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___variableCache_2, value);
	}

	inline static int32_t get_offset_of_components_3() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___components_3)); }
	inline List_1_t2829966580 * get_components_3() const { return ___components_3; }
	inline List_1_t2829966580 ** get_address_of_components_3() { return &___components_3; }
	inline void set_components_3(List_1_t2829966580 * value)
	{
		___components_3 = value;
		Il2CppCodeGenWriteBarrier(&___components_3, value);
	}

	inline static int32_t get_offset_of_activeSelfVariable_4() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___activeSelfVariable_4)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_activeSelfVariable_4() const { return ___activeSelfVariable_4; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_activeSelfVariable_4() { return &___activeSelfVariable_4; }
	inline void set_activeSelfVariable_4(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___activeSelfVariable_4 = value;
		Il2CppCodeGenWriteBarrier(&___activeSelfVariable_4, value);
	}

	inline static int32_t get_offset_of_nameVariable_5() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___nameVariable_5)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_nameVariable_5() const { return ___nameVariable_5; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_nameVariable_5() { return &___nameVariable_5; }
	inline void set_nameVariable_5(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___nameVariable_5 = value;
		Il2CppCodeGenWriteBarrier(&___nameVariable_5, value);
	}

	inline static int32_t get_offset_of_tagVariable_6() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___tagVariable_6)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_tagVariable_6() const { return ___tagVariable_6; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_tagVariable_6() { return &___tagVariable_6; }
	inline void set_tagVariable_6(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___tagVariable_6 = value;
		Il2CppCodeGenWriteBarrier(&___tagVariable_6, value);
	}

	inline static int32_t get_offset_of_layerVariable_7() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___layerVariable_7)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_layerVariable_7() const { return ___layerVariable_7; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_layerVariable_7() { return &___layerVariable_7; }
	inline void set_layerVariable_7(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___layerVariable_7 = value;
		Il2CppCodeGenWriteBarrier(&___layerVariable_7, value);
	}

	inline static int32_t get_offset_of_parentVariable_8() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___parentVariable_8)); }
	inline ES2AutoSaveVariableInfo_t1161407130 * get_parentVariable_8() const { return ___parentVariable_8; }
	inline ES2AutoSaveVariableInfo_t1161407130 ** get_address_of_parentVariable_8() { return &___parentVariable_8; }
	inline void set_parentVariable_8(ES2AutoSaveVariableInfo_t1161407130 * value)
	{
		___parentVariable_8 = value;
		Il2CppCodeGenWriteBarrier(&___parentVariable_8, value);
	}

	inline static int32_t get_offset_of_id_9() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___id_9)); }
	inline String_t* get_id_9() const { return ___id_9; }
	inline String_t** get_address_of_id_9() { return &___id_9; }
	inline void set_id_9(String_t* value)
	{
		___id_9 = value;
		Il2CppCodeGenWriteBarrier(&___id_9, value);
	}

	inline static int32_t get_offset_of_prefabID_10() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___prefabID_10)); }
	inline String_t* get_prefabID_10() const { return ___prefabID_10; }
	inline String_t** get_address_of_prefabID_10() { return &___prefabID_10; }
	inline void set_prefabID_10(String_t* value)
	{
		___prefabID_10 = value;
		Il2CppCodeGenWriteBarrier(&___prefabID_10, value);
	}

	inline static int32_t get_offset_of_isInitialised_11() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___isInitialised_11)); }
	inline bool get_isInitialised_11() const { return ___isInitialised_11; }
	inline bool* get_address_of_isInitialised_11() { return &___isInitialised_11; }
	inline void set_isInitialised_11(bool value)
	{
		___isInitialised_11 = value;
	}

	inline static int32_t get_offset_of__selected_12() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ____selected_12)); }
	inline bool get__selected_12() const { return ____selected_12; }
	inline bool* get_address_of__selected_12() { return &____selected_12; }
	inline void set__selected_12(bool value)
	{
		____selected_12 = value;
	}

	inline static int32_t get_offset_of_U3CselectionChangedU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___U3CselectionChangedU3Ek__BackingField_13)); }
	inline bool get_U3CselectionChangedU3Ek__BackingField_13() const { return ___U3CselectionChangedU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CselectionChangedU3Ek__BackingField_13() { return &___U3CselectionChangedU3Ek__BackingField_13; }
	inline void set_U3CselectionChangedU3Ek__BackingField_13(bool value)
	{
		___U3CselectionChangedU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_saveButtonSelected_14() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___saveButtonSelected_14)); }
	inline bool get_saveButtonSelected_14() const { return ___saveButtonSelected_14; }
	inline bool* get_address_of_saveButtonSelected_14() { return &___saveButtonSelected_14; }
	inline void set_saveButtonSelected_14(bool value)
	{
		___saveButtonSelected_14 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonSelectionChangedU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___U3CbuttonSelectionChangedU3Ek__BackingField_15)); }
	inline bool get_U3CbuttonSelectionChangedU3Ek__BackingField_15() const { return ___U3CbuttonSelectionChangedU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CbuttonSelectionChangedU3Ek__BackingField_15() { return &___U3CbuttonSelectionChangedU3Ek__BackingField_15; }
	inline void set_U3CbuttonSelectionChangedU3Ek__BackingField_15(bool value)
	{
		___U3CbuttonSelectionChangedU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_color_16() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___color_16)); }
	inline Color_t1588175760  get_color_16() const { return ___color_16; }
	inline Color_t1588175760 * get_address_of_color_16() { return &___color_16; }
	inline void set_color_16(Color_t1588175760  value)
	{
		___color_16 = value;
	}

	inline static int32_t get_offset_of_transform_17() { return static_cast<int32_t>(offsetof(ES2AutoSave_t2758578480, ___transform_17)); }
	inline Transform_t284553113 * get_transform_17() const { return ___transform_17; }
	inline Transform_t284553113 ** get_address_of_transform_17() { return &___transform_17; }
	inline void set_transform_17(Transform_t284553113 * value)
	{
		___transform_17 = value;
		Il2CppCodeGenWriteBarrier(&___transform_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
