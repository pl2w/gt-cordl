#pragma once
// IWYU pragma private; include "System/Security/Cryptography/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__Utils_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__PKCS1MaskGenerationMethod_def.hpp"
#include "System/Security/Cryptography/zzzz__RNGCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::Utils.get_StaticRandomNumberGenerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RNGCryptoServiceProvider* (*)()>(&::System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa17db4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"get_StaticRandomNumberGenerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.GenerateRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::System::Security::Cryptography::Utils::GenerateRandom)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa17dccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"GenerateRandom", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.HasAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::System::Security::Cryptography::Utils::HasAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17d824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"HasAlgorithm", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DiscardWhiteSpaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Security::Cryptography::Utils::DiscardWhiteSpaces)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa172a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DiscardWhiteSpaces", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DiscardWhiteSpaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, int32_t)>(&::System::Security::Cryptography::Utils::DiscardWhiteSpaces)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa17dd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DiscardWhiteSpaces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.ConvertByteArrayToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Utils::ConvertByteArrayToInt)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa17dee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"ConvertByteArrayToInt", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.ConvertIntToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::System::Security::Cryptography::Utils::ConvertIntToByteArray)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa17df40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"ConvertIntToByteArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.ConvertIntToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<::ArrayW<uint8_t>>)>(&::System::Security::Cryptography::Utils::ConvertIntToByteArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa17e058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"ConvertIntToByteArray", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.FixupKeyParity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Utils::FixupKeyParity)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa17d484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"FixupKeyParity", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DWORDFromLittleEndian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint8_t*)>(&::System::Security::Cryptography::Utils::DWORDFromLittleEndian)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa17e0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DWORDFromLittleEndian", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DWORDToLittleEndian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint32_t>, int32_t)>(&::System::Security::Cryptography::Utils::DWORDToLittleEndian)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa17e11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DWORDToLittleEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DWORDFromBigEndian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t*, int32_t, uint8_t*)>(&::System::Security::Cryptography::Utils::DWORDFromBigEndian)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa178b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DWORDFromBigEndian", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DWORDToBigEndian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint32_t>, int32_t)>(&::System::Security::Cryptography::Utils::DWORDToBigEndian)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa178a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DWORDToBigEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.QuadWordFromBigEndian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t*, int32_t, uint8_t*)>(&::System::Security::Cryptography::Utils::QuadWordFromBigEndian)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa17a870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"QuadWordFromBigEndian", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.QuadWordToBigEndian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::ArrayW<uint64_t>, int32_t)>(&::System::Security::Cryptography::Utils::QuadWordToBigEndian)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa17a6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"QuadWordToBigEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.Int
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(uint32_t)>(&::System::Security::Cryptography::Utils::Int)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa17e20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"Int", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.RsaOaepEncrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::System::Security::Cryptography::RandomNumberGenerator*, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Utils::RsaOaepEncrypt)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa177468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"RsaOaepEncrypt", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(), ::i2c::type_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(), ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.RsaOaepDecrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Utils::RsaOaepDecrypt)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa176bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"RsaOaepDecrypt", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(), ::i2c::type_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.RsaPkcs1Padding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::RSA*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Utils::RsaPkcs1Padding)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa17e2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"RsaPkcs1Padding", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.CompareBigIntArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::Utils::CompareBigIntArrays)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa17e544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"CompareBigIntArrays", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.OidToHashAlgorithmName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithmName (*)(::StringW)>(&::System::Security::Cryptography::Utils::OidToHashAlgorithmName)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa17e65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"OidToHashAlgorithmName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DoesRsaKeyOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::RSA*, ::StringW, ::ArrayW<::System::Type*>)>(&::System::Security::Cryptography::Utils::DoesRsaKeyOverride)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa176d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DoesRsaKeyOverride", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils.DoesRsaKeyOverrideSlowPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>)>(&::System::Security::Cryptography::Utils::DoesRsaKeyOverrideSlowPath)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa17e790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DoesRsaKeyOverrideSlowPath", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::Utils._ProduceLegacyHmacValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Security::Cryptography::Utils::_ProduceLegacyHmacValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17e860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"_ProduceLegacyHmacValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::Utils::setStaticF__rng(::System::Security::Cryptography::RNGCryptoServiceProvider*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RNGCryptoServiceProvider*, "_rng", ::System::Security::Cryptography::Utils*>(std::forward<::System::Security::Cryptography::RNGCryptoServiceProvider*>(value));
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::Utils::getStaticF__rng()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RNGCryptoServiceProvider*, "_rng", ::System::Security::Cryptography::Utils*>();
}
inline ::System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"get_StaticRandomNumberGenerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RNGCryptoServiceProvider*>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::GenerateRandom(int32_t  keySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"GenerateRandom", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, keySize);
}
inline bool System::Security::Cryptography::Utils::HasAlgorithm(int32_t  dwCalg, int32_t  dwKeySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"HasAlgorithm", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dwCalg, dwKeySize);
}
inline ::StringW System::Security::Cryptography::Utils::DiscardWhiteSpaces(::StringW  inputBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DiscardWhiteSpaces", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inputBuffer);
}
inline ::StringW System::Security::Cryptography::Utils::DiscardWhiteSpaces(::StringW  inputBuffer, int32_t  inputOffset, int32_t  inputCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DiscardWhiteSpaces", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline int32_t System::Security::Cryptography::Utils::ConvertByteArrayToInt(::ArrayW<uint8_t>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"ConvertByteArrayToInt", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, input);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::ConvertIntToByteArray(int32_t  dwInput)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"ConvertIntToByteArray", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, dwInput);
}
inline void System::Security::Cryptography::Utils::ConvertIntToByteArray(uint32_t  dwInput, ::by_ref<::ArrayW<uint8_t>>  counter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"ConvertIntToByteArray", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dwInput, counter);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::FixupKeyParity(::ArrayW<uint8_t>  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"FixupKeyParity", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, key);
}
inline void System::Security::Cryptography::Utils::DWORDFromLittleEndian(uint32_t*  x, int32_t  digits, uint8_t*  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DWORDFromLittleEndian", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, digits, block);
}
inline void System::Security::Cryptography::Utils::DWORDToLittleEndian(::ArrayW<uint8_t>  block, ::ArrayW<uint32_t>  x, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DWORDToLittleEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, x, digits);
}
inline void System::Security::Cryptography::Utils::DWORDFromBigEndian(uint32_t*  x, int32_t  digits, uint8_t*  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DWORDFromBigEndian", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, digits, block);
}
inline void System::Security::Cryptography::Utils::DWORDToBigEndian(::ArrayW<uint8_t>  block, ::ArrayW<uint32_t>  x, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DWORDToBigEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, x, digits);
}
inline void System::Security::Cryptography::Utils::QuadWordFromBigEndian(uint64_t*  x, int32_t  digits, uint8_t*  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"QuadWordFromBigEndian", {}, {::i2c::type_of<uint64_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, digits, block);
}
inline void System::Security::Cryptography::Utils::QuadWordToBigEndian(::ArrayW<uint8_t>  block, ::ArrayW<uint64_t>  x, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"QuadWordToBigEndian", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint64_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, block, x, digits);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::Int(uint32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"Int", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, i);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::RsaOaepEncrypt(::System::Security::Cryptography::RSA*  rsa, ::System::Security::Cryptography::HashAlgorithm*  hash, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*  mgf, ::System::Security::Cryptography::RandomNumberGenerator*  rng, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"RsaOaepEncrypt", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(), ::i2c::type_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(), ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, rsa, hash, mgf, rng, data);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::RsaOaepDecrypt(::System::Security::Cryptography::RSA*  rsa, ::System::Security::Cryptography::HashAlgorithm*  hash, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*  mgf, ::ArrayW<uint8_t>  encryptedData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"RsaOaepDecrypt", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(), ::i2c::type_of<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, rsa, hash, mgf, encryptedData);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::Utils::RsaPkcs1Padding(::System::Security::Cryptography::RSA*  rsa, ::ArrayW<uint8_t>  oid, ::ArrayW<uint8_t>  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"RsaPkcs1Padding", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, rsa, oid, hash);
}
inline bool System::Security::Cryptography::Utils::CompareBigIntArrays(::ArrayW<uint8_t>  lhs, ::ArrayW<uint8_t>  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"CompareBigIntArrays", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline ::System::Security::Cryptography::HashAlgorithmName System::Security::Cryptography::Utils::OidToHashAlgorithmName(::StringW  oid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"OidToHashAlgorithmName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithmName>(nullptr, ___internal_method, oid);
}
inline bool System::Security::Cryptography::Utils::DoesRsaKeyOverride(::System::Security::Cryptography::RSA*  rsaKey, ::StringW  methodName, ::ArrayW<::System::Type*>  parameterTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DoesRsaKeyOverride", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rsaKey, methodName, parameterTypes);
}
inline bool System::Security::Cryptography::Utils::DoesRsaKeyOverrideSlowPath(::System::Type*  t, ::StringW  methodName, ::ArrayW<::System::Type*>  parameterTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"DoesRsaKeyOverrideSlowPath", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t, methodName, parameterTypes);
}
inline bool System::Security::Cryptography::Utils::_ProduceLegacyHmacValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::Utils*>(),
                        {"_ProduceLegacyHmacValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::Utils::Utils()   {
}
