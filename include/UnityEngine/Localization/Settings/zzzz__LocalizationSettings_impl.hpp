#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizationSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__PreloadBehavior_impl.hpp"
#include "UnityEngine/Localization/zzzz__CallbackArray_1_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizationSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataCollection_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ILocalesProvider_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IReset_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IStartupLocaleSelector_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizationSettings_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedAssetDatabase_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedStringDatabase_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__PreloadBehavior_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_IsChangingSelectedLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_IsChangingSelectedLocale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01e590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_IsChangingSelectedLocale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.set_IsChangingSelectedLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(bool)>(&::UnityEngine::Localization::Settings::LocalizationSettings::set_IsChangingSelectedLocale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01e598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_IsChangingSelectedLocale", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_HasSelectedLocaleChangedSubscribers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_HasSelectedLocaleChangedSubscribers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb01e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_HasSelectedLocaleChangedSubscribers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.add_OnSelectedLocaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::add_OnSelectedLocaleChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb01e5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"add_OnSelectedLocaleChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.remove_OnSelectedLocaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::remove_OnSelectedLocaleChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb01e640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"remove_OnSelectedLocaleChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_HasSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_HasSettings)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb01b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_HasSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_InitializationOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>> (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_InitializationOperation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb01e698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_InitializationOperation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_Instance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb01d93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::Settings::LocalizationSettings*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb01e798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_Instance", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizationSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_StartupLocaleSelectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>* (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_StartupLocaleSelectors)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb01e7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_StartupLocaleSelectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_AvailableLocales
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::ILocalesProvider* (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_AvailableLocales)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb00e93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_AvailableLocales", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.set_AvailableLocales
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::Settings::ILocalesProvider*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::set_AvailableLocales)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb01e80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_AvailableLocales", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_AssetDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::LocalizedAssetDatabase* (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_AssetDatabase)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb00f3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_AssetDatabase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.set_AssetDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::set_AssetDatabase)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb01e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_AssetDatabase", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_StringDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::LocalizedStringDatabase* (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_StringDatabase)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb0105ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_StringDatabase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.set_StringDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::Settings::LocalizedStringDatabase*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::set_StringDatabase)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb01e854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_StringDatabase", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_Metadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::MetadataCollection* (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_Metadata)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb01e878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_Metadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_SelectedLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_SelectedLocale)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb01132c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_SelectedLocale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.set_SelectedLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::set_SelectedLocale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb01e894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_SelectedLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_SelectedLocaleAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_SelectedLocaleAsync)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb01303c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_SelectedLocaleAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.add_SelectedLocaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::add_SelectedLocaleChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb010840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"add_SelectedLocaleChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.remove_SelectedLocaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::remove_SelectedLocaleChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb0108f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"remove_SelectedLocaleChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_ProjectLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_ProjectLocale)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb01eb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_ProjectLocale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.set_ProjectLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::set_ProjectLocale)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb01edbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_ProjectLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_InitializeSynchronously
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_InitializeSynchronously)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb01ee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_InitializeSynchronously", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.set_InitializeSynchronously
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Localization::Settings::LocalizationSettings::set_InitializeSynchronously)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb01ee7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_InitializeSynchronously", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_PreloadBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::PreloadBehavior (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_PreloadBehavior)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb01eea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_PreloadBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.set_PreloadBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::Settings::PreloadBehavior)>(&::UnityEngine::Localization::Settings::LocalizationSettings::set_PreloadBehavior)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb01eebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_PreloadBehavior", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::PreloadBehavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::OnEnable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb01eedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.ValidateSettingsExist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Localization::Settings::LocalizationSettings::ValidateSettingsExist)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb0107cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"ValidateSettingsExist", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetInitializationOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>> (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetInitializationOperation)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb01ef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_IsChangingPlayMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_IsChangingPlayMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb01f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_IsChangingPlayMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_IsPlayingOrWillChangePlaymode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_IsPlayingOrWillChangePlaymode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01d9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_IsPlayingOrWillChangePlaymode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_IsPlaying)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb01f1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.get_Platform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RuntimePlatform (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::get_Platform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01f208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetStartupLocaleSelectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>* (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetStartupLocaleSelectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"GetStartupLocaleSelectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.SetAvailableLocales
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::UnityEngine::Localization::Settings::ILocalesProvider*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::SetAvailableLocales)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01f218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SetAvailableLocales", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetAvailableLocales
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::ILocalesProvider* (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetAvailableLocales)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01f220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.SetAssetDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::SetAssetDatabase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01f228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SetAssetDatabase", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetAssetDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::LocalizedAssetDatabase* (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetAssetDatabase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.SetStringDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::UnityEngine::Localization::Settings::LocalizedStringDatabase*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::SetStringDatabase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01f238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SetStringDatabase", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetStringDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Settings::LocalizedStringDatabase* (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetStringDatabase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01f240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Metadata::MetadataCollection* (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetMetadata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01f248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"GetMetadata", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.ForceRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::ForceRefresh)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb01f250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"ForceRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.SendLocaleChangedEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::SendLocaleChangedEvents)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb01f4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SendLocaleChangedEvents", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.InitializeAndCallSelectedLocaleChangedCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::InitializeAndCallSelectedLocaleChangedCoroutine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb01f66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"InitializeAndCallSelectedLocaleChangedCoroutine", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.InvokeSelectedLocaleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::InvokeSelectedLocaleChanged)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb01f2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"InvokeSelectedLocaleChanged", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.SelectActiveLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::SelectActiveLocale)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb01f71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SelectActiveLocale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.SelectLocaleUsingStartupSelectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::SelectLocaleUsingStartupSelectors)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0xb01f850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.SetSelectedLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::SetSelectedLocale)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xb01e8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SetSelectedLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetSelectedLocaleAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetSelectedLocaleAsync)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xb0200a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetSelectedLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetSelectedLocale)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb020324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.OnLocaleRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalizationSettings::OnLocaleRemoved)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb0203f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.ResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::ResetState)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb0204d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"ResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0xb020654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetInstanceDontCreateDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetInstanceDontCreateDefault)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb01e2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"GetInstanceDontCreateDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings.GetOrCreateSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> (*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::GetOrCreateSettings)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb01e6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"GetOrCreateSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings::_ctor)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xb020934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings._GetSelectedLocaleAsync_b__90_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> (::UnityEngine::Localization::Settings::LocalizationSettings::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::UnityEngine::Localization::Settings::LocalizationSettings::_GetSelectedLocaleAsync_b__90_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb020d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"<GetSelectedLocaleAsync>b__90_0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>*& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_StartupSelectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartupSelectors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>* const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_StartupSelectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartupSelectors;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_StartupSelectors(::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartupSelectors = value;
}
constexpr ::UnityEngine::Localization::Settings::ILocalesProvider*& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_AvailableLocales()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AvailableLocales;
}
constexpr ::UnityEngine::Localization::Settings::ILocalesProvider* const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_AvailableLocales() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AvailableLocales;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_AvailableLocales(::UnityEngine::Localization::Settings::ILocalesProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AvailableLocales = value;
}
constexpr ::UnityEngine::Localization::Settings::LocalizedAssetDatabase*& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_AssetDatabase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetDatabase;
}
constexpr ::UnityEngine::Localization::Settings::LocalizedAssetDatabase* const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_AssetDatabase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AssetDatabase;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_AssetDatabase(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AssetDatabase = value;
}
constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase*& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_StringDatabase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StringDatabase;
}
constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase* const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_StringDatabase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StringDatabase;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_StringDatabase(::UnityEngine::Localization::Settings::LocalizedStringDatabase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StringDatabase = value;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_Metadata()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_Metadata() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Metadata;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Metadata = value;
}
constexpr ::UnityEngine::Localization::LocaleIdentifier& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_ProjectLocaleIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProjectLocaleIdentifier;
}
constexpr ::UnityEngine::Localization::LocaleIdentifier const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_ProjectLocaleIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProjectLocaleIdentifier;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_ProjectLocaleIdentifier(::UnityEngine::Localization::LocaleIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProjectLocaleIdentifier = value;
}
constexpr ::UnityEngine::Localization::Settings::PreloadBehavior& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_PreloadBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadBehavior;
}
constexpr ::UnityEngine::Localization::Settings::PreloadBehavior const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_PreloadBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadBehavior;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_PreloadBehavior(::UnityEngine::Localization::Settings::PreloadBehavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreloadBehavior = value;
}
constexpr bool& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_InitializeSynchronously()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitializeSynchronously;
}
constexpr bool const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_InitializeSynchronously() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitializeSynchronously;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_InitializeSynchronously(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitializeSynchronously = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_InitializingOperationHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitializingOperationHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>> const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_InitializingOperationHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitializingOperationHandle;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_InitializingOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitializingOperationHandle = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_SelectedLocaleAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleAsync;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_SelectedLocaleAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleAsync;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_SelectedLocaleAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocaleAsync = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_ProjectLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProjectLocale;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_ProjectLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProjectLocale;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_ProjectLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProjectLocale = value;
}
constexpr ::UnityEngine::Localization::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_SelectedLocaleChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleChanged;
}
constexpr ::UnityEngine::Localization::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*> const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get_m_SelectedLocaleChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedLocaleChanged;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set_m_SelectedLocaleChanged(::UnityEngine::Localization::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedLocaleChanged = value;
}
constexpr bool& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get__IsChangingSelectedLocale_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsChangingSelectedLocale_k__BackingField;
}
constexpr bool const& UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_get__IsChangingSelectedLocale_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsChangingSelectedLocale_k__BackingField;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings::__cordl_internal_set__IsChangingSelectedLocale_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsChangingSelectedLocale_k__BackingField = value;
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::setStaticF_s_Instance(::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>, "s_Instance", ::UnityEngine::Localization::Settings::LocalizationSettings*>(std::forward<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>(value));
}
inline ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> UnityEngine::Localization::Settings::LocalizationSettings::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>, "s_Instance", ::UnityEngine::Localization::Settings::LocalizationSettings*>();
}
inline bool UnityEngine::Localization::Settings::LocalizationSettings::get_IsChangingSelectedLocale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_IsChangingSelectedLocale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::set_IsChangingSelectedLocale(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_IsChangingSelectedLocale", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::Settings::LocalizationSettings::get_HasSelectedLocaleChangedSubscribers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_HasSelectedLocaleChangedSubscribers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::add_OnSelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"add_OnSelectedLocaleChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::remove_OnSelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"remove_OnSelectedLocaleChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::Settings::LocalizationSettings::get_HasSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_HasSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>> UnityEngine::Localization::Settings::LocalizationSettings::get_InitializationOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_InitializationOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> UnityEngine::Localization::Settings::LocalizationSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::set_Instance(::UnityEngine::Localization::Settings::LocalizationSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_Instance", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizationSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>* UnityEngine::Localization::Settings::LocalizationSettings::get_StartupLocaleSelectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_StartupLocaleSelectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Localization::Settings::ILocalesProvider* UnityEngine::Localization::Settings::LocalizationSettings::get_AvailableLocales()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_AvailableLocales", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::ILocalesProvider*>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::set_AvailableLocales(::UnityEngine::Localization::Settings::ILocalesProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_AvailableLocales", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Localization::Settings::LocalizedAssetDatabase* UnityEngine::Localization::Settings::LocalizationSettings::get_AssetDatabase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_AssetDatabase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::set_AssetDatabase(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_AssetDatabase", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Localization::Settings::LocalizedStringDatabase* UnityEngine::Localization::Settings::LocalizationSettings::get_StringDatabase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_StringDatabase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::set_StringDatabase(::UnityEngine::Localization::Settings::LocalizedStringDatabase*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_StringDatabase", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Localization::Metadata::MetadataCollection* UnityEngine::Localization::Settings::LocalizationSettings::get_Metadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_Metadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::MetadataCollection*>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::LocalizationSettings::get_SelectedLocale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_SelectedLocale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::set_SelectedLocale(::UnityEngine::Localization::Locale*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_SelectedLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> UnityEngine::Localization::Settings::LocalizationSettings::get_SelectedLocaleAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_SelectedLocaleAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::add_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"add_SelectedLocaleChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::remove_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"remove_SelectedLocaleChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::LocalizationSettings::get_ProjectLocale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_ProjectLocale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::set_ProjectLocale(::UnityEngine::Localization::Locale*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_ProjectLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Localization::Settings::LocalizationSettings::get_InitializeSynchronously()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_InitializeSynchronously", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::set_InitializeSynchronously(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_InitializeSynchronously", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Localization::Settings::PreloadBehavior UnityEngine::Localization::Settings::LocalizationSettings::get_PreloadBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_PreloadBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::PreloadBehavior>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::set_PreloadBehavior(::UnityEngine::Localization::Settings::PreloadBehavior  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"set_PreloadBehavior", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::PreloadBehavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::ValidateSettingsExist(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"ValidateSettingsExist", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, error);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>> UnityEngine::Localization::Settings::LocalizationSettings::GetInitializationOperation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Settings::LocalizationSettings::get_IsChangingPlayMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_IsChangingPlayMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Settings::LocalizationSettings::get_IsPlayingOrWillChangePlaymode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_IsPlayingOrWillChangePlaymode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Settings::LocalizationSettings::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::RuntimePlatform UnityEngine::Localization::Settings::LocalizationSettings::get_Platform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RuntimePlatform>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>* UnityEngine::Localization::Settings::LocalizationSettings::GetStartupLocaleSelectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"GetStartupLocaleSelectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::SetAvailableLocales(::UnityEngine::Localization::Settings::ILocalesProvider*  available)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SetAvailableLocales", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, available);
}
inline ::UnityEngine::Localization::Settings::ILocalesProvider* UnityEngine::Localization::Settings::LocalizationSettings::GetAvailableLocales()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::ILocalesProvider*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::SetAssetDatabase(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*  database)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SetAssetDatabase", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, database);
}
inline ::UnityEngine::Localization::Settings::LocalizedAssetDatabase* UnityEngine::Localization::Settings::LocalizationSettings::GetAssetDatabase()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::SetStringDatabase(::UnityEngine::Localization::Settings::LocalizedStringDatabase*  database)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SetStringDatabase", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, database);
}
inline ::UnityEngine::Localization::Settings::LocalizedStringDatabase* UnityEngine::Localization::Settings::LocalizationSettings::GetStringDatabase()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Settings::LocalizedStringDatabase*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Metadata::MetadataCollection* UnityEngine::Localization::Settings::LocalizationSettings::GetMetadata()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"GetMetadata", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Metadata::MetadataCollection*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::ForceRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"ForceRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::SendLocaleChangedEvents(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SendLocaleChangedEvents", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
inline ::System::Collections::IEnumerator* UnityEngine::Localization::Settings::LocalizationSettings::InitializeAndCallSelectedLocaleChangedCoroutine(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"InitializeAndCallSelectedLocaleChangedCoroutine", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, locale);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::InvokeSelectedLocaleChanged(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"InvokeSelectedLocaleChanged", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::LocalizationSettings::SelectActiveLocale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SelectActiveLocale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::LocalizationSettings::SelectLocaleUsingStartupSelectors()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::SetSelectedLocale(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"SetSelectedLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> UnityEngine::Localization::Settings::LocalizationSettings::GetSelectedLocaleAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::LocalizationSettings::GetSelectedLocale()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::OnLocaleRemoved(::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::ResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"ResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> UnityEngine::Localization::Settings::LocalizationSettings::GetInstanceDontCreateDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"GetInstanceDontCreateDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> UnityEngine::Localization::Settings::LocalizationSettings::GetOrCreateSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"GetOrCreateSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> UnityEngine::Localization::Settings::LocalizationSettings::_GetSelectedLocaleAsync_b__90_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings*>(),
                        {"<GetSelectedLocaleAsync>b__90_0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>(this, ___internal_method, op);
}
inline ::UnityEngine::Localization::Settings::LocalizationSettings* UnityEngine::Localization::Settings::LocalizationSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::LocalizationSettings*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Settings::IReset"
constexpr  UnityEngine::Localization::Settings::LocalizationSettings::operator ::UnityEngine::Localization::Settings::IReset*() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IReset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Settings::IReset"
constexpr ::UnityEngine::Localization::Settings::IReset* UnityEngine::Localization::Settings::LocalizationSettings::i___UnityEngine__Localization__Settings__IReset() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IReset*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::Settings::LocalizationSettings::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::Settings::LocalizationSettings::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::LocalizationSettings::LocalizationSettings()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::*)(int32_t)>(&::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb01f6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb020db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::MoveNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb020db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb020e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb020e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::*)()>(&::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb020eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>& UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> const& UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_get_locale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locale;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_get_locale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locale;
}
constexpr void UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::__cordl_internal_set_locale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locale = value;
}
inline void UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85* UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85()   {
}
