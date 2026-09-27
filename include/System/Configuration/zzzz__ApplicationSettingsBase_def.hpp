#pragma once
// IWYU pragma private; include "System/Configuration/ApplicationSettingsBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__SettingsBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ApplicationSettingsBase)
namespace System::ComponentModel {
class CancelEventArgs;
}
namespace System::ComponentModel {
class IComponent;
}
namespace System::ComponentModel {
class INotifyPropertyChanged;
}
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
namespace System::ComponentModel {
class PropertyChangedEventHandler;
}
namespace System::Configuration {
class SettingChangingEventArgs;
}
namespace System::Configuration {
class SettingChangingEventHandler;
}
namespace System::Configuration {
class SettingsContext;
}
namespace System::Configuration {
class SettingsLoadedEventArgs;
}
namespace System::Configuration {
class SettingsLoadedEventHandler;
}
namespace System::Configuration {
class SettingsPropertyCollection;
}
namespace System::Configuration {
class SettingsPropertyValueCollection;
}
namespace System::Configuration {
class SettingsProviderCollection;
}
namespace System::Configuration {
class SettingsSavingEventHandler;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Configuration {
class ApplicationSettingsBase;
}
// Write type traits
MARK_REF_T(::System::Configuration::ApplicationSettingsBase*);
DEFINE_IL2CPP_CLASS(::System::Configuration::ApplicationSettingsBase*, "System.Configuration", "ApplicationSettingsBase");
// [DefaultMember("Item")]
// Dependencies System.Configuration.SettingsBase
namespace System::Configuration {
// Is value type: false
// CS Name: System.Configuration.ApplicationSettingsBase
class CORDL_TYPE ApplicationSettingsBase : public ::System::Configuration::SettingsBase {
public:
// Declarations
 __declspec(property(get=get_Context)) ::System::Configuration::SettingsContext*  Context;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

 __declspec(property(get=get_Properties)) ::System::Configuration::SettingsPropertyCollection*  Properties;

 __declspec(property(get=get_PropertyValues)) ::System::Configuration::SettingsPropertyValueCollection*  PropertyValues;

 __declspec(property(get=get_Providers)) ::System::Configuration::SettingsProviderCollection*  Providers;

