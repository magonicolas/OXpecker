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

// Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>
struct CustomCreationConverter_1_t1169675786;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1972966974;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t4019458909;
// Newtonsoft.Json.JsonReader
struct JsonReader_t1817561742;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonWriter1972966974.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonSerializer4019458909.h"
#include "AssemblyU2DCSharp_Newtonsoft_Json_JsonReader1817561742.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::.ctor()
extern "C"  void CustomCreationConverter_1__ctor_m299850762_gshared (CustomCreationConverter_1_t1169675786 * __this, const MethodInfo* method);
#define CustomCreationConverter_1__ctor_m299850762(__this, method) ((  void (*) (CustomCreationConverter_1_t1169675786 *, const MethodInfo*))CustomCreationConverter_1__ctor_m299850762_gshared)(__this, method)
// System.Void Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void CustomCreationConverter_1_WriteJson_m946118922_gshared (CustomCreationConverter_1_t1169675786 * __this, JsonWriter_t1972966974 * ___writer0, Il2CppObject * ___value1, JsonSerializer_t4019458909 * ___serializer2, const MethodInfo* method);
#define CustomCreationConverter_1_WriteJson_m946118922(__this, ___writer0, ___value1, ___serializer2, method) ((  void (*) (CustomCreationConverter_1_t1169675786 *, JsonWriter_t1972966974 *, Il2CppObject *, JsonSerializer_t4019458909 *, const MethodInfo*))CustomCreationConverter_1_WriteJson_m946118922_gshared)(__this, ___writer0, ___value1, ___serializer2, method)
// System.Object Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * CustomCreationConverter_1_ReadJson_m3440594451_gshared (CustomCreationConverter_1_t1169675786 * __this, JsonReader_t1817561742 * ___reader0, Type_t * ___objectType1, Il2CppObject * ___existingValue2, JsonSerializer_t4019458909 * ___serializer3, const MethodInfo* method);
#define CustomCreationConverter_1_ReadJson_m3440594451(__this, ___reader0, ___objectType1, ___existingValue2, ___serializer3, method) ((  Il2CppObject * (*) (CustomCreationConverter_1_t1169675786 *, JsonReader_t1817561742 *, Type_t *, Il2CppObject *, JsonSerializer_t4019458909 *, const MethodInfo*))CustomCreationConverter_1_ReadJson_m3440594451_gshared)(__this, ___reader0, ___objectType1, ___existingValue2, ___serializer3, method)
// System.Boolean Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::CanConvert(System.Type)
extern "C"  bool CustomCreationConverter_1_CanConvert_m968142800_gshared (CustomCreationConverter_1_t1169675786 * __this, Type_t * ___objectType0, const MethodInfo* method);
#define CustomCreationConverter_1_CanConvert_m968142800(__this, ___objectType0, method) ((  bool (*) (CustomCreationConverter_1_t1169675786 *, Type_t *, const MethodInfo*))CustomCreationConverter_1_CanConvert_m968142800_gshared)(__this, ___objectType0, method)
// System.Boolean Newtonsoft.Json.Converters.CustomCreationConverter`1<System.Object>::get_CanWrite()
extern "C"  bool CustomCreationConverter_1_get_CanWrite_m2205801086_gshared (CustomCreationConverter_1_t1169675786 * __this, const MethodInfo* method);
#define CustomCreationConverter_1_get_CanWrite_m2205801086(__this, method) ((  bool (*) (CustomCreationConverter_1_t1169675786 *, const MethodInfo*))CustomCreationConverter_1_get_CanWrite_m2205801086_gshared)(__this, method)
