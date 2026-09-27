#pragma once
// IWYU pragma private; include "System/Configuration/NoSettingsVersionUpgradeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NoSettingsVersionUpgradeAttribute)
// Forward declare root types
namespace System::Configuration {
class NoSettingsVersionUpgradeAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::NoSettingsVersionUpgradeAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::NoSettingsVersionUpgradeAttribute*, "System.Configuration", "NoSettingsVersionUpgradeAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.NoSettingsVersionUpgradeAttribute
class CORDL_TYPE NoSettingsVersionUpgradeAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::System::Configuration::NoSettingsVersionUpgradeAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xacfd114, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoSettingsVersionUpgradeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoSettingsVersionUpgradeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NoSettingsVersionUpgradeAttribute(NoSettingsVersionUpgradeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoSettingsVersionUpgradeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoSettingsVersionUpgradeAttribute(NoSettingsVersionUpgradeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11040};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::NoSettingsVersionUpgradeAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
