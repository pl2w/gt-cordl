#pragma once
// IWYU pragma private; include "System/Configuration/ApplicationSettingsBase.hpp"
#include "System/Configuration/zzzz__SettingsBase_impl.hpp"
#include "System/Configuration/zzzz__ApplicationSettingsBase_def.hpp"
#include "System/ComponentModel/zzzz__CancelEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__INotifyPropertyChanged_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__PropertyChangedEventHandler_def.hpp"
#include "System/Configuration/zzzz__SettingChangingEventArgs_def.hpp"
#include "System/Configuration/zzzz__SettingChangingEventHandler_def.hpp"
#include "System/Configuration/zzzz__SettingsContext_def.hpp"
#include "System/Configuration/zzzz__SettingsLoadedEventArgs_def.hpp"
#include "System/Configuration/zzzz__SettingsLoadedEventHandler_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyValueCollection_def.hpp"
#include "System/Configuration/zzzz__SettingsProviderCollection_def.hpp"
#include "System/Configuration/zzzz__SettingsSavingEventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::ComponentModel::IComponent*)>(&::System::Configuration::ApplicationSettingsBase::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::ComponentModel::IComponent*, ::StringW)>(&::System::Configuration::ApplicationSettingsBase::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::StringW)>(&::System::Configuration::ApplicationSettingsBase::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsContext* (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::get_Context)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::ApplicationSettingsBase::*)(::StringW)>(&::System::Configuration::ApplicationSettingsBase::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::StringW, ::System::Object*)>(&::System::Configuration::ApplicationSettingsBase::set_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsPropertyCollection* (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.get_PropertyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsPropertyValueCollection* (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::get_PropertyValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.get_Providers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsProviderCollection* (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::get_Providers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.get_SettingsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::get_SettingsKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"get_SettingsKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.set_SettingsKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::StringW)>(&::System::Configuration::ApplicationSettingsBase::set_SettingsKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"set_SettingsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.add_PropertyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&::System::Configuration::ApplicationSettingsBase::add_PropertyChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"add_PropertyChanged", {}, {::i2c::type_of<::System::ComponentModel::PropertyChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.remove_PropertyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::ComponentModel::PropertyChangedEventHandler*)>(&::System::Configuration::ApplicationSettingsBase::remove_PropertyChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"remove_PropertyChanged", {}, {::i2c::type_of<::System::ComponentModel::PropertyChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.add_SettingChanging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Configuration::SettingChangingEventHandler*)>(&::System::Configuration::ApplicationSettingsBase::add_SettingChanging)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"add_SettingChanging", {}, {::i2c::type_of<::System::Configuration::SettingChangingEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.remove_SettingChanging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Configuration::SettingChangingEventHandler*)>(&::System::Configuration::ApplicationSettingsBase::remove_SettingChanging)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"remove_SettingChanging", {}, {::i2c::type_of<::System::Configuration::SettingChangingEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.add_SettingsLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Configuration::SettingsLoadedEventHandler*)>(&::System::Configuration::ApplicationSettingsBase::add_SettingsLoaded)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfba18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"add_SettingsLoaded", {}, {::i2c::type_of<::System::Configuration::SettingsLoadedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.remove_SettingsLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Configuration::SettingsLoadedEventHandler*)>(&::System::Configuration::ApplicationSettingsBase::remove_SettingsLoaded)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfba50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"remove_SettingsLoaded", {}, {::i2c::type_of<::System::Configuration::SettingsLoadedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.add_SettingsSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Configuration::SettingsSavingEventHandler*)>(&::System::Configuration::ApplicationSettingsBase::add_SettingsSaving)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfba88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"add_SettingsSaving", {}, {::i2c::type_of<::System::Configuration::SettingsSavingEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.remove_SettingsSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Configuration::SettingsSavingEventHandler*)>(&::System::Configuration::ApplicationSettingsBase::remove_SettingsSaving)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"remove_SettingsSaving", {}, {::i2c::type_of<::System::Configuration::SettingsSavingEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.GetPreviousVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::ApplicationSettingsBase::*)(::StringW)>(&::System::Configuration::ApplicationSettingsBase::GetPreviousVersion)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"GetPreviousVersion", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.OnPropertyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*)>(&::System::Configuration::ApplicationSettingsBase::OnPropertyChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.OnSettingChanging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Object*, ::System::Configuration::SettingChangingEventArgs*)>(&::System::Configuration::ApplicationSettingsBase::OnSettingChanging)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.OnSettingsLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Object*, ::System::Configuration::SettingsLoadedEventArgs*)>(&::System::Configuration::ApplicationSettingsBase::OnSettingsLoaded)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.OnSettingsSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)(::System::Object*, ::System::ComponentModel::CancelEventArgs*)>(&::System::Configuration::ApplicationSettingsBase::OnSettingsSaving)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.Reload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::Reload)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"Reload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::Save)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsBase.Upgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsBase::*)()>(&::System::Configuration::ApplicationSettingsBase::Upgrade)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 17}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::ApplicationSettingsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::ApplicationSettingsBase::_ctor(::System::ComponentModel::IComponent*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void System::Configuration::ApplicationSettingsBase::_ctor(::System::ComponentModel::IComponent*  owner, ::StringW  settingsKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::IComponent*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, settingsKey);
}
inline void System::Configuration::ApplicationSettingsBase::_ctor(::StringW  settingsKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsKey);
}
inline ::System::Configuration::SettingsContext* System::Configuration::ApplicationSettingsBase::get_Context()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsContext*>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::ApplicationSettingsBase::get_Item(::StringW  propertyName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, propertyName);
}
inline void System::Configuration::ApplicationSettingsBase::set_Item(::StringW  propertyName, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, value);
}
inline ::System::Configuration::SettingsPropertyCollection* System::Configuration::ApplicationSettingsBase::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsPropertyCollection*>(this, ___internal_method);
}
inline ::System::Configuration::SettingsPropertyValueCollection* System::Configuration::ApplicationSettingsBase::get_PropertyValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsPropertyValueCollection*>(this, ___internal_method);
}
inline ::System::Configuration::SettingsProviderCollection* System::Configuration::ApplicationSettingsBase::get_Providers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsProviderCollection*>(this, ___internal_method);
}
inline ::StringW System::Configuration::ApplicationSettingsBase::get_SettingsKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"get_SettingsKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Configuration::ApplicationSettingsBase::set_SettingsKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"set_SettingsKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ApplicationSettingsBase::add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"add_PropertyChanged", {}, {::i2c::type_of<::System::ComponentModel::PropertyChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ApplicationSettingsBase::remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"remove_PropertyChanged", {}, {::i2c::type_of<::System::ComponentModel::PropertyChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ApplicationSettingsBase::add_SettingChanging(::System::Configuration::SettingChangingEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"add_SettingChanging", {}, {::i2c::type_of<::System::Configuration::SettingChangingEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ApplicationSettingsBase::remove_SettingChanging(::System::Configuration::SettingChangingEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"remove_SettingChanging", {}, {::i2c::type_of<::System::Configuration::SettingChangingEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ApplicationSettingsBase::add_SettingsLoaded(::System::Configuration::SettingsLoadedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"add_SettingsLoaded", {}, {::i2c::type_of<::System::Configuration::SettingsLoadedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ApplicationSettingsBase::remove_SettingsLoaded(::System::Configuration::SettingsLoadedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"remove_SettingsLoaded", {}, {::i2c::type_of<::System::Configuration::SettingsLoadedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ApplicationSettingsBase::add_SettingsSaving(::System::Configuration::SettingsSavingEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"add_SettingsSaving", {}, {::i2c::type_of<::System::Configuration::SettingsSavingEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ApplicationSettingsBase::remove_SettingsSaving(::System::Configuration::SettingsSavingEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"remove_SettingsSaving", {}, {::i2c::type_of<::System::Configuration::SettingsSavingEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Configuration::ApplicationSettingsBase::GetPreviousVersion(::StringW  propertyName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"GetPreviousVersion", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, propertyName);
}
inline void System::Configuration::ApplicationSettingsBase::OnPropertyChanged(::System::Object*  sender, ::System::ComponentModel::PropertyChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Configuration::ApplicationSettingsBase::OnSettingChanging(::System::Object*  sender, ::System::Configuration::SettingChangingEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Configuration::ApplicationSettingsBase::OnSettingsLoaded(::System::Object*  sender, ::System::Configuration::SettingsLoadedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Configuration::ApplicationSettingsBase::OnSettingsSaving(::System::Object*  sender, ::System::ComponentModel::CancelEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Configuration::ApplicationSettingsBase::Reload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"Reload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::ApplicationSettingsBase::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::ApplicationSettingsBase::Save()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::ApplicationSettingsBase::Upgrade()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ApplicationSettingsBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ApplicationSettingsBase* System::Configuration::ApplicationSettingsBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::ApplicationSettingsBase*>());
}
inline ::System::Configuration::ApplicationSettingsBase* System::Configuration::ApplicationSettingsBase::New_ctor(::System::ComponentModel::IComponent*  owner)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::ApplicationSettingsBase*>(owner));
}
inline ::System::Configuration::ApplicationSettingsBase* System::Configuration::ApplicationSettingsBase::New_ctor(::System::ComponentModel::IComponent*  owner, ::StringW  settingsKey)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::ApplicationSettingsBase*>(owner, settingsKey));
}
inline ::System::Configuration::ApplicationSettingsBase* System::Configuration::ApplicationSettingsBase::New_ctor(::StringW  settingsKey)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::ApplicationSettingsBase*>(settingsKey));
}
/// @brief Convert operator to "::System::ComponentModel::INotifyPropertyChanged"
constexpr  System::Configuration::ApplicationSettingsBase::operator ::System::ComponentModel::INotifyPropertyChanged*() noexcept {
return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::INotifyPropertyChanged"
constexpr ::System::ComponentModel::INotifyPropertyChanged* System::Configuration::ApplicationSettingsBase::i___System__ComponentModel__INotifyPropertyChanged() noexcept {
return static_cast<::System::ComponentModel::INotifyPropertyChanged*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::ApplicationSettingsBase::ApplicationSettingsBase()   {
}
