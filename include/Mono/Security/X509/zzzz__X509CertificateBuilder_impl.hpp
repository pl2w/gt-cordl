#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509CertificateBuilder.hpp"
#include "Mono/Security/X509/zzzz__X509Builder_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateBuilder_def.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(uint8_t)>(&::Mono::Security::X509::X509CertificateBuilder::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa0f0c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.set_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(uint8_t)>(&::Mono::Security::X509::X509CertificateBuilder::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_Version", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_SerialNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_SerialNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.set_SerialNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509CertificateBuilder::set_SerialNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_SerialNumber", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_IssuerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_IssuerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_IssuerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.set_IssuerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(::StringW)>(&::Mono::Security::X509::X509CertificateBuilder::set_IssuerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_IssuerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_NotBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_NotBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_NotBefore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.set_NotBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(::System::DateTime)>(&::Mono::Security::X509::X509CertificateBuilder::set_NotBefore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_NotBefore", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_NotAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_NotAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_NotAfter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.set_NotAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(::System::DateTime)>(&::Mono::Security::X509::X509CertificateBuilder::set_NotAfter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_NotAfter", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_SubjectName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_SubjectName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_SubjectName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.set_SubjectName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(::StringW)>(&::Mono::Security::X509::X509CertificateBuilder::set_SubjectName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_SubjectName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_SubjectPublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_SubjectPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_SubjectPublicKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.set_SubjectPublicKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::X509CertificateBuilder::set_SubjectPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_SubjectPublicKey", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_IssuerUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_IssuerUniqueId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_IssuerUniqueId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.set_IssuerUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509CertificateBuilder::set_IssuerUniqueId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_IssuerUniqueId", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_SubjectUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_SubjectUniqueId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_SubjectUniqueId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.set_SubjectUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509CertificateBuilder::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509CertificateBuilder::set_SubjectUniqueId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_SubjectUniqueId", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.get_Extensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_Extensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.SubjectPublicKeyInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::X509CertificateBuilder::*)()>(&::Mono::Security::X509::X509CertificateBuilder::SubjectPublicKeyInfo)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0xa0f0da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"SubjectPublicKeyInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.UniqueIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509CertificateBuilder::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509CertificateBuilder::UniqueIdentifier)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa0f113c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"UniqueIdentifier", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509CertificateBuilder.ToBeSigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::X509CertificateBuilder::*)(::StringW)>(&::Mono::Security::X509::X509CertificateBuilder::ToBeSigned)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa0f1200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr uint8_t& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr uint8_t const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_version(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_sn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sn;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_sn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sn;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_sn(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sn = value;
}
constexpr ::StringW& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_issuer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___issuer;
}
constexpr ::StringW const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_issuer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___issuer;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_issuer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___issuer = value;
}
constexpr ::System::DateTime& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_notBefore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notBefore;
}
constexpr ::System::DateTime const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_notBefore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notBefore;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_notBefore(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notBefore = value;
}
constexpr ::System::DateTime& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_notAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notAfter;
}
constexpr ::System::DateTime const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_notAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notAfter;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_notAfter(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notAfter = value;
}
constexpr ::StringW& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_subject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subject;
}
constexpr ::StringW const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_subject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subject;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_subject(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subject = value;
}
constexpr ::System::Security::Cryptography::AsymmetricAlgorithm*& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_aa()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aa;
}
constexpr ::System::Security::Cryptography::AsymmetricAlgorithm* const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_aa() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aa;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_aa(::System::Security::Cryptography::AsymmetricAlgorithm*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aa = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_issuerUniqueID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___issuerUniqueID;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_issuerUniqueID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___issuerUniqueID;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_issuerUniqueID(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___issuerUniqueID = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_subjectUniqueID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subjectUniqueID;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_subjectUniqueID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subjectUniqueID;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_subjectUniqueID(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subjectUniqueID = value;
}
constexpr ::Mono::Security::X509::X509ExtensionCollection*& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_extensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extensions;
}
constexpr ::Mono::Security::X509::X509ExtensionCollection* const& Mono::Security::X509::X509CertificateBuilder::__cordl_internal_get_extensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extensions;
}
constexpr void Mono::Security::X509::X509CertificateBuilder::__cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extensions = value;
}
inline void Mono::Security::X509::X509CertificateBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::_ctor(uint8_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline uint8_t Mono::Security::X509::X509CertificateBuilder::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::set_Version(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_Version", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509CertificateBuilder::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_SerialNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::set_SerialNumber(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_SerialNumber", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Mono::Security::X509::X509CertificateBuilder::get_IssuerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_IssuerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::set_IssuerName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_IssuerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime Mono::Security::X509::X509CertificateBuilder::get_NotBefore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_NotBefore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::set_NotBefore(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_NotBefore", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime Mono::Security::X509::X509CertificateBuilder::get_NotAfter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_NotAfter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::set_NotAfter(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_NotAfter", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Mono::Security::X509::X509CertificateBuilder::get_SubjectName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_SubjectName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::set_SubjectName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_SubjectName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::AsymmetricAlgorithm* Mono::Security::X509::X509CertificateBuilder::get_SubjectPublicKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_SubjectPublicKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricAlgorithm*>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::set_SubjectPublicKey(::System::Security::Cryptography::AsymmetricAlgorithm*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_SubjectPublicKey", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509CertificateBuilder::get_IssuerUniqueId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_IssuerUniqueId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::set_IssuerUniqueId(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_IssuerUniqueId", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509CertificateBuilder::get_SubjectUniqueId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_SubjectUniqueId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Mono::Security::X509::X509CertificateBuilder::set_SubjectUniqueId(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"set_SubjectUniqueId", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509CertificateBuilder::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"get_Extensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection*>(this, ___internal_method);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::X509CertificateBuilder::SubjectPublicKeyInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"SubjectPublicKeyInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509CertificateBuilder::UniqueIdentifier(::ArrayW<uint8_t>  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(),
                        {"UniqueIdentifier", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, id);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::X509CertificateBuilder::ToBeSigned(::StringW  oid)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509CertificateBuilder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method, oid);
}
inline ::Mono::Security::X509::X509CertificateBuilder* Mono::Security::X509::X509CertificateBuilder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509CertificateBuilder*>());
}
inline ::Mono::Security::X509::X509CertificateBuilder* Mono::Security::X509::X509CertificateBuilder::New_ctor(uint8_t  version)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509CertificateBuilder*>(version));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509CertificateBuilder::X509CertificateBuilder()   {
}
