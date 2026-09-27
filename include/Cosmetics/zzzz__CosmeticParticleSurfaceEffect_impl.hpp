#pragma once
// IWYU pragma private; include "Cosmetics/CosmeticParticleSurfaceEffect.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Cosmetics/zzzz__CosmeticParticleSurfaceEffect_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__SeedPacketTriggerHandler_def.hpp"
#include "GlobalNamespace/zzzz__SinglePool_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5d1834c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::OnEnable)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x5d18400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::OnDisable)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5d188e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d18d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.StartParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::StartParticles)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d18dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"StartParticles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.StopParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::StopParticles)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d18c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"StopParticles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d18e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)(bool)>(&::Cosmetics::CosmeticParticleSurfaceEffect::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d18e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::Tick)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5d18ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.SpawnEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::SpawnEffect)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5d191c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"SpawnEffect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.OnSpawnReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Cosmetics::CosmeticParticleSurfaceEffect::OnSpawnReplicated)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5d1977c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnSpawnReplicated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.SpawnLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(&::Cosmetics::CosmeticParticleSurfaceEffect::SpawnLocal)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5d194c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"SpawnLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.ClearOldObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::ClearOldObjects)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5d19aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"ClearOldObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.OnTriggerEffectLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)(::GlobalNamespace::SeedPacketTriggerHandler*)>(&::Cosmetics::CosmeticParticleSurfaceEffect::OnTriggerEffectLocal)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5d19cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnTriggerEffectLocal", {}, {::i2c::type_of<::GlobalNamespace::SeedPacketTriggerHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect.OnTriggerEffectReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Cosmetics::CosmeticParticleSurfaceEffect::OnTriggerEffectReplicated)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5d19f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnTriggerEffectReplicated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CosmeticParticleSurfaceEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CosmeticParticleSurfaceEffect::*)()>(&::Cosmetics::CosmeticParticleSurfaceEffect::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5d1a1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_stopAfterSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopAfterSeconds;
}
constexpr float_t const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_stopAfterSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopAfterSeconds;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_stopAfterSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopAfterSeconds = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_particles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_particles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particles = value;
}
constexpr float_t& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_rayCastDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastDistance;
}
constexpr float_t const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_rayCastDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastDistance;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_rayCastDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_rayCastOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_rayCastOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastOrigin;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_rayCastOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastOrigin = value;
}
constexpr bool& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_useWorldDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldDirection;
}
constexpr bool const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_useWorldDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWorldDirection;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_useWorldDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useWorldDirection = value;
}
constexpr ::UnityEngine::Vector3& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_worldDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldDirection;
}
constexpr ::UnityEngine::Vector3 const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_worldDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldDirection;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_worldDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldDirection = value;
}
constexpr ::UnityEngine::LayerMask& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_rayCastLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastLayerMask;
}
constexpr ::UnityEngine::LayerMask const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_rayCastLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastLayerMask;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_rayCastLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_surfaceEffectPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffectPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_surfaceEffectPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffectPrefab;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_surfaceEffectPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceEffectPrefab = value;
}
constexpr float_t& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_placeEffectDelayMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeEffectDelayMultiplier;
}
constexpr float_t const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_placeEffectDelayMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeEffectDelayMultiplier;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_placeEffectDelayMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeEffectDelayMultiplier = value;
}
constexpr float_t& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_placeEffectCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeEffectCooldown;
}
constexpr float_t const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_placeEffectCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placeEffectCooldown;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_placeEffectCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placeEffectCooldown = value;
}
constexpr float_t& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_particleStartedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleStartedTime;
}
constexpr float_t const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_particleStartedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleStartedTime;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_particleStartedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleStartedTime = value;
}
constexpr bool& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_isSpawning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSpawning;
}
constexpr bool const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_isSpawning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSpawning;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_isSpawning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSpawning = value;
}
constexpr float_t& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_lastHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr float_t const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_lastHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_lastHitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitTime = value;
}
constexpr ::UnityEngine::RaycastHit& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_hitPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitPoint;
}
constexpr ::UnityEngine::RaycastHit const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_hitPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitPoint;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_hitPoint(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitPoint = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hits = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_transferrableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_transferrableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableObject;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableObject = value;
}
constexpr bool& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_isLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr bool const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_isLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLocal;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_isLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLocal = value;
}
constexpr ::GlobalNamespace::NetPlayer*& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::GlobalNamespace::NetPlayer* const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
constexpr int32_t& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_surfaceEffectHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffectHash;
}
constexpr int32_t const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_surfaceEffectHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffectHash;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_surfaceEffectHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceEffectHash = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::GlobalNamespace::CallLimiter*& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_spawnCallLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCallLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_spawnCallLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnCallLimiter;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_spawnCallLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnCallLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_destroyCallLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyCallLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_destroyCallLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyCallLimiter;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_destroyCallLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyCallLimiter = value;
}
constexpr ::GlobalNamespace::SinglePool*& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get__pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr ::GlobalNamespace::SinglePool* const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get__pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pool;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set__pool(::GlobalNamespace::SinglePool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pool = value;
}
constexpr bool& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_foundPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundPool;
}
constexpr bool const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_foundPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foundPool;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_foundPool(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foundPool = value;
}
constexpr int32_t& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_currentEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEffect;
}
constexpr int32_t const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_currentEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEffect;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_currentEffect(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentEffect = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_surfaceEffectNum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffectNum;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_surfaceEffectNum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffectNum;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_surfaceEffectNum(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceEffectNum = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_surfaceEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>* const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get_surfaceEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceEffects;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set_surfaceEffects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceEffects = value;
}
constexpr bool& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void Cosmetics::CosmeticParticleSurfaceEffect::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::StartParticles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"StartParticles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::StopParticles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"StopParticles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Cosmetics::CosmeticParticleSurfaceEffect::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::SpawnEffect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"SpawnEffect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::OnSpawnReplicated(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnSpawnReplicated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::SpawnLocal(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, int32_t  identifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"SpawnLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, up, identifier);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::ClearOldObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"ClearOldObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::OnTriggerEffectLocal(::GlobalNamespace::SeedPacketTriggerHandler*  seedPacketTriggerHandlerTriggerHandlerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnTriggerEffectLocal", {}, {::i2c::type_of<::GlobalNamespace::SeedPacketTriggerHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seedPacketTriggerHandlerTriggerHandlerEvent);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::OnTriggerEffectReplicated(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {"OnTriggerEffectReplicated", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void Cosmetics::CosmeticParticleSurfaceEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CosmeticParticleSurfaceEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cosmetics::CosmeticParticleSurfaceEffect* Cosmetics::CosmeticParticleSurfaceEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cosmetics::CosmeticParticleSurfaceEffect*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  Cosmetics::CosmeticParticleSurfaceEffect::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* Cosmetics::CosmeticParticleSurfaceEffect::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cosmetics::CosmeticParticleSurfaceEffect::CosmeticParticleSurfaceEffect()   {
}
