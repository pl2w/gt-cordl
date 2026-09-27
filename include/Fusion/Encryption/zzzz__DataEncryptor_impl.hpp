#pragma once
// IWYU pragma private; include "Fusion/Encryption/DataEncryptor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Encryption/zzzz__DataEncryptor_def.hpp"
#include "Fusion/Encryption/zzzz__IDataEncryption_def.hpp"
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
#include "System/Security/Cryptography/zzzz__HMACSHA256_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Encryption::DataEncryptor::*)(::ArrayW<uint8_t>)>(&::Fusion::Encryption::DataEncryptor::Setup)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x603c704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"Setup", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.EncryptData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Encryption::DataEncryptor::*)(uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Fusion::Encryption::DataEncryptor::EncryptData)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x603c970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"EncryptData", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.DecryptData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Encryption::DataEncryptor::*)(uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Fusion::Encryption::DataEncryptor::DecryptData)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x603d0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"DecryptData", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.ComputeHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Encryption::DataEncryptor::*)(uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Fusion::Encryption::DataEncryptor::ComputeHash)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x603d7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"ComputeHash", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.VerifyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Encryption::DataEncryptor::*)(uint8_t*, ::by_ref<int32_t>, int32_t)>(&::Fusion::Encryption::DataEncryptor::VerifyHash)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x603da54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"VerifyHash", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.BuildAesProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::Aes* (*)(::ArrayW<uint8_t>)>(&::Fusion::Encryption::DataEncryptor::BuildAesProvider)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x603c868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"BuildAesProvider", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.BuildHMACSHA256
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HMACSHA256* (*)(::ArrayW<uint8_t>)>(&::Fusion::Encryption::DataEncryptor::BuildHMACSHA256)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x603c914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"BuildHMACSHA256", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.GetBufferEncrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::Encryption::DataEncryptor::*)()>(&::Fusion::Encryption::DataEncryptor::GetBufferEncrypt)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x603d094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"GetBufferEncrypt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.GetBufferDecrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Fusion::Encryption::DataEncryptor::*)()>(&::Fusion::Encryption::DataEncryptor::GetBufferDecrypt)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x603d77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"GetBufferDecrypt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Encryption::DataEncryptor::*)()>(&::Fusion::Encryption::DataEncryptor::Dispose)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x603dcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Encryption::DataEncryptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Encryption::DataEncryptor::*)()>(&::Fusion::Encryption::DataEncryptor::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x603ddb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::Aes*& Fusion::Encryption::DataEncryptor::__cordl_internal_get__cryptoProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cryptoProvider;
}
constexpr ::System::Security::Cryptography::Aes* const& Fusion::Encryption::DataEncryptor::__cordl_internal_get__cryptoProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cryptoProvider;
}
constexpr void Fusion::Encryption::DataEncryptor::__cordl_internal_set__cryptoProvider(::System::Security::Cryptography::Aes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cryptoProvider = value;
}
constexpr ::System::Security::Cryptography::HMACSHA256*& Fusion::Encryption::DataEncryptor::__cordl_internal_get__hmacsha256()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmacsha256;
}
constexpr ::System::Security::Cryptography::HMACSHA256* const& Fusion::Encryption::DataEncryptor::__cordl_internal_get__hmacsha256() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmacsha256;
}
constexpr void Fusion::Encryption::DataEncryptor::__cordl_internal_set__hmacsha256(::System::Security::Cryptography::HMACSHA256*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmacsha256 = value;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Fusion::Encryption::DataEncryptor::__cordl_internal_get__rng()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rng;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& Fusion::Encryption::DataEncryptor::__cordl_internal_get__rng() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rng;
}
constexpr void Fusion::Encryption::DataEncryptor::__cordl_internal_set__rng(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rng = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Encryption::DataEncryptor::__cordl_internal_get__encryptBufferEncrypt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptBufferEncrypt;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Encryption::DataEncryptor::__cordl_internal_get__encryptBufferEncrypt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptBufferEncrypt;
}
constexpr void Fusion::Encryption::DataEncryptor::__cordl_internal_set__encryptBufferEncrypt(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptBufferEncrypt = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Encryption::DataEncryptor::__cordl_internal_get__encryptBufferDecrypt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptBufferDecrypt;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Encryption::DataEncryptor::__cordl_internal_get__encryptBufferDecrypt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptBufferDecrypt;
}
constexpr void Fusion::Encryption::DataEncryptor::__cordl_internal_set__encryptBufferDecrypt(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptBufferDecrypt = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Encryption::DataEncryptor::__cordl_internal_get__aesKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aesKey;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Encryption::DataEncryptor::__cordl_internal_get__aesKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aesKey;
}
constexpr void Fusion::Encryption::DataEncryptor::__cordl_internal_set__aesKey(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aesKey = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Encryption::DataEncryptor::__cordl_internal_get__ivEncryptBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ivEncryptBuffer;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Encryption::DataEncryptor::__cordl_internal_get__ivEncryptBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ivEncryptBuffer;
}
constexpr void Fusion::Encryption::DataEncryptor::__cordl_internal_set__ivEncryptBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ivEncryptBuffer = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Encryption::DataEncryptor::__cordl_internal_get__ivDecryptBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ivDecryptBuffer;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Encryption::DataEncryptor::__cordl_internal_get__ivDecryptBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ivDecryptBuffer;
}
constexpr void Fusion::Encryption::DataEncryptor::__cordl_internal_set__ivDecryptBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ivDecryptBuffer = value;
}
inline void Fusion::Encryption::DataEncryptor::Setup(::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"Setup", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline bool Fusion::Encryption::DataEncryptor::EncryptData(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"EncryptData", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, bufferLength, capacity);
}
inline bool Fusion::Encryption::DataEncryptor::DecryptData(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"DecryptData", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, bufferLength, capacity);
}
inline bool Fusion::Encryption::DataEncryptor::ComputeHash(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"ComputeHash", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, bufferLength, capacity);
}
inline bool Fusion::Encryption::DataEncryptor::VerifyHash(uint8_t*  buffer, ::by_ref<int32_t>  bufferLength, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"VerifyHash", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, bufferLength, capacity);
}
inline ::System::Security::Cryptography::Aes* Fusion::Encryption::DataEncryptor::BuildAesProvider(::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"BuildAesProvider", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::Aes*>(nullptr, ___internal_method, key);
}
inline ::System::Security::Cryptography::HMACSHA256* Fusion::Encryption::DataEncryptor::BuildHMACSHA256(::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"BuildHMACSHA256", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HMACSHA256*>(nullptr, ___internal_method, key);
}
inline ::ArrayW<uint8_t> Fusion::Encryption::DataEncryptor::GetBufferEncrypt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"GetBufferEncrypt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Fusion::Encryption::DataEncryptor::GetBufferDecrypt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"GetBufferDecrypt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Fusion::Encryption::DataEncryptor::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Encryption::DataEncryptor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Encryption::DataEncryptor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Encryption::DataEncryptor* Fusion::Encryption::DataEncryptor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Encryption::DataEncryptor*>());
}
/// @brief Convert operator to "::Fusion::Encryption::IDataEncryption"
constexpr  Fusion::Encryption::DataEncryptor::operator ::Fusion::Encryption::IDataEncryption*() noexcept {
return static_cast<::Fusion::Encryption::IDataEncryption*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Encryption::IDataEncryption"
constexpr ::Fusion::Encryption::IDataEncryption* Fusion::Encryption::DataEncryptor::i___Fusion__Encryption__IDataEncryption() noexcept {
return static_cast<::Fusion::Encryption::IDataEncryption*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::Encryption::DataEncryptor::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::Encryption::DataEncryptor::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Encryption::DataEncryptor::DataEncryptor()   {
}
