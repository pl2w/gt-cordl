#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectileTrail.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileTrail_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__TrailRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileTrail.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectileTrail::*)()>(&::GlobalNamespace::SlingshotProjectileTrail::Awake)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x573cda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileTrail.AttachTrail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectileTrail::*)(::UnityEngine::GameObject*, bool, bool, bool, ::UnityEngine::Color)>(&::GlobalNamespace::SlingshotProjectileTrail::AttachTrail)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x573cdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {"AttachTrail", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileTrail.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectileTrail::*)()>(&::GlobalNamespace::SlingshotProjectileTrail::LateUpdate)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x573cfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileTrail.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectileTrail::*)(::UnityEngine::Color)>(&::GlobalNamespace::SlingshotProjectileTrail::SetColor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x573cf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileTrail._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectileTrail::*)()>(&::GlobalNamespace::SlingshotProjectileTrail::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x573d1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TrailRenderer>& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_trailRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailRenderer;
}
constexpr ::UnityW<::UnityEngine::TrailRenderer> const& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_trailRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailRenderer;
}
constexpr void GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_set_trailRenderer(::UnityW<::UnityEngine::TrailRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailRenderer = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_defaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_defaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr void GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_set_defaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_orangeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orangeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_orangeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orangeColor;
}
constexpr void GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_set_orangeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orangeColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_blueColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_blueColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueColor;
}
constexpr void GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_set_blueColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueColor = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_followObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_followObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followObject;
}
constexpr void GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_set_followObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followObject = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_followXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_followXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followXform;
}
constexpr void GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_set_followXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followXform = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_timeToDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToDie;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_timeToDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToDie;
}
constexpr void GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_set_timeToDie(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToDie = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_initialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScale;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_initialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScale;
}
constexpr void GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_set_initialScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialScale = value;
}
constexpr float_t& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_initialWidthMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialWidthMultiplier;
}
constexpr float_t const& GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_get_initialWidthMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialWidthMultiplier;
}
constexpr void GlobalNamespace::SlingshotProjectileTrail::__cordl_internal_set_initialWidthMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialWidthMultiplier = value;
}
inline void GlobalNamespace::SlingshotProjectileTrail::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectileTrail::AttachTrail(::UnityEngine::GameObject*  obj, bool  blueTeam, bool  redTeam, bool  shouldOverrideColor, ::UnityEngine::Color  overrideColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {"AttachTrail", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, blueTeam, redTeam, shouldOverrideColor, overrideColor);
}
inline void GlobalNamespace::SlingshotProjectileTrail::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectileTrail::SetColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {"SetColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::SlingshotProjectileTrail::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileTrail*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotProjectileTrail* GlobalNamespace::SlingshotProjectileTrail::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotProjectileTrail*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotProjectileTrail::SlingshotProjectileTrail()   {
}
