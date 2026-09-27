#pragma once
// IWYU pragma private; include "System/Configuration/SettingsSerializeAsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SettingsSerializeAsAttribute)
namespace System::Configuration {
struct SettingsSerializeAs;
}
// Forward declare root types
namespace System::Configuration {
class SettingsSerializeAsAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsSerializeAsAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsSerializeAsAttribute*, "System.Configuration", "SettingsSerializeAsAttribute");
// [AttributeUsage((System.AttributeTargets)132)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsSerializeAsAttribute
class CORDL_TYPE SettingsSerializeAsAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_SerializeAs)) ::System::Configuration::SettingsSerializeAs  SerializeAs;

static inline ::System::Configuration::SettingsSerializeAsAttribute* New_ctor(::System::Configuration::SettingsSerializeAs  serializeAs) ;

/// @brief Method .ctor, addr 0xacfd750, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Configuration::SettingsSerializeAs  serializeAs) ;

/// @brief Method get_SerializeAs, addr 0xacfd754, size 0x38, virtual false, abstract: false, final false
inline ::System::Configuration::SettingsSerializeAs get_SerializeAs() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsSerializeAsAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsSerializeAsAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsSerializeAsAttribute(SettingsSerializeAsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSerializeAsAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsSerializeAsAttribute(SettingsSerializeAsAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsSerializeAsAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
