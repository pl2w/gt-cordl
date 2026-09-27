#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/IStartupLocaleSelector.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IStartupLocaleSelector_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ILocalesProvider_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::IStartupLocaleSelector.GetStartupLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::IStartupLocaleSelector::*)(::UnityEngine::Localization::Settings::ILocalesProvider*)>(&::UnityEngine::Localization::Settings::IStartupLocaleSelector::GetStartupLocale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::IStartupLocaleSelector::GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, availableLocales);
}
