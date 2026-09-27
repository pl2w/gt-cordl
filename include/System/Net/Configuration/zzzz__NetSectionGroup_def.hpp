#pragma once
// IWYU pragma private; include "System/Net/Configuration/NetSectionGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSectionGroup_def.hpp"
CORDL_MODULE_EXPORT(NetSectionGroup)
namespace System::Configuration {
class Configuration;
}
namespace System::Net::Configuration {
class AuthenticationModulesSection;
}
namespace System::Net::Configuration {
class ConnectionManagementSection;
}
namespace System::Net::Configuration {
class DefaultProxySection;
}
namespace System::Net::Configuration {
class MailSettingsSectionGroup;
}
namespace System::Net::Configuration {
class RequestCachingSection;
}
namespace System::Net::Configuration {
class SettingsSection;
}
namespace System::Net::Configuration {
class WebRequestModulesSection;
}
// Forward declare root types
namespace System::Net::Configuration {
class NetSectionGroup;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::NetSectionGroup*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::NetSectionGroup*, "System.Net.Configuration", "NetSectionGroup");
// Dependencies System.Configuration.ConfigurationSectionGroup
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.NetSectionGroup
class CORDL_TYPE NetSectionGroup : public ::System::Configuration::ConfigurationSectionGroup {
public:
// Declarations
 __declspec(property(get=get_AuthenticationModules)) ::System::Net::Configuration::AuthenticationModulesSection*  AuthenticationModules;

 __declspec(property(get=get_ConnectionManagement)) ::System::Net::Configuration::ConnectionManagementSection*  ConnectionManagement;

 __declspec(property(get=get_DefaultProxy)) ::System::Net::Configuration::DefaultProxySection*  DefaultProxy;

 __declspec(property(get=get_MailSettings)) ::System::Net::Configuration::MailSettingsSectionGroup*  MailSettings;

 __declspec(property(get=get_RequestCaching)) ::System::Net::Configuration::RequestCachingSection*  RequestCaching;

 __declspec(property(get=get_Settings)) ::System::Net::Configuration::SettingsSection*  Settings;

 __declspec(property(get=get_WebRequestModules)) ::System::Net::Configuration::WebRequestModulesSection*  WebRequestModules;

/// @brief Method GetSectionGroup, addr 0xacfa078, size 0x38, virtual false, abstract: false, final false
static inline ::System::Net::Configuration::NetSectionGroup* GetSectionGroup(::System::Configuration::Configuration*  config) ;

static inline ::System::Net::Configuration::NetSectionGroup* New_ctor() ;

/// @brief Method .ctor, addr 0xacf9eb8, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AuthenticationModules, addr 0xacf9ef0, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::AuthenticationModulesSection* get_AuthenticationModules() ;

/// @brief Method get_ConnectionManagement, addr 0xacf9f28, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::ConnectionManagementSection* get_ConnectionManagement() ;

/// @brief Method get_DefaultProxy, addr 0xacf9f60, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::DefaultProxySection* get_DefaultProxy() ;

/// @brief Method get_MailSettings, addr 0xacf9f98, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::MailSettingsSectionGroup* get_MailSettings() ;

/// @brief Method get_RequestCaching, addr 0xacf9fd0, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::RequestCachingSection* get_RequestCaching() ;

/// @brief Method get_Settings, addr 0xacfa008, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::SettingsSection* get_Settings() ;

/// @brief Method get_WebRequestModules, addr 0xacfa040, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::WebRequestModulesSection* get_WebRequestModules() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetSectionGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetSectionGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSectionGroup(NetSectionGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSectionGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSectionGroup(NetSectionGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11000};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::NetSectionGroup) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
