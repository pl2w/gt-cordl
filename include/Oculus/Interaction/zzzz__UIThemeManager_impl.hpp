#pragma once
// IWYU pragma private; include "Oculus/Interaction/UIThemeManager.hpp"
#include "Oculus/Interaction/zzzz__UITheme_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__UIThemeManager_def.hpp"
#include "Oculus/Interaction/zzzz__UITheme_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UIThemeManager.get_Themes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::Oculus::Interaction::UITheme>> (::Oculus::Interaction::UIThemeManager::*)()>(&::Oculus::Interaction::UIThemeManager::get_Themes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42ac18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"get_Themes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UIThemeManager.get_CurrentThemeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::UIThemeManager::*)()>(&::Oculus::Interaction::UIThemeManager::get_CurrentThemeIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42ac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"get_CurrentThemeIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UIThemeManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UIThemeManager::*)()>(&::Oculus::Interaction::UIThemeManager::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42ac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UIThemeManager.ApplyCurrentTheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UIThemeManager::*)()>(&::Oculus::Interaction::UIThemeManager::ApplyCurrentTheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42b528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"ApplyCurrentTheme", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UIThemeManager.ApplyTheme
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UIThemeManager::*)(int32_t)>(&::Oculus::Interaction::UIThemeManager::ApplyTheme)> {
  constexpr static std::size_t size = 0x8f8;
  constexpr static std::size_t addrs = 0xa42ac30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"ApplyTheme", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UIThemeManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UIThemeManager::*)()>(&::Oculus::Interaction::UIThemeManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::UITheme>>& Oculus::Interaction::UIThemeManager::__cordl_internal_get__themes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____themes;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::UITheme>> const& Oculus::Interaction::UIThemeManager::__cordl_internal_get__themes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____themes;
}
constexpr void Oculus::Interaction::UIThemeManager::__cordl_internal_set__themes(::ArrayW<::UnityW<::Oculus::Interaction::UITheme>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____themes = value;
}
constexpr int32_t& Oculus::Interaction::UIThemeManager::__cordl_internal_get__currentThemeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentThemeIndex;
}
constexpr int32_t const& Oculus::Interaction::UIThemeManager::__cordl_internal_get__currentThemeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentThemeIndex;
}
constexpr void Oculus::Interaction::UIThemeManager::__cordl_internal_set__currentThemeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentThemeIndex = value;
}
inline ::ArrayW<::UnityW<::Oculus::Interaction::UITheme>> Oculus::Interaction::UIThemeManager::get_Themes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"get_Themes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::Oculus::Interaction::UITheme>>>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::UIThemeManager::get_CurrentThemeIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"get_CurrentThemeIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UIThemeManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UIThemeManager::ApplyCurrentTheme()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"ApplyCurrentTheme", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UIThemeManager::ApplyTheme(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {"ApplyTheme", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Oculus::Interaction::UIThemeManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UIThemeManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UIThemeManager* Oculus::Interaction::UIThemeManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UIThemeManager*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UIThemeManager::UIThemeManager()   {
}
