#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/SpawnWorldEffects.hpp"
#include "GorillaTag/Reactions/zzzz__SpawnWorldEffects_TransformAxis_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Reactions/zzzz__SpawnWorldEffects_def.hpp"
#include "GlobalNamespace/zzzz__SinglePool_def.hpp"
#include "GorillaTag/Reactions/zzzz__SpawnWorldEffects_TransformAxis_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Reactions::SpawnWorldEffects.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::SpawnWorldEffects::*)()>(&::GorillaTag::Reactions::SpawnWorldEffects::OnEnable)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5d41bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::SpawnWorldEffects.RequestSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::SpawnWorldEffects::*)(::UnityEngine::Vector3)>(&::GorillaTag::Reactions::SpawnWorldEffects::RequestSpawn)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d41ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"RequestSpawn", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::SpawnWorldEffects.RequestSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::SpawnWorldEffects::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::Reactions::SpawnWorldEffects::RequestSpawn)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5d41f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"RequestSpawn", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::SpawnWorldEffects.GetAxisVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::GlobalNamespace::SpawnWorldEffects_TransformAxis)>(&::GorillaTag::Reactions::SpawnWorldEffects::GetAxisVector)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d42688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"GetAxisVector", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::SpawnWorldEffects_TransformAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::SpawnWorldEffects.TryGetSurfaceNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Reactions::SpawnWorldEffects::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaTag::Reactions::SpawnWorldEffects::TryGetSurfaceNormal)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5d422c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"TryGetSurfaceNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::SpawnWorldEffects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::SpawnWorldEffects::*)()>(&::GorillaTag::Reactions::SpawnWorldEffects::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d42734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__maxParticleHitReactionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxParticleHitReactionRate;
}
constexpr float_t const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__maxParticleHitReactionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxParticleHitReactionRate;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__maxParticleHitReactionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxParticleHitReactionRate = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__prefabToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefabToSpawn;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__prefabToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefabToSpawn;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__prefabToSpawn(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prefabToSpawn = value;
}
constexpr bool& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__useNormalOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useNormalOrientation;
}
constexpr bool const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__useNormalOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useNormalOrientation;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__useNormalOrientation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useNormalOrientation = value;
}
constexpr bool& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__requireSurfaceLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireSurfaceLayer;
}
constexpr bool const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__requireSurfaceLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireSurfaceLayer;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__requireSurfaceLayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requireSurfaceLayer = value;
}
constexpr float_t& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__normalRaycastDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalRaycastDistance;
}
constexpr float_t const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__normalRaycastDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalRaycastDistance;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__normalRaycastDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalRaycastDistance = value;
}
constexpr ::UnityEngine::LayerMask& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__normalRaycastLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalRaycastLayers;
}
constexpr ::UnityEngine::LayerMask const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__normalRaycastLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalRaycastLayers;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__normalRaycastLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalRaycastLayers = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__raycastDirectionSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastDirectionSource;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__raycastDirectionSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastDirectionSource;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__raycastDirectionSource(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastDirectionSource = value;
}
constexpr bool& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__raycastDirectionUseNegativeForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastDirectionUseNegativeForward;
}
constexpr bool const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__raycastDirectionUseNegativeForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastDirectionUseNegativeForward;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__raycastDirectionUseNegativeForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastDirectionUseNegativeForward = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__forwardOrientationSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardOrientationSource;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__forwardOrientationSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardOrientationSource;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__forwardOrientationSource(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardOrientationSource = value;
}
constexpr ::GlobalNamespace::SpawnWorldEffects_TransformAxis& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__forwardSourceAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardSourceAxis;
}
constexpr ::GlobalNamespace::SpawnWorldEffects_TransformAxis const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__forwardSourceAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardSourceAxis;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__forwardSourceAxis(::GlobalNamespace::SpawnWorldEffects_TransformAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardSourceAxis = value;
}
constexpr bool& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__hasPrefabToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPrefabToSpawn;
}
constexpr bool const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__hasPrefabToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPrefabToSpawn;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__hasPrefabToSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasPrefabToSpawn = value;
}
constexpr bool& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__isPrefabInPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPrefabInPool;
}
constexpr bool const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__isPrefabInPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPrefabInPool;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__isPrefabInPool(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPrefabInPool = value;
}
constexpr double_t& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__lastCollisionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCollisionTime;
}
constexpr double_t const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__lastCollisionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastCollisionTime;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__lastCollisionTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastCollisionTime = value;
}
constexpr ::GlobalNamespace::SinglePool*& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr ::GlobalNamespace::SinglePool* const& GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr void GorillaTag::Reactions::SpawnWorldEffects::__cordl_internal_set__pool(::GlobalNamespace::SinglePool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
inline void GorillaTag::Reactions::SpawnWorldEffects::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::SpawnWorldEffects::RequestSpawn(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"RequestSpawn", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPosition);
}
inline void GorillaTag::Reactions::SpawnWorldEffects::RequestSpawn(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"RequestSpawn", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPosition, normal);
}
inline ::UnityEngine::Vector3 GorillaTag::Reactions::SpawnWorldEffects::GetAxisVector(::UnityEngine::Transform*  source, ::GlobalNamespace::SpawnWorldEffects_TransformAxis  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"GetAxisVector", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::SpawnWorldEffects_TransformAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, source, axis);
}
inline bool GorillaTag::Reactions::SpawnWorldEffects::TryGetSurfaceNormal(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Vector3  hitNormal, ::by_ref<::UnityEngine::Vector3>  surfaceNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {"TryGetSurfaceNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, worldPosition, hitNormal, surfaceNormal);
}
inline void GorillaTag::Reactions::SpawnWorldEffects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::SpawnWorldEffects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Reactions::SpawnWorldEffects* GorillaTag::Reactions::SpawnWorldEffects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Reactions::SpawnWorldEffects*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Reactions::SpawnWorldEffects::SpawnWorldEffects()   {
}
