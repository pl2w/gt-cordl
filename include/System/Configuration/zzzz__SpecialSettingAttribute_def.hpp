#pragma once
// IWYU pragma private; include "System/Configuration/SpecialSettingAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SpecialSettingAttribute)
namespace System::Configuration {
struct SpecialSetting;
}
// Forward declare root types
namespace System::Configuration {
class SpecialSettingAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::SpecialSettingAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SpecialSettingAttribute*, "System.Configuration", "SpecialSettingAttribute");
// [AttributeUsage((System.AttributeTargets)132)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SpecialSettingAttribute
class CORDL_TYPE SpecialSettingAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_SpecialSetting)) ::System::Configuration::SpecialSetting  SpecialSetting;

static inline ::System::Configuration::SpecialSettingAttribute* New_ctor(::System::Configuration::SpecialSetting  specialSetting) ;

/// @brief Method .ctor, addr 0xacfd7fc, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Configuration::SpecialSetting  specialSetting) ;

/// @brief Method get_SpecialSetting, addr 0xacfd800, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SpecialSetting get_SpecialSetting() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpecialSettingAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpecialSettingAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpecialSettingAttribute(SpecialSettingAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpecialSettingAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpecialSettingAttribute(SpecialSettingAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11055};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SpecialSettingAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
