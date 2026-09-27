#pragma once
// IWYU pragma private; include "Mono/Security/X509/PKCS12.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__PKCS12_def.hpp"
#include "Mono/Security/Cryptography/zzzz__PKCS8_def.hpp"
#include "Mono/Security/X509/zzzz__PKCS12_DeriveBytes_Purpose_def.hpp"
#include "Mono/Security/X509/zzzz__PKCS12_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "Mono/Security/zzzz__PKCS7_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa0dceec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa0dcff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::StringW)>(&::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa0dd8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa0dd8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::Decode)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0xa0dd214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::Finalize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa0de208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                    {::i2c::class_of<::Mono::Security::X509::PKCS12*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.set_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::StringW)>(&::Mono::Security::X509::PKCS12::set_Password)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa0dd024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_IterationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0de2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_IterationCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.set_IterationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(int32_t)>(&::Mono::Security::X509::PKCS12::set_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0de2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"set_IterationCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_Keys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_Keys)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0xa0de2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_Keys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_Secrets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_Secrets)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xa0deb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_Secrets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_Certificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_Certificates)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xa0dee94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_Certificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_RNG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::get_RNG)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa0df298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_RNG", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::Compare)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa0dda74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Compare", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetSymmetricAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::SymmetricAlgorithm* (::Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::X509::PKCS12::GetSymmetricAlgorithm)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0xa0df2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetSymmetricAlgorithm", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::Decrypt)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa0de974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Decrypt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Decrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)(::Mono::Security::PKCS7_EncryptedData*)>(&::Mono::Security::X509::PKCS12::Decrypt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa0de178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Decrypt", {}, {::i2c::type_of<::Mono::Security::PKCS7_EncryptedData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::Encrypt)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa0dfb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Encrypt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetExistingParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSAParameters (::Mono::Security::X509::PKCS12::*)(::by_ref<bool>)>(&::Mono::Security::X509::PKCS12::GetExistingParameters)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xa0dfd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetExistingParameters", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddPrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*)>(&::Mono::Security::X509::PKCS12::AddPrivateKey)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa0e0280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddPrivateKey", {}, {::i2c::type_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.ReadSafeBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::ASN1*)>(&::Mono::Security::X509::PKCS12::ReadSafeBag)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0xa0ddadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"ReadSafeBag", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Pkcs8ShroudedKeyBagSafeBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::Pkcs8ShroudedKeyBagSafeBag)> {
  constexpr static std::size_t size = 0xda8;
  constexpr static std::size_t addrs = 0xa0e04d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Pkcs8ShroudedKeyBagSafeBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.KeyBagSafeBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::KeyBagSafeBag)> {
  constexpr static std::size_t size = 0xcfc;
  constexpr static std::size_t addrs = 0xa0e1280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"KeyBagSafeBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.SecretBagSafeBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::SecretBagSafeBag)> {
  constexpr static std::size_t size = 0xaf4;
  constexpr static std::size_t addrs = 0xa0e1f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"SecretBagSafeBag", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.CertificateSafeBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::CertificateSafeBag)> {
  constexpr static std::size_t size = 0xbb0;
  constexpr static std::size_t addrs = 0xa0e2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"CertificateSafeBag", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.MAC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::MAC)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa0dd918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"MAC", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::GetBytes)> {
  constexpr static std::size_t size = 0x1fc4;
  constexpr static std::size_t addrs = 0xa0e3690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.EncryptedContentInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::PKCS7_ContentInfo* (::Mono::Security::X509::PKCS12::*)(::Mono::Security::ASN1*, ::StringW)>(&::Mono::Security::X509::PKCS12::EncryptedContentInfo)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa0e5664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"EncryptedContentInfo", {}, {::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::PKCS12::AddCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0e565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::AddCertificate)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xa0e59b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.RemoveCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::PKCS12::RemoveCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0e5654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemoveCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.RemoveCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::RemoveCertificate)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xa0e5bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemoveCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.CompareAsymmetricAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::PKCS12::CompareAsymmetricAlgorithm)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa0e60f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"CompareAsymmetricAlgorithm", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddPkcs8ShroudedKeyBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::PKCS12::AddPkcs8ShroudedKeyBag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0e6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddPkcs8ShroudedKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddPkcs8ShroudedKeyBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::AddPkcs8ShroudedKeyBag)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xa0e6198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddPkcs8ShroudedKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.RemovePkcs8ShroudedKeyBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::PKCS12::RemovePkcs8ShroudedKeyBag)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xa0e64f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemovePkcs8ShroudedKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddKeyBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::PKCS12::AddKeyBag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddKeyBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::AddKeyBag)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa0e6828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.RemoveKeyBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::PKCS12::RemoveKeyBag)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xa0e6acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemoveKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddSecretBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::AddSecretBag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0e6d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddSecretBag", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.AddSecretBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::AddSecretBag)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa0e6d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddSecretBag", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.RemoveSecretBag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12::RemoveSecretBag)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa0e6ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemoveSecretBag", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetAsymmetricAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (::Mono::Security::X509::PKCS12::*)(::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::GetAsymmetricAlgorithm)> {
  constexpr static std::size_t size = 0x97c;
  constexpr static std::size_t addrs = 0xa0e7038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetAsymmetricAlgorithm", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetSecret
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12::*)(::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::GetSecret)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0xa0e79b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetSecret", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::PKCS12::*)(::System::Collections::IDictionary*)>(&::Mono::Security::X509::PKCS12::GetCertificate)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0xa0e8030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetCertificate", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::Mono::Security::X509::PKCS12::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::PKCS12::GetAttributes)> {
  constexpr static std::size_t size = 0x868;
  constexpr static std::size_t addrs = 0xa0e873c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.GetAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IDictionary* (::Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::PKCS12::GetAttributes)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0xa0e8fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.SaveToFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12::*)(::StringW)>(&::Mono::Security::X509::PKCS12::SaveToFile)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa0e95ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"SaveToFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Mono::Security::X509::PKCS12::*)()>(&::Mono::Security::X509::PKCS12::Clone)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa0e978c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.get_MaximumPasswordLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Mono::Security::X509::PKCS12::get_MaximumPasswordLength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa0e9854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_MaximumPasswordLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.set_MaximumPasswordLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Mono::Security::X509::PKCS12::set_MaximumPasswordLength)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa0e98ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"set_MaximumPasswordLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.LoadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Mono::Security::X509::PKCS12::LoadFile)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa0e99bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"LoadFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.LoadFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::PKCS12* (*)(::StringW)>(&::Mono::Security::X509::PKCS12::LoadFromFile)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa0e9b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"LoadFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12.LoadFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::PKCS12* (*)(::StringW, ::StringW)>(&::Mono::Security::X509::PKCS12::LoadFromFile)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa0e9c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"LoadFromFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::PKCS12::__cordl_internal_get__password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::PKCS12::__cordl_internal_get__password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__password(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____password = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::PKCS12::__cordl_internal_get__keyBags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyBags;
}
constexpr ::System::Collections::ArrayList* const& Mono::Security::X509::PKCS12::__cordl_internal_get__keyBags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyBags;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__keyBags(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keyBags = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::PKCS12::__cordl_internal_get__secretBags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secretBags;
}
constexpr ::System::Collections::ArrayList* const& Mono::Security::X509::PKCS12::__cordl_internal_get__secretBags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secretBags;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__secretBags(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secretBags = value;
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::PKCS12::__cordl_internal_get__certs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____certs;
}
constexpr ::Mono::Security::X509::X509CertificateCollection* const& Mono::Security::X509::PKCS12::__cordl_internal_get__certs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____certs;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__certs(::Mono::Security::X509::X509CertificateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____certs = value;
}
constexpr bool& Mono::Security::X509::PKCS12::__cordl_internal_get__keyBagsChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyBagsChanged;
}
constexpr bool const& Mono::Security::X509::PKCS12::__cordl_internal_get__keyBagsChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyBagsChanged;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__keyBagsChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keyBagsChanged = value;
}
constexpr bool& Mono::Security::X509::PKCS12::__cordl_internal_get__secretBagsChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secretBagsChanged;
}
constexpr bool const& Mono::Security::X509::PKCS12::__cordl_internal_get__secretBagsChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secretBagsChanged;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__secretBagsChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secretBagsChanged = value;
}
constexpr bool& Mono::Security::X509::PKCS12::__cordl_internal_get__certsChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____certsChanged;
}
constexpr bool const& Mono::Security::X509::PKCS12::__cordl_internal_get__certsChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____certsChanged;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__certsChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____certsChanged = value;
}
constexpr int32_t& Mono::Security::X509::PKCS12::__cordl_internal_get__iterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr int32_t const& Mono::Security::X509::PKCS12::__cordl_internal_get__iterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__iterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iterations = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::PKCS12::__cordl_internal_get__safeBags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeBags;
}
constexpr ::System::Collections::ArrayList* const& Mono::Security::X509::PKCS12::__cordl_internal_get__safeBags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____safeBags;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__safeBags(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____safeBags = value;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Mono::Security::X509::PKCS12::__cordl_internal_get__rng()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rng;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& Mono::Security::X509::PKCS12::__cordl_internal_get__rng() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rng;
}
constexpr void Mono::Security::X509::PKCS12::__cordl_internal_set__rng(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rng = value;
}
inline void Mono::Security::X509::PKCS12::setStaticF_password_max_length(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "password_max_length", ::Mono::Security::X509::PKCS12*>(std::forward<int32_t>(value));
}
inline int32_t Mono::Security::X509::PKCS12::getStaticF_password_max_length()  {
return ::cordl_internals::getStaticField<int32_t, "password_max_length", ::Mono::Security::X509::PKCS12*>();
}
inline void Mono::Security::X509::PKCS12::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::PKCS12::_ctor(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Mono::Security::X509::PKCS12::_ctor(::ArrayW<uint8_t>  data, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, password);
}
inline void Mono::Security::X509::PKCS12::_ctor(::ArrayW<uint8_t>  data, ::ArrayW<uint8_t>  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, password);
}
inline void Mono::Security::X509::PKCS12::Decode(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Mono::Security::X509::PKCS12::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::PKCS12*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::PKCS12::set_Password(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"set_Password", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Mono::Security::X509::PKCS12::get_IterationCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_IterationCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Security::X509::PKCS12::set_IterationCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"set_IterationCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::PKCS12::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::PKCS12::get_Secrets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_Secrets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::PKCS12::get_Certificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_Certificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* Mono::Security::X509::PKCS12::get_RNG()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_RNG", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*>(this, ___internal_method);
}
inline bool Mono::Security::X509::PKCS12::Compare(::ArrayW<uint8_t>  expected, ::ArrayW<uint8_t>  actual)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Compare", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, expected, actual);
}
inline ::System::Security::Cryptography::SymmetricAlgorithm* Mono::Security::X509::PKCS12::GetSymmetricAlgorithm(::StringW  algorithmOid, ::ArrayW<uint8_t>  salt, int32_t  iterationCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetSymmetricAlgorithm", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::SymmetricAlgorithm*>(this, ___internal_method, algorithmOid, salt, iterationCount);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12::Decrypt(::StringW  algorithmOid, ::ArrayW<uint8_t>  salt, int32_t  iterationCount, ::ArrayW<uint8_t>  encryptedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Decrypt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, algorithmOid, salt, iterationCount, encryptedData);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12::Decrypt(::Mono::Security::PKCS7_EncryptedData*  ed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Decrypt", {}, {::i2c::type_of<::Mono::Security::PKCS7_EncryptedData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, ed);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12::Encrypt(::StringW  algorithmOid, ::ArrayW<uint8_t>  salt, int32_t  iterationCount, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Encrypt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, algorithmOid, salt, iterationCount, data);
}
inline ::System::Security::Cryptography::DSAParameters Mono::Security::X509::PKCS12::GetExistingParameters(::by_ref<bool>  found)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetExistingParameters", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters>(this, ___internal_method, found);
}
inline void Mono::Security::X509::PKCS12::AddPrivateKey(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*  pki)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddPrivateKey", {}, {::i2c::type_of<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pki);
}
inline void Mono::Security::X509::PKCS12::ReadSafeBag(::Mono::Security::ASN1*  safeBag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"ReadSafeBag", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, safeBag);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::PKCS12::Pkcs8ShroudedKeyBagSafeBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa, ::System::Collections::IDictionary*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Pkcs8ShroudedKeyBagSafeBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method, aa, attributes);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::PKCS12::KeyBagSafeBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa, ::System::Collections::IDictionary*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"KeyBagSafeBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method, aa, attributes);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::PKCS12::SecretBagSafeBag(::ArrayW<uint8_t>  secret, ::System::Collections::IDictionary*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"SecretBagSafeBag", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method, secret, attributes);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::PKCS12::CertificateSafeBag(::Mono::Security::X509::X509Certificate*  x509, ::System::Collections::IDictionary*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"CertificateSafeBag", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method, x509, attributes);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12::MAC(::ArrayW<uint8_t>  password, ::ArrayW<uint8_t>  salt, int32_t  iterations, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"MAC", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, password, salt, iterations, data);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Security::PKCS7_ContentInfo* Mono::Security::X509::PKCS12::EncryptedContentInfo(::Mono::Security::ASN1*  safeBags, ::StringW  algorithmOid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"EncryptedContentInfo", {}, {::i2c::type_of<::Mono::Security::ASN1*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::PKCS7_ContentInfo*>(this, ___internal_method, safeBags, algorithmOid);
}
inline void Mono::Security::X509::PKCS12::AddCertificate(::Mono::Security::X509::X509Certificate*  cert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert);
}
inline void Mono::Security::X509::PKCS12::AddCertificate(::Mono::Security::X509::X509Certificate*  cert, ::System::Collections::IDictionary*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert, attributes);
}
inline void Mono::Security::X509::PKCS12::RemoveCertificate(::Mono::Security::X509::X509Certificate*  cert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemoveCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert);
}
inline void Mono::Security::X509::PKCS12::RemoveCertificate(::Mono::Security::X509::X509Certificate*  cert, ::System::Collections::IDictionary*  attrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemoveCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cert, attrs);
}
inline bool Mono::Security::X509::PKCS12::CompareAsymmetricAlgorithm(::System::Security::Cryptography::AsymmetricAlgorithm*  a1, ::System::Security::Cryptography::AsymmetricAlgorithm*  a2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"CompareAsymmetricAlgorithm", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a1, a2);
}
inline void Mono::Security::X509::PKCS12::AddPkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddPkcs8ShroudedKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa);
}
inline void Mono::Security::X509::PKCS12::AddPkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa, ::System::Collections::IDictionary*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddPkcs8ShroudedKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa, attributes);
}
inline void Mono::Security::X509::PKCS12::RemovePkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemovePkcs8ShroudedKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa);
}
inline void Mono::Security::X509::PKCS12::AddKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa);
}
inline void Mono::Security::X509::PKCS12::AddKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa, ::System::Collections::IDictionary*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa, attributes);
}
inline void Mono::Security::X509::PKCS12::RemoveKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemoveKeyBag", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aa);
}
inline void Mono::Security::X509::PKCS12::AddSecretBag(::ArrayW<uint8_t>  secret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddSecretBag", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secret);
}
inline void Mono::Security::X509::PKCS12::AddSecretBag(::ArrayW<uint8_t>  secret, ::System::Collections::IDictionary*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"AddSecretBag", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secret, attributes);
}
inline void Mono::Security::X509::PKCS12::RemoveSecretBag(::ArrayW<uint8_t>  secret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"RemoveSecretBag", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secret);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* Mono::Security::X509::PKCS12::GetAsymmetricAlgorithm(::System::Collections::IDictionary*  attrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetAsymmetricAlgorithm", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricAlgorithm*>(this, ___internal_method, attrs);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12::GetSecret(::System::Collections::IDictionary*  attrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetSecret", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, attrs);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::PKCS12::GetCertificate(::System::Collections::IDictionary*  attrs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetCertificate", {}, {::i2c::type_of<::System::Collections::IDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method, attrs);
}
inline ::System::Collections::IDictionary* Mono::Security::X509::PKCS12::GetAttributes(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, aa);
}
inline ::System::Collections::IDictionary* Mono::Security::X509::PKCS12::GetAttributes(::Mono::Security::X509::X509Certificate*  cert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"GetAttributes", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*>(this, ___internal_method, cert);
}
inline void Mono::Security::X509::PKCS12::SaveToFile(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"SaveToFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filename);
}
inline ::System::Object* Mono::Security::X509::PKCS12::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline int32_t Mono::Security::X509::PKCS12::get_MaximumPasswordLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"get_MaximumPasswordLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Mono::Security::X509::PKCS12::set_MaximumPasswordLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"set_MaximumPasswordLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12::LoadFile(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"LoadFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, filename);
}
inline ::Mono::Security::X509::PKCS12* Mono::Security::X509::PKCS12::LoadFromFile(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"LoadFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::PKCS12*>(nullptr, ___internal_method, filename);
}
inline ::Mono::Security::X509::PKCS12* Mono::Security::X509::PKCS12::LoadFromFile(::StringW  filename, ::StringW  password)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12*>(),
                        {"LoadFromFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::PKCS12*>(nullptr, ___internal_method, filename, password);
}
inline ::Mono::Security::X509::PKCS12* Mono::Security::X509::PKCS12::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::PKCS12*>());
}
inline ::Mono::Security::X509::PKCS12* Mono::Security::X509::PKCS12::New_ctor(::ArrayW<uint8_t>  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::PKCS12*>(data));
}
inline ::Mono::Security::X509::PKCS12* Mono::Security::X509::PKCS12::New_ctor(::ArrayW<uint8_t>  data, ::StringW  password)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::PKCS12*>(data, password));
}
inline ::Mono::Security::X509::PKCS12* Mono::Security::X509::PKCS12::New_ctor(::ArrayW<uint8_t>  data, ::ArrayW<uint8_t>  password)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::PKCS12*>(data, password));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  Mono::Security::X509::PKCS12::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Mono::Security::X509::PKCS12::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::PKCS12::PKCS12()   {
}
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12_DeriveBytes::*)()>(&::Mono::Security::X509::PKCS12_DeriveBytes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0df8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.get_HashName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::PKCS12_DeriveBytes::*)()>(&::Mono::Security::X509::PKCS12_DeriveBytes::get_HashName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0e9d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"get_HashName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.set_HashName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12_DeriveBytes::*)(::StringW)>(&::Mono::Security::X509::PKCS12_DeriveBytes::set_HashName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0e9d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"set_HashName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.get_IterationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::X509::PKCS12_DeriveBytes::*)()>(&::Mono::Security::X509::PKCS12_DeriveBytes::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0e9d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"get_IterationCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.set_IterationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12_DeriveBytes::*)(int32_t)>(&::Mono::Security::X509::PKCS12_DeriveBytes::set_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0e9d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"set_IterationCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.get_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12_DeriveBytes::*)()>(&::Mono::Security::X509::PKCS12_DeriveBytes::get_Password)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa0e9d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"get_Password", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.set_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12_DeriveBytes::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12_DeriveBytes::set_Password)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa0df8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"set_Password", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.get_Salt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12_DeriveBytes::*)()>(&::Mono::Security::X509::PKCS12_DeriveBytes::get_Salt)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa0e9df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"get_Salt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.set_Salt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12_DeriveBytes::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12_DeriveBytes::set_Salt)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa0df99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"set_Salt", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.Adjust
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::PKCS12_DeriveBytes::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::PKCS12_DeriveBytes::Adjust)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa0e9e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"Adjust", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.Derive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12_DeriveBytes::*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::X509::PKCS12_DeriveBytes::Derive)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0xa0e9f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"Derive", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.DeriveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12_DeriveBytes::*)(int32_t)>(&::Mono::Security::X509::PKCS12_DeriveBytes::DeriveKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa0dfa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"DeriveKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.DeriveIV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12_DeriveBytes::*)(int32_t)>(&::Mono::Security::X509::PKCS12_DeriveBytes::DeriveIV)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa0dfac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"DeriveIV", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::PKCS12_DeriveBytes.DeriveMAC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::PKCS12_DeriveBytes::*)(int32_t)>(&::Mono::Security::X509::PKCS12_DeriveBytes::DeriveMAC)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa0e3620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"DeriveMAC", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_get__hashName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hashName;
}
constexpr ::StringW const& Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_get__hashName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hashName;
}
constexpr void Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_set__hashName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hashName = value;
}
constexpr int32_t& Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_get__iterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr int32_t const& Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_get__iterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr void Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_set__iterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iterations = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_get__password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_get__password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____password;
}
constexpr void Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_set__password(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____password = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_get__salt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____salt;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_get__salt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____salt;
}
constexpr void Mono::Security::X509::PKCS12_DeriveBytes::__cordl_internal_set__salt(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____salt = value;
}
inline void Mono::Security::X509::PKCS12_DeriveBytes::setStaticF_keyDiversifier(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "keyDiversifier", ::Mono::Security::X509::PKCS12_DeriveBytes*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12_DeriveBytes::getStaticF_keyDiversifier()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "keyDiversifier", ::Mono::Security::X509::PKCS12_DeriveBytes*>();
}
inline void Mono::Security::X509::PKCS12_DeriveBytes::setStaticF_ivDiversifier(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ivDiversifier", ::Mono::Security::X509::PKCS12_DeriveBytes*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12_DeriveBytes::getStaticF_ivDiversifier()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ivDiversifier", ::Mono::Security::X509::PKCS12_DeriveBytes*>();
}
inline void Mono::Security::X509::PKCS12_DeriveBytes::setStaticF_macDiversifier(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "macDiversifier", ::Mono::Security::X509::PKCS12_DeriveBytes*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12_DeriveBytes::getStaticF_macDiversifier()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "macDiversifier", ::Mono::Security::X509::PKCS12_DeriveBytes*>();
}
inline void Mono::Security::X509::PKCS12_DeriveBytes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::PKCS12_DeriveBytes::get_HashName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"get_HashName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Security::X509::PKCS12_DeriveBytes::set_HashName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"set_HashName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Mono::Security::X509::PKCS12_DeriveBytes::get_IterationCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"get_IterationCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Security::X509::PKCS12_DeriveBytes::set_IterationCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"set_IterationCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12_DeriveBytes::get_Password()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"get_Password", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::X509::PKCS12_DeriveBytes::set_Password(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"set_Password", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12_DeriveBytes::get_Salt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"get_Salt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::X509::PKCS12_DeriveBytes::set_Salt(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"set_Salt", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::X509::PKCS12_DeriveBytes::Adjust(::ArrayW<uint8_t>  a, int32_t  aOff, ::ArrayW<uint8_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"Adjust", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, aOff, b);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12_DeriveBytes::Derive(::ArrayW<uint8_t>  diversifier, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"Derive", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, diversifier, n);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12_DeriveBytes::DeriveKey(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"DeriveKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, size);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12_DeriveBytes::DeriveIV(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"DeriveIV", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, size);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::PKCS12_DeriveBytes::DeriveMAC(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::PKCS12_DeriveBytes*>(),
                        {"DeriveMAC", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, size);
}
inline ::Mono::Security::X509::PKCS12_DeriveBytes* Mono::Security::X509::PKCS12_DeriveBytes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::PKCS12_DeriveBytes*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::PKCS12_DeriveBytes::PKCS12_DeriveBytes()   {
}
