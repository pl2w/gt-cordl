#pragma once
// IWYU pragma private; include "GlobalNamespace/GRCollectibleDispenser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRCollectibleDispenser)
namespace GlobalNamespace {
class GRCollectible;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRCollectibleDispenser;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRCollectibleDispenser*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRCollectibleDispenser*, "", "GRCollectibleDispenser");
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRCollectibleDispenser
class CORDL_TYPE GRCollectibleDispenser : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CollectibleAlreadySpawned)) bool  CollectibleAlreadySpawned;

 __declspec(property(get=get_ReadyToDispenseNewCollectible)) bool  ReadyToDispenseNewCollectible;

/// @brief Field audioSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field collectibleCollectedTime, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectibleCollectedTime, put=__cordl_internal_set_collectibleCollectedTime)) double_t  collectibleCollectedTime;

/// @brief Field collectibleDispenseRequestTime, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectibleDispenseRequestTime, put=__cordl_internal_set_collectibleDispenseRequestTime)) double_t  collectibleDispenseRequestTime;

/// @brief Field collectibleDispenseTime, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectibleDispenseTime, put=__cordl_internal_set_collectibleDispenseTime)) double_t  collectibleDispenseTime;

/// @brief Field collectibleLayerMask, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectibleLayerMask, put=__cordl_internal_set_collectibleLayerMask)) ::UnityEngine::LayerMask  collectibleLayerMask;

/// @brief Field collectiblePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectiblePrefab, put=__cordl_internal_set_collectiblePrefab)) ::UnityW<::GlobalNamespace::GameEntity>  collectiblePrefab;

/// @brief Field collectibleRespawnTimeMinutes, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectibleRespawnTimeMinutes, put=__cordl_internal_set_collectibleRespawnTimeMinutes)) float_t  collectibleRespawnTimeMinutes;

/// @brief Field collectibleTakenClip, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectibleTakenClip, put=__cordl_internal_set_collectibleTakenClip)) ::UnityW<::UnityEngine::AudioClip>  collectibleTakenClip;

/// @brief Field collectibleTakenEffect, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectibleTakenEffect, put=__cordl_internal_set_collectibleTakenEffect)) ::UnityW<::UnityEngine::ParticleSystem>  collectibleTakenEffect;

/// @brief Field collectibleTakenVolume, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectibleTakenVolume, put=__cordl_internal_set_collectibleTakenVolume)) float_t  collectibleTakenVolume;

/// @brief Field collectiblesCollected, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectiblesCollected, put=__cordl_internal_set_collectiblesCollected)) uint32_t  collectiblesCollected;

/// @brief Field collectiblesDispensed, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectiblesDispensed, put=__cordl_internal_set_collectiblesDispensed)) uint32_t  collectiblesDispensed;

/// @brief Field currentCollectible, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentCollectible, put=__cordl_internal_set_currentCollectible)) ::UnityW<::GlobalNamespace::GRCollectible>  currentCollectible;

/// @brief Field dispenserExhaustedClip, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenserExhaustedClip, put=__cordl_internal_set_dispenserExhaustedClip)) ::UnityW<::UnityEngine::AudioClip>  dispenserExhaustedClip;

/// @brief Field dispenserExhaustedEffect, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenserExhaustedEffect, put=__cordl_internal_set_dispenserExhaustedEffect)) ::UnityW<::UnityEngine::ParticleSystem>  dispenserExhaustedEffect;

/// @brief Field dispenserExhaustedVolume, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_dispenserExhaustedVolume, put=__cordl_internal_set_dispenserExhaustedVolume)) float_t  dispenserExhaustedVolume;

/// @brief Field fullyConsumedModel, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullyConsumedModel, put=__cordl_internal_set_fullyConsumedModel)) ::UnityW<::UnityEngine::Transform>  fullyConsumedModel;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field getSpawnedCollectibleCoroutine, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_getSpawnedCollectibleCoroutine, put=__cordl_internal_set_getSpawnedCollectibleCoroutine)) ::UnityEngine::Coroutine*  getSpawnedCollectibleCoroutine;

