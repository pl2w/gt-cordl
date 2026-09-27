#pragma once
// IWYU pragma private; include "System/Configuration/DefaultSettingValueAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DefaultSettingValueAttribute)
// Forward declare root types
namespace System::Configuration {
class DefaultSettingValueAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::DefaultSettingValueAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::DefaultSettingValueAttribute*, "System.Configuration", "DefaultSettingValueAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.DefaultSettingValueAttribute
class CORDL_TYPE DefaultSettingValueAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_Value)) ::StringW  Value;

static inline ::System::Configuration::DefaultSettingValueAttribute* New_ctor(::StringW  value) ;

/// @brief Method .ctor, addr 0xacfca80, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  value) ;

/// @brief Method get_Value, addr 0xacfca84, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultSettingValueAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultSettingValueAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultSettingValueAttribute(DefaultSettingValueAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSettingValueAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultSettingValueAttribute(DefaultSettingValueAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11029};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::DefaultSettingValueAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
