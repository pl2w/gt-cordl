#pragma once
// IWYU pragma private; include "System/Configuration/SettingsGroupNameAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsGroupNameAttribute)
// Forward declare root types
namespace System::Configuration {
class SettingsGroupNameAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsGroupNameAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsGroupNameAttribute*, "System.Configuration", "SettingsGroupNameAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsGroupNameAttribute
class CORDL_TYPE SettingsGroupNameAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_GroupName)) ::StringW  GroupName;

static inline ::System::Configuration::SettingsGroupNameAttribute* New_ctor(::StringW  groupName) ;

/// @brief Method .ctor, addr 0xacfd3f8, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  groupName) ;

/// @brief Method get_GroupName, addr 0xacfd3fc, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_GroupName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsGroupNameAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsGroupNameAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsGroupNameAttribute(SettingsGroupNameAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsGroupNameAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsGroupNameAttribute(SettingsGroupNameAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11045};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsGroupNameAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
