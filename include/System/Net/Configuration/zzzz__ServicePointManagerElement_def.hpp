#pragma once
// IWYU pragma private; include "System/Net/Configuration/ServicePointManagerElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePointManagerElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
// Forward declare root types
namespace System::Net::Configuration {
class ServicePointManagerElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::ServicePointManagerElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::ServicePointManagerElement*, "System.Net.Configuration", "ServicePointManagerElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.ServicePointManagerElement
class CORDL_TYPE ServicePointManagerElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_CheckCertificateName, put=set_CheckCertificateName)) bool  CheckCertificateName;

 __declspec(property(get=get_CheckCertificateRevocationList, put=set_CheckCertificateRevocationList)) bool  CheckCertificateRevocationList;

 __declspec(property(get=get_DnsRefreshTimeout, put=set_DnsRefreshTimeout)) int32_t  DnsRefreshTimeout;

 __declspec(property(get=get_EnableDnsRoundRobin, put=set_EnableDnsRoundRobin)) bool  EnableDnsRoundRobin;

 __declspec(property(get=get_EncryptionPolicy, put=set_EncryptionPolicy)) ::System::Net::Security::EncryptionPolicy  EncryptionPolicy;

 __declspec(property(get=get_Expect100Continue, put=set_Expect100Continue)) bool  Expect100Continue;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_UseNagleAlgorithm, put=set_UseNagleAlgorithm)) bool  UseNagleAlgorithm;

static inline ::System::Net::Configuration::ServicePointManagerElement* New_ctor() ;

/// @brief Method PostDeserialize, addr 0xacfaa88, size 0x38, virtual true, abstract: false, final false
inline void PostDeserialize() ;

/// @brief Method .ctor, addr 0xacfa708, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CheckCertificateName, addr 0xacfa740, size 0x38, virtual false, abstract: false, final false
inline bool get_CheckCertificateName() ;

/// @brief Method get_CheckCertificateRevocationList, addr 0xacfa7b0, size 0x38, virtual false, abstract: false, final false
inline bool get_CheckCertificateRevocationList() ;

/// @brief Method get_DnsRefreshTimeout, addr 0xacfa820, size 0x38, virtual false, abstract: false, final false
inline int32_t get_DnsRefreshTimeout() ;

/// @brief Method get_EnableDnsRoundRobin, addr 0xacfa890, size 0x38, virtual false, abstract: false, final false
inline bool get_EnableDnsRoundRobin() ;

/// @brief Method get_EncryptionPolicy, addr 0xacfa900, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Security::EncryptionPolicy get_EncryptionPolicy() ;

/// @brief Method get_Expect100Continue, addr 0xacfa970, size 0x38, virtual false, abstract: false, final false
inline bool get_Expect100Continue() ;

/// @brief Method get_Properties, addr 0xacfa9e0, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_UseNagleAlgorithm, addr 0xacfaa18, size 0x38, virtual false, abstract: false, final false
inline bool get_UseNagleAlgorithm() ;

/// @brief Method set_CheckCertificateName, addr 0xacfa778, size 0x38, virtual false, abstract: false, final false
inline void set_CheckCertificateName(bool  value) ;

/// @brief Method set_CheckCertificateRevocationList, addr 0xacfa7e8, size 0x38, virtual false, abstract: false, final false
inline void set_CheckCertificateRevocationList(bool  value) ;

/// @brief Method set_DnsRefreshTimeout, addr 0xacfa858, size 0x38, virtual false, abstract: false, final false
inline void set_DnsRefreshTimeout(int32_t  value) ;

/// @brief Method set_EnableDnsRoundRobin, addr 0xacfa8c8, size 0x38, virtual false, abstract: false, final false
inline void set_EnableDnsRoundRobin(bool  value) ;

/// @brief Method set_EncryptionPolicy, addr 0xacfa938, size 0x38, virtual false, abstract: false, final false
inline void set_EncryptionPolicy(::System::Net::Security::EncryptionPolicy  value) ;

/// @brief Method set_Expect100Continue, addr 0xacfa9a8, size 0x38, virtual false, abstract: false, final false
inline void set_Expect100Continue(bool  value) ;

/// @brief Method set_UseNagleAlgorithm, addr 0xacfaa50, size 0x38, virtual false, abstract: false, final false
inline void set_UseNagleAlgorithm(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServicePointManagerElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManagerElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServicePointManagerElement(ServicePointManagerElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointManagerElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServicePointManagerElement(ServicePointManagerElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11004};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::ServicePointManagerElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
