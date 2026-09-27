#pragma once
// IWYU pragma private; include "GlobalNamespace/AESHMAC.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AESHMAC_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.NewKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::GlobalNamespace::AESHMAC::NewKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a1397c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"NewKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.SimpleEncrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::GlobalNamespace::AESHMAC::SimpleEncrypt)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a13a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleEncrypt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.SimpleDecrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::AESHMAC::SimpleDecrypt)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5a146e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleDecrypt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.SimpleEncryptWithKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::ArrayW<uint8_t>)>(&::GlobalNamespace::AESHMAC::SimpleEncryptWithKey)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5a151fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleEncryptWithKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.SimpleDecryptWithKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, int32_t)>(&::GlobalNamespace::AESHMAC::SimpleDecryptWithKey)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a15810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleDecryptWithKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.SimpleEncrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::GlobalNamespace::AESHMAC::SimpleEncrypt)> {
  constexpr static std::size_t size = 0xb98;
  constexpr static std::size_t addrs = 0x5a13b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleEncrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.SimpleDecrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::AESHMAC::SimpleDecrypt)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0x5a14828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleDecrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.SimpleEncryptWithKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::StringW, ::ArrayW<uint8_t>)>(&::GlobalNamespace::AESHMAC::SimpleEncryptWithKey)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x5a15324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleEncryptWithKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.SimpleDecryptWithKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, ::StringW, int32_t)>(&::GlobalNamespace::AESHMAC::SimpleDecryptWithKey)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5a15948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleDecryptWithKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AESHMAC.Rfc2898DeriveBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::GlobalNamespace::AESHMAC::Rfc2898DeriveBytes)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5a15b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"Rfc2898DeriveBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AESHMAC::setStaticF_gRNG(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "gRNG", ::GlobalNamespace::AESHMAC*>(std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* GlobalNamespace::AESHMAC::getStaticF_gRNG()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "gRNG", ::GlobalNamespace::AESHMAC*>();
}
inline ::ArrayW<uint8_t> GlobalNamespace::AESHMAC::NewKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"NewKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::AESHMAC::SimpleEncrypt(::StringW  plaintext, ::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  auth, ::ArrayW<uint8_t>  salt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleEncrypt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, plaintext, key, auth, salt);
}
inline ::StringW GlobalNamespace::AESHMAC::SimpleDecrypt(::StringW  ciphertext, ::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  auth, int32_t  saltLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleDecrypt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ciphertext, key, auth, saltLength);
}
inline ::StringW GlobalNamespace::AESHMAC::SimpleEncryptWithKey(::StringW  plaintext, ::StringW  key, ::ArrayW<uint8_t>  salt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleEncryptWithKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, plaintext, key, salt);
}
inline ::StringW GlobalNamespace::AESHMAC::SimpleDecryptWithKey(::StringW  ciphertext, ::StringW  key, int32_t  saltLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleDecryptWithKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ciphertext, key, saltLength);
}
inline ::ArrayW<uint8_t> GlobalNamespace::AESHMAC::SimpleEncrypt(::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  auth, ::ArrayW<uint8_t>  salt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleEncrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, plaintext, key, auth, salt);
}
inline ::ArrayW<uint8_t> GlobalNamespace::AESHMAC::SimpleDecrypt(::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  auth, int32_t  saltLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleDecrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ciphertext, key, auth, saltLength);
}
inline ::ArrayW<uint8_t> GlobalNamespace::AESHMAC::SimpleEncryptWithKey(::ArrayW<uint8_t>  plaintext, ::StringW  key, ::ArrayW<uint8_t>  salt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleEncryptWithKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, plaintext, key, salt);
}
inline ::ArrayW<uint8_t> GlobalNamespace::AESHMAC::SimpleDecryptWithKey(::ArrayW<uint8_t>  ciphertext, ::StringW  key, int32_t  saltLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"SimpleDecryptWithKey", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ciphertext, key, saltLength);
}
inline ::ArrayW<uint8_t> GlobalNamespace::AESHMAC::Rfc2898DeriveBytes(::StringW  password, ::ArrayW<uint8_t>  salt, int32_t  iterations, int32_t  numBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AESHMAC*>(),
                        {"Rfc2898DeriveBytes", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, password, salt, iterations, numBytes);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AESHMAC::AESHMAC()   {
}
