#pragma once
// IWYU pragma private; include "System/Configuration/SettingsDescriptionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsDescriptionAttribute)
// Forward declare root types
namespace System::Configuration {
class SettingsDescriptionAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsDescriptionAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsDescriptionAttribute*, "System.Configuration", "SettingsDescriptionAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsDescriptionAttribute
class CORDL_TYPE SettingsDescriptionAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

static inline ::System::Configuration::SettingsDescriptionAttribute* New_ctor(::StringW  description) ;

/// @brief Method .ctor, addr 0xacfd380, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  description) ;

/// @brief Method get_Description, addr 0xacfd384, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Description() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsDescriptionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsDescriptionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsDescriptionAttribute(SettingsDescriptionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsDescriptionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsDescriptionAttribute(SettingsDescriptionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11043};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsDescriptionAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
