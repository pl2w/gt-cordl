#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSAPKCS1SignatureDescription.hpp"
#include "System/Security/Cryptography/zzzz__SignatureDescription_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDescription_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDescription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDescription::*)(::StringW, ::StringW)>(&::System::Security::Cryptography::RSAPKCS1SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa17bea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDescription.CreateDeformatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricSignatureDeformatter* (::System::Security::Cryptography::RSAPKCS1SignatureDescription::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateDeformatter)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa17bf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>(),
                        {"CreateDeformatter", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDescription.CreateFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricSignatureFormatter* (::System::Security::Cryptography::RSAPKCS1SignatureDescription::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateFormatter)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa17bfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>(),
                        {"CreateFormatter", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::RSAPKCS1SignatureDescription::__cordl_internal_get__hashAlgorithm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hashAlgorithm;
}
constexpr ::StringW const& System::Security::Cryptography::RSAPKCS1SignatureDescription::__cordl_internal_get__hashAlgorithm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hashAlgorithm;
}
constexpr void System::Security::Cryptography::RSAPKCS1SignatureDescription::__cordl_internal_set__hashAlgorithm(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hashAlgorithm = value;
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDescription::_ctor(::StringW  hashAlgorithm, ::StringW  digestAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashAlgorithm, digestAlgorithm);
}
inline ::System::Security::Cryptography::AsymmetricSignatureDeformatter* System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateDeformatter(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>(),
                        {"CreateDeformatter", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::AsymmetricSignatureFormatter* System::Security::Cryptography::RSAPKCS1SignatureDescription::CreateFormatter(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>(),
                        {"CreateFormatter", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::RSAPKCS1SignatureDescription* System::Security::Cryptography::RSAPKCS1SignatureDescription::New_ctor(::StringW  hashAlgorithm, ::StringW  digestAlgorithm)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1SignatureDescription*>(hashAlgorithm, digestAlgorithm));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1SignatureDescription::RSAPKCS1SignatureDescription()   {
}
