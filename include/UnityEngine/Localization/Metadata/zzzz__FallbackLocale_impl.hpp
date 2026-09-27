#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/FallbackLocale.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__FallbackLocale_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::FallbackLocale._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::FallbackLocale::*)()>(&::UnityEngine::Localization::Metadata::FallbackLocale::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04fd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::FallbackLocale._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::FallbackLocale::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Metadata::FallbackLocale::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb04fd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::FallbackLocale.get_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Locale> (::UnityEngine::Localization::Metadata::FallbackLocale::*)()>(&::UnityEngine::Localization::Metadata::FallbackLocale::get_Locale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04fdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {"get_Locale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::FallbackLocale.set_Locale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Metadata::FallbackLocale::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Metadata::FallbackLocale::set_Locale)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb04fd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {"set_Locale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Metadata::FallbackLocale.IsCyclic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Metadata::FallbackLocale::*)(::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::Metadata::FallbackLocale::IsCyclic)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb04fdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {"IsCyclic", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::Metadata::FallbackLocale::__cordl_internal_get_m_Locale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Locale;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::Metadata::FallbackLocale::__cordl_internal_get_m_Locale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Locale;
}
constexpr void UnityEngine::Localization::Metadata::FallbackLocale::__cordl_internal_set_m_Locale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Locale = value;
}
inline void UnityEngine::Localization::Metadata::FallbackLocale::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::FallbackLocale::_ctor(::UnityEngine::Localization::Locale*  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fallback);
}
inline ::UnityW<::UnityEngine::Localization::Locale> UnityEngine::Localization::Metadata::FallbackLocale::get_Locale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {"get_Locale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Locale>>(this, ___internal_method);
}
inline void UnityEngine::Localization::Metadata::FallbackLocale::set_Locale(::UnityEngine::Localization::Locale*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {"set_Locale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::Metadata::FallbackLocale::IsCyclic(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Metadata::FallbackLocale*>(),
                        {"IsCyclic", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, locale);
}
inline ::UnityEngine::Localization::Metadata::FallbackLocale* UnityEngine::Localization::Metadata::FallbackLocale::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::FallbackLocale*>());
}
inline ::UnityEngine::Localization::Metadata::FallbackLocale* UnityEngine::Localization::Metadata::FallbackLocale::New_ctor(::UnityEngine::Localization::Locale*  fallback)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Metadata::FallbackLocale*>(fallback));
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr  UnityEngine::Localization::Metadata::FallbackLocale::operator ::UnityEngine::Localization::Metadata::IMetadata*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* UnityEngine::Localization::Metadata::FallbackLocale::i___UnityEngine__Localization__Metadata__IMetadata() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::FallbackLocale::FallbackLocale()   {
}
