#pragma once
// IWYU pragma private; include "GlobalNamespace/CanvasGroupAlphaToggle.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CanvasGroupAlphaToggle_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupAlphaToggle.ToggleVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CanvasGroupAlphaToggle::*)()>(&::GlobalNamespace::CanvasGroupAlphaToggle::ToggleVisible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4242fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasGroupAlphaToggle*>(),
                        {"ToggleVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupAlphaToggle.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CanvasGroupAlphaToggle::*)()>(&::GlobalNamespace::CanvasGroupAlphaToggle::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa42430c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasGroupAlphaToggle*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupAlphaToggle.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CanvasGroupAlphaToggle::*)()>(&::GlobalNamespace::CanvasGroupAlphaToggle::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa424310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasGroupAlphaToggle*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CanvasGroupAlphaToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CanvasGroupAlphaToggle::*)()>(&::GlobalNamespace::CanvasGroupAlphaToggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa424394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasGroupAlphaToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::CanvasGroupAlphaToggle::__cordl_internal_get_canvasGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::CanvasGroupAlphaToggle::__cordl_internal_get_canvasGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canvasGroup;
}
constexpr void GlobalNamespace::CanvasGroupAlphaToggle::__cordl_internal_set_canvasGroup(::UnityW<::UnityEngine::CanvasGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canvasGroup = value;
}
constexpr float_t& GlobalNamespace::CanvasGroupAlphaToggle::__cordl_internal_get_animationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr float_t const& GlobalNamespace::CanvasGroupAlphaToggle::__cordl_internal_get_animationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationSpeed;
}
constexpr void GlobalNamespace::CanvasGroupAlphaToggle::__cordl_internal_set_animationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationSpeed = value;
}
constexpr bool& GlobalNamespace::CanvasGroupAlphaToggle::__cordl_internal_get_visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr bool const& GlobalNamespace::CanvasGroupAlphaToggle::__cordl_internal_get_visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visible;
}
constexpr void GlobalNamespace::CanvasGroupAlphaToggle::__cordl_internal_set_visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visible = value;
}
inline void GlobalNamespace::CanvasGroupAlphaToggle::ToggleVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasGroupAlphaToggle*>(),
                        {"ToggleVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CanvasGroupAlphaToggle::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasGroupAlphaToggle*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CanvasGroupAlphaToggle::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasGroupAlphaToggle*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CanvasGroupAlphaToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CanvasGroupAlphaToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CanvasGroupAlphaToggle* GlobalNamespace::CanvasGroupAlphaToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CanvasGroupAlphaToggle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CanvasGroupAlphaToggle::CanvasGroupAlphaToggle()   {
}
