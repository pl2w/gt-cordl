#pragma once
// IWYU pragma private; include "System/Configuration/SettingAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SettingAttribute)
// Forward declare root types
namespace System::Configuration {
class SettingAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingAttribute*, "System.Configuration", "SettingAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingAttribute
class CORDL_TYPE SettingAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::System::Configuration::SettingAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xacfb694, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingAttribute(SettingAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingAttribute(SettingAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11014};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
