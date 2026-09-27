#pragma once
// IWYU pragma private; include "GlobalNamespace/LongScarfSim.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LongScarfSim_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LongScarfSim.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LongScarfSim::*)()>(&::GlobalNamespace::LongScarfSim::Start)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5655c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LongScarfSim*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongScarfSim.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LongScarfSim::*)()>(&::GlobalNamespace::LongScarfSim::LateUpdate)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x5655e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LongScarfSim*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongScarfSim._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LongScarfSim::*)()>(&::GlobalNamespace::LongScarfSim::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56562f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LongScarfSim*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::LongScarfSim::__cordl_internal_get_gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::LongScarfSim::__cordl_internal_get_gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjects = value;
}
constexpr float_t& GlobalNamespace::LongScarfSim::__cordl_internal_get_speedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedThreshold;
}
constexpr float_t const& GlobalNamespace::LongScarfSim::__cordl_internal_get_speedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedThreshold;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_speedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedThreshold = value;
}
constexpr float_t& GlobalNamespace::LongScarfSim::__cordl_internal_get_blendAmountPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendAmountPerSecond;
}
constexpr float_t const& GlobalNamespace::LongScarfSim::__cordl_internal_get_blendAmountPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blendAmountPerSecond;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_blendAmountPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blendAmountPerSecond = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::LongScarfSim::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::LongScarfSim::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& GlobalNamespace::LongScarfSim::__cordl_internal_get_baseLocalRotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& GlobalNamespace::LongScarfSim::__cordl_internal_get_baseLocalRotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLocalRotations;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_baseLocalRotations(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseLocalRotations = value;
}
constexpr float_t& GlobalNamespace::LongScarfSim::__cordl_internal_get_currentBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBlend;
}
constexpr float_t const& GlobalNamespace::LongScarfSim::__cordl_internal_get_currentBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentBlend;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_currentBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentBlend = value;
}
constexpr float_t& GlobalNamespace::LongScarfSim::__cordl_internal_get_centerOfMassLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassLength;
}
constexpr float_t const& GlobalNamespace::LongScarfSim::__cordl_internal_get_centerOfMassLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassLength;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_centerOfMassLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerOfMassLength = value;
}
constexpr float_t& GlobalNamespace::LongScarfSim::__cordl_internal_get_gravityStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr float_t const& GlobalNamespace::LongScarfSim::__cordl_internal_get_gravityStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityStrength;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_gravityStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityStrength = value;
}
constexpr float_t& GlobalNamespace::LongScarfSim::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& GlobalNamespace::LongScarfSim::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LongScarfSim::__cordl_internal_get_clampToPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampToPlane;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LongScarfSim::__cordl_internal_get_clampToPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampToPlane;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_clampToPlane(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clampToPlane = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LongScarfSim::__cordl_internal_get_lastCenterPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCenterPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LongScarfSim::__cordl_internal_get_lastCenterPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCenterPos;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_lastCenterPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCenterPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LongScarfSim::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LongScarfSim::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::LongScarfSim::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
inline void GlobalNamespace::LongScarfSim::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LongScarfSim*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LongScarfSim::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LongScarfSim*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LongScarfSim::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LongScarfSim*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LongScarfSim* GlobalNamespace::LongScarfSim::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LongScarfSim*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LongScarfSim::LongScarfSim()   {
}
