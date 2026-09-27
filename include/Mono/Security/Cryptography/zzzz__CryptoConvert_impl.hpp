#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/CryptoConvert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__CryptoConvert_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.ToInt32LE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::Cryptography::CryptoConvert::ToInt32LE)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa0fe380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"ToInt32LE", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.ToUInt32LE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::Cryptography::CryptoConvert::ToUInt32LE)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa0fe3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"ToUInt32LE", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.Trim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::CryptoConvert::Trim)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa0fe468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"Trim", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.FromCapiPrivateKeyBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0fe520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromCapiPrivateKeyBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.FromCapiPrivateKeyBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa0fe528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromCapiPrivateKeyBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.GetParametersFromCapiPrivateKeyBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAParameters (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::Cryptography::CryptoConvert::GetParametersFromCapiPrivateKeyBlob)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xa0fe778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"GetParametersFromCapiPrivateKeyBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.ToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::CryptoConvert::ToHex)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa0fed58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"ToHex", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.FromHexChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(char16_t)>(&::Mono::Security::Cryptography::CryptoConvert::FromHexChar)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa0fee94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromHexChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::CryptoConvert.FromHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Mono::Security::Cryptography::CryptoConvert::FromHex)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa0fef28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromHex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Mono::Security::Cryptography::CryptoConvert::ToInt32LE(::ArrayW<uint8_t>  bytes, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"ToInt32LE", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bytes, offset);
}
inline uint32_t Mono::Security::Cryptography::CryptoConvert::ToUInt32LE(::ArrayW<uint8_t>  bytes, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"ToUInt32LE", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bytes, offset);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::CryptoConvert::Trim(::ArrayW<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"Trim", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, array);
}
inline ::System::Security::Cryptography::RSA* Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob(::ArrayW<uint8_t>  blob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromCapiPrivateKeyBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, blob);
}
inline ::System::Security::Cryptography::RSA* Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob(::ArrayW<uint8_t>  blob, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromCapiPrivateKeyBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, blob, offset);
}
inline ::System::Security::Cryptography::RSAParameters Mono::Security::Cryptography::CryptoConvert::GetParametersFromCapiPrivateKeyBlob(::ArrayW<uint8_t>  blob, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"GetParametersFromCapiPrivateKeyBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters>(nullptr, ___internal_method, blob, offset);
}
inline ::StringW Mono::Security::Cryptography::CryptoConvert::ToHex(::ArrayW<uint8_t>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"ToHex", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
inline uint8_t Mono::Security::Cryptography::CryptoConvert::FromHexChar(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromHexChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, c);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::CryptoConvert::FromHex(::StringW  hex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::Cryptography::CryptoConvert*>(),
                        {"FromHex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, hex);
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::CryptoConvert::CryptoConvert()   {
}