/// @brief Field maxDispenseCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDispenseCount, put=__cordl_internal_set_maxDispenseCount)) int32_t  maxDispenseCount;

/// @brief Field overlapColliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overlapColliders, put=setStaticF_overlapColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapColliders;

/// @brief Field spawnLocation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnLocation, put=__cordl_internal_set_spawnLocation)) ::UnityW<::UnityEngine::Transform>  spawnLocation;

/// @brief Field stillDispensingModel, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_stillDispensingModel, put=__cordl_internal_set_stillDispensingModel)) ::UnityW<::UnityEngine::Transform>  stillDispensingModel;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method GetSpawnedCollectible, addr 0x5874934, size 0x164, virtual false, abstract: false, final false
inline void GetSpawnedCollectible(::GlobalNamespace::GRCollectible*  collectible) ;

static inline ::GlobalNamespace::GRCollectibleDispenser* New_ctor() ;

/// @brief Method OnCollectibleConsumed, addr 0x5875018, size 0x2d8, virtual false, abstract: false, final false
inline void OnCollectibleConsumed() ;

/// @brief Method OnEntityDestroy, addr 0x5874d00, size 0x108, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5874bd0, size 0x130, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5874e08, size 0xb4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method RequestDispenseCollectible, addr 0x5874ebc, size 0x15c, virtual false, abstract: false, final false
inline void RequestDispenseCollectible() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr double_t const& __cordl_internal_get_collectibleCollectedTime() const;

constexpr double_t& __cordl_internal_get_collectibleCollectedTime() ;

constexpr double_t const& __cordl_internal_get_collectibleDispenseRequestTime() const;

constexpr double_t& __cordl_internal_get_collectibleDispenseRequestTime() ;

constexpr double_t const& __cordl_internal_get_collectibleDispenseTime() const;

constexpr double_t& __cordl_internal_get_collectibleDispenseTime() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collectibleLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collectibleLayerMask() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_collectiblePrefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_collectiblePrefab() ;

constexpr float_t const& __cordl_internal_get_collectibleRespawnTimeMinutes() const;

constexpr float_t& __cordl_internal_get_collectibleRespawnTimeMinutes() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_collectibleTakenClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_collectibleTakenClip() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_collectibleTakenEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_collectibleTakenEffect() ;

constexpr float_t const& __cordl_internal_get_collectibleTakenVolume() const;

constexpr float_t& __cordl_internal_get_collectibleTakenVolume() ;

constexpr uint32_t const& __cordl_internal_get_collectiblesCollected() const;

constexpr uint32_t& __cordl_internal_get_collectiblesCollected() ;

constexpr uint32_t const& __cordl_internal_get_collectiblesDispensed() const;

constexpr uint32_t& __cordl_internal_get_collectiblesDispensed() ;

constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& __cordl_internal_get_currentCollectible() const;

constexpr ::UnityW<::GlobalNamespace::GRCollectible>& __cordl_internal_get_currentCollectible() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_dispenserExhaustedClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_dispenserExhaustedClip() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_dispenserExhaustedEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_dispenserExhaustedEffect() ;

constexpr float_t const& __cordl_internal_get_dispenserExhaustedVolume() const;

constexpr float_t& __cordl_internal_get_dispenserExhaustedVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_fullyConsumedModel() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_fullyConsumedModel() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_getSpawnedCollectibleCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_getSpawnedCollectibleCoroutine() ;

constexpr int32_t const& __cordl_internal_get_maxDispenseCount() const;

constexpr int32_t& __cordl_internal_get_maxDispenseCount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnLocation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stillDispensingModel() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stillDispensingModel() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_collectibleCollectedTime(double_t  value) ;

constexpr void __cordl_internal_set_collectibleDispenseRequestTime(double_t  value) ;

constexpr void __cordl_internal_set_collectibleDispenseTime(double_t  value) ;

constexpr void __cordl_internal_set_collectibleLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_collectiblePrefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_collectibleRespawnTimeMinutes(float_t  value) ;

constexpr void __cordl_internal_set_collectibleTakenClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_collectibleTakenEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_collectibleTakenVolume(float_t  value) ;