 __declspec(property(get=get_SettingsKey, put=set_SettingsKey)) ::StringW  SettingsKey;

/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr operator  ::System::ComponentModel::INotifyPropertyChanged*() noexcept;

/// @brief Method GetPreviousVersion, addr 0xacfbaf8, size 0x38, virtual false, abstract: false, final false
inline ::System::Object* GetPreviousVersion(::StringW  propertyName) ;

static inline ::System::Configuration::ApplicationSettingsBase* New_ctor() ;

static inline ::System::Configuration::ApplicationSettingsBase* New_ctor(::System::ComponentModel::IComponent*  owner) ;

static inline ::System::Configuration::ApplicationSettingsBase* New_ctor(::System::ComponentModel::IComponent*  owner, ::StringW  settingsKey) ;

static inline ::System::Configuration::ApplicationSettingsBase* New_ctor(::StringW  settingsKey) ;

/// @brief Method OnPropertyChanged, addr 0xacfbb30, size 0x38, virtual true, abstract: false, final false
inline void OnPropertyChanged(::System::Object*  sender, ::System::ComponentModel::PropertyChangedEventArgs*  e) ;

/// @brief Method OnSettingChanging, addr 0xacfbb68, size 0x38, virtual true, abstract: false, final false
inline void OnSettingChanging(::System::Object*  sender, ::System::Configuration::SettingChangingEventArgs*  e) ;

/// @brief Method OnSettingsLoaded, addr 0xacfbba0, size 0x38, virtual true, abstract: false, final false
inline void OnSettingsLoaded(::System::Object*  sender, ::System::Configuration::SettingsLoadedEventArgs*  e) ;

/// @brief Method OnSettingsSaving, addr 0xacfbbd8, size 0x38, virtual true, abstract: false, final false
inline void OnSettingsSaving(::System::Object*  sender, ::System::ComponentModel::CancelEventArgs*  e) ;

/// @brief Method Reload, addr 0xacfbc10, size 0x38, virtual false, abstract: false, final false
inline void Reload() ;

/// @brief Method Reset, addr 0xacfbc48, size 0x38, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Save, addr 0xacfbc80, size 0x38, virtual true, abstract: false, final false
inline void Save() ;

/// @brief Method Upgrade, addr 0xacfbcb8, size 0x38, virtual true, abstract: false, final false
inline void Upgrade() ;

/// @brief Method .ctor, addr 0xacfb698, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xacfb6d0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::IComponent*  owner) ;

/// @brief Method .ctor, addr 0xacfb708, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::IComponent*  owner, ::StringW  settingsKey) ;

/// @brief Method .ctor, addr 0xacfb740, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  settingsKey) ;

/// @brief Method add_PropertyChanged, addr 0xacfb938, size 0x38, virtual true, abstract: false, final true
inline void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

/// @brief Method add_SettingChanging, addr 0xacfb9a8, size 0x38, virtual false, abstract: false, final false
inline void add_SettingChanging(::System::Configuration::SettingChangingEventHandler*  value) ;

/// @brief Method add_SettingsLoaded, addr 0xacfba18, size 0x38, virtual false, abstract: false, final false
inline void add_SettingsLoaded(::System::Configuration::SettingsLoadedEventHandler*  value) ;

/// @brief Method add_SettingsSaving, addr 0xacfba88, size 0x38, virtual false, abstract: false, final false
inline void add_SettingsSaving(::System::Configuration::SettingsSavingEventHandler*  value) ;

/// @brief Method get_Context, addr 0xacfb778, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsContext* get_Context() ;

/// @brief Method get_Item, addr 0xacfb7b0, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* get_Item(::StringW  propertyName) ;

/// @brief Method get_Properties, addr 0xacfb820, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsPropertyCollection* get_Properties() ;

/// @brief Method get_PropertyValues, addr 0xacfb858, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsPropertyValueCollection* get_PropertyValues() ;

/// @brief Method get_Providers, addr 0xacfb890, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::SettingsProviderCollection* get_Providers() ;

/// @brief Method get_SettingsKey, addr 0xacfb8c8, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_SettingsKey() ;

/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* i___System__ComponentModel__INotifyPropertyChanged() noexcept;

/// @brief Method remove_PropertyChanged, addr 0xacfb970, size 0x38, virtual true, abstract: false, final true
inline void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value) ;

/// @brief Method remove_SettingChanging, addr 0xacfb9e0, size 0x38, virtual false, abstract: false, final false
inline void remove_SettingChanging(::System::Configuration::SettingChangingEventHandler*  value) ;

/// @brief Method remove_SettingsLoaded, addr 0xacfba50, size 0x38, virtual false, abstract: false, final false
inline void remove_SettingsLoaded(::System::Configuration::SettingsLoadedEventHandler*  value) ;

/// @brief Method remove_SettingsSaving, addr 0xacfbac0, size 0x38, virtual false, abstract: false, final false
inline void remove_SettingsSaving(::System::Configuration::SettingsSavingEventHandler*  value) ;

/// @brief Method set_Item, addr 0xacfb7e8, size 0x38, virtual true, abstract: false, final false
inline void set_Item(::StringW  propertyName, ::System::Object*  value) ;

/// @brief Method set_SettingsKey, addr 0xacfb900, size 0x38, virtual false, abstract: false, final false
inline void set_SettingsKey(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplicationSettingsBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplicationSettingsBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplicationSettingsBase(ApplicationSettingsBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationSettingsBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplicationSettingsBase(ApplicationSettingsBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11015};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Configuration::ApplicationSettingsBase) == 0x10, "Size mismatch!");

} // namespace end def System::Configuration
