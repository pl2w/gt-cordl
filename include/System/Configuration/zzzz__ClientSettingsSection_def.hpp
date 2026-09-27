#pragma once
// IWYU pragma private; include "System/Configuration/ClientSettingsSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
CORDL_MODULE_EXPORT(ClientSettingsSection)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Configuration {
class SettingElementCollection;
}
// Forward declare root types
namespace System::Configuration {
class ClientSettingsSection;
}
// Write type traits
MARK_REF_T(::System::Configuration::ClientSettingsSection*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ClientSettingsSection*, "System.Configuration", "ClientSettingsSection");
// Dependencies System.Configuration.ConfigurationSection
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ClientSettingsSection
class CORDL_TYPE ClientSettingsSection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_Settings)) ::System::Configuration::SettingElementCollection*  Settings;

static inline ::System::Configuration::ClientSettingsSection* New_ctor() ;

/// @brief Method .ctor, addr 0xacfc1c0, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Properties, addr 0xacfc1f8, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_Settings, addr 0xacfc230, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingElementCollection* get_Settings() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientSettingsSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientSettingsSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientSettingsSection(ClientSettingsSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientSettingsSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientSettingsSection(ClientSettingsSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11023};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ClientSettingsSection) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
