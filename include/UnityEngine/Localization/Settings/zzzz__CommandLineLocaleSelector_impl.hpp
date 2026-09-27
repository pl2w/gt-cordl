#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/CommandLineLocaleSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__CommandLineLocaleSelector_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ILocalesProvider_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IStartupLocaleSelector_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::CommandLineLocaleSelector.get_CommandLineArgument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Settings::CommandLineLocaleSelector::*)()>(&::UnityEngine::Localization::Settings::CommandLineLocaleSelector::get_CommandLineArgument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb020ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::CommandLineLocaleSelector*>(),
                        {"get_CommandLineArgument", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::CommandLineLocaleSelector.set_CommandLineArgument
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::CommandLineLocaleSelector::*)(::StringW)>(&::UnityEngine::Localization::Settings::CommandLineLocaleSelector::set_CommandLineArgument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb020ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::CommandLineLocaleSelector*>(),
                        {"set_CommandLineArgument", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::CommandLineLocaleSelector.GetStartupLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::CommandLineLocaleSelector::*)(::UnityEngine::Localization::Settings::ILocalesProvider*)>(&::UnityEngine::Localization::Settings::CommandLineLocaleSelector::GetStartupLocale)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xb020ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::CommandLineLocaleSelector*>(),
                        {"GetStartupLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::CommandLineLocaleSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::CommandLineLocaleSelector::*)()>(&::UnityEngine::Localization::Settings::CommandLineLocaleSelector::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb020c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::CommandLineLocaleSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Localization::Settings::CommandLineLocaleSelector::__cordl_internal_get_m_CommandLineArgument()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommandLineArgument;
}
constexpr ::StringW const& UnityEngine::Localization::Settings::CommandLineLocaleSelector::__cordl_internal_get_m_CommandLineArgument() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CommandLineArgument;
}
constexpr void UnityEngine::Localization::Settings::CommandLineLocaleSelector::__cordl_internal_set_m_CommandLineArgument(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CommandLineArgument = value;
}
inline ::StringW UnityEngine::Localization::Settings::CommandLineLocaleSelector::get_CommandLineArgument()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::CommandLineLocaleSelector*>(),
                        {"get_CommandLineArgument", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::CommandLineLocaleSelector::set_CommandLineArgument(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::CommandLineLocaleSelector*>(),
                        {"set_CommandLineArgument", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::CommandLineLocaleSelector::GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::CommandLineLocaleSelector*>(),
                        {"GetStartupLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, availableLocales);
}
inline void UnityEngine::Localization::Settings::CommandLineLocaleSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::CommandLineLocaleSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Settings::CommandLineLocaleSelector* UnityEngine::Localization::Settings::CommandLineLocaleSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::CommandLineLocaleSelector*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr  UnityEngine::Localization::Settings::CommandLineLocaleSelector::operator ::UnityEngine::Localization::Settings::IStartupLocaleSelector*() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr ::UnityEngine::Localization::Settings::IStartupLocaleSelector* UnityEngine::Localization::Settings::CommandLineLocaleSelector::i___UnityEngine__Localization__Settings__IStartupLocaleSelector() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::CommandLineLocaleSelector::CommandLineLocaleSelector()   {
}
