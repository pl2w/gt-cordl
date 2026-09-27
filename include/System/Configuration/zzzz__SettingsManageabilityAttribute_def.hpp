#pragma once
// IWYU pragma private; include "System/Configuration/SettingsManageabilityAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SettingsManageabilityAttribute)
namespace System::Configuration {
struct SettingsManageability;
}
// Forward declare root types
namespace System::Configuration {
class SettingsManageabilityAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsManageabilityAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsManageabilityAttribute*, "System.Configuration", "SettingsManageabilityAttribute");
// [AttributeUsage((System.AttributeTargets)132)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsManageabilityAttribute
class CORDL_TYPE SettingsManageabilityAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Manageability)) ::System::Configuration::SettingsManageability  Manageability;

static inline ::System::Configuration::SettingsManageabilityAttribute* New_ctor(::System::Configuration::SettingsManageability  manageability) ;

/// @brief Method .ctor, addr 0xacfd434, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Configuration::SettingsManageability  manageability) ;

/// @brief Method get_Manageability, addr 0xacfd438, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingsManageability get_Manageability() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsManageabilityAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsManageabilityAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsManageabilityAttribute(SettingsManageabilityAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsManageabilityAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsManageabilityAttribute(SettingsManageabilityAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11047};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsManageabilityAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
