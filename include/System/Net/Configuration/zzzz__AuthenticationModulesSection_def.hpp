#pragma once
// IWYU pragma private; include "System/Net/Configuration/AuthenticationModulesSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(AuthenticationModulesSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
class AuthenticationModuleElementCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class AuthenticationModulesSection;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::AuthenticationModulesSection*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::AuthenticationModulesSection*, "System.Net.Configuration", "AuthenticationModulesSection");
// Dependencies System.Configuration.ConfigurationSection
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.AuthenticationModulesSection
class CORDL_TYPE AuthenticationModulesSection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
 __declspec(property(get=get_AuthenticationModules)) ::System::Net::Configuration::AuthenticationModuleElementCollection*  AuthenticationModules;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

/// @brief Method InitializeDefault, addr 0xacf7db0, size 0x38, virtual true, abstract: false, final false
inline void InitializeDefault() ;

static inline ::System::Net::Configuration::AuthenticationModulesSection* New_ctor() ;

/// @brief Method PostDeserialize, addr 0xacf7de8, size 0x38, virtual true, abstract: false, final false
inline void PostDeserialize() ;

/// @brief Method .ctor, addr 0xacf7d08, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AuthenticationModules, addr 0xacf7d40, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Configuration::AuthenticationModuleElementCollection* get_AuthenticationModules() ;

/// @brief Method get_Properties, addr 0xacf7d78, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationModulesSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationModulesSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationModulesSection(AuthenticationModulesSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationModulesSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationModulesSection(AuthenticationModulesSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10978};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::AuthenticationModulesSection) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration
