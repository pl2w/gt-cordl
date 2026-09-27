#pragma once
// IWYU pragma private; include "System/Configuration/UserScopedSettingAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__SettingAttribute_def.hpp"
CORDL_MODULE_EXPORT(UserScopedSettingAttribute)
// Forward declare root types
namespace System::Configuration {
class UserScopedSettingAttribute;
}
// Write type traits
MARK_REF_T(::System::Configuration::UserScopedSettingAttribute*);
DEFINE_IL2CPP_CLASS(::System::Configuration::UserScopedSettingAttribute*, "System.Configuration", "UserScopedSettingAttribute");
// [AttributeUsage((System.AttributeTargets)128)]
// Dependencies System.Configuration.SettingAttribute
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.UserScopedSettingAttribute
class CORDL_TYPE UserScopedSettingAttribute : public ::System::Configuration::SettingAttribute {
public:
// Declarations
static inline ::System::Configuration::UserScopedSettingAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xacfd950, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserScopedSettingAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserScopedSettingAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserScopedSettingAttribute(UserScopedSettingAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserScopedSettingAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserScopedSettingAttribute(UserScopedSettingAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11057};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::UserScopedSettingAttribute) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
