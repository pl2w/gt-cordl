#pragma once
// IWYU pragma private; include "System/Net/Configuration/SettingsSectionInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__EncryptionPolicy_def.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsSectionInternal)
namespace System::Net::Security {
struct EncryptionPolicy;
}
// Forward declare root types
namespace System::Net::Configuration {
class SettingsSectionInternal;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::SettingsSectionInternal*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::SettingsSectionInternal*, "System.Net.Configuration", "SettingsSectionInternal");
// Dependencies System.Net.Security.EncryptionPolicy, System.Net.Sockets.IPProtectionLevel, System.Object
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.SettingsSectionInternal
class CORDL_TYPE SettingsSectionInternal : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CheckCertificateName, put=set_CheckCertificateName)) bool  CheckCertificateName;

 __declspec(property(get=get_CheckCertificateRevocationList, put=set_CheckCertificateRevocationList)) bool  CheckCertificateRevocationList;

 __declspec(property(get=get_DnsRefreshTimeout, put=set_DnsRefreshTimeout)) int32_t  DnsRefreshTimeout;

 __declspec(property(get=get_EnableDnsRoundRobin, put=set_EnableDnsRoundRobin)) bool  EnableDnsRoundRobin;

 __declspec(property(get=get_EncryptionPolicy, put=set_EncryptionPolicy)) ::System::Net::Security::EncryptionPolicy  EncryptionPolicy;

 __declspec(property(get=get_Expect100Continue, put=set_Expect100Continue)) bool  Expect100Continue;

/// @brief Field HttpListenerUnescapeRequestUrl, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_HttpListenerUnescapeRequestUrl, put=__cordl_internal_set_HttpListenerUnescapeRequestUrl)) bool  HttpListenerUnescapeRequestUrl;

/// @brief Field IPProtectionLevel, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_IPProtectionLevel, put=__cordl_internal_set_IPProtectionLevel)) ::System::Net::Sockets::IPProtectionLevel  IPProtectionLevel;

 __declspec(property(get=get_Ipv6Enabled)) bool  Ipv6Enabled;

 __declspec(property(get=get_UseNagleAlgorithm, put=set_UseNagleAlgorithm)) bool  UseNagleAlgorithm;

/// @brief Field <CheckCertificateName>k__BackingField, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get__CheckCertificateName_k__BackingField, put=__cordl_internal_set__CheckCertificateName_k__BackingField)) bool  _CheckCertificateName_k__BackingField;

/// @brief Field <CheckCertificateRevocationList>k__BackingField, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__CheckCertificateRevocationList_k__BackingField, put=__cordl_internal_set__CheckCertificateRevocationList_k__BackingField)) bool  _CheckCertificateRevocationList_k__BackingField;

/// @brief Field <DnsRefreshTimeout>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__DnsRefreshTimeout_k__BackingField, put=__cordl_internal_set__DnsRefreshTimeout_k__BackingField)) int32_t  _DnsRefreshTimeout_k__BackingField;

/// @brief Field <EnableDnsRoundRobin>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableDnsRoundRobin_k__BackingField, put=__cordl_internal_set__EnableDnsRoundRobin_k__BackingField)) bool  _EnableDnsRoundRobin_k__BackingField;

/// @brief Field <EncryptionPolicy>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__EncryptionPolicy_k__BackingField, put=__cordl_internal_set__EncryptionPolicy_k__BackingField)) ::System::Net::Security::EncryptionPolicy  _EncryptionPolicy_k__BackingField;

/// @brief Field <Expect100Continue>k__BackingField, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__Expect100Continue_k__BackingField, put=__cordl_internal_set__Expect100Continue_k__BackingField)) bool  _Expect100Continue_k__BackingField;

/// @brief Field <UseNagleAlgorithm>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseNagleAlgorithm_k__BackingField, put=__cordl_internal_set__UseNagleAlgorithm_k__BackingField)) bool  _UseNagleAlgorithm_k__BackingField;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::System::Net::Configuration::SettingsSectionInternal*  instance;

static inline ::System::Net::Configuration::SettingsSectionInternal* New_ctor() ;

constexpr bool const& __cordl_internal_get_HttpListenerUnescapeRequestUrl() const;

constexpr bool& __cordl_internal_get_HttpListenerUnescapeRequestUrl() ;

constexpr ::System::Net::Sockets::IPProtectionLevel const& __cordl_internal_get_IPProtectionLevel() const;

constexpr ::System::Net::Sockets::IPProtectionLevel& __cordl_internal_get_IPProtectionLevel() ;

constexpr bool const& __cordl_internal_get__CheckCertificateName_k__BackingField() const;

constexpr bool& __cordl_internal_get__CheckCertificateName_k__BackingField() ;

constexpr bool const& __cordl_internal_get__CheckCertificateRevocationList_k__BackingField() const;

constexpr bool& __cordl_internal_get__CheckCertificateRevocationList_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__DnsRefreshTimeout_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DnsRefreshTimeout_k__BackingField() ;

constexpr bool const& __cordl_internal_get__EnableDnsRoundRobin_k__BackingField() const;

constexpr bool& __cordl_internal_get__EnableDnsRoundRobin_k__BackingField() ;

constexpr ::System::Net::Security::EncryptionPolicy const& __cordl_internal_get__EncryptionPolicy_k__BackingField() const;

