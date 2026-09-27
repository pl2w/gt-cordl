#pragma once
// IWYU pragma private; include "GlobalNamespace/GeodeItem.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__GeodeItem_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeItem::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GeodeItem::OnSpawn)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5758cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                    {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeItem::*)()>(&::GlobalNamespace::GeodeItem::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5758d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                    {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.ResetToDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeItem::*)()>(&::GlobalNamespace::GeodeItem::ResetToDefaultState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5758e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                    {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GeodeItem::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::GeodeItem::OnRelease)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5758e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                    {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeItem::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::GeodeItem::OnGrab)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5758e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                    {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.InitToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeItem::*)()>(&::GlobalNamespace::GeodeItem::InitToDefault)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5758d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                        {"InitToDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeItem::*)()>(&::GlobalNamespace::GeodeItem::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5758ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                    {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeItem::*)()>(&::GlobalNamespace::GeodeItem::LateUpdateShared)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5759594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                    {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.OnItemStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeItem::*)()>(&::GlobalNamespace::GeodeItem::OnItemStateChanged)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x57591ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                        {"OnItemStateChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem.RandomPickCrackedGeode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GeodeItem::*)()>(&::GlobalNamespace::GeodeItem::RandomPickCrackedGeode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5759574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                        {"RandomPickCrackedGeode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeItem::*)()>(&::GlobalNamespace::GeodeItem::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57595d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GeodeItem::__cordl_internal_get_effectsGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GeodeItem::__cordl_internal_get_effectsGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsGameObject;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_effectsGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectsGameObject = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GeodeItem::__cordl_internal_get_collisionLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GeodeItem::__cordl_internal_get_collisionLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionLayerMask;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_collisionLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionLayerMask = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::GeodeItem::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::GeodeItem::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr float_t& GlobalNamespace::GeodeItem::__cordl_internal_get_cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr float_t const& GlobalNamespace::GeodeItem::__cordl_internal_get_cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldown = value;
}
constexpr float_t& GlobalNamespace::GeodeItem::__cordl_internal_get_minHitVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHitVelocity;
}
constexpr float_t const& GlobalNamespace::GeodeItem::__cordl_internal_get_minHitVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHitVelocity;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_minHitVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minHitVelocity = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GeodeItem::__cordl_internal_get_geodeFullMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geodeFullMesh;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GeodeItem::__cordl_internal_get_geodeFullMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geodeFullMesh;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_geodeFullMesh(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___geodeFullMesh = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GeodeItem::__cordl_internal_get_geodeCrackedMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geodeCrackedMeshes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GeodeItem::__cordl_internal_get_geodeCrackedMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___geodeCrackedMeshes;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_geodeCrackedMeshes(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___geodeCrackedMeshes = value;
}
constexpr float_t& GlobalNamespace::GeodeItem::__cordl_internal_get_rayCastMaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastMaxDistance;
}
constexpr float_t const& GlobalNamespace::GeodeItem::__cordl_internal_get_rayCastMaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastMaxDistance;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_rayCastMaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastMaxDistance = value;
}
constexpr float_t& GlobalNamespace::GeodeItem::__cordl_internal_get_sphereRayRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereRayRadius;
}
constexpr float_t const& GlobalNamespace::GeodeItem::__cordl_internal_get_sphereRayRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereRayRadius;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_sphereRayRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sphereRayRadius = value;
}
constexpr float_t& GlobalNamespace::GeodeItem::__cordl_internal_get_cooldownRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownRemaining;
}
constexpr float_t const& GlobalNamespace::GeodeItem::__cordl_internal_get_cooldownRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownRemaining;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_cooldownRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownRemaining = value;
}
constexpr bool& GlobalNamespace::GeodeItem::__cordl_internal_get_hitLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitLastFrame;
}
constexpr bool const& GlobalNamespace::GeodeItem::__cordl_internal_get_hitLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitLastFrame;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_hitLastFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitLastFrame = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GeodeItem::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GeodeItem::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr bool& GlobalNamespace::GeodeItem::__cordl_internal_get_randomizeGeode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizeGeode;
}
constexpr bool const& GlobalNamespace::GeodeItem::__cordl_internal_get_randomizeGeode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizeGeode;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_randomizeGeode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomizeGeode = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*& GlobalNamespace::GeodeItem::__cordl_internal_get_OnGeodeCracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGeodeCracked;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>* const& GlobalNamespace::GeodeItem::__cordl_internal_get_OnGeodeCracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGeodeCracked;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_OnGeodeCracked(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGeodeCracked = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*& GlobalNamespace::GeodeItem::__cordl_internal_get_OnGeodeGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGeodeGrabbed;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>* const& GlobalNamespace::GeodeItem::__cordl_internal_get_OnGeodeGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGeodeGrabbed;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_OnGeodeGrabbed(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGeodeGrabbed = value;
}
constexpr bool& GlobalNamespace::GeodeItem::__cordl_internal_get_hasEffectsGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasEffectsGameObject;
}
constexpr bool const& GlobalNamespace::GeodeItem::__cordl_internal_get_hasEffectsGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasEffectsGameObject;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_hasEffectsGameObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasEffectsGameObject = value;
}
constexpr bool& GlobalNamespace::GeodeItem::__cordl_internal_get_effectsHaveBeenPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsHaveBeenPlayed;
}
constexpr bool const& GlobalNamespace::GeodeItem::__cordl_internal_get_effectsHaveBeenPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsHaveBeenPlayed;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_effectsHaveBeenPlayed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectsHaveBeenPlayed = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::GeodeItem::__cordl_internal_get_hit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::GeodeItem::__cordl_internal_get_hit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_hit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hit = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::GeodeItem::__cordl_internal_get_collidersHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHit;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::GeodeItem::__cordl_internal_get_collidersHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersHit;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_collidersHit(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersHit = value;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates& GlobalNamespace::GeodeItem::__cordl_internal_get_currentItemState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentItemState;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& GlobalNamespace::GeodeItem::__cordl_internal_get_currentItemState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentItemState;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_currentItemState(::GlobalNamespace::TransferrableObject_ItemStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentItemState = value;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates& GlobalNamespace::GeodeItem::__cordl_internal_get_prevItemState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevItemState;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& GlobalNamespace::GeodeItem::__cordl_internal_get_prevItemState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevItemState;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_prevItemState(::GlobalNamespace::TransferrableObject_ItemStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevItemState = value;
}
constexpr int32_t& GlobalNamespace::GeodeItem::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::GeodeItem::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::GeodeItem::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void GlobalNamespace::GeodeItem::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::GeodeItem::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeItem::ResetToDefaultState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GeodeItem::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::GeodeItem::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::GeodeItem::InitToDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                        {"InitToDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeItem::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeItem::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GeodeItem*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeItem::OnItemStateChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                        {"OnItemStateChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GeodeItem::RandomPickCrackedGeode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                        {"RandomPickCrackedGeode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GeodeItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GeodeItem* GlobalNamespace::GeodeItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GeodeItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GeodeItem::GeodeItem()   {
}
