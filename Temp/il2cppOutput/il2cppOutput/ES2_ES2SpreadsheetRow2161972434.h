#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES2SpreadsheetRow
struct  ES2SpreadsheetRow_t2161972434  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> ES2SpreadsheetRow::cells
	List_1_t1765447871 * ___cells_0;

public:
	inline static int32_t get_offset_of_cells_0() { return static_cast<int32_t>(offsetof(ES2SpreadsheetRow_t2161972434, ___cells_0)); }
	inline List_1_t1765447871 * get_cells_0() const { return ___cells_0; }
	inline List_1_t1765447871 ** get_address_of_cells_0() { return &___cells_0; }
	inline void set_cells_0(List_1_t1765447871 * value)
	{
		___cells_0 = value;
		Il2CppCodeGenWriteBarrier(&___cells_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
