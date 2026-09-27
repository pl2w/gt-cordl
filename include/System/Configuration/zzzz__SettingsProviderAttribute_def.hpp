#pragma once
// IWYU pragma private; include "System/Configuration/SettingsProviderAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingsProviderAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Configuration {
class SettingsProviderAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingsProviderAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingsProviderAttribute*, "System.Configuration", "SettingsProviderAttribute");
// [AttributeUsage((System.AttributeTargets)132)]
// Dependencies System.Attribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingsProviderAttribute
class CORDL_TYPE SettingsProviderAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(get=get_ProviderTypeName)) ::StringW  ProviderTypeName;

static inline ::System::Configuration::SettingsProviderAttribute* New_ctor(::System::Type*  providerType) ;

static inline ::System::Configuration::SettingsProviderAttribute* New_ctor(::StringW  providerTypeName) ;

/// @brief Method .ctor, addr 0xacfd714, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  providerType) ;

/// @brief Method .ctor, addr 0xacfd710, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  providerTypeName) ;

/// @brief Method get_ProviderTypeName, addr 0xacfd718, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_ProviderTypeName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsProviderAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsProviderAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsProviderAttribute(SettingsProviderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsProviderAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsProviderAttribute(SettingsProviderAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11051};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingsProviderAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
