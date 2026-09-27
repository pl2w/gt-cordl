#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/SpecificLocaleSelector.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__SpecificLocaleSelector_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ILocalesProvider_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IStartupLocaleSelector_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SpecificLocaleSelector.get_LocaleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocaleIdentifier (::UnityEngine::Localization::Settings::SpecificLocaleSelector::*)()>(&::UnityEngine::Localization::Settings::SpecificLocaleSelector::get_LocaleId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb0213e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SpecificLocaleSelector*>(),
                        {"get_LocaleId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SpecificLocaleSelector.set_LocaleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::SpecificLocaleSelector::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::Settings::SpecificLocaleSelector::set_LocaleId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb0213f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SpecificLocaleSelector*>(),
                        {"set_LocaleId", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SpecificLocaleSelector.GetStartupLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::SpecificLocaleSelector::*)(::UnityEngine::Localization::Settings::ILocalesProvider*)>(&::UnityEngine::Localization::Settings::SpecificLocaleSelector::GetStartupLocale)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb021400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SpecificLocaleSelector*>(),
                        {"GetStartupLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::SpecificLocaleSelector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::SpecificLocaleSelector::*)()>(&::UnityEngine::Localization::Settings::SpecificLocaleSelector::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb020cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SpecificLocaleSelector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::LocaleIdentifier& UnityEngine::Localization::Settings::SpecificLocaleSelector::__cordl_internal_get_m_LocaleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocaleId;
}
constexpr ::UnityEngine::Localization::LocaleIdentifier const& UnityEngine::Localization::Settings::SpecificLocaleSelector::__cordl_internal_get_m_LocaleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocaleId;
}
constexpr void UnityEngine::Localization::Settings::SpecificLocaleSelector::__cordl_internal_set_m_LocaleId(::UnityEngine::Localization::LocaleIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocaleId = value;
}
inline ::UnityEngine::Localization::LocaleIdentifier UnityEngine::Localization::Settings::SpecificLocaleSelector::get_LocaleId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SpecificLocaleSelector*>(),
                        {"get_LocaleId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocaleIdentifier>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::SpecificLocaleSelector::set_LocaleId(::UnityEngine::Localization::LocaleIdentifier  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SpecificLocaleSelector*>(),
                        {"set_LocaleId", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::SpecificLocaleSelector::GetStartupLocale(::UnityEngine::Localization::Settings::ILocalesProvider*  availableLocales)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SpecificLocaleSelector*>(),
                        {"GetStartupLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Settings::ILocalesProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, availableLocales);
}
inline void UnityEngine::Localization::Settings::SpecificLocaleSelector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::SpecificLocaleSelector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Settings::SpecificLocaleSelector* UnityEngine::Localization::Settings::SpecificLocaleSelector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::SpecificLocaleSelector*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr  UnityEngine::Localization::Settings::SpecificLocaleSelector::operator ::UnityEngine::Localization::Settings::IStartupLocaleSelector*() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Settings::IStartupLocaleSelector"
constexpr ::UnityEngine::Localization::Settings::IStartupLocaleSelector* UnityEngine::Localization::Settings::SpecificLocaleSelector::i___UnityEngine__Localization__Settings__IStartupLocaleSelector() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::SpecificLocaleSelector::SpecificLocaleSelector()   {
}
