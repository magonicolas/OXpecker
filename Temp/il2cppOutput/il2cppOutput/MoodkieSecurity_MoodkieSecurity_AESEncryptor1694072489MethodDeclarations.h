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

// MoodkieSecurity.AESEncryptor
struct AESEncryptor_t1694072489;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "MoodkieSecurity_MoodkieSecurity_AESBits749531621.h"

// System.Void MoodkieSecurity.AESEncryptor::.ctor(System.String,MoodkieSecurity.AESBits)
extern "C"  void AESEncryptor__ctor_m2847722929 (AESEncryptor_t1694072489 * __this, String_t* ___password0, int32_t ___encryptionBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MoodkieSecurity.AESEncryptor::iEncrypt(System.Byte[],System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t58506160* AESEncryptor_iEncrypt_m2149956235 (AESEncryptor_t1694072489 * __this, ByteU5BU5D_t58506160* ___data0, ByteU5BU5D_t58506160* ___key1, ByteU5BU5D_t58506160* ___iV2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MoodkieSecurity.AESEncryptor::Encrypt(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* AESEncryptor_Encrypt_m361902154 (AESEncryptor_t1694072489 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MoodkieSecurity.AESEncryptor::iDecrypt(System.Byte[],System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t58506160* AESEncryptor_iDecrypt_m2460330595 (AESEncryptor_t1694072489 * __this, ByteU5BU5D_t58506160* ___data0, ByteU5BU5D_t58506160* ___key1, ByteU5BU5D_t58506160* ___iv2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] MoodkieSecurity.AESEncryptor::Decrypt(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* AESEncryptor_Decrypt_m497800226 (AESEncryptor_t1694072489 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
