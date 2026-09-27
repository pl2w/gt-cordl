#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Chain.hpp"
#include "Mono/Security/X509/zzzz__X509ChainStatusFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Chain_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/X509/zzzz__X509ChainStatusFlags_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Chain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Chain::*)()>(&::Mono::Security::X509::X509Chain::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa0f2154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509CertificateCollection*)>(&::Mono::Security::X509::X509Chain::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa0f21c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::X509::X509CertificateCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.get_Chain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Chain::*)()>(&::Mono::Security::X509::X509Chain::get_Chain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f2248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"get_Chain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.get_Root
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Chain::*)()>(&::Mono::Security::X509::X509Chain::get_Root)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f2250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"get_Root", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.get_Status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509ChainStatusFlags (::Mono::Security::X509::X509Chain::*)()>(&::Mono::Security::X509::X509Chain::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f2258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"get_Status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.get_TrustAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Chain::*)()>(&::Mono::Security::X509::X509Chain::get_TrustAnchors)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa0f2260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"get_TrustAnchors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.set_TrustAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509CertificateCollection*)>(&::Mono::Security::X509::X509Chain::set_TrustAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f2388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"set_TrustAnchors", {}, {::i2c::type_of<::Mono::Security::X509::X509CertificateCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.LoadCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::LoadCertificate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa0f2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"LoadCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.LoadCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509CertificateCollection*)>(&::Mono::Security::X509::X509Chain::LoadCertificates)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa0f23a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"LoadCertificates", {}, {::i2c::type_of<::Mono::Security::X509::X509CertificateCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.FindByIssuerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Chain::*)(::StringW)>(&::Mono::Security::X509::X509Chain::FindByIssuerName)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa0f23b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"FindByIssuerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::Build)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0xa0f2578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"Build", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Chain::*)()>(&::Mono::Security::X509::X509Chain::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa0f2eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::IsValid)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa0f2e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"IsValid", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.FindCertificateParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::FindCertificateParent)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa0f2904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"FindCertificateParent", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.FindCertificateRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::FindCertificateRoot)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa0f2aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"FindCertificateRoot", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.IsTrusted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::IsTrusted)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa0f2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"IsTrusted", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Chain.IsParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Chain::*)(::Mono::Security::X509::X509Certificate*, ::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Chain::IsParent)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa0f2cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"IsParent", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::X509Chain::__cordl_internal_get_roots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roots;
}
constexpr ::Mono::Security::X509::X509CertificateCollection* const& Mono::Security::X509::X509Chain::__cordl_internal_get_roots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roots;
}
constexpr void Mono::Security::X509::X509Chain::__cordl_internal_set_roots(::Mono::Security::X509::X509CertificateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roots = value;
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::X509Chain::__cordl_internal_get_certs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certs;
}
constexpr ::Mono::Security::X509::X509CertificateCollection* const& Mono::Security::X509::X509Chain::__cordl_internal_get_certs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___certs;
}
constexpr void Mono::Security::X509::X509Chain::__cordl_internal_set_certs(::Mono::Security::X509::X509CertificateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___certs = value;
}
constexpr ::Mono::Security::X509::X509Certificate*& Mono::Security::X509::X509Chain::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::Mono::Security::X509::X509Certificate* const& Mono::Security::X509::X509Chain::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void Mono::Security::X509::X509Chain::__cordl_internal_set__root(::Mono::Security::X509::X509Certificate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____root = value;
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::X509Chain::__cordl_internal_get__chain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chain;
}
constexpr ::Mono::Security::X509::X509CertificateCollection* const& Mono::Security::X509::X509Chain::__cordl_internal_get__chain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chain;
}
constexpr void Mono::Security::X509::X509Chain::__cordl_internal_set__chain(::Mono::Security::X509::X509CertificateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chain = value;
}
constexpr ::Mono::Security::X509::X509ChainStatusFlags& Mono::Security::X509::X509Chain::__cordl_internal_get__status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status;
}
constexpr ::Mono::Security::X509::X509ChainStatusFlags const& Mono::Security::X509::X509Chain::__cordl_internal_get__status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status;
}
constexpr void Mono::Security::X509::X509Chain::__cordl_internal_set__status(::Mono::Security::X509::X509ChainStatusFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____status = value;
}
inline void Mono::Security::X509::X509Chain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Chain::_ctor(::Mono::Security::X509::X509CertificateCollection*  chain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::X509::X509CertificateCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chain);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Chain::get_Chain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"get_Chain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Chain::get_Root()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"get_Root", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509ChainStatusFlags Mono::Security::X509::X509Chain::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ChainStatusFlags>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Chain::get_TrustAnchors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"get_TrustAnchors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Chain::set_TrustAnchors(::Mono::Security::X509::X509CertificateCollection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"set_TrustAnchors", {}, {::i2c::type_of<::Mono::Security::X509::X509CertificateCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::X509::X509Chain::LoadCertificate(::Mono::Security::X509::X509Certificate*  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"LoadCertificate", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x509);
}
inline void Mono::Security::X509::X509Chain::LoadCertificates(::Mono::Security::X509::X509CertificateCollection*  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"LoadCertificates", {}, {::i2c::type_of<::Mono::Security::X509::X509CertificateCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Chain::FindByIssuerName(::StringW  issuerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"FindByIssuerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method, issuerName);
}
inline bool Mono::Security::X509::X509Chain::Build(::Mono::Security::X509::X509Certificate*  leaf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"Build", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leaf);
}
inline void Mono::Security::X509::X509Chain::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Chain::IsValid(::Mono::Security::X509::X509Certificate*  cert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"IsValid", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cert);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Chain::FindCertificateParent(::Mono::Security::X509::X509Certificate*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"FindCertificateParent", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method, child);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Chain::FindCertificateRoot(::Mono::Security::X509::X509Certificate*  potentialRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"FindCertificateRoot", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method, potentialRoot);
}
inline bool Mono::Security::X509::X509Chain::IsTrusted(::Mono::Security::X509::X509Certificate*  potentialTrusted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"IsTrusted", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, potentialTrusted);
}
inline bool Mono::Security::X509::X509Chain::IsParent(::Mono::Security::X509::X509Certificate*  child, ::Mono::Security::X509::X509Certificate*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Chain*>(),
                        {"IsParent", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, child, parent);
}
inline ::Mono::Security::X509::X509Chain* Mono::Security::X509::X509Chain::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Chain*>());
}
inline ::Mono::Security::X509::X509Chain* Mono::Security::X509::X509Chain::New_ctor(::Mono::Security::X509::X509CertificateCollection*  chain)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Chain*>(chain));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Chain::X509Chain()   {
}
