#pragma once
// IWYU pragma private; include "PublicKeyConvert/PEMKeyLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PublicKeyConvert/zzzz__PEMKeyLoader_def.hpp"
#include "System/Security/Cryptography/zzzz__RSACryptoServiceProvider_def.hpp"
//  Writing Method size for method: ::PublicKeyConvert::PEMKeyLoader.CompareBytearrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::PublicKeyConvert::PEMKeyLoader::CompareBytearrays)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b4abf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PublicKeyConvert::PEMKeyLoader*>(),
                        {"CompareBytearrays", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PublicKeyConvert::PEMKeyLoader.CryptoServiceProviderFromPublicKeyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSACryptoServiceProvider* (*)(::ArrayW<uint8_t>)>(&::PublicKeyConvert::PEMKeyLoader::CryptoServiceProviderFromPublicKeyInfo)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x5b4ac64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PublicKeyConvert::PEMKeyLoader*>(),
                        {"CryptoServiceProviderFromPublicKeyInfo", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PublicKeyConvert::PEMKeyLoader.CryptoServiceProviderFromPublicKeyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSACryptoServiceProvider* (*)(::StringW)>(&::PublicKeyConvert::PEMKeyLoader::CryptoServiceProviderFromPublicKeyInfo)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b4b278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PublicKeyConvert::PEMKeyLoader*>(),
                        {"CryptoServiceProviderFromPublicKeyInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PublicKeyConvert::PEMKeyLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PublicKeyConvert::PEMKeyLoader::*)()>(&::PublicKeyConvert::PEMKeyLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PublicKeyConvert::PEMKeyLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PublicKeyConvert::PEMKeyLoader::setStaticF_SeqOID(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SeqOID", ::PublicKeyConvert::PEMKeyLoader*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> PublicKeyConvert::PEMKeyLoader::getStaticF_SeqOID()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SeqOID", ::PublicKeyConvert::PEMKeyLoader*>();
}
inline bool PublicKeyConvert::PEMKeyLoader::CompareBytearrays(::ArrayW<uint8_t>  a, ::ArrayW<uint8_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PublicKeyConvert::PEMKeyLoader*>(),
                        {"CompareBytearrays", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* PublicKeyConvert::PEMKeyLoader::CryptoServiceProviderFromPublicKeyInfo(::ArrayW<uint8_t>  x509key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PublicKeyConvert::PEMKeyLoader*>(),
                        {"CryptoServiceProviderFromPublicKeyInfo", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSACryptoServiceProvider*>(nullptr, ___internal_method, x509key);
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* PublicKeyConvert::PEMKeyLoader::CryptoServiceProviderFromPublicKeyInfo(::StringW  base64EncodedKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PublicKeyConvert::PEMKeyLoader*>(),
                        {"CryptoServiceProviderFromPublicKeyInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSACryptoServiceProvider*>(nullptr, ___internal_method, base64EncodedKey);
}
inline void PublicKeyConvert::PEMKeyLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PublicKeyConvert::PEMKeyLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PublicKeyConvert::PEMKeyLoader* PublicKeyConvert::PEMKeyLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PublicKeyConvert::PEMKeyLoader*>());
}
// Ctor Parameters []
constexpr ::PublicKeyConvert::PEMKeyLoader::PEMKeyLoader()   {
}
