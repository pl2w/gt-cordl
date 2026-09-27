#pragma once
// IWYU pragma private; include "System/Configuration/UserSettingsGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationSectionGroup_def.hpp"
CORDL_MODULE_EXPORT(UserSettingsGroup)
// Forward declare root types
namespace System::Configuration {
class UserSettingsGroup;
}
// Write type traits
MARK_REF_T(::System::Configuration::UserSettingsGroup*);
DEFINE_IL2CPP_CLASS(::System::Configuration::UserSettingsGroup*, "System.Configuration", "UserSettingsGroup");
// Dependencies System.Configuration.ConfigurationSectionGroup
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.UserSettingsGroup
class CORDL_TYPE UserSettingsGroup : public ::System::Configuration::ConfigurationSectionGroup {
public:
// Declarations
static inline ::System::Configuration::UserSettingsGroup* New_ctor() ;

/// @brief Method .ctor, addr 0xacfd954, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserSettingsGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserSettingsGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserSettingsGroup(UserSettingsGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserSettingsGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserSettingsGroup(UserSettingsGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11058};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::UserSettingsGroup) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
