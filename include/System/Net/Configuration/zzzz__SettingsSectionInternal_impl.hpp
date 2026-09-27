#pragma once
// IWYU pragma private; include "System/Net/Configuration/SettingsSectionInternal.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_impl.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Configuration/zzzz__SettingsSectionInternal_def.hpp"
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_Section
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::SettingsSectionInternal* (*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_Section)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaccc380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_Section", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_UseNagleAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_UseNagleAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_UseNagleAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.set_UseNagleAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&::System::Net::Configuration::SettingsSectionInternal::set_UseNagleAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_UseNagleAlgorithm", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_Expect100Continue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_Expect100Continue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_Expect100Continue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.set_Expect100Continue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&::System::Net::Configuration::SettingsSectionInternal::set_Expect100Continue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_Expect100Continue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_CheckCertificateName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_CheckCertificateName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_CheckCertificateName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.set_CheckCertificateName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&::System::Net::Configuration::SettingsSectionInternal::set_CheckCertificateName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_CheckCertificateName", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_DnsRefreshTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_DnsRefreshTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_DnsRefreshTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.set_DnsRefreshTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)(int32_t)>(&::System::Net::Configuration::SettingsSectionInternal::set_DnsRefreshTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_DnsRefreshTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_EnableDnsRoundRobin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_EnableDnsRoundRobin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_EnableDnsRoundRobin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.set_EnableDnsRoundRobin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&::System::Net::Configuration::SettingsSectionInternal::set_EnableDnsRoundRobin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_EnableDnsRoundRobin", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_CheckCertificateRevocationList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_CheckCertificateRevocationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_CheckCertificateRevocationList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.set_CheckCertificateRevocationList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)(bool)>(&::System::Net::Configuration::SettingsSectionInternal::set_CheckCertificateRevocationList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_CheckCertificateRevocationList", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_EncryptionPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::EncryptionPolicy (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_EncryptionPolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.set_EncryptionPolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)(::System::Net::Security::EncryptionPolicy)>(&::System::Net::Configuration::SettingsSectionInternal::set_EncryptionPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_EncryptionPolicy", {}, {::i2c::type_of<::System::Net::Security::EncryptionPolicy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal.get_Ipv6Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaccc448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_Ipv6Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SettingsSectionInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SettingsSectionInternal::*)()>(&::System::Net::Configuration::SettingsSectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaccc450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_HttpListenerUnescapeRequestUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpListenerUnescapeRequestUrl;
}
constexpr bool const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_HttpListenerUnescapeRequestUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpListenerUnescapeRequestUrl;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set_HttpListenerUnescapeRequestUrl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HttpListenerUnescapeRequestUrl = value;
}
constexpr ::System::Net::Sockets::IPProtectionLevel& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_IPProtectionLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPProtectionLevel;
}
constexpr ::System::Net::Sockets::IPProtectionLevel const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get_IPProtectionLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IPProtectionLevel;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IPProtectionLevel = value;
}
constexpr bool& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__UseNagleAlgorithm_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseNagleAlgorithm_k__BackingField;
}
constexpr bool const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__UseNagleAlgorithm_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseNagleAlgorithm_k__BackingField;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set__UseNagleAlgorithm_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseNagleAlgorithm_k__BackingField = value;
}
constexpr bool& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__Expect100Continue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Expect100Continue_k__BackingField;
}
constexpr bool const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__Expect100Continue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Expect100Continue_k__BackingField;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set__Expect100Continue_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Expect100Continue_k__BackingField = value;
}
constexpr bool& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__CheckCertificateName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CheckCertificateName_k__BackingField;
}
constexpr bool const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__CheckCertificateName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CheckCertificateName_k__BackingField;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set__CheckCertificateName_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CheckCertificateName_k__BackingField = value;
}
constexpr int32_t& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__DnsRefreshTimeout_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DnsRefreshTimeout_k__BackingField;
}
constexpr int32_t const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__DnsRefreshTimeout_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DnsRefreshTimeout_k__BackingField;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set__DnsRefreshTimeout_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DnsRefreshTimeout_k__BackingField = value;
}
constexpr bool& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__EnableDnsRoundRobin_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableDnsRoundRobin_k__BackingField;
}
constexpr bool const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__EnableDnsRoundRobin_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableDnsRoundRobin_k__BackingField;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set__EnableDnsRoundRobin_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableDnsRoundRobin_k__BackingField = value;
}
constexpr bool& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__CheckCertificateRevocationList_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CheckCertificateRevocationList_k__BackingField;
}
constexpr bool const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__CheckCertificateRevocationList_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CheckCertificateRevocationList_k__BackingField;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set__CheckCertificateRevocationList_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CheckCertificateRevocationList_k__BackingField = value;
}
constexpr ::System::Net::Security::EncryptionPolicy& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__EncryptionPolicy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EncryptionPolicy_k__BackingField;
}
constexpr ::System::Net::Security::EncryptionPolicy const& System::Net::Configuration::SettingsSectionInternal::__cordl_internal_get__EncryptionPolicy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EncryptionPolicy_k__BackingField;
}
constexpr void System::Net::Configuration::SettingsSectionInternal::__cordl_internal_set__EncryptionPolicy_k__BackingField(::System::Net::Security::EncryptionPolicy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EncryptionPolicy_k__BackingField = value;
}
inline void System::Net::Configuration::SettingsSectionInternal::setStaticF_instance(::System::Net::Configuration::SettingsSectionInternal*  value)  {
::cordl_internals::setStaticField<::System::Net::Configuration::SettingsSectionInternal*, "instance", ::System::Net::Configuration::SettingsSectionInternal*>(std::forward<::System::Net::Configuration::SettingsSectionInternal*>(value));
}
inline ::System::Net::Configuration::SettingsSectionInternal* System::Net::Configuration::SettingsSectionInternal::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::System::Net::Configuration::SettingsSectionInternal*, "instance", ::System::Net::Configuration::SettingsSectionInternal*>();
}
inline ::System::Net::Configuration::SettingsSectionInternal* System::Net::Configuration::SettingsSectionInternal::get_Section()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_Section", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::SettingsSectionInternal*>(nullptr, ___internal_method);
}
inline bool System::Net::Configuration::SettingsSectionInternal::get_UseNagleAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_UseNagleAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::SettingsSectionInternal::set_UseNagleAlgorithm(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_UseNagleAlgorithm", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Configuration::SettingsSectionInternal::get_Expect100Continue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_Expect100Continue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::SettingsSectionInternal::set_Expect100Continue(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_Expect100Continue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Configuration::SettingsSectionInternal::get_CheckCertificateName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_CheckCertificateName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::SettingsSectionInternal::set_CheckCertificateName(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_CheckCertificateName", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::Configuration::SettingsSectionInternal::get_DnsRefreshTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_DnsRefreshTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Configuration::SettingsSectionInternal::set_DnsRefreshTimeout(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_DnsRefreshTimeout", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Configuration::SettingsSectionInternal::get_EnableDnsRoundRobin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_EnableDnsRoundRobin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::SettingsSectionInternal::set_EnableDnsRoundRobin(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_EnableDnsRoundRobin", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Configuration::SettingsSectionInternal::get_CheckCertificateRevocationList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_CheckCertificateRevocationList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::SettingsSectionInternal::set_CheckCertificateRevocationList(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_CheckCertificateRevocationList", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Security::EncryptionPolicy System::Net::Configuration::SettingsSectionInternal::get_EncryptionPolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_EncryptionPolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Security::EncryptionPolicy>(this, ___internal_method);
}
inline void System::Net::Configuration::SettingsSectionInternal::set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"set_EncryptionPolicy", {}, {::i2c::type_of<::System::Net::Security::EncryptionPolicy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Configuration::SettingsSectionInternal::get_Ipv6Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {"get_Ipv6Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Configuration::SettingsSectionInternal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SettingsSectionInternal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Configuration::SettingsSectionInternal* System::Net::Configuration::SettingsSectionInternal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::SettingsSectionInternal*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::SettingsSectionInternal::SettingsSectionInternal()   {
}
