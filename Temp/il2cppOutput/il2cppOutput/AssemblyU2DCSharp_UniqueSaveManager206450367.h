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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniqueSaveManager
struct  UniqueSaveManager_t206450367  : public MonoBehaviour_t3012272455
{
public:
	// System.String UniqueSaveManager::sceneObjectFile
	String_t* ___sceneObjectFile_2;
	// System.String UniqueSaveManager::createdObjectFile
	String_t* ___createdObjectFile_3;

public:
	inline static int32_t get_offset_of_sceneObjectFile_2() { return static_cast<int32_t>(offsetof(UniqueSaveManager_t206450367, ___sceneObjectFile_2)); }
	inline String_t* get_sceneObjectFile_2() const { return ___sceneObjectFile_2; }
	inline String_t** get_address_of_sceneObjectFile_2() { return &___sceneObjectFile_2; }
	inline void set_sceneObjectFile_2(String_t* value)
	{
		___sceneObjectFile_2 = value;
		Il2CppCodeGenWriteBarrier(&___sceneObjectFile_2, value);
	}

	inline static int32_t get_offset_of_createdObjectFile_3() { return static_cast<int32_t>(offsetof(UniqueSaveManager_t206450367, ___createdObjectFile_3)); }
	inline String_t* get_createdObjectFile_3() const { return ___createdObjectFile_3; }
	inline String_t** get_address_of_createdObjectFile_3() { return &___createdObjectFile_3; }
	inline void set_createdObjectFile_3(String_t* value)
	{
		___createdObjectFile_3 = value;
		Il2CppCodeGenWriteBarrier(&___createdObjectFile_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
