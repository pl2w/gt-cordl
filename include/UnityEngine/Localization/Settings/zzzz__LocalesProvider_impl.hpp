#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalesProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalesProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ILocalesProvider_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__IReset_def.hpp"
#include "UnityEngine/Localization/zzzz__IPreloadRequired_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.get_Locales
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* (::UnityEngine::Localization::Settings::LocalesProvider::*)()>(&::UnityEngine::Localization::Settings::LocalesProvider::get_Locales)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb01d8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"get_Locales", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.get_PreloadOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::Settings::LocalesProvider::*)()>(&::UnityEngine::Localization::Settings::LocalesProvider::get_PreloadOperation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb01d9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"get_PreloadOperation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.GetLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::LocalesProvider::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::Settings::LocalesProvider::GetLocale)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb01db10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"GetLocale", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.GetLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::LocalesProvider::*)(::StringW)>(&::UnityEngine::Localization::Settings::LocalesProvider::GetLocale)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb01de44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"GetLocale", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.GetLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::LocalesProvider::*)(::UnityEngine::SystemLanguage)>(&::UnityEngine::Localization::Settings::LocalesProvider::GetLocale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb01de90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"GetLocale", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.AddLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalesProvider::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalesProvider::AddLocale)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xb01dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"AddLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.RemoveLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Settings::LocalesProvider::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Settings::LocalesProvider::RemoveLocale)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb01e1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"RemoveLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.FindFallbackLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Settings::LocalesProvider::*)(::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::Settings::LocalesProvider::FindFallbackLocale)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb01dd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"FindFallbackLocale", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.ResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalesProvider::*)()>(&::UnityEngine::Localization::Settings::LocalesProvider::ResetState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb01e348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"ResetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalesProvider::*)()>(&::UnityEngine::Localization::Settings::LocalesProvider::Finalize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb01e3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalesProvider::*)()>(&::UnityEngine::Localization::Settings::LocalesProvider::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb01e450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalesProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalesProvider::*)()>(&::UnityEngine::Localization::Settings::LocalesProvider::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb01e508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*& UnityEngine::Localization::Settings::LocalesProvider::__cordl_internal_get_m_Locales()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Locales;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* const& UnityEngine::Localization::Settings::LocalesProvider::__cordl_internal_get_m_Locales() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Locales;
}
constexpr void UnityEngine::Localization::Settings::LocalesProvider::__cordl_internal_set_m_Locales(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Locales = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::Localization::Settings::LocalesProvider::__cordl_internal_get_m_LoadOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadOperation;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& UnityEngine::Localization::Settings::LocalesProvider::__cordl_internal_get_m_LoadOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoadOperation;
}
constexpr void UnityEngine::Localization::Settings::LocalesProvider::__cordl_internal_set_m_LoadOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoadOperation = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* UnityEngine::Localization::Settings::LocalesProvider::get_Locales()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"get_Locales", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::Settings::LocalesProvider::get_PreloadOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"get_PreloadOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::LocalesProvider::GetLocale(::UnityEngine::Localization::LocaleIdentifier  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"GetLocale", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, id);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::LocalesProvider::GetLocale(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"GetLocale", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, code);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::LocalesProvider::GetLocale(::UnityEngine::SystemLanguage  systemLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"GetLocale", {}, {::i2c::type_of<::UnityEngine::SystemLanguage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, systemLanguage);
}
inline void UnityEngine::Localization::Settings::LocalesProvider::AddLocale(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"AddLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locale);
}
inline bool UnityEngine::Localization::Settings::LocalesProvider::RemoveLocale(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"RemoveLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, locale);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Settings::LocalesProvider::FindFallbackLocale(::UnityEngine::Localization::LocaleIdentifier  localeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"FindFallbackLocale", {}, {::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method, localeIdentifier);
}
inline void UnityEngine::Localization::Settings::LocalesProvider::ResetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"ResetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalesProvider::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalesProvider::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Settings::LocalesProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalesProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Settings::LocalesProvider* UnityEngine::Localization::Settings::LocalesProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::LocalesProvider*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Settings::ILocalesProvider"
constexpr  UnityEngine::Localization::Settings::LocalesProvider::operator ::UnityEngine::Localization::Settings::ILocalesProvider*() noexcept {
return static_cast<::UnityEngine::Localization::Settings::ILocalesProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Settings::ILocalesProvider"
constexpr ::UnityEngine::Localization::Settings::ILocalesProvider* UnityEngine::Localization::Settings::LocalesProvider::i___UnityEngine__Localization__Settings__ILocalesProvider() noexcept {
return static_cast<::UnityEngine::Localization::Settings::ILocalesProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::IPreloadRequired"
constexpr  UnityEngine::Localization::Settings::LocalesProvider::operator ::UnityEngine::Localization::IPreloadRequired*() noexcept {
return static_cast<::UnityEngine::Localization::IPreloadRequired*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::IPreloadRequired"
constexpr ::UnityEngine::Localization::IPreloadRequired* UnityEngine::Localization::Settings::LocalesProvider::i___UnityEngine__Localization__IPreloadRequired() noexcept {
return static_cast<::UnityEngine::Localization::IPreloadRequired*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Localization::Settings::IReset"
constexpr  UnityEngine::Localization::Settings::LocalesProvider::operator ::UnityEngine::Localization::Settings::IReset*() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IReset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Settings::IReset"
constexpr ::UnityEngine::Localization::Settings::IReset* UnityEngine::Localization::Settings::LocalesProvider::i___UnityEngine__Localization__Settings__IReset() noexcept {
return static_cast<::UnityEngine::Localization::Settings::IReset*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Localization::Settings::LocalesProvider::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Localization::Settings::LocalesProvider::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::LocalesProvider::LocalesProvider()   {
}
