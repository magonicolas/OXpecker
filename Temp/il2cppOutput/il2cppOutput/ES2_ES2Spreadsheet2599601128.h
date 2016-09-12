#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<ES2SpreadsheetRow>
struct List_1_t2958931403;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2Spreadsheet
struct  ES2Spreadsheet_t2599601128  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<ES2SpreadsheetRow> ES2Spreadsheet::sheet
	List_1_t2958931403 * ___sheet_0;
	// System.Boolean ES2Spreadsheet::append
	bool ___append_1;

public:
	inline static int32_t get_offset_of_sheet_0() { return static_cast<int32_t>(offsetof(ES2Spreadsheet_t2599601128, ___sheet_0)); }
	inline List_1_t2958931403 * get_sheet_0() const { return ___sheet_0; }
	inline List_1_t2958931403 ** get_address_of_sheet_0() { return &___sheet_0; }
	inline void set_sheet_0(List_1_t2958931403 * value)
	{
		___sheet_0 = value;
		Il2CppCodeGenWriteBarrier(&___sheet_0, value);
	}

	inline static int32_t get_offset_of_append_1() { return static_cast<int32_t>(offsetof(ES2Spreadsheet_t2599601128, ___append_1)); }
	inline bool get_append_1() const { return ___append_1; }
	inline bool* get_address_of_append_1() { return &___append_1; }
	inline void set_append_1(bool value)
	{
		___append_1 = value;
	}
};

struct ES2Spreadsheet_t2599601128_StaticFields
{
public:
	// System.Byte[] ES2Spreadsheet::comma
	ByteU5BU5D_t58506160* ___comma_2;
	// System.Byte[] ES2Spreadsheet::newline
	ByteU5BU5D_t58506160* ___newline_3;

public:
	inline static int32_t get_offset_of_comma_2() { return static_cast<int32_t>(offsetof(ES2Spreadsheet_t2599601128_StaticFields, ___comma_2)); }
	inline ByteU5BU5D_t58506160* get_comma_2() const { return ___comma_2; }
	inline ByteU5BU5D_t58506160** get_address_of_comma_2() { return &___comma_2; }
	inline void set_comma_2(ByteU5BU5D_t58506160* value)
	{
		___comma_2 = value;
		Il2CppCodeGenWriteBarrier(&___comma_2, value);
	}

	inline static int32_t get_offset_of_newline_3() { return static_cast<int32_t>(offsetof(ES2Spreadsheet_t2599601128_StaticFields, ___newline_3)); }
	inline ByteU5BU5D_t58506160* get_newline_3() const { return ___newline_3; }
	inline ByteU5BU5D_t58506160** get_address_of_newline_3() { return &___newline_3; }
	inline void set_newline_3(ByteU5BU5D_t58506160* value)
	{
		___newline_3 = value;
		Il2CppCodeGenWriteBarrier(&___newline_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
