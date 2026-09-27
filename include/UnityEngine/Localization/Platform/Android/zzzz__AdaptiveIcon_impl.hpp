#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Platform/Android/AdaptiveIcon.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Platform/Android/zzzz__AdaptiveIcon_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Platform::Android::AdaptiveIcon.get_Background
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocalizedTexture* (::UnityEngine::Localization::Platform::Android::AdaptiveIcon::*)()>(&::UnityEngine::Localization::Platform::Android::AdaptiveIcon::get_Background)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04b7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {"get_Background", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Platform::Android::AdaptiveIcon.set_Background
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Platform::Android::AdaptiveIcon::*)(::UnityEngine::Localization::LocalizedTexture*)>(&::UnityEngine::Localization::Platform::Android::AdaptiveIcon::set_Background)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04b7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {"set_Background", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Platform::Android::AdaptiveIcon.get_Foreground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocalizedTexture* (::UnityEngine::Localization::Platform::Android::AdaptiveIcon::*)()>(&::UnityEngine::Localization::Platform::Android::AdaptiveIcon::get_Foreground)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04b7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {"get_Foreground", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Platform::Android::AdaptiveIcon.set_Foreground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Platform::Android::AdaptiveIcon::*)(::UnityEngine::Localization::LocalizedTexture*)>(&::UnityEngine::Localization::Platform::Android::AdaptiveIcon::set_Foreground)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04b7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {"set_Foreground", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Platform::Android::AdaptiveIcon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Platform::Android::AdaptiveIcon::*)()>(&::UnityEngine::Localization::Platform::Android::AdaptiveIcon::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04b7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::LocalizedTexture*& UnityEngine::Localization::Platform::Android::AdaptiveIcon::__cordl_internal_get_m_Background()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Background;
}
constexpr ::UnityEngine::Localization::LocalizedTexture* const& UnityEngine::Localization::Platform::Android::AdaptiveIcon::__cordl_internal_get_m_Background() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Background;
}
constexpr void UnityEngine::Localization::Platform::Android::AdaptiveIcon::__cordl_internal_set_m_Background(::UnityEngine::Localization::LocalizedTexture*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Background = value;
}
constexpr ::UnityEngine::Localization::LocalizedTexture*& UnityEngine::Localization::Platform::Android::AdaptiveIcon::__cordl_internal_get_m_Foreground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Foreground;
}
constexpr ::UnityEngine::Localization::LocalizedTexture* const& UnityEngine::Localization::Platform::Android::AdaptiveIcon::__cordl_internal_get_m_Foreground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Foreground;
}
constexpr void UnityEngine::Localization::Platform::Android::AdaptiveIcon::__cordl_internal_set_m_Foreground(::UnityEngine::Localization::LocalizedTexture*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Foreground = value;
}
inline ::UnityEngine::Localization::LocalizedTexture* UnityEngine::Localization::Platform::Android::AdaptiveIcon::get_Background()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {"get_Background", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocalizedTexture*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Platform::Android::AdaptiveIcon::set_Background(::UnityEngine::Localization::LocalizedTexture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {"set_Background", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Localization::LocalizedTexture* UnityEngine::Localization::Platform::Android::AdaptiveIcon::get_Foreground()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {"get_Foreground", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocalizedTexture*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Platform::Android::AdaptiveIcon::set_Foreground(::UnityEngine::Localization::LocalizedTexture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {"set_Foreground", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Platform::Android::AdaptiveIcon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Platform::Android::AdaptiveIcon* UnityEngine::Localization::Platform::Android::AdaptiveIcon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Platform::Android::AdaptiveIcon*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Platform::Android::AdaptiveIcon::AdaptiveIcon()   {
}
