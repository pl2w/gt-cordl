#pragma once
// IWYU pragma private; include "System/Configuration/SettingChangingEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CancelEventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SettingChangingEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class SettingChangingEventArgs;
}
// Write type traits
MARK_REF_T(::System::Configuration::SettingChangingEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Configuration::SettingChangingEventArgs*, "System.Configuration", "SettingChangingEventArgs");
// Dependencies System.ComponentModel.CancelEventArgs
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.SettingChangingEventArgs
class CORDL_TYPE SettingChangingEventArgs : public ::System::ComponentModel::CancelEventArgs {
public:
// Declarations
 __declspec(property(get=get_NewValue)) ::System::Object*  NewValue;

 __declspec(property(get=get_SettingClass)) ::StringW  SettingClass;

 __declspec(property(get=get_SettingKey)) ::StringW  SettingKey;

 __declspec(property(get=get_SettingName)) ::StringW  SettingName;

static inline ::System::Configuration::SettingChangingEventArgs* New_ctor(::StringW  settingName, ::StringW  settingClass, ::StringW  settingKey, ::System::Object*  newValue, bool  cancel) ;

/// @brief Method .ctor, addr 0xacfbdd0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  settingName, ::StringW  settingClass, ::StringW  settingKey, ::System::Object*  newValue, bool  cancel) ;

/// @brief Method get_NewValue, addr 0xacfbe08, size 0x38, virtual false, abstract: false, final false
inline ::System::Object* get_NewValue() ;

/// @brief Method get_SettingClass, addr 0xacfbe40, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_SettingClass() ;

/// @brief Method get_SettingKey, addr 0xacfbe78, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_SettingKey() ;

/// @brief Method get_SettingName, addr 0xacfbeb0, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_SettingName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingChangingEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingChangingEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingChangingEventArgs(SettingChangingEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingChangingEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingChangingEventArgs(SettingChangingEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11017};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::SettingChangingEventArgs) == 0x18, "Size mismatch!");

} // namespace end def System::Configuration
