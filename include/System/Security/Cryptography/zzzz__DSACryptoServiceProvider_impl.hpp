#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSACryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__DSA_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSACryptoServiceProvider_def.hpp"
#include "Mono/Security/Cryptography/zzzz__DSAManaged_def.hpp"
#include "Mono/Security/Cryptography/zzzz__KeyPairPersistence_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__CspKeyContainerInfo_def.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__ICspAsymmetricAlgorithm_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa180864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::DSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa182f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(int32_t)>(&::System::Security::Cryptography::DSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa182f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(int32_t, ::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::DSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa182f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Common
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(int32_t, bool)>(&::System::Security::Cryptography::DSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa182fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"Common", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Common
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::Security::Cryptography::CspParameters*)>(&::System::Security::Cryptography::DSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa183220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"Common", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa1832e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_KeyExchangeAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::get_KeyExchangeAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa183378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_KeySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::get_KeySize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa183380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_PersistKeyInCsp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::get_PersistKeyInCsp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa18339c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"get_PersistKeyInCsp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.set_PersistKeyInCsp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::DSACryptoServiceProvider::set_PersistKeyInCsp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1833a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"set_PersistKeyInCsp", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_PublicOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::get_PublicOnly)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa1833ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"get_PublicOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_SignatureAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa1833c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_UseMachineKeyStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::get_UseMachineKeyStore)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa183404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"get_UseMachineKeyStore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.set_UseMachineKeyStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::System::Security::Cryptography::DSACryptoServiceProvider::set_UseMachineKeyStore)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa18344c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"set_UseMachineKeyStore", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.ExportParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSAParameters (::System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::DSACryptoServiceProvider::ExportParameters)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa18349c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.ImportParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::Security::Cryptography::DSAParameters)>(&::System::Security::Cryptography::DSACryptoServiceProvider::ImportParameters)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa18354c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.CreateSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSACryptoServiceProvider::CreateSignature)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa183590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSACryptoServiceProvider::SignData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa1835b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::DSACryptoServiceProvider::SignData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa183600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::IO::Stream*)>(&::System::Security::Cryptography::DSACryptoServiceProvider::SignData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa183668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.SignHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::StringW)>(&::System::Security::Cryptography::DSACryptoServiceProvider::SignHash)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa1836b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"SignHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSACryptoServiceProvider::VerifyData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa1837bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"VerifyData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.VerifyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::StringW, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSACryptoServiceProvider::VerifyHash)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa183814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"VerifyHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.VerifySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSACryptoServiceProvider::VerifySignature)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa183934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.HashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSACryptoServiceProvider::HashData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa183954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.HashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSACryptoServiceProvider::HashData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa183a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::DSACryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa183b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.OnKeyGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::Object*, ::System::EventArgs*)>(&::System::Security::Cryptography::DSACryptoServiceProvider::OnKeyGenerated)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa183b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"OnKeyGenerated", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_CspKeyContainerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::CspKeyContainerInfo* (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::get_CspKeyContainerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa183c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"get_CspKeyContainerInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.ExportCspBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(&::System::Security::Cryptography::DSACryptoServiceProvider::ExportCspBlob)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa183c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"ExportCspBlob", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.ImportCspBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSACryptoServiceProvider::ImportCspBlob)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa183c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"ImportCspBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_store()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___store;
}
constexpr ::Mono::Security::Cryptography::KeyPairPersistence* const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_store() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___store;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___store = value;
}
constexpr bool& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_persistKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistKey;
}
constexpr bool const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_persistKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persistKey;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_persistKey(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persistKey = value;
}
constexpr bool& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_persisted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persisted;
}
constexpr bool const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_persisted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___persisted;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_persisted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___persisted = value;
}
constexpr bool& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateKeyExportable;
}
constexpr bool const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privateKeyExportable;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_privateKeyExportable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privateKeyExportable = value;
}
constexpr bool& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_m_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_disposed;
}
constexpr bool const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_m_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_disposed;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_m_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_disposed = value;
}
constexpr ::Mono::Security::Cryptography::DSAManaged*& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_dsa()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dsa;
}
constexpr ::Mono::Security::Cryptography::DSAManaged* const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_dsa() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dsa;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_dsa(::Mono::Security::Cryptography::DSAManaged*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dsa = value;
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::setStaticF_useMachineKeyStore(bool  value)  {
::cordl_internals::setStaticField<bool, "useMachineKeyStore", ::System::Security::Cryptography::DSACryptoServiceProvider*>(std::forward<bool>(value));
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::getStaticF_useMachineKeyStore()  {
return ::cordl_internals::getStaticField<bool, "useMachineKeyStore", ::System::Security::Cryptography::DSACryptoServiceProvider*>();
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::_ctor(::System::Security::Cryptography::CspParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::_ctor(int32_t  dwKeySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::_ctor(int32_t  dwKeySize, ::System::Security::Cryptography::CspParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize, parameters);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::Common(int32_t  dwKeySize, bool  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"Common", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize, parameters);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::Common(::System::Security::Cryptography::CspParameters*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"Common", {}, {::i2c::type_of<::System::Security::Cryptography::CspParameters*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DSACryptoServiceProvider::get_KeyExchangeAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::DSACryptoServiceProvider::get_KeySize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::get_PersistKeyInCsp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"get_PersistKeyInCsp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::set_PersistKeyInCsp(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"set_PersistKeyInCsp", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::get_PublicOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"get_PublicOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::DSACryptoServiceProvider::get_SignatureAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::get_UseMachineKeyStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"get_UseMachineKeyStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::set_UseMachineKeyStore(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"set_UseMachineKeyStore", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Security::Cryptography::DSAParameters System::Security::Cryptography::DSACryptoServiceProvider::ExportParameters(bool  includePrivateParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::ImportParameters(::System::Security::Cryptography::DSAParameters  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSACryptoServiceProvider::CreateSignature(::ArrayW<uint8_t>  rgbHash)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbHash);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSACryptoServiceProvider::SignData(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, buffer);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSACryptoServiceProvider::SignData(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, buffer, offset, count);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSACryptoServiceProvider::SignData(::System::IO::Stream*  inputStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"SignData", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputStream);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSACryptoServiceProvider::SignHash(::ArrayW<uint8_t>  rgbHash, ::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"SignHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbHash, str);
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::VerifyData(::ArrayW<uint8_t>  rgbData, ::ArrayW<uint8_t>  rgbSignature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"VerifyData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbData, rgbSignature);
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::VerifyHash(::ArrayW<uint8_t>  rgbHash, ::StringW  str, ::ArrayW<uint8_t>  rgbSignature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"VerifyHash", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, str, rgbSignature);
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::VerifySignature(::ArrayW<uint8_t>  rgbHash, ::ArrayW<uint8_t>  rgbSignature)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, rgbSignature);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSACryptoServiceProvider::HashData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count, hashAlgorithm);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSACryptoServiceProvider::HashData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, hashAlgorithm);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::OnKeyGenerated(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"OnKeyGenerated", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Security::Cryptography::CspKeyContainerInfo* System::Security::Cryptography::DSACryptoServiceProvider::get_CspKeyContainerInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"get_CspKeyContainerInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CspKeyContainerInfo*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSACryptoServiceProvider::ExportCspBlob(bool  includePrivateParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"ExportCspBlob", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::ImportCspBlob(::ArrayW<uint8_t>  keyBlob)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                        {"ImportCspBlob", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBlob);
}
inline ::System::Security::Cryptography::DSACryptoServiceProvider* System::Security::Cryptography::DSACryptoServiceProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSACryptoServiceProvider*>());
}
inline ::System::Security::Cryptography::DSACryptoServiceProvider* System::Security::Cryptography::DSACryptoServiceProvider::New_ctor(::System::Security::Cryptography::CspParameters*  parameters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSACryptoServiceProvider*>(parameters));
}
inline ::System::Security::Cryptography::DSACryptoServiceProvider* System::Security::Cryptography::DSACryptoServiceProvider::New_ctor(int32_t  dwKeySize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSACryptoServiceProvider*>(dwKeySize));
}
inline ::System::Security::Cryptography::DSACryptoServiceProvider* System::Security::Cryptography::DSACryptoServiceProvider::New_ctor(int32_t  dwKeySize, ::System::Security::Cryptography::CspParameters*  parameters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSACryptoServiceProvider*>(dwKeySize, parameters));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
constexpr  System::Security::Cryptography::DSACryptoServiceProvider::operator ::System::Security::Cryptography::ICspAsymmetricAlgorithm*() noexcept {
return static_cast<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
constexpr ::System::Security::Cryptography::ICspAsymmetricAlgorithm* System::Security::Cryptography::DSACryptoServiceProvider::i___System__Security__Cryptography__ICspAsymmetricAlgorithm() noexcept {
return static_cast<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSACryptoServiceProvider::DSACryptoServiceProvider()   {
}
