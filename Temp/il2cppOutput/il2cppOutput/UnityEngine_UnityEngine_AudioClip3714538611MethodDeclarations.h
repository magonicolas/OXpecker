#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.String
struct String_t;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t749510018;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t2977871350;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback749510018.h"
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCa2977871350.h"

// System.Int32 UnityEngine.AudioClip::get_samples()
extern "C"  int32_t AudioClip_get_samples_m1244947761 (AudioClip_t3714538611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioClip::get_channels()
extern "C"  int32_t AudioClip_get_channels_m2158838602 (AudioClip_t3714538611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AudioClip::get_frequency()
extern "C"  int32_t AudioClip_get_frequency_m3651052548 (AudioClip_t3714538611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
extern "C"  bool AudioClip_GetData_m3989861477 (AudioClip_t3714538611 * __this, SingleU5BU5D_t1219431280* ___data0, int32_t ___offsetSamples1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
extern "C"  bool AudioClip_SetData_m3652083313 (AudioClip_t3714538611 * __this, SingleU5BU5D_t1219431280* ___data0, int32_t ___offsetSamples1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  AudioClip_t3714538611 * AudioClip_Create_m948314367 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.AudioClip/PCMReaderCallback,UnityEngine.AudioClip/PCMSetPositionCallback)
extern "C"  AudioClip_t3714538611 * AudioClip_Create_m3999204423 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, PCMReaderCallback_t749510018 * ___pcmreadercallback5, PCMSetPositionCallback_t2977871350 * ___pcmsetpositioncallback6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C"  void AudioClip_InvokePCMReaderCallback_Internal_m963695910 (AudioClip_t3714538611 * __this, SingleU5BU5D_t1219431280* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C"  void AudioClip_InvokePCMSetPositionCallback_Internal_m194702160 (AudioClip_t3714538611 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.AudioClip::Construct_Internal()
extern "C"  AudioClip_t3714538611 * AudioClip_Construct_Internal_m4167029778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::Init_Internal(System.String,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void AudioClip_Init_Internal_m3875816683 (AudioClip_t3714538611 * __this, String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ___stream4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
