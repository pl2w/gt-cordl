#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/PlayerPrefLocaleSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__PlayerPrefLocaleSelector_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IInitialize_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ILocalesProvider_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IStartupLocaleSelector_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizationSettings_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector.get_PlayerPreferenceKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::*)()>(&::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::get_PlayerPreferenceKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0211d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {"get_PlayerPreferenceKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector.set_PlayerPreferenceKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::*)(::StringW)>(&::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::set_PlayerPreferenceKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0211e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {"set_PlayerPreferenceKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector.PostInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::*)(::UnityEngine::Localization::Settings::LocalizationSettings*)>(&::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::PostInitialization)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb0211e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {"PostInitialization", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizationSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector.GetStartupLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::*)(::UnityEngine::Localization::Settings::ILocalesProvider*)>(&::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::GetStartupLocale)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb021298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {"GetStartupLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::*)()>(&::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb021390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::__cordl_internal_get_m_PlayerPreferenceKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerPreferenceKey;
}
constexpr ::StringW const& UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::__cordl_internal_get_m_PlayerPreferenceKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerPreferenceKey;
}
constexpr void UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::__cordl_internal_set_m_PlayerPreferenceKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayerPreferenceKey = value;
}
inline ::StringW UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::get_PlayerPreferenceKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {"get_PlayerPreferenceKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::set_PlayerPreferenceKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {"set_PlayerPreferenceKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::PostInitialization(::UnityEngine::Localization::Settings::LocalizationSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {"PostInitialization", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::LocalizationSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {"GetStartupLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, availableLocales);
}
inline void UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector* UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr  UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::operator ::UnityEngine::Localization::Settings::IStartupLocaleSelector*() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr ::UnityEngine::Localization::Settings::IStartupLocaleSelector* UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::i___UnityEngine__Localization__Settings__IStartupLocaleSelector() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::Settings::IInitialize"
constexpr  UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::operator ::UnityEngine::Localization::Settings::IInitialize*() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IInitialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Settings::IInitialize"
constexpr ::UnityEngine::Localization::Settings::IInitialize* UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::i___UnityEngine__Localization__Settings__IInitialize() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IInitialize*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::PlayerPrefLocaleSelector::PlayerPrefLocaleSelector()   {
}
