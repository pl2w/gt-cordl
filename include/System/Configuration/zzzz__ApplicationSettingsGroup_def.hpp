#pragma once
// IWYU pragma private; include "System/Configuration/ApplicationSettingsGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSectionGroup_def.hpp"
CORDL_MODULE_EXPORT(ApplicationSettingsGroup)
// Forward declare root types
namespace System::Configuration {
class ApplicationSettingsGroup;
}
// Write type traits
MARK_REF_T(::System::Configuration::ApplicationSettingsGroup*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ApplicationSettingsGroup*, "System.Configuration", "ApplicationSettingsGroup");
// Dependencies System.Configuration.ConfigurationSectionGroup
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ApplicationSettingsGroup
class CORDL_TYPE ApplicationSettingsGroup : public ::System::Configuration::ConfigurationSectionGroup {
public:
// Declarations
static inline ::System::Configuration::ApplicationSettingsGroup* New_ctor() ;

/// @brief Method .ctor, addr 0xacfc118, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplicationSettingsGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplicationSettingsGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplicationSettingsGroup(ApplicationSettingsGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationSettingsGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplicationSettingsGroup(ApplicationSettingsGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11021};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ApplicationSettingsGroup) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
