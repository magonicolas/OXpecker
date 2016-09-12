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

// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>
struct BidirectionalDictionary_2_t3936782237;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void BidirectionalDictionary_2__ctor_m2796461699_gshared (BidirectionalDictionary_2_t3936782237 * __this, const MethodInfo* method);
#define BidirectionalDictionary_2__ctor_m2796461699(__this, method) ((  void (*) (BidirectionalDictionary_2_t3936782237 *, const MethodInfo*))BidirectionalDictionary_2__ctor_m2796461699_gshared)(__this, method)
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TFirst>,System.Collections.Generic.IEqualityComparer`1<TSecond>)
extern "C"  void BidirectionalDictionary_2__ctor_m284462359_gshared (BidirectionalDictionary_2_t3936782237 * __this, Il2CppObject* ___firstEqualityComparer0, Il2CppObject* ___secondEqualityComparer1, const MethodInfo* method);
#define BidirectionalDictionary_2__ctor_m284462359(__this, ___firstEqualityComparer0, ___secondEqualityComparer1, method) ((  void (*) (BidirectionalDictionary_2_t3936782237 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))BidirectionalDictionary_2__ctor_m284462359_gshared)(__this, ___firstEqualityComparer0, ___secondEqualityComparer1, method)
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::Add(TFirst,TSecond)
extern "C"  void BidirectionalDictionary_2_Add_m1733712970_gshared (BidirectionalDictionary_2_t3936782237 * __this, Il2CppObject * ___first0, Il2CppObject * ___second1, const MethodInfo* method);
#define BidirectionalDictionary_2_Add_m1733712970(__this, ___first0, ___second1, method) ((  void (*) (BidirectionalDictionary_2_t3936782237 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))BidirectionalDictionary_2_Add_m1733712970_gshared)(__this, ___first0, ___second1, method)
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetByFirst(TFirst,TSecond&)
extern "C"  bool BidirectionalDictionary_2_TryGetByFirst_m3691903289_gshared (BidirectionalDictionary_2_t3936782237 * __this, Il2CppObject * ___first0, Il2CppObject ** ___second1, const MethodInfo* method);
#define BidirectionalDictionary_2_TryGetByFirst_m3691903289(__this, ___first0, ___second1, method) ((  bool (*) (BidirectionalDictionary_2_t3936782237 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))BidirectionalDictionary_2_TryGetByFirst_m3691903289_gshared)(__this, ___first0, ___second1, method)
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetBySecond(TSecond,TFirst&)
extern "C"  bool BidirectionalDictionary_2_TryGetBySecond_m2431634097_gshared (BidirectionalDictionary_2_t3936782237 * __this, Il2CppObject * ___second0, Il2CppObject ** ___first1, const MethodInfo* method);
#define BidirectionalDictionary_2_TryGetBySecond_m2431634097(__this, ___second0, ___first1, method) ((  bool (*) (BidirectionalDictionary_2_t3936782237 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))BidirectionalDictionary_2_TryGetBySecond_m2431634097_gshared)(__this, ___second0, ___first1, method)
