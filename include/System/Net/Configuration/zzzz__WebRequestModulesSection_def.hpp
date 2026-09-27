#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebRequestModulesSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(WebRequestModulesSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
class WebRequestModuleElementCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModulesSection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::WebRequestModulesSection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::WebRequestModulesSection*, "System.Net.Configuration", "WebRequestModulesSection");
// Dependencies System.Configuration.ConfigurationSection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.WebRequestModulesSection
class CORDL_TYPE WebRequestModulesSection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_WebRequestModules)) ::System::Net::Configuration::WebRequestModuleElementCollection*  WebRequestModules;

/// @brief Method InitializeDefault, addr 0xacfb118, size 0x38, virtual true, abstract: false, final false
inline void InitializeDefault() ;

static inline ::System::Net::Configuration::WebRequestModulesSection* New_ctor() ;

/// @brief Method PostDeserialize, addr 0xacfb150, size 0x38, virtual true, abstract: false, final false
inline void PostDeserialize() ;

/// @brief Method .ctor, addr 0xacfb070, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0xacfb0a8, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_WebRequestModules, addr 0xacfb0e0, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::WebRequestModuleElementCollection* get_WebRequestModules() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestModulesSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModulesSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestModulesSection(WebRequestModulesSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModulesSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestModulesSection(WebRequestModulesSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11009};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::WebRequestModulesSection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
