#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
#include "System/Security/Cryptography/zzzz__PbeParameters_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa162210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::Clear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa162214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(bool)>(&::System::Security::Cryptography::AsymmetricAlgorithm::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa162280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.get_KeySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::get_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.set_KeySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(int32_t)>(&::System::Security::Cryptography::AsymmetricAlgorithm::set_KeySize)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa16228c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.get_LegalKeySizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Security::Cryptography::KeySizes*> (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::get_LegalKeySizes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa16239c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.get_SignatureAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa162414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.get_KeyExchangeAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::get_KeyExchangeAlgorithm)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa16244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa162484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (*)(::StringW)>(&::System::Security::Cryptography::AsymmetricAlgorithm::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa1624d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.FromXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::StringW)>(&::System::Security::Cryptography::AsymmetricAlgorithm::FromXmlString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa16257c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ToXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::AsymmetricAlgorithm::*)(bool)>(&::System::Security::Cryptography::AsymmetricAlgorithm::ToXmlString)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa1625b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ExportEncryptedPkcs8PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Security::Cryptography::PbeParameters*)>(&::System::Security::Cryptography::AsymmetricAlgorithm::ExportEncryptedPkcs8PrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa1625ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ExportEncryptedPkcs8PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<char16_t>, ::System::Security::Cryptography::PbeParameters*)>(&::System::Security::Cryptography::AsymmetricAlgorithm::ExportEncryptedPkcs8PrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa162624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ExportPkcs8PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::ExportPkcs8PrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa16265c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ExportSubjectPublicKeyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::AsymmetricAlgorithm::ExportSubjectPublicKeyInfo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa162694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ImportEncryptedPkcs8PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::AsymmetricAlgorithm::ImportEncryptedPkcs8PrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa1626cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ImportEncryptedPkcs8PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::AsymmetricAlgorithm::ImportEncryptedPkcs8PrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa162704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ImportPkcs8PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::AsymmetricAlgorithm::ImportPkcs8PrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa16273c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.ImportSubjectPublicKeyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::AsymmetricAlgorithm::ImportSubjectPublicKeyInfo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa162774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.TryExportEncryptedPkcs8PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Security::Cryptography::PbeParameters*, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::AsymmetricAlgorithm::TryExportEncryptedPkcs8PrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa1627ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.TryExportEncryptedPkcs8PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<char16_t>, ::System::Security::Cryptography::PbeParameters*, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::AsymmetricAlgorithm::TryExportEncryptedPkcs8PrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa1627e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.TryExportPkcs8PrivateKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::AsymmetricAlgorithm::TryExportPkcs8PrivateKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa16281c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricAlgorithm.TryExportSubjectPublicKeyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::AsymmetricAlgorithm::TryExportSubjectPublicKeyInfo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa162854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_get_KeySizeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeySizeValue;
}
constexpr int32_t const& System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_get_KeySizeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeySizeValue;
}
constexpr void System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_set_KeySizeValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeySizeValue = value;
}
constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*>& System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_get_LegalKeySizesValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LegalKeySizesValue;
}
constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*> const& System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_get_LegalKeySizesValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LegalKeySizesValue;
}
constexpr void System::Security::Cryptography::AsymmetricAlgorithm::__cordl_internal_set_LegalKeySizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LegalKeySizesValue = value;
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t System::Security::Cryptography::AsymmetricAlgorithm::get_KeySize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::set_KeySize(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> System::Security::Cryptography::AsymmetricAlgorithm::get_LegalKeySizes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Security::Cryptography::KeySizes*>>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::AsymmetricAlgorithm::get_SignatureAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::AsymmetricAlgorithm::get_KeyExchangeAlgorithm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::AsymmetricAlgorithm::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricAlgorithm*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::AsymmetricAlgorithm::Create(::StringW  algName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricAlgorithm*>(nullptr, ___internal_method, algName);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::FromXmlString(::StringW  xmlString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlString);
}
inline ::StringW System::Security::Cryptography::AsymmetricAlgorithm::ToXmlString(bool  includePrivateParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, includePrivateParameters);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsymmetricAlgorithm::ExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t>  passwordBytes, ::System::Security::Cryptography::PbeParameters*  pbeParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, passwordBytes, pbeParameters);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsymmetricAlgorithm::ExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<char16_t>  password, ::System::Security::Cryptography::PbeParameters*  pbeParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, password, pbeParameters);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsymmetricAlgorithm::ExportPkcs8PrivateKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::AsymmetricAlgorithm::ExportSubjectPublicKeyInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::ImportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t>  passwordBytes, ::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passwordBytes, source, bytesRead);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::ImportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<char16_t>  password, ::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, password, source, bytesRead);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::ImportPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, bytesRead);
}
inline void System::Security::Cryptography::AsymmetricAlgorithm::ImportSubjectPublicKeyInfo(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, bytesRead);
}
inline bool System::Security::Cryptography::AsymmetricAlgorithm::TryExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t>  passwordBytes, ::System::Security::Cryptography::PbeParameters*  pbeParameters, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, passwordBytes, pbeParameters, destination, bytesWritten);
}
inline bool System::Security::Cryptography::AsymmetricAlgorithm::TryExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<char16_t>  password, ::System::Security::Cryptography::PbeParameters*  pbeParameters, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, password, pbeParameters, destination, bytesWritten);
}
inline bool System::Security::Cryptography::AsymmetricAlgorithm::TryExportPkcs8PrivateKey(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, bytesWritten);
}
inline bool System::Security::Cryptography::AsymmetricAlgorithm::TryExportSubjectPublicKeyInfo(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::AsymmetricAlgorithm*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, bytesWritten);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::AsymmetricAlgorithm::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsymmetricAlgorithm*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Cryptography::AsymmetricAlgorithm::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::AsymmetricAlgorithm::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AsymmetricAlgorithm::AsymmetricAlgorithm()   {
}
