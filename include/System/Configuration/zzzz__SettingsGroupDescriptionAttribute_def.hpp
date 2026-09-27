#pragma once
// IWYU pragma private; include "System/Configuration/SettingsGroupDescriptionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsGroupDescriptionAttribute)
// Forward declare root types
namespace System::Configuration {
class SettingsGroupDescriptionAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsGroupDescriptionAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsGroupDescriptionAttribute*, "System.Configuration", "SettingsGroupDescriptionAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsGroupDescriptionAttribute
class CORDL_TYPE SettingsGroupDescriptionAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

static inline ::System::Configuration::SettingsGroupDescriptionAttribute* New_ctor(::StringW  description) ;

/// @brief Method .ctor, addr 0xacfd3bc, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  description) ;

/// @brief Method get_Description, addr 0xacfd3c0, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Description() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsGroupDescriptionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsGroupDescriptionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsGroupDescriptionAttribute(SettingsGroupDescriptionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsGroupDescriptionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsGroupDescriptionAttribute(SettingsGroupDescriptionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11044};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsGroupDescriptionAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
