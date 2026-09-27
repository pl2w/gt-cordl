#pragma once
// IWYU pragma private; include "GlobalNamespace/FirstPersonToggleOverride.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FirstPersonToggleOverride_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FirstPersonToggleOverride.get_Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FirstPersonToggleOverride::*)()>(&::GlobalNamespace::FirstPersonToggleOverride::get_Toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x570599c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FirstPersonToggleOverride*>(),
                        {"get_Toggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonToggleOverride.get_Renderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Renderer> (::GlobalNamespace::FirstPersonToggleOverride::*)()>(&::GlobalNamespace::FirstPersonToggleOverride::get_Renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57059a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FirstPersonToggleOverride*>(),
                        {"get_Renderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FirstPersonToggleOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FirstPersonToggleOverride::*)()>(&::GlobalNamespace::FirstPersonToggleOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57059ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FirstPersonToggleOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::FirstPersonToggleOverride::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::FirstPersonToggleOverride::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void GlobalNamespace::FirstPersonToggleOverride::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr bool& GlobalNamespace::FirstPersonToggleOverride::__cordl_internal_get_toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggle;
}
constexpr bool const& GlobalNamespace::FirstPersonToggleOverride::__cordl_internal_get_toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggle;
}
constexpr void GlobalNamespace::FirstPersonToggleOverride::__cordl_internal_set_toggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggle = value;
}
constexpr bool& GlobalNamespace::FirstPersonToggleOverride::__cordl_internal_get_doNotToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doNotToggle;
}
constexpr bool const& GlobalNamespace::FirstPersonToggleOverride::__cordl_internal_get_doNotToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doNotToggle;
}
constexpr void GlobalNamespace::FirstPersonToggleOverride::__cordl_internal_set_doNotToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doNotToggle = value;
}
inline bool GlobalNamespace::FirstPersonToggleOverride::get_Toggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FirstPersonToggleOverride*>(),
                        {"get_Toggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Renderer> GlobalNamespace::FirstPersonToggleOverride::get_Renderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FirstPersonToggleOverride*>(),
                        {"get_Renderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Renderer>>(this, ___internal_method);
}
inline void GlobalNamespace::FirstPersonToggleOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FirstPersonToggleOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FirstPersonToggleOverride* GlobalNamespace::FirstPersonToggleOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FirstPersonToggleOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FirstPersonToggleOverride::FirstPersonToggleOverride()   {
}
