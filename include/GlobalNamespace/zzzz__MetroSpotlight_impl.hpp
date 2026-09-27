#pragma once
// IWYU pragma private; include "GlobalNamespace/MetroSpotlight.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MetroSpotlight_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetroSpotlight.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetroSpotlight::*)()>(&::GlobalNamespace::MetroSpotlight::Tick)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5d09034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroSpotlight*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetroSpotlight.Figure8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::MetroSpotlight::Figure8)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5d09344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroSpotlight*>(),
                        {"Figure8", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetroSpotlight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetroSpotlight::*)()>(&::GlobalNamespace::MetroSpotlight::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d094bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroSpotlight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MetroSpotlight::__cordl_internal_get__blimp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blimp;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MetroSpotlight::__cordl_internal_get__blimp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blimp;
}
constexpr void GlobalNamespace::MetroSpotlight::__cordl_internal_set__blimp(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blimp = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MetroSpotlight::__cordl_internal_get__light()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____light;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MetroSpotlight::__cordl_internal_get__light() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____light;
}
constexpr void GlobalNamespace::MetroSpotlight::__cordl_internal_set__light(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____light = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MetroSpotlight::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MetroSpotlight::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void GlobalNamespace::MetroSpotlight::__cordl_internal_set__target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
constexpr float_t& GlobalNamespace::MetroSpotlight::__cordl_internal_get__radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr float_t const& GlobalNamespace::MetroSpotlight::__cordl_internal_get__radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr void GlobalNamespace::MetroSpotlight::__cordl_internal_set__radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____radius = value;
}
constexpr float_t& GlobalNamespace::MetroSpotlight::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr float_t const& GlobalNamespace::MetroSpotlight::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void GlobalNamespace::MetroSpotlight::__cordl_internal_set__offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr float_t& GlobalNamespace::MetroSpotlight::__cordl_internal_get__theta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____theta;
}
constexpr float_t const& GlobalNamespace::MetroSpotlight::__cordl_internal_get__theta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____theta;
}
constexpr void GlobalNamespace::MetroSpotlight::__cordl_internal_set__theta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____theta = value;
}
constexpr float_t& GlobalNamespace::MetroSpotlight::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::MetroSpotlight::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::MetroSpotlight::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr float_t& GlobalNamespace::MetroSpotlight::__cordl_internal_get__time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr float_t const& GlobalNamespace::MetroSpotlight::__cordl_internal_get__time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr void GlobalNamespace::MetroSpotlight::__cordl_internal_set__time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time = value;
}
inline void GlobalNamespace::MetroSpotlight::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroSpotlight*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MetroSpotlight::Figure8(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  xDir, ::UnityEngine::Vector3  yDir, float_t  scale, float_t  t, float_t  offset, float_t  theta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroSpotlight*>(),
                        {"Figure8", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, origin, xDir, yDir, scale, t, offset, theta);
}
inline void GlobalNamespace::MetroSpotlight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetroSpotlight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetroSpotlight* GlobalNamespace::MetroSpotlight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetroSpotlight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetroSpotlight::MetroSpotlight()   {
}
