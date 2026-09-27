#pragma once
// IWYU pragma private; include "GlobalNamespace/GliderWindVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GliderWindVolume_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GliderWindVolume.SetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderWindVolume::*)(float_t, float_t, ::UnityEngine::AnimationCurve*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GliderWindVolume::SetProperties)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5abb830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderWindVolume*>(),
                        {"SetProperties", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderWindVolume.get_WindDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GliderWindVolume::*)()>(&::GlobalNamespace::GliderWindVolume::get_WindDirection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5aba800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderWindVolume*>(),
                        {"get_WindDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderWindVolume.GetAccelFromVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GliderWindVolume::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GliderWindVolume::GetAccelFromVelocity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5aba764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderWindVolume*>(),
                        {"GetAccelFromVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderWindVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderWindVolume::*)()>(&::GlobalNamespace::GliderWindVolume::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5abb87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderWindVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GliderWindVolume::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GlobalNamespace::GliderWindVolume::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GlobalNamespace::GliderWindVolume::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& GlobalNamespace::GliderWindVolume::__cordl_internal_get_maxAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAccel;
}
constexpr float_t const& GlobalNamespace::GliderWindVolume::__cordl_internal_get_maxAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAccel;
}
constexpr void GlobalNamespace::GliderWindVolume::__cordl_internal_set_maxAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAccel = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GliderWindVolume::__cordl_internal_get_speedVsAccelCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedVsAccelCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GliderWindVolume::__cordl_internal_get_speedVsAccelCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedVsAccelCurve;
}
constexpr void GlobalNamespace::GliderWindVolume::__cordl_internal_set_speedVsAccelCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedVsAccelCurve = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderWindVolume::__cordl_internal_get_localWindDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localWindDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderWindVolume::__cordl_internal_get_localWindDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localWindDirection;
}
constexpr void GlobalNamespace::GliderWindVolume::__cordl_internal_set_localWindDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localWindDirection = value;
}
inline void GlobalNamespace::GliderWindVolume::SetProperties(float_t  speed, float_t  accel, ::UnityEngine::AnimationCurve*  svaCurve, ::UnityEngine::Vector3  windDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderWindVolume*>(),
                        {"SetProperties", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed, accel, svaCurve, windDirection);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GliderWindVolume::get_WindDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderWindVolume*>(),
                        {"get_WindDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GliderWindVolume::GetAccelFromVelocity(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderWindVolume*>(),
                        {"GetAccelFromVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, velocity);
}
inline void GlobalNamespace::GliderWindVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderWindVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GliderWindVolume* GlobalNamespace::GliderWindVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GliderWindVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GliderWindVolume::GliderWindVolume()   {
}
