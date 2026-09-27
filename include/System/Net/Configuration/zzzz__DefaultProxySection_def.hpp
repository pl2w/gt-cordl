#pragma once
// IWYU pragma private; include "System/Net/Configuration/DefaultProxySection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(DefaultProxySection)
namespace System::Configuration {
class ConfigurationElement;
}
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
class BypassElementCollection;
}
namespace System::Net::Configuration {
class ModuleElement;
}
namespace System::Net::Configuration {
class ProxyElement;
}
// Forward declare root types
namespace System::Net::Configuration {
class DefaultProxySection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::DefaultProxySection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::DefaultProxySection*, "System.Net.Configuration", "DefaultProxySection");
// Dependencies System.Configuration.ConfigurationSection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.DefaultProxySection
class CORDL_TYPE DefaultProxySection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
 __declspec(property(get=get_BypassList)) ::System::Net::Configuration::BypassElementCollection*  BypassList;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_Module)) ::System::Net::Configuration::ModuleElement*  Module;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_Proxy)) ::System::Net::Configuration::ProxyElement*  Proxy;

 __declspec(property(get=get_UseDefaultCredentials, put=set_UseDefaultCredentials)) bool  UseDefaultCredentials;

static inline ::System::Net::Configuration::DefaultProxySection* New_ctor() ;

/// @brief Method PostDeserialize, addr 0xacf8948, size 0x38, virtual true, abstract: false, final false
inline void PostDeserialize() ;

/// @brief Method Reset, addr 0xacf8980, size 0x38, virtual true, abstract: false, final false
inline void Reset(::System::Configuration::ConfigurationElement*  parentElement) ;

/// @brief Method .ctor, addr 0xacf8750, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BypassList, addr 0xacf8788, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::BypassElementCollection* get_BypassList() ;

/// @brief Method get_Enabled, addr 0xacf87c0, size 0x38, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_Module, addr 0xacf8830, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::ModuleElement* get_Module() ;

/// @brief Method get_Properties, addr 0xacf8868, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_Proxy, addr 0xacf88a0, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::ProxyElement* get_Proxy() ;

/// @brief Method get_UseDefaultCredentials, addr 0xacf88d8, size 0x38, virtual false, abstract: false, final false
inline bool get_UseDefaultCredentials() ;

/// @brief Method set_Enabled, addr 0xacf87f8, size 0x38, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_UseDefaultCredentials, addr 0xacf8910, size 0x38, virtual false, abstract: false, final false
inline void set_UseDefaultCredentials(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultProxySection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultProxySection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultProxySection(DefaultProxySection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultProxySection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultProxySection(DefaultProxySection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10984};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::DefaultProxySection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