constexpr ::System::Net::Security::EncryptionPolicy& __cordl_internal_get__EncryptionPolicy_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Expect100Continue_k__BackingField() const;

constexpr bool& __cordl_internal_get__Expect100Continue_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseNagleAlgorithm_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseNagleAlgorithm_k__BackingField() ;

constexpr void __cordl_internal_set_HttpListenerUnescapeRequestUrl(bool  value) ;

constexpr void __cordl_internal_set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel  value) ;

constexpr void __cordl_internal_set__CheckCertificateName_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CheckCertificateRevocationList_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DnsRefreshTimeout_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__EnableDnsRoundRobin_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__EncryptionPolicy_k__BackingField(::System::Net::Security::EncryptionPolicy  value) ;

constexpr void __cordl_internal_set__Expect100Continue_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UseNagleAlgorithm_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xaccc450, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::Configuration::SettingsSectionInternal* getStaticF_instance() ;

/// [CompilerGenerated]
/// @brief Method get_CheckCertificateName, addr 0xaccc3f8, size 0x8, virtual false, abstract: false, final false
inline bool get_CheckCertificateName() ;

/// [CompilerGenerated]
/// @brief Method get_CheckCertificateRevocationList, addr 0xaccc428, size 0x8, virtual false, abstract: false, final false
inline bool get_CheckCertificateRevocationList() ;

/// [CompilerGenerated]
/// @brief Method get_DnsRefreshTimeout, addr 0xaccc408, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DnsRefreshTimeout() ;

/// [CompilerGenerated]
/// @brief Method get_EnableDnsRoundRobin, addr 0xaccc418, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableDnsRoundRobin() ;

/// [CompilerGenerated]
/// @brief Method get_EncryptionPolicy, addr 0xaccc438, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Security::EncryptionPolicy get_EncryptionPolicy() ;

/// [CompilerGenerated]
/// @brief Method get_Expect100Continue, addr 0xaccc3e8, size 0x8, virtual false, abstract: false, final false
inline bool get_Expect100Continue() ;

/// @brief Method get_Ipv6Enabled, addr 0xaccc448, size 0x8, virtual false, abstract: false, final false
inline bool get_Ipv6Enabled() ;

/// @brief Method get_Section, addr 0xaccc380, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::Configuration::SettingsSectionInternal* get_Section() ;

/// [CompilerGenerated]
/// @brief Method get_UseNagleAlgorithm, addr 0xaccc3d8, size 0x8, virtual false, abstract: false, final false
inline bool get_UseNagleAlgorithm() ;

static inline void setStaticF_instance(::System::Net::Configuration::SettingsSectionInternal*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CheckCertificateName, addr 0xaccc400, size 0x8, virtual false, abstract: false, final false
inline void set_CheckCertificateName(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_CheckCertificateRevocationList, addr 0xaccc430, size 0x8, virtual false, abstract: false, final false
inline void set_CheckCertificateRevocationList(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DnsRefreshTimeout, addr 0xaccc410, size 0x8, virtual false, abstract: false, final false
inline void set_DnsRefreshTimeout(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_EnableDnsRoundRobin, addr 0xaccc420, size 0x8, virtual false, abstract: false, final false
inline void set_EnableDnsRoundRobin(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_EncryptionPolicy, addr 0xaccc440, size 0x8, virtual false, abstract: false, final false
inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy  value) ;

/// [CompilerGenerated]
/// @brief Method set_Expect100Continue, addr 0xaccc3f0, size 0x8, virtual false, abstract: false, final false
inline void set_Expect100Continue(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseNagleAlgorithm, addr 0xaccc3e0, size 0x8, virtual false, abstract: false, final false
inline void set_UseNagleAlgorithm(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsSectionInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsSectionInternal(SettingsSectionInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsSectionInternal(SettingsSectionInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10822};

/// @brief Field HttpListenerUnescapeRequestUrl, offset: 0x10, size: 0x1, def value: None
 bool  ___HttpListenerUnescapeRequestUrl;

/// @brief Field IPProtectionLevel, offset: 0x14, size: 0x4, def value: None
 ::System::Net::Sockets::IPProtectionLevel  ___IPProtectionLevel;

/// [CompilerGenerated]
/// @brief Field <UseNagleAlgorithm>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____UseNagleAlgorithm_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Expect100Continue>k__BackingField, offset: 0x19, size: 0x1, def value: None
 bool  ____Expect100Continue_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CheckCertificateName>k__BackingField, offset: 0x1a, size: 0x1, def value: None
 bool  ____CheckCertificateName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DnsRefreshTimeout>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____DnsRefreshTimeout_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EnableDnsRoundRobin>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____EnableDnsRoundRobin_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CheckCertificateRevocationList>k__BackingField, offset: 0x21, size: 0x1, def value: None
 bool  ____CheckCertificateRevocationList_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EncryptionPolicy>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::System::Net::Security::EncryptionPolicy  ____EncryptionPolicy_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ___HttpListenerUnescapeRequestUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ___IPProtectionLevel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____UseNagleAlgorithm_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____Expect100Continue_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____CheckCertificateName_k__BackingField) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____DnsRefreshTimeout_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____EnableDnsRoundRobin_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____CheckCertificateRevocationList_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Net::Configuration::SettingsSectionInternal, ____EncryptionPolicy_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(sizeof(::System::Net::Configuration::SettingsSectionInternal) == 0x28, "Size mismatch!");

} // namespace end def System::Net::Configuration