constexpr void __cordl_internal_set_collectiblesCollected(uint32_t  value) ;

constexpr void __cordl_internal_set_collectiblesDispensed(uint32_t  value) ;

constexpr void __cordl_internal_set_currentCollectible(::UnityW<::GlobalNamespace::GRCollectible>  value) ;

constexpr void __cordl_internal_set_dispenserExhaustedClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_dispenserExhaustedEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_dispenserExhaustedVolume(float_t  value) ;

constexpr void __cordl_internal_set_fullyConsumedModel(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_getSpawnedCollectibleCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_maxDispenseCount(int32_t  value) ;

constexpr void __cordl_internal_set_spawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stillDispensingModel(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x58752f0, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF_overlapColliders() ;

/// @brief Method get_CollectibleAlreadySpawned, addr 0x5874acc, size 0x60, virtual false, abstract: false, final false
inline bool get_CollectibleAlreadySpawned() ;

/// @brief Method get_ReadyToDispenseNewCollectible, addr 0x5874b2c, size 0xa4, virtual false, abstract: false, final false
inline bool get_ReadyToDispenseNewCollectible() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

static inline void setStaticF_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRCollectibleDispenser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRCollectibleDispenser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRCollectibleDispenser(GRCollectibleDispenser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRCollectibleDispenser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRCollectibleDispenser(GRCollectibleDispenser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1899};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field collectiblePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___collectiblePrefab;

/// @brief Field spawnLocation, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnLocation;

/// @brief Field collectibleLayerMask, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___collectibleLayerMask;

/// @brief Field collectibleRespawnTimeMinutes, offset: 0x3c, size: 0x4, def value: None
 float_t  ___collectibleRespawnTimeMinutes;

/// @brief Field maxDispenseCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___maxDispenseCount;

/// @brief Field audioSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field stillDispensingModel, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___stillDispensingModel;

/// @brief Field fullyConsumedModel, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___fullyConsumedModel;

/// @brief Field collectibleTakenEffect, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___collectibleTakenEffect;

/// @brief Field collectibleTakenClip, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___collectibleTakenClip;

/// @brief Field collectibleTakenVolume, offset: 0x70, size: 0x4, def value: None
 float_t  ___collectibleTakenVolume;

/// @brief Field dispenserExhaustedEffect, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___dispenserExhaustedEffect;

/// @brief Field dispenserExhaustedClip, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___dispenserExhaustedClip;

/// @brief Field dispenserExhaustedVolume, offset: 0x88, size: 0x4, def value: None
 float_t  ___dispenserExhaustedVolume;

/// @brief Field currentCollectible, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRCollectible>  ___currentCollectible;

/// @brief Field getSpawnedCollectibleCoroutine, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___getSpawnedCollectibleCoroutine;

/// @brief Field collectiblesDispensed, offset: 0xa0, size: 0x4, def value: None
 uint32_t  ___collectiblesDispensed;

/// @brief Field collectiblesCollected, offset: 0xa4, size: 0x4, def value: None
 uint32_t  ___collectiblesCollected;

/// @brief Field collectibleDispenseRequestTime, offset: 0xa8, size: 0x8, def value: None
 double_t  ___collectibleDispenseRequestTime;

/// @brief Field collectibleDispenseTime, offset: 0xb0, size: 0x8, def value: None
 double_t  ___collectibleDispenseTime;

/// @brief Field collectibleCollectedTime, offset: 0xb8, size: 0x8, def value: None
 double_t  ___collectibleCollectedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectiblePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___spawnLocation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectibleLayerMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectibleRespawnTimeMinutes) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___maxDispenseCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___audioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___stillDispensingModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___fullyConsumedModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectibleTakenEffect) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectibleTakenClip) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectibleTakenVolume) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___dispenserExhaustedEffect) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___dispenserExhaustedClip) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___dispenserExhaustedVolume) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___currentCollectible) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___getSpawnedCollectibleCoroutine) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectiblesDispensed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectiblesCollected) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectibleDispenseRequestTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectibleDispenseTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRCollectibleDispenser, ___collectibleCollectedTime) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRCollectibleDispenser) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
