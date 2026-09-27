#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/UnderwaterParticleEffects.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Swimming/zzzz__UnderwaterParticleEffects_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_SurfaceQuery_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Swimming::UnderwaterParticleEffects.UpdateParticleEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::UnderwaterParticleEffects::*)(bool, ::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>)>(&::GorillaLocomotion::Swimming::UnderwaterParticleEffects::UpdateParticleEffect)> {
  constexpr static std::size_t size = 0xc68;
  constexpr static std::size_t addrs = 0x5ce22b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::UnderwaterParticleEffects*>(),
                        {"UpdateParticleEffect", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::UnderwaterParticleEffects.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Swimming::UnderwaterParticleEffects::*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::Swimming::UnderwaterParticleEffects::IsValid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ce31d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::UnderwaterParticleEffects*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Swimming::UnderwaterParticleEffects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Swimming::UnderwaterParticleEffects::*)()>(&::GorillaLocomotion::Swimming::UnderwaterParticleEffects::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ce3214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::UnderwaterParticleEffects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_underwaterFloaterParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underwaterFloaterParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_underwaterFloaterParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underwaterFloaterParticles;
}
constexpr void GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_set_underwaterFloaterParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___underwaterFloaterParticles = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_underwaterBubbleParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underwaterBubbleParticles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_underwaterBubbleParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___underwaterBubbleParticles;
}
constexpr void GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_set_underwaterBubbleParticles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___underwaterBubbleParticles = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_playerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_playerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCamera;
}
constexpr void GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_set_playerCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCamera = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_floaterParticleBoxExtents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floaterParticleBoxExtents;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_floaterParticleBoxExtents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floaterParticleBoxExtents;
}
constexpr void GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_set_floaterParticleBoxExtents(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floaterParticleBoxExtents = value;
}
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_floaterParticleBaseOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floaterParticleBaseOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_floaterParticleBaseOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floaterParticleBaseOffset;
}
constexpr void GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_set_floaterParticleBaseOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floaterParticleBaseOffset = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_floaterSpeedVsOffsetDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floaterSpeedVsOffsetDist;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_floaterSpeedVsOffsetDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floaterSpeedVsOffsetDist;
}
constexpr void GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_set_floaterSpeedVsOffsetDist(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floaterSpeedVsOffsetDist = value;
}
constexpr ::UnityEngine::Vector2& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_floaterSpeedVsOffsetDistMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floaterSpeedVsOffsetDistMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_floaterSpeedVsOffsetDistMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___floaterSpeedVsOffsetDistMinMax;
}
constexpr void GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_set_floaterSpeedVsOffsetDistMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___floaterSpeedVsOffsetDistMinMax = value;
}
constexpr bool& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_debugDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr bool const& GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_get_debugDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr void GorillaLocomotion::Swimming::UnderwaterParticleEffects::__cordl_internal_set_debugDraw(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDraw = value;
}
inline void GorillaLocomotion::Swimming::UnderwaterParticleEffects::UpdateParticleEffect(bool  waterSurfaceDetected, ::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>  waterSurface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::UnderwaterParticleEffects*>(),
                        {"UpdateParticleEffect", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waterSurfaceDetected, waterSurface);
}
inline bool GorillaLocomotion::Swimming::UnderwaterParticleEffects::IsValid(::UnityEngine::Vector3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::UnderwaterParticleEffects*>(),
                        {"IsValid", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vector);
}
inline void GorillaLocomotion::Swimming::UnderwaterParticleEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Swimming::UnderwaterParticleEffects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Swimming::UnderwaterParticleEffects* GorillaLocomotion::Swimming::UnderwaterParticleEffects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Swimming::UnderwaterParticleEffects*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Swimming::UnderwaterParticleEffects::UnderwaterParticleEffects()   {
}
