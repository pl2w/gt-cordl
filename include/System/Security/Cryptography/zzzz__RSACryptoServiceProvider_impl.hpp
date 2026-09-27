#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSACryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__CspProviderFlags_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSA_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSACryptoServiceProvider_def.hpp"
#include "Mono/Security/Cryptography/zzzz__KeyPairPersistence_def.hpp"
#include "Mono/Security/Cryptography/zzzz__RSAManaged_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__CspKeyContainerInfo_def.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__ICspAsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAEncryptionPadding_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__RSASignaturePadding_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_SignatureAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa173d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_UseMachineKeyStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_UseMachineKeyStore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa173ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"get_UseMachineKeyStore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.set_UseMachineKeyStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::set_UseMachineKeyStore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa173e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"set_UseMachineKeyStore", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.HashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::RSACryptoServiceProvider::HashData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa173e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.HashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::RSACryptoServiceProvider::HashData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa173ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.GetAlgorithmId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::RSACryptoServiceProvider::GetAlgorithmId)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa173ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"GetAlgorithmId", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Encrypt)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa174098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Decrypt)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa174388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignHash)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa174774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.VerifyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa174974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.PaddingModeNotSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::PaddingModeNotSupported)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa174308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"PaddingModeNotSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa171888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa174be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(int32_t)>(&::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa174bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(int32_t, ::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa174bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Common
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(int32_t, bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa174c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"Common", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Common
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa174e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"Common", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa174fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_KeyExchangeAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_KeyExchangeAlgorithm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa175054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_KeySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_KeySize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa175094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_PersistKeyInCsp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_PersistKeyInCsp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1750b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"get_PersistKeyInCsp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.set_PersistKeyInCsp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::set_PersistKeyInCsp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa1750bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"set_PersistKeyInCsp", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_PublicOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_PublicOnly)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa175150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"get_PublicOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Decrypt)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa174548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"Decrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.DecryptValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::DecryptValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa175368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Encrypt)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa174258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"Encrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.EncryptValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::EncryptValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa1755fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ExportParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAParameters (::System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::ExportParameters)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa17561c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ImportParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Security::Cryptography::RSAParameters)>(&::System::Security::Cryptography::RSACryptoServiceProvider::ImportParameters)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa175758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.GetHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithm* (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Object*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::GetHash)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa17579c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"GetHash", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.GetHashFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithm* (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::StringW)>(&::System::Security::Cryptography::RSACryptoServiceProvider::GetHashFromString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa1759ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"GetHashFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::System::Object*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa175c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::IO::Stream*, ::System::Object*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa175d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Object*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa175ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.GetHashNameFromOID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::StringW)>(&::System::Security::Cryptography::RSACryptoServiceProvider::GetHashNameFromOID)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa175ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"GetHashNameFromOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::StringW)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignHash)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa175e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.SignHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t)>(&::System::Security::Cryptography::RSACryptoServiceProvider::SignHash)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa1748f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.InternalHashToHashAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(int32_t)>(&::System::Security::Cryptography::RSACryptoServiceProvider::InternalHashToHashAlgorithm)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa175f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"InternalHashToHashAlgorithm", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::System::Object*, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::VerifyData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa17614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"VerifyData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.VerifyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::StringW, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa176260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"VerifyHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.VerifyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa174b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"VerifyHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa176380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.OnKeyGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Object*, ::System::EventArgs*)>(&::System::Security::Cryptography::RSACryptoServiceProvider::OnKeyGenerated)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa1750cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"OnKeyGenerated", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_CspKeyContainerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::CspKeyContainerInfo* (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_CspKeyContainerInfo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa1763d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"get_CspKeyContainerInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ExportCspBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::RSACryptoServiceProvider::ExportCspBlob)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa17649c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"ExportCspBlob", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ImportCspBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSACryptoServiceProvider::ImportCspBlob)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xa176520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"ImportCspBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_store()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___store;
}
constexpr ::Mono::Security::Cryptography::KeyPairPersistence* const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_store() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___store;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___store = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persistKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistKey;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persistKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistKey;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_persistKey(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persistKey = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persisted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persisted;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persisted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persisted;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_persisted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persisted = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateKeyExportable;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateKeyExportable;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_privateKeyExportable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privateKeyExportable = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_m_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_disposed;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_m_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_disposed;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_m_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_disposed = value;
}
constexpr ::Mono::Security::Cryptography::RSAManaged*& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_rsa()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rsa;
}
constexpr ::Mono::Security::Cryptography::RSAManaged* const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_rsa() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rsa;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_rsa(::Mono::Security::Cryptography::RSAManaged*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rsa = value;
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::setStaticF_s_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::CspProviderFlags, "s_UseMachineKeyStore", ::System::Security::Cryptography::RSACryptoServiceProvider*>(std::forward<::System::Security::Cryptography::CspProviderFlags>(value));
}
inline ::System::Security::Cryptography::CspProviderFlags System::Security::Cryptography::RSACryptoServiceProvider::getStaticF_s_UseMachineKeyStore()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::CspProviderFlags, "s_UseMachineKeyStore", ::System::Security::Cryptography::RSACryptoServiceProvider*>();
}
inline ::StringW System::Security::Cryptography::RSACryptoServiceProvider::get_SignatureAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::get_UseMachineKeyStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"get_UseMachineKeyStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::set_UseMachineKeyStore(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"set_UseMachineKeyStore", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::HashData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count, hashAlgorithm);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::HashData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, hashAlgorithm);
}
inline int32_t System::Security::Cryptography::RSACryptoServiceProvider::GetAlgorithmId(::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"GetAlgorithmId", {}, {::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hashAlgorithm);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::Encrypt(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::RSAEncryptionPadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, padding);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::Decrypt(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::RSAEncryptionPadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, padding);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::SignHash(::ArrayW<uint8_t>  hash, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, hash, hashAlgorithm, padding);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash(::ArrayW<uint8_t>  hash, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hash, signature, hashAlgorithm, padding);
}
inline ::System::Exception* System::Security::Cryptography::RSACryptoServiceProvider::PaddingModeNotSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"PaddingModeNotSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor(::System::Security::Cryptography::CspParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor(int32_t  dwKeySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor(int32_t  dwKeySize, ::System::Security::Cryptography::CspParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize, parameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Common(int32_t  dwKeySize, bool  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"Common", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize, parameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Common(::System::Security::Cryptography::CspParameters*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"Common", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::RSACryptoServiceProvider::get_KeyExchangeAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RSACryptoServiceProvider::get_KeySize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::get_PersistKeyInCsp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"get_PersistKeyInCsp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::set_PersistKeyInCsp(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"set_PersistKeyInCsp", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::get_PublicOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"get_PublicOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::Decrypt(::ArrayW<uint8_t>  rgb, bool  fOAEP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"Decrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb, fOAEP);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::DecryptValue(::ArrayW<uint8_t>  rgb)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::Encrypt(::ArrayW<uint8_t>  rgb, bool  fOAEP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"Encrypt", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb, fOAEP);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::EncryptValue(::ArrayW<uint8_t>  rgb)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb);
}
inline ::System::Security::Cryptography::RSAParameters System::Security::Cryptography::RSACryptoServiceProvider::ExportParameters(bool  includePrivateParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::ImportParameters(::System::Security::Cryptography::RSAParameters  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::RSACryptoServiceProvider::GetHash(::System::Object*  halg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"GetHash", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*>(this, ___internal_method, halg);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::RSACryptoServiceProvider::GetHashFromString(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"GetHashFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*>(this, ___internal_method, name);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::SignData(::ArrayW<uint8_t>  buffer, ::System::Object*  halg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, buffer, halg);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::SignData(::System::IO::Stream*  inputStream, ::System::Object*  halg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputStream, halg);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::SignData(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Object*  halg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, buffer, offset, count, halg);
}
inline ::StringW System::Security::Cryptography::RSACryptoServiceProvider::GetHashNameFromOID(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"GetHashNameFromOID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, oid);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::SignHash(::ArrayW<uint8_t>  rgbHash, ::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbHash, str);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::SignHash(::ArrayW<uint8_t>  rgbHash, int32_t  calgHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"SignHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbHash, calgHash);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::RSACryptoServiceProvider::InternalHashToHashAlgorithm(int32_t  calgHash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"InternalHashToHashAlgorithm", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*>(nullptr, ___internal_method, calgHash);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::VerifyData(::ArrayW<uint8_t>  buffer, ::System::Object*  halg, ::ArrayW<uint8_t>  signature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"VerifyData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer, halg, signature);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash(::ArrayW<uint8_t>  rgbHash, ::StringW  str, ::ArrayW<uint8_t>  rgbSignature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"VerifyHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, str, rgbSignature);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash(::ArrayW<uint8_t>  rgbHash, int32_t  calgHash, ::ArrayW<uint8_t>  rgbSignature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"VerifyHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, calgHash, rgbSignature);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::OnKeyGenerated(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"OnKeyGenerated", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Security::Cryptography::CspKeyContainerInfo* System::Security::Cryptography::RSACryptoServiceProvider::get_CspKeyContainerInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"get_CspKeyContainerInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CspKeyContainerInfo*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::ExportCspBlob(bool  includePrivateParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"ExportCspBlob", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::ImportCspBlob(::ArrayW<uint8_t>  keyBlob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                        {"ImportCspBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBlob);
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSACryptoServiceProvider*>());
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor(::System::Security::Cryptography::CspParameters*  parameters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSACryptoServiceProvider*>(parameters));
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor(int32_t  dwKeySize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSACryptoServiceProvider*>(dwKeySize));
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor(int32_t  dwKeySize, ::System::Security::Cryptography::CspParameters*  parameters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSACryptoServiceProvider*>(dwKeySize, parameters));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
constexpr  System::Security::Cryptography::RSACryptoServiceProvider::operator ::System::Security::Cryptography::ICspAsymmetricAlgorithm*() noexcept {
return static_cast<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
constexpr ::System::Security::Cryptography::ICspAsymmetricAlgorithm* System::Security::Cryptography::RSACryptoServiceProvider::i___System__Security__Cryptography__ICspAsymmetricAlgorithm() noexcept {
return static_cast<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSACryptoServiceProvider::RSACryptoServiceProvider()   {
}
