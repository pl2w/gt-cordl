#pragma once
// IWYU pragma private; include "System/Net/Configuration/SettingsSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(SettingsSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
class HttpListenerElement;
}
namespace System::Net::Configuration {
class HttpWebRequestElement;
}
namespace System::Net::Configuration {
class Ipv6Element;
}
namespace System::Net::Configuration {
class PerformanceCountersElement;
}
namespace System::Net::Configuration {
class ServicePointManagerElement;
}
namespace System::Net::Configuration {
class SocketElement;
}
namespace System::Net::Configuration {
class WebProxyScriptElement;
}
namespace System::Net::Configuration {
class WebUtilityElement;
}
namespace System::Net::Configuration {
class WindowsAuthenticationElement;
}
// Forward declare root types
namespace System::Net::Configuration {
class SettingsSection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::SettingsSection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::SettingsSection*, "System.Net.Configuration", "SettingsSection");
// Dependencies System.Configuration.ConfigurationSection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.SettingsSection
class CORDL_TYPE SettingsSection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
 __declspec(property(get=get_HttpListener)) ::System::Net::Configuration::HttpListenerElement*  HttpListener;

 __declspec(property(get=get_HttpWebRequest)) ::System::Net::Configuration::HttpWebRequestElement*  HttpWebRequest;

 __declspec(property(get=get_Ipv6)) ::System::Net::Configuration::Ipv6Element*  Ipv6;

 __declspec(property(get=get_PerformanceCounters)) ::System::Net::Configuration::PerformanceCountersElement*  PerformanceCounters;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_ServicePointManager)) ::System::Net::Configuration::ServicePointManagerElement*  ServicePointManager;

 __declspec(property(get=get_Socket)) ::System::Net::Configuration::SocketElement*  Socket;

 __declspec(property(get=get_WebProxyScript)) ::System::Net::Configuration::WebProxyScriptElement*  WebProxyScript;

 __declspec(property(get=get_WebUtility)) ::System::Net::Configuration::WebUtilityElement*  WebUtility;

 __declspec(property(get=get_WindowsAuthentication)) ::System::Net::Configuration::WindowsAuthenticationElement*  WindowsAuthentication;

static inline ::System::Net::Configuration::SettingsSection* New_ctor() ;

/// @brief Method .ctor, addr 0xacfa3c0, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HttpListener, addr 0xacfa3f8, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::HttpListenerElement* get_HttpListener() ;

/// @brief Method get_HttpWebRequest, addr 0xacfa430, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::HttpWebRequestElement* get_HttpWebRequest() ;

/// @brief Method get_Ipv6, addr 0xacfa468, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::Ipv6Element* get_Ipv6() ;

/// @brief Method get_PerformanceCounters, addr 0xacfa4a0, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::PerformanceCountersElement* get_PerformanceCounters() ;

/// @brief Method get_Properties, addr 0xacfa4d8, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_ServicePointManager, addr 0xacfa510, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::ServicePointManagerElement* get_ServicePointManager() ;

/// @brief Method get_Socket, addr 0xacfa548, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::SocketElement* get_Socket() ;

/// @brief Method get_WebProxyScript, addr 0xacfa580, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::WebProxyScriptElement* get_WebProxyScript() ;

/// @brief Method get_WebUtility, addr 0xacfa5b8, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::WebUtilityElement* get_WebUtility() ;

/// @brief Method get_WindowsAuthentication, addr 0xacfa5f0, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::WindowsAuthenticationElement* get_WindowsAuthentication() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsSection(SettingsSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsSection(SettingsSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11002};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::SettingsSection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
