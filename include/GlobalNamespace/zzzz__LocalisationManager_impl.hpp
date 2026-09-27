#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalisationManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalisationManager_def.hpp"
#include "GlobalNamespace/zzzz__LocalisationFontPair_def.hpp"
#include "GlobalNamespace/zzzz__LocalisationManager__Start_d__32_def.hpp"
#include "GlobalNamespace/zzzz__LocalisationManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__StringTable_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LocalisationManager> (*)()>(&::GlobalNamespace::LocalisationManager::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a64010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.get_IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::LocalisationManager::get_IsReady)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a64068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_IsReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.get_LanguageSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::LocalisationManager::get_LanguageSet)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a6417c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_LanguageSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.get_CurrentLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (*)()>(&::GlobalNamespace::LocalisationManager::get_CurrentLanguage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a641d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_CurrentLanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.get_LanugageSetPlayerPrefKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::LocalisationManager::get_LanugageSetPlayerPrefKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a641d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_LanugageSetPlayerPrefKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.get_ApplicationRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::LocalisationManager::get_ApplicationRunning)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a64218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_ApplicationRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager::*)()>(&::GlobalNamespace::LocalisationManager::Awake)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x5a642b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager::*)()>(&::GlobalNamespace::LocalisationManager::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a647b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager::*)()>(&::GlobalNamespace::LocalisationManager::OnDestroy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a64858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.InitialiseLocTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::LocalisationManager::InitialiseLocTables)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a648d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"InitialiseLocTables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.InitialiseLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::LocalisationManager::InitialiseLanguage)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a64dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"InitialiseLanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.CacheLocTables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::LocalisationManager::CacheLocTables)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5a64978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"CacheLocTables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.OnLanguageButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager::*)(::StringW, bool)>(&::GlobalNamespace::LocalisationManager::OnLanguageButtonPressed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a65180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"OnLanguageButtonPressed", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.ReconstructBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager::*)()>(&::GlobalNamespace::LocalisationManager::ReconstructBindings)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5a65398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"ReconstructBindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.LoadPreviousLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::UnityEngine::Localization::Locale*>)>(&::GlobalNamespace::LocalisationManager::LoadPreviousLanguage)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5a64f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"LoadPreviousLanguage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.DefaultLocaleFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Localization::Locale*>)>(&::GlobalNamespace::LocalisationManager::DefaultLocaleFallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a65064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"DefaultLocaleFallback", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.SysLangToLoc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SystemLanguage, ::by_ref<::UnityEngine::Localization::Locale*>)>(&::GlobalNamespace::LocalisationManager::SysLangToLoc)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5a655e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"SysLangToLoc", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.TryUpdateLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager::*)(::UnityEngine::Localization::Locale*, bool)>(&::GlobalNamespace::LocalisationManager::TryUpdateLanguage)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a65328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryUpdateLanguage", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.UpdateLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LocalisationManager::*)(::UnityEngine::Localization::Locale*, bool)>(&::GlobalNamespace::LocalisationManager::UpdateLanguage)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a659e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"UpdateLanguage", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.TryGetLocaleFromCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::UnityEngine::Localization::Locale*>)>(&::GlobalNamespace::LocalisationManager::TryGetLocaleFromCode)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a6520c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetLocaleFromCode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.RegisterOnLanguageChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::LocalisationManager::RegisterOnLanguageChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a65a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"RegisterOnLanguageChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.UnregisterOnLanguageChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::LocalisationManager::UnregisterOnLanguageChanged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a65b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"UnregisterOnLanguageChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.GetFontAssetForCurrentLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::LocalisationFontPair>)>(&::GlobalNamespace::LocalisationManager::GetFontAssetForCurrentLocale)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5a65c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"GetFontAssetForCurrentLocale", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalisationFontPair>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.OnSaveLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::LocalisationManager::OnSaveLanguage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a65df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"OnSaveLanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.TryGetLocaleBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::Localization::Locale*>)>(&::GlobalNamespace::LocalisationManager::TryGetLocaleBinding)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5a65eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetLocaleBinding", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.GetAllBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>* (*)()>(&::GlobalNamespace::LocalisationManager::GetAllBindings)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5a66124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"GetAllBindings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.TryGetKeyForCurrentLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>, ::StringW)>(&::GlobalNamespace::LocalisationManager::TryGetKeyForCurrentLocale)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5a662ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetKeyForCurrentLocale", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.TryGetKeyForEnglishString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>)>(&::GlobalNamespace::LocalisationManager::TryGetKeyForEnglishString)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5a66454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetKeyForEnglishString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.TryGetTranslationForCurrentLocaleWithLocString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Localization::LocalizedString*, ::by_ref<::StringW>, ::StringW, ::UnityEngine::Object*)>(&::GlobalNamespace::LocalisationManager::TryGetTranslationForCurrentLocaleWithLocString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5a66860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetTranslationForCurrentLocaleWithLocString", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.LocaleToFriendlyString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Localization::Locale*, bool)>(&::GlobalNamespace::LocalisationManager::LocaleToFriendlyString)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5a669c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"LocaleToFriendlyString", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager.LocaleDisplayNameToFriendlyString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool)>(&::GlobalNamespace::LocalisationManager::LocaleDisplayNameToFriendlyString)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5a66bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"LocaleDisplayNameToFriendlyString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager::*)()>(&::GlobalNamespace::LocalisationManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a66e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*& GlobalNamespace::LocalisationManager::__cordl_internal_get__localisationFonts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localisationFonts;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>* const& GlobalNamespace::LocalisationManager::__cordl_internal_get__localisationFonts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localisationFonts;
}
constexpr void GlobalNamespace::LocalisationManager::__cordl_internal_set__localisationFonts(::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localisationFonts = value;
}
constexpr bool& GlobalNamespace::LocalisationManager::__cordl_internal_get__cachedHasInitialised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedHasInitialised;
}
constexpr bool const& GlobalNamespace::LocalisationManager::__cordl_internal_get__cachedHasInitialised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedHasInitialised;
}
constexpr void GlobalNamespace::LocalisationManager::__cordl_internal_set__cachedHasInitialised(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedHasInitialised = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::LocalisationManager::__cordl_internal_get__updateLangCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateLangCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::LocalisationManager::__cordl_internal_get__updateLangCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateLangCoroutine;
}
constexpr void GlobalNamespace::LocalisationManager::__cordl_internal_set__updateLangCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateLangCoroutine = value;
}
inline void GlobalNamespace::LocalisationManager::setStaticF__instance(::UnityW<::GlobalNamespace::LocalisationManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::LocalisationManager>, "_instance", ::GlobalNamespace::LocalisationManager*>(std::forward<::UnityW<::GlobalNamespace::LocalisationManager>>(value));
}
inline ::UnityW<::GlobalNamespace::LocalisationManager> GlobalNamespace::LocalisationManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::LocalisationManager>, "_instance", ::GlobalNamespace::LocalisationManager*>();
}
inline void GlobalNamespace::LocalisationManager::setStaticF__hasInitialised(bool  value)  {
::cordl_internals::setStaticField<bool, "_hasInitialised", ::GlobalNamespace::LocalisationManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::LocalisationManager::getStaticF__hasInitialised()  {
return ::cordl_internals::getStaticField<bool, "_hasInitialised", ::GlobalNamespace::LocalisationManager*>();
}
inline void GlobalNamespace::LocalisationManager::setStaticF__initLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Localization::Locale>, "_initLocale", ::GlobalNamespace::LocalisationManager*>(std::forward<::UnityW<::UnityEngine::Localization::Locale>>(value));
}
inline ::UnityW<::UnityEngine::Localization::Locale> GlobalNamespace::LocalisationManager::getStaticF__initLocale()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Localization::Locale>, "_initLocale", ::GlobalNamespace::LocalisationManager*>();
}
inline void GlobalNamespace::LocalisationManager::setStaticF__onLanguageChanged(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "_onLanguageChanged", ::GlobalNamespace::LocalisationManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::LocalisationManager::getStaticF__onLanguageChanged()  {
return ::cordl_internals::getStaticField<::System::Action*, "_onLanguageChanged", ::GlobalNamespace::LocalisationManager*>();
}
inline void GlobalNamespace::LocalisationManager::setStaticF__requestCancellationSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setStaticField<::System::Threading::CancellationTokenSource*, "_requestCancellationSource", ::GlobalNamespace::LocalisationManager*>(std::forward<::System::Threading::CancellationTokenSource*>(value));
}
inline ::System::Threading::CancellationTokenSource* GlobalNamespace::LocalisationManager::getStaticF__requestCancellationSource()  {
return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenSource*, "_requestCancellationSource", ::GlobalNamespace::LocalisationManager*>();
}
inline void GlobalNamespace::LocalisationManager::setStaticF__localeDisplayBinding(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>*, "_localeDisplayBinding", ::GlobalNamespace::LocalisationManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>* GlobalNamespace::LocalisationManager::getStaticF__localeDisplayBinding()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>*, "_localeDisplayBinding", ::GlobalNamespace::LocalisationManager*>();
}
inline void GlobalNamespace::LocalisationManager::setStaticF__localeTablePairs(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Localization::Tables::StringTable>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Localization::Tables::StringTable>>*, "_localeTablePairs", ::GlobalNamespace::LocalisationManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Localization::Tables::StringTable>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Localization::Tables::StringTable>>* GlobalNamespace::LocalisationManager::getStaticF__localeTablePairs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Localization::Tables::StringTable>>*, "_localeTablePairs", ::GlobalNamespace::LocalisationManager*>();
}
inline void GlobalNamespace::LocalisationManager::setStaticF__localisationFontDict(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LocalisationFontPair>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LocalisationFontPair>*, "_localisationFontDict", ::GlobalNamespace::LocalisationManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LocalisationFontPair>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LocalisationFontPair>* GlobalNamespace::LocalisationManager::getStaticF__localisationFontDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LocalisationFontPair>*, "_localisationFontDict", ::GlobalNamespace::LocalisationManager*>();
}
inline ::UnityW<::GlobalNamespace::LocalisationManager> GlobalNamespace::LocalisationManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LocalisationManager>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::LocalisationManager::get_IsReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_IsReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::LocalisationManager::get_LanguageSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_LanguageSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Locale> GlobalNamespace::LocalisationManager::get_CurrentLanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_CurrentLanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalisationManager::get_LanugageSetPlayerPrefKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_LanugageSetPlayerPrefKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::LocalisationManager::get_ApplicationRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"get_ApplicationRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LocalisationManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalisationManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalisationManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalisationManager::InitialiseLocTables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"InitialiseLocTables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LocalisationManager::InitialiseLanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"InitialiseLanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LocalisationManager::CacheLocTables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"CacheLocTables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LocalisationManager::OnLanguageButtonPressed(::StringW  langCode, bool  saveLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"OnLanguageButtonPressed", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, langCode, saveLanguage);
}
inline void GlobalNamespace::LocalisationManager::ReconstructBindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"ReconstructBindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalisationManager::LoadPreviousLanguage(::StringW  languageCode, ::by_ref<::UnityEngine::Localization::Locale*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"LoadPreviousLanguage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, languageCode, result);
}
inline void GlobalNamespace::LocalisationManager::DefaultLocaleFallback(::by_ref<::UnityEngine::Localization::Locale*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"DefaultLocaleFallback", {}, {::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result);
}
inline bool GlobalNamespace::LocalisationManager::SysLangToLoc(::UnityEngine::SystemLanguage  sysLanguage, ::by_ref<::UnityEngine::Localization::Locale*>  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"SysLangToLoc", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sysLanguage, language);
}
inline void GlobalNamespace::LocalisationManager::TryUpdateLanguage(::UnityEngine::Localization::Locale*  newLocale, bool  saveLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryUpdateLanguage", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLocale, saveLanguage);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LocalisationManager::UpdateLanguage(::UnityEngine::Localization::Locale*  newLocale, bool  saveLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"UpdateLanguage", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, newLocale, saveLanguage);
}
inline bool GlobalNamespace::LocalisationManager::TryGetLocaleFromCode(::StringW  code, ::by_ref<::UnityEngine::Localization::Locale*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetLocaleFromCode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, code, result);
}
inline void GlobalNamespace::LocalisationManager::RegisterOnLanguageChanged(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"RegisterOnLanguageChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::LocalisationManager::UnregisterOnLanguageChanged(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"UnregisterOnLanguageChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline bool GlobalNamespace::LocalisationManager::GetFontAssetForCurrentLocale(::by_ref<::GlobalNamespace::LocalisationFontPair>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"GetFontAssetForCurrentLocale", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalisationFontPair>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result);
}
inline void GlobalNamespace::LocalisationManager::OnSaveLanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"OnSaveLanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::LocalisationManager::TryGetLocaleBinding(int32_t  binding, ::by_ref<::UnityEngine::Localization::Locale*>  loc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetLocaleBinding", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Localization::Locale*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, binding, loc);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>* GlobalNamespace::LocalisationManager::GetAllBindings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"GetAllBindings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::LocalisationManager::TryGetKeyForCurrentLocale(::StringW  key, ::by_ref<::StringW>  result, ::StringW  defaultResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetKeyForCurrentLocale", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, result, defaultResult);
}
inline bool GlobalNamespace::LocalisationManager::TryGetKeyForEnglishString(::StringW  englishString, ::by_ref<::StringW>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetKeyForEnglishString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, englishString, result);
}
inline bool GlobalNamespace::LocalisationManager::TryGetTranslationForCurrentLocaleWithLocString(::UnityEngine::Localization::LocalizedString*  key, ::by_ref<::StringW>  result, ::StringW  defaultResult, ::UnityEngine::Object*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"TryGetTranslationForCurrentLocaleWithLocString", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key, result, defaultResult, context);
}
inline ::StringW GlobalNamespace::LocalisationManager::LocaleToFriendlyString(::UnityEngine::Localization::Locale*  locale, bool  forceEnglishChars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"LocaleToFriendlyString", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, locale, forceEnglishChars);
}
inline ::StringW GlobalNamespace::LocalisationManager::LocaleDisplayNameToFriendlyString(::StringW  locTextName, bool  forceEnglishChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {"LocaleDisplayNameToFriendlyString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, locTextName, forceEnglishChar);
}
inline void GlobalNamespace::LocalisationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalisationManager* GlobalNamespace::LocalisationManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalisationManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalisationManager::LocalisationManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::*)(int32_t)>(&::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a65a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::*)()>(&::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6733c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::*)()>(&::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5a67340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::*)()>(&::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6775c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::*)()>(&::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a67764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::*)()>(&::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6779c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalisationManager>& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LocalisationManager> const& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LocalisationManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get_newLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newLocale;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get_newLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newLocale;
}
constexpr void GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_set_newLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newLocale = value;
}
constexpr bool& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get_saveLanguage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveLanguage;
}
constexpr bool const& GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_get_saveLanguage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveLanguage;
}
constexpr void GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::__cordl_internal_set_saveLanguage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveLanguage = value;
}
inline void GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43* GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43::LocalisationManager__UpdateLanguage_d__43()   {
}
