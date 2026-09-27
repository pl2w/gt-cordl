#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/ILocalesProvider.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ILocalesProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::ILocalesProvider.get_Locales
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* (::UnityEngine::Localization::Settings::ILocalesProvider::*)()>(&::UnityEngine::Localization::Settings::ILocalesProvider::get_Locales)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::ILocalesProvider.GetLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::ILocalesProvider::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::Settings::ILocalesProvider::GetLocale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::ILocalesProvider.AddLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::ILocalesProvider::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::ILocalesProvider::AddLocale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::ILocalesProvider.RemoveLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Settings::ILocalesProvider::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::ILocalesProvider::RemoveLocale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* UnityEngine::Localization::Settings::ILocalesProvider::get_Locales()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::ILocalesProvider::GetLocale(::UnityEngine::Localization::LocaleIdentifier  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, id);
}
inline void UnityEngine::Localization::Settings::ILocalesProvider::AddLocale(::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
inline bool UnityEngine::Localization::Settings::ILocalesProvider::RemoveLocale(::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::ILocalesProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, locale);
}
