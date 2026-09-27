#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSA.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAEncryptionPadding_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__RSASignaturePadding_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSA::*)()>(&::System::Security::Cryptography::RSA::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa171814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)()>(&::System::Security::Cryptography::RSA::Create)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa17181c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::StringW)>(&::System::Security::Cryptography::RSA::Create)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa1718b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&::System::Security::Cryptography::RSA::Encrypt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa1719ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&::System::Security::Cryptography::RSA::Decrypt)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa171a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.SignHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::SignHash)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa171a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.VerifyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::VerifyHash)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa171a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.HashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::RSA::HashData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa171abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.HashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::RSA::HashData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa171ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::SignData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa171b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::System::Security::Cryptography::RSASignaturePadding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::SignData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa171b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::SignData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa171dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::VerifyData)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa171f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"VerifyData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::System::Security::Cryptography::RSASignaturePadding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::VerifyData)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa171f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::IO::Stream*, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::VerifyData)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa172174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"VerifyData", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::System::Security::Cryptography::RSASignaturePadding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.DerivedClassMustOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Security::Cryptography::RSA::DerivedClassMustOverride)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa1719d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"DerivedClassMustOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.HashAlgorithmNameNullOrEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Security::Cryptography::RSA::HashAlgorithmNameNullOrEmpty)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa171d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"HashAlgorithmNameNullOrEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.DecryptValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSA::DecryptValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa1722e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.EncryptValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSA::EncryptValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa172338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.get_KeyExchangeAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSA::*)()>(&::System::Security::Cryptography::RSA::get_KeyExchangeAlgorithm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa172390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.get_SignatureAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSA::*)()>(&::System::Security::Cryptography::RSA::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa1723d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.FromXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSA::*)(::StringW)>(&::System::Security::Cryptography::RSA::FromXmlString)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0xa172410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ToXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSA::*)(bool)>(&::System::Security::Cryptography::RSA::ToXmlString)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0xa172ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ExportParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAParameters (::System::Security::Cryptography::RSA::*)(bool)>(&::System::Security::Cryptography::RSA::ExportParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ImportParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSA::*)(::System::Security::Cryptography::RSAParameters)>(&::System::Security::Cryptography::RSA::ImportParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(int32_t)>(&::System::Security::Cryptography::RSA::Create)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa172ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)(::System::Security::Cryptography::RSAParameters)>(&::System::Security::Cryptography::RSA::Create)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa172fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"Create", {}, {::i2c::type_of<::System::Security::Cryptography::RSAParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.TryDecrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::Security::Cryptography::RSAEncryptionPadding*, ::by_ref<int32_t>)>(&::System::Security::Cryptography::RSA::TryDecrypt)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa1730c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.TryEncrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::Security::Cryptography::RSAEncryptionPadding*, ::by_ref<int32_t>)>(&::System::Security::Cryptography::RSA::TryEncrypt)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa1731d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.TryHashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::by_ref<int32_t>)>(&::System::Security::Cryptography::RSA::TryHashData)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xa1732e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.TrySignHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*, ::by_ref<int32_t>)>(&::System::Security::Cryptography::RSA::TrySignHash)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa173558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.TrySignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*, ::by_ref<int32_t>)>(&::System::Security::Cryptography::RSA::TrySignData)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa17367c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::VerifyData)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xa173868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.VerifyHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&::System::Security::Cryptography::RSA::VerifyHash)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa173ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ExportRSAPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)()>(&::System::Security::Cryptography::RSA::ExportRSAPrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa173c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ExportRSAPublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)()>(&::System::Security::Cryptography::RSA::ExportRSAPublicKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa173c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ImportRSAPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::RSA::ImportRSAPrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa173cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ImportRSAPublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::RSA::ImportRSAPublicKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa173cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.TryExportRSAPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::RSA::TryExportRSAPrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa173d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.TryExportRSAPublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSA::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::RSA::TryExportRSAPublicKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa173d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 50}
                ));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::RSA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::RSA::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::RSA::Create(::StringW  algName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, algName);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::Encrypt(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::RSAEncryptionPadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, padding);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::Decrypt(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::RSAEncryptionPadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, padding);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::SignHash(::ArrayW<uint8_t>  hash, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, hash, hashAlgorithm, padding);
}
inline bool System::Security::Cryptography::RSA::VerifyHash(::ArrayW<uint8_t>  hash, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hash, signature, hashAlgorithm, padding);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::HashData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count, hashAlgorithm);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::HashData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, hashAlgorithm);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::SignData(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::System::Security::Cryptography::RSASignaturePadding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, hashAlgorithm, padding);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::SignData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count, hashAlgorithm, padding);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::SignData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, hashAlgorithm, padding);
}
inline bool System::Security::Cryptography::RSA::VerifyData(::ArrayW<uint8_t>  data, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"VerifyData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::System::Security::Cryptography::RSASignaturePadding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, signature, hashAlgorithm, padding);
}
inline bool System::Security::Cryptography::RSA::VerifyData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offset, count, signature, hashAlgorithm, padding);
}
inline bool System::Security::Cryptography::RSA::VerifyData(::System::IO::Stream*  data, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"VerifyData", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<::System::Security::Cryptography::RSASignaturePadding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, signature, hashAlgorithm, padding);
}
inline ::System::Exception* System::Security::Cryptography::RSA::DerivedClassMustOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"DerivedClassMustOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Security::Cryptography::RSA::HashAlgorithmNameNullOrEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"HashAlgorithmNameNullOrEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::DecryptValue(::ArrayW<uint8_t>  rgb)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::EncryptValue(::ArrayW<uint8_t>  rgb)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb);
}
inline ::StringW System::Security::Cryptography::RSA::get_KeyExchangeAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::RSA::get_SignatureAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSA::FromXmlString(::StringW  xmlString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlString);
}
inline ::StringW System::Security::Cryptography::RSA::ToXmlString(bool  includePrivateParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, includePrivateParameters);
}
inline ::System::Security::Cryptography::RSAParameters System::Security::Cryptography::RSA::ExportParameters(bool  includePrivateParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::RSA::ImportParameters(::System::Security::Cryptography::RSAParameters  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::RSA::Create(int32_t  keySizeInBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, keySizeInBits);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::RSA::Create(::System::Security::Cryptography::RSAParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSA*>(),
                        {"Create", {}, {::i2c::type_of<::System::Security::Cryptography::RSAParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method, parameters);
}
inline bool System::Security::Cryptography::RSA::TryDecrypt(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::RSAEncryptionPadding*  padding, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, destination, padding, bytesWritten);
}
inline bool System::Security::Cryptography::RSA::TryEncrypt(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::RSAEncryptionPadding*  padding, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, destination, padding, bytesWritten);
}
inline bool System::Security::Cryptography::RSA::TryHashData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, destination, hashAlgorithm, bytesWritten);
}
inline bool System::Security::Cryptography::RSA::TrySignHash(::System::ReadOnlySpan_1<uint8_t>  hash, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hash, destination, hashAlgorithm, padding, bytesWritten);
}
inline bool System::Security::Cryptography::RSA::TrySignData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, destination, hashAlgorithm, padding, bytesWritten);
}
inline bool System::Security::Cryptography::RSA::VerifyData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::ReadOnlySpan_1<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, signature, hashAlgorithm, padding);
}
inline bool System::Security::Cryptography::RSA::VerifyHash(::System::ReadOnlySpan_1<uint8_t>  hash, ::System::ReadOnlySpan_1<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hash, signature, hashAlgorithm, padding);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::ExportRSAPrivateKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::ExportRSAPublicKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSA::ImportRSAPrivateKey(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, bytesRead);
}
inline void System::Security::Cryptography::RSA::ImportRSAPublicKey(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, bytesRead);
}
inline bool System::Security::Cryptography::RSA::TryExportRSAPrivateKey(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, bytesWritten);
}
inline bool System::Security::Cryptography::RSA::TryExportRSAPublicKey(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RSA*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, bytesWritten);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::RSA::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSA*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSA::RSA()   {
}
