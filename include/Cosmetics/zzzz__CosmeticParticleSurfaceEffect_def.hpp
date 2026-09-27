#pragma once
// IWYU pragma private; include "Cosmetics/CosmeticParticleSurfaceEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticParticleSurfaceEffect)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class SeedPacketTriggerHandler;
}
namespace GlobalNamespace {
class SinglePool;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Cosmetics {
class CosmeticParticleSurfaceEffect;
}
// Write type traits
MARK_REF_T(::Cosmetics::CosmeticParticleSurfaceEffect*);
DEFINE_IL2CPP_CLASS(::Cosmetics::CosmeticParticleSurfaceEffect*, "Cosmetics", "CosmeticParticleSurfaceEffect");
// [RequireComponent(typeof(TransferrableObject))]
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace Cosmetics {
// Is value type: false
// CS Name: Cosmetics.CosmeticParticleSurfaceEffect
class CORDL_TYPE CosmeticParticleSurfaceEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _events, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field _pool, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::GlobalNamespace::SinglePool*  _pool;

/// @brief Field currentEffect, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentEffect, put=__cordl_internal_set_currentEffect)) int32_t  currentEffect;

/// @brief Field destroyCallLimiter, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_destroyCallLimiter, put=__cordl_internal_set_destroyCallLimiter)) ::GlobalNamespace::CallLimiter*  destroyCallLimiter;

/// @brief Field foundPool, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_foundPool, put=__cordl_internal_set_foundPool)) bool  foundPool;

/// @brief Field hitPoint, offset 0x74, size 0x2c 
 __declspec(property(get=__cordl_internal_get_hitPoint, put=__cordl_internal_set_hitPoint)) ::UnityEngine::RaycastHit  hitPoint;

/// @brief Field hits, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hits, put=__cordl_internal_set_hits)) ::ArrayW<::UnityEngine::RaycastHit>  hits;

/// @brief Field isLocal, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field isSpawning, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSpawning, put=__cordl_internal_set_isSpawning)) bool  isSpawning;

/// @brief Field lastHitTime, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHitTime, put=__cordl_internal_set_lastHitTime)) float_t  lastHitTime;

/// @brief Field owner, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::GlobalNamespace::NetPlayer*  owner;

/// @brief Field particleStartedTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_particleStartedTime, put=__cordl_internal_set_particleStartedTime)) float_t  particleStartedTime;

/// @brief Field particles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::UnityW<::UnityEngine::ParticleSystem>  particles;

/// @brief Field placeEffectCooldown, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_placeEffectCooldown, put=__cordl_internal_set_placeEffectCooldown)) float_t  placeEffectCooldown;

/// @brief Field placeEffectDelayMultiplier, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_placeEffectDelayMultiplier, put=__cordl_internal_set_placeEffectDelayMultiplier)) float_t  placeEffectDelayMultiplier;

/// @brief Field rayCastDistance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayCastDistance, put=__cordl_internal_set_rayCastDistance)) float_t  rayCastDistance;

/// @brief Field rayCastLayerMask, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayCastLayerMask, put=__cordl_internal_set_rayCastLayerMask)) ::UnityEngine::LayerMask  rayCastLayerMask;

/// @brief Field rayCastOrigin, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rayCastOrigin, put=__cordl_internal_set_rayCastOrigin)) ::UnityW<::UnityEngine::Transform>  rayCastOrigin;

/// @brief Field spawnCallLimiter, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnCallLimiter, put=__cordl_internal_set_spawnCallLimiter)) ::GlobalNamespace::CallLimiter*  spawnCallLimiter;

/// @brief Field stopAfterSeconds, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_stopAfterSeconds, put=__cordl_internal_set_stopAfterSeconds)) float_t  stopAfterSeconds;

/// @brief Field surfaceEffectHash, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceEffectHash, put=__cordl_internal_set_surfaceEffectHash)) int32_t  surfaceEffectHash;

/// @brief Field surfaceEffectNum, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceEffectNum, put=__cordl_internal_set_surfaceEffectNum)) ::System::Collections::Generic::List_1<int32_t>*  surfaceEffectNum;

/// @brief Field surfaceEffectPrefab, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceEffectPrefab, put=__cordl_internal_set_surfaceEffectPrefab)) ::UnityW<::UnityEngine::GameObject>  surfaceEffectPrefab;

/// @brief Field surfaceEffects, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceEffects, put=__cordl_internal_set_surfaceEffects)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  surfaceEffects;

/// @brief Field transferrableObject, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// @brief Field useWorldDirection, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_useWorldDirection, put=__cordl_internal_set_useWorldDirection)) bool  useWorldDirection;

/// @brief Field worldDirection, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_worldDirection, put=__cordl_internal_set_worldDirection)) ::UnityEngine::Vector3  worldDirection;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5d1834c, size 0xb4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearOldObjects, addr 0x5d19aec, size 0x1f0, virtual false, abstract: false, final false
inline void ClearOldObjects() ;

static inline ::Cosmetics::CosmeticParticleSurfaceEffect* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d18d40, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5d188e4, size 0x3a4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d18400, size 0x4e4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawnReplicated, addr 0x5d1977c, size 0x370, virtual false, abstract: false, final false
inline void OnSpawnReplicated(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnTriggerEffectLocal, addr 0x5d19cdc, size 0x23c, virtual false, abstract: false, final false
inline void OnTriggerEffectLocal(::GlobalNamespace::SeedPacketTriggerHandler*  seedPacketTriggerHandlerTriggerHandlerEvent) ;

/// @brief Method OnTriggerEffectReplicated, addr 0x5d19f18, size 0x2e4, virtual false, abstract: false, final false
inline void OnTriggerEffectReplicated(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SpawnEffect, addr 0x5d191c4, size 0x304, virtual false, abstract: false, final false
inline void SpawnEffect() ;

/// @brief Method SpawnLocal, addr 0x5d194c8, size 0x2b4, virtual false, abstract: false, final false
inline void SpawnLocal(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  up, int32_t  identifier) ;

/// @brief Method StartParticles, addr 0x5d18dd0, size 0xc4, virtual false, abstract: false, final false
inline void StartParticles() ;

/// @brief Method StopParticles, addr 0x5d18c88, size 0xb8, virtual false, abstract: false, final false
inline void StopParticles() ;

/// @brief Method Tick, addr 0x5d18ea4, size 0x320, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::GlobalNamespace::SinglePool* const& __cordl_internal_get__pool() const;

constexpr ::GlobalNamespace::SinglePool*& __cordl_internal_get__pool() ;

constexpr int32_t const& __cordl_internal_get_currentEffect() const;

constexpr int32_t& __cordl_internal_get_currentEffect() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_destroyCallLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_destroyCallLimiter() ;

constexpr bool const& __cordl_internal_get_foundPool() const;

constexpr bool& __cordl_internal_get_foundPool() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_hitPoint() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_hitPoint() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_hits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_hits() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr bool const& __cordl_internal_get_isSpawning() const;

constexpr bool& __cordl_internal_get_isSpawning() ;

constexpr float_t const& __cordl_internal_get_lastHitTime() const;

constexpr float_t& __cordl_internal_get_lastHitTime() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_owner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_owner() ;

constexpr float_t const& __cordl_internal_get_particleStartedTime() const;

constexpr float_t& __cordl_internal_get_particleStartedTime() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particles() ;

constexpr float_t const& __cordl_internal_get_placeEffectCooldown() const;

constexpr float_t& __cordl_internal_get_placeEffectCooldown() ;

constexpr float_t const& __cordl_internal_get_placeEffectDelayMultiplier() const;

constexpr float_t& __cordl_internal_get_placeEffectDelayMultiplier() ;

constexpr float_t const& __cordl_internal_get_rayCastDistance() const;

constexpr float_t& __cordl_internal_get_rayCastDistance() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_rayCastLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_rayCastLayerMask() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rayCastOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rayCastOrigin() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_spawnCallLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_spawnCallLimiter() ;

constexpr float_t const& __cordl_internal_get_stopAfterSeconds() const;

constexpr float_t& __cordl_internal_get_stopAfterSeconds() ;

constexpr int32_t const& __cordl_internal_get_surfaceEffectHash() const;

constexpr int32_t& __cordl_internal_get_surfaceEffectHash() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_surfaceEffectNum() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_surfaceEffectNum() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_surfaceEffectPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_surfaceEffectPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>* const& __cordl_internal_get_surfaceEffects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*& __cordl_internal_get_surfaceEffects() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr bool const& __cordl_internal_get_useWorldDirection() const;

constexpr bool& __cordl_internal_get_useWorldDirection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldDirection() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set__pool(::GlobalNamespace::SinglePool*  value) ;

constexpr void __cordl_internal_set_currentEffect(int32_t  value) ;

constexpr void __cordl_internal_set_destroyCallLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_foundPool(bool  value) ;

constexpr void __cordl_internal_set_hitPoint(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_isSpawning(bool  value) ;

constexpr void __cordl_internal_set_lastHitTime(float_t  value) ;

constexpr void __cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_particleStartedTime(float_t  value) ;

constexpr void __cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_placeEffectCooldown(float_t  value) ;

constexpr void __cordl_internal_set_placeEffectDelayMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_rayCastDistance(float_t  value) ;

constexpr void __cordl_internal_set_rayCastLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_rayCastOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_spawnCallLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_stopAfterSeconds(float_t  value) ;

constexpr void __cordl_internal_set_surfaceEffectHash(int32_t  value) ;

constexpr void __cordl_internal_set_surfaceEffectNum(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_surfaceEffectPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_surfaceEffects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_useWorldDirection(bool  value) ;

constexpr void __cordl_internal_set_worldDirection(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5d1a1fc, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d18e94, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d18e9c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticParticleSurfaceEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticParticleSurfaceEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticParticleSurfaceEffect(CosmeticParticleSurfaceEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticParticleSurfaceEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticParticleSurfaceEffect(CosmeticParticleSurfaceEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4573};

/// [Tooltip("autoStop particle system this many seconds after starting")]
/// [SerializeField]
/// @brief Field stopAfterSeconds, offset: 0x20, size: 0x4, def value: None
 float_t  ___stopAfterSeconds;

/// [Tooltip("particle system to play on start particles")]
/// [SerializeField]
/// @brief Field particles, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particles;

/// [Tooltip("Distance in meters to check for a surface hit")]
/// [SerializeField]
/// @brief Field rayCastDistance, offset: 0x30, size: 0x4, def value: None
 float_t  ___rayCastDistance;

/// [Tooltip("The position for the start of the rayCast.\nThe forward (z+) axis of this transform will be used as the rayCast direction\nThis should visually line up with the spawned particles")]
/// [SerializeField]
/// @brief Field rayCastOrigin, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rayCastOrigin;

/// [Tooltip("Use a world direction vector for the raycast instead of the rayCastOrigin forward?")]
/// [SerializeField]
/// @brief Field useWorldDirection, offset: 0x40, size: 0x1, def value: None
 bool  ___useWorldDirection;

/// [SerializeField]
/// @brief Field worldDirection, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___worldDirection;

/// [Tooltip("Layers to check for surface collision")]
/// [SerializeField]
/// @brief Field rayCastLayerMask, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___rayCastLayerMask;

/// [Tooltip("Prefab from the global object pool to spawn on surface hit\nIf it should be destroyed on touch, add a SeedPacketTriggerHandler to the prefab")]
/// [SerializeField]
/// @brief Field surfaceEffectPrefab, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___surfaceEffectPrefab;

/// [Tooltip("Seconds per meter to wait before spawning a surface effect on hit.\n A good value would be somewhat close to 1/particle velocity ")]
/// [SerializeField]
/// @brief Field placeEffectDelayMultiplier, offset: 0x60, size: 0x4, def value: None
 float_t  ___placeEffectDelayMultiplier;

/// [Tooltip("Time to wait between spawning surface effects")]
/// [SerializeField]
/// @brief Field placeEffectCooldown, offset: 0x64, size: 0x4, def value: None
 float_t  ___placeEffectCooldown;

/// @brief Field particleStartedTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___particleStartedTime;

/// @brief Field isSpawning, offset: 0x6c, size: 0x1, def value: None
 bool  ___isSpawning;

/// @brief Field lastHitTime, offset: 0x70, size: 0x4, def value: None
 float_t  ___lastHitTime;

/// @brief Field hitPoint, offset: 0x74, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___hitPoint;

/// @brief Field hits, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___hits;

/// @brief Field transferrableObject, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// @brief Field isLocal, offset: 0xb0, size: 0x1, def value: None
 bool  ___isLocal;

/// @brief Field owner, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___owner;

/// @brief Field surfaceEffectHash, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___surfaceEffectHash;

/// @brief Field _events, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field spawnCallLimiter, offset: 0xd0, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___spawnCallLimiter;

/// @brief Field destroyCallLimiter, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___destroyCallLimiter;

/// @brief Field _pool, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::SinglePool*  ____pool;

/// @brief Field foundPool, offset: 0xe8, size: 0x1, def value: None
 bool  ___foundPool;

/// @brief Field currentEffect, offset: 0xec, size: 0x4, def value: None
 int32_t  ___currentEffect;

/// @brief Field surfaceEffectNum, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___surfaceEffectNum;

/// @brief Field surfaceEffects, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SeedPacketTriggerHandler>>*  ___surfaceEffects;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x100, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___stopAfterSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___particles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___rayCastDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___rayCastOrigin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___useWorldDirection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___worldDirection) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___rayCastLayerMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___surfaceEffectPrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___placeEffectDelayMultiplier) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___placeEffectCooldown) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___particleStartedTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___isSpawning) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___lastHitTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___hitPoint) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___hits) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___transferrableObject) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___isLocal) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___owner) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___surfaceEffectHash) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ____events) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___spawnCallLimiter) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___destroyCallLimiter) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ____pool) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___foundPool) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___currentEffect) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___surfaceEffectNum) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ___surfaceEffects) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticParticleSurfaceEffect, ____TickRunning_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(sizeof(::Cosmetics::CosmeticParticleSurfaceEffect) == 0x108, "Size mismatch!");

} // namespace end def Cosmetics
