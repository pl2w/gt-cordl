#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/SystemLocaleSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__SystemLocaleSelector_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ILocalesProvider_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IStartupLocaleSelector_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SystemLocaleSelector.GetStartupLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::SystemLocaleSelector::*)(::UnityEngine::Localization::Settings::ILocalesProvider*)>(&::UnityEngine::Localization::Settings::SystemLocaleSelector::GetStartupLocale)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb0214b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                        {"GetStartupLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SystemLocaleSelector.FindLocaleOrFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (*)(::UnityEngine::Localization::LocaleIdentifier, ::UnityEngine::Localization::Settings::ILocalesProvider*)>(&::UnityEngine::Localization::Settings::SystemLocaleSelector::FindLocaleOrFallback)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xb02194c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                        {"FindLocaleOrFallback", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SystemLocaleSelector.GetSystemCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::UnityEngine::Localization::Settings::SystemLocaleSelector::*)()>(&::UnityEngine::Localization::Settings::SystemLocaleSelector::GetSystemCulture)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb021c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SystemLocaleSelector.GetApplicationSystemLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SystemLanguage (::UnityEngine::Localization::Settings::SystemLocaleSelector::*)()>(&::UnityEngine::Localization::Settings::SystemLocaleSelector::GetApplicationSystemLanguage)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb021ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SystemLocaleSelector.GetAndroidDeviceLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Localization::Settings::SystemLocaleSelector::GetAndroidDeviceLanguage)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xb0215d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                        {"GetAndroidDeviceLanguage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SystemLocaleSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::SystemLocaleSelector::*)()>(&::UnityEngine::Localization::Settings::SystemLocaleSelector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb020cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::SystemLocaleSelector::GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                        {"GetStartupLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, availableLocales);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::SystemLocaleSelector::FindLocaleOrFallback(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                        {"FindLocaleOrFallback", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(nullptr, ___internal_method, localeIdentifier, availableLocales);
}
inline ::System::Globalization::CultureInfo* UnityEngine::Localization::Settings::SystemLocaleSelector::GetSystemCulture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline ::UnityEngine::SystemLanguage UnityEngine::Localization::Settings::SystemLocaleSelector::GetApplicationSystemLanguage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SystemLanguage>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Settings::SystemLocaleSelector::GetAndroidDeviceLanguage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                        {"GetAndroidDeviceLanguage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::Settings::SystemLocaleSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SystemLocaleSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Settings::SystemLocaleSelector* UnityEngine::Localization::Settings::SystemLocaleSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::SystemLocaleSelector*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr  UnityEngine::Localization::Settings::SystemLocaleSelector::operator ::UnityEngine::Localization::Settings::IStartupLocaleSelector*() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr ::UnityEngine::Localization::Settings::IStartupLocaleSelector* UnityEngine::Localization::Settings::SystemLocaleSelector::i___UnityEngine__Localization__Settings__IStartupLocaleSelector() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::SystemLocaleSelector::SystemLocaleSelector()   {
}
