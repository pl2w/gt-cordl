#pragma once
// IWYU pragma private; include "GlobalNamespace/GRCollectibleDispenser.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRCollectibleDispenser_def.hpp"
#include "GlobalNamespace/zzzz__GRCollectible_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRCollectibleDispenser.get_CollectibleAlreadySpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRCollectibleDispenser::*)()>(&::GlobalNamespace::GRCollectibleDispenser::get_CollectibleAlreadySpawned)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5874acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"get_CollectibleAlreadySpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCollectibleDispenser.get_ReadyToDispenseNewCollectible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRCollectibleDispenser::*)()>(&::GlobalNamespace::GRCollectibleDispenser::get_ReadyToDispenseNewCollectible)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5874b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"get_ReadyToDispenseNewCollectible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCollectibleDispenser.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCollectibleDispenser::*)()>(&::GlobalNamespace::GRCollectibleDispenser::OnEntityInit)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5874bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCollectibleDispenser.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCollectibleDispenser::*)()>(&::GlobalNamespace::GRCollectibleDispenser::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5874d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCollectibleDispenser.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCollectibleDispenser::*)(int64_t, int64_t)>(&::GlobalNamespace::GRCollectibleDispenser::OnEntityStateChange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5874e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCollectibleDispenser.RequestDispenseCollectible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCollectibleDispenser::*)()>(&::GlobalNamespace::GRCollectibleDispenser::RequestDispenseCollectible)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5874ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"RequestDispenseCollectible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCollectibleDispenser.OnCollectibleConsumed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCollectibleDispenser::*)()>(&::GlobalNamespace::GRCollectibleDispenser::OnCollectibleConsumed)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5875018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"OnCollectibleConsumed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCollectibleDispenser.GetSpawnedCollectible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCollectibleDispenser::*)(::GlobalNamespace::GRCollectible*)>(&::GlobalNamespace::GRCollectibleDispenser::GetSpawnedCollectible)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5874934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"GetSpawnedCollectible", {}, {::i2c::type_of<::GlobalNamespace::GRCollectible*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRCollectibleDispenser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRCollectibleDispenser::*)()>(&::GlobalNamespace::GRCollectibleDispenser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58752f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectiblePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectiblePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectiblePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectiblePrefab;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectiblePrefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectiblePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_spawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_spawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_spawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnLocation = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleLayerMask;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectibleLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleLayerMask = value;
}
constexpr float_t& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleRespawnTimeMinutes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleRespawnTimeMinutes;
}
constexpr float_t const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleRespawnTimeMinutes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleRespawnTimeMinutes;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectibleRespawnTimeMinutes(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleRespawnTimeMinutes = value;
}
constexpr int32_t& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_maxDispenseCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDispenseCount;
}
constexpr int32_t const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_maxDispenseCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDispenseCount;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_maxDispenseCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDispenseCount = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_stillDispensingModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stillDispensingModel;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_stillDispensingModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stillDispensingModel;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_stillDispensingModel(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stillDispensingModel = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_fullyConsumedModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullyConsumedModel;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_fullyConsumedModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullyConsumedModel;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_fullyConsumedModel(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullyConsumedModel = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleTakenEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleTakenEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleTakenEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleTakenEffect;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectibleTakenEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleTakenEffect = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleTakenClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleTakenClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleTakenClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleTakenClip;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectibleTakenClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleTakenClip = value;
}
constexpr float_t& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleTakenVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleTakenVolume;
}
constexpr float_t const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleTakenVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleTakenVolume;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectibleTakenVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleTakenVolume = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_dispenserExhaustedEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserExhaustedEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_dispenserExhaustedEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserExhaustedEffect;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_dispenserExhaustedEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenserExhaustedEffect = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_dispenserExhaustedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserExhaustedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_dispenserExhaustedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserExhaustedClip;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_dispenserExhaustedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenserExhaustedClip = value;
}
constexpr float_t& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_dispenserExhaustedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserExhaustedVolume;
}
constexpr float_t const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_dispenserExhaustedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dispenserExhaustedVolume;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_dispenserExhaustedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dispenserExhaustedVolume = value;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible>& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_currentCollectible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCollectible;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_currentCollectible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCollectible;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_currentCollectible(::UnityW<::GlobalNamespace::GRCollectible>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCollectible = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_getSpawnedCollectibleCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getSpawnedCollectibleCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_getSpawnedCollectibleCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getSpawnedCollectibleCoroutine;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_getSpawnedCollectibleCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getSpawnedCollectibleCoroutine = value;
}
constexpr uint32_t& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectiblesDispensed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectiblesDispensed;
}
constexpr uint32_t const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectiblesDispensed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectiblesDispensed;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectiblesDispensed(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectiblesDispensed = value;
}
constexpr uint32_t& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectiblesCollected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectiblesCollected;
}
constexpr uint32_t const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectiblesCollected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectiblesCollected;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectiblesCollected(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectiblesCollected = value;
}
constexpr double_t& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleDispenseRequestTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDispenseRequestTime;
}
constexpr double_t const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleDispenseRequestTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDispenseRequestTime;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectibleDispenseRequestTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleDispenseRequestTime = value;
}
constexpr double_t& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleDispenseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDispenseTime;
}
constexpr double_t const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleDispenseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDispenseTime;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectibleDispenseTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleDispenseTime = value;
}
constexpr double_t& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleCollectedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleCollectedTime;
}
constexpr double_t const& GlobalNamespace::GRCollectibleDispenser::__cordl_internal_get_collectibleCollectedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleCollectedTime;
}
constexpr void GlobalNamespace::GRCollectibleDispenser::__cordl_internal_set_collectibleCollectedTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleCollectedTime = value;
}
inline void GlobalNamespace::GRCollectibleDispenser::setStaticF_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "overlapColliders", ::GlobalNamespace::GRCollectibleDispenser*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> GlobalNamespace::GRCollectibleDispenser::getStaticF_overlapColliders()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "overlapColliders", ::GlobalNamespace::GRCollectibleDispenser*>();
}
inline bool GlobalNamespace::GRCollectibleDispenser::get_CollectibleAlreadySpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"get_CollectibleAlreadySpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRCollectibleDispenser::get_ReadyToDispenseNewCollectible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"get_ReadyToDispenseNewCollectible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRCollectibleDispenser::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRCollectibleDispenser::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRCollectibleDispenser::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GRCollectibleDispenser::RequestDispenseCollectible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"RequestDispenseCollectible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRCollectibleDispenser::OnCollectibleConsumed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"OnCollectibleConsumed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRCollectibleDispenser::GetSpawnedCollectible(::GlobalNamespace::GRCollectible*  collectible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {"GetSpawnedCollectible", {}, {::i2c::type_of<::GlobalNamespace::GRCollectible*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectible);
}
inline void GlobalNamespace::GRCollectibleDispenser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRCollectibleDispenser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRCollectibleDispenser* GlobalNamespace::GRCollectibleDispenser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRCollectibleDispenser*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRCollectibleDispenser::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRCollectibleDispenser::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRCollectibleDispenser::GRCollectibleDispenser()   {
}
