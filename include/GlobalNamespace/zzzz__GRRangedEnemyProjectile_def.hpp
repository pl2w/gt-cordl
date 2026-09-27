#pragma once
// IWYU pragma private; include "GlobalNamespace/GRRangedEnemyProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRRangedEnemyProjectile)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
class GameHittable;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameHittable;
}
namespace GlobalNamespace {
class IGameHitter;
}
namespace GlobalNamespace {
class IGameProjectileLauncher;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRRangedEnemyProjectile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRRangedEnemyProjectile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRRangedEnemyProjectile*, "", "GRRangedEnemyProjectile");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRRangedEnemyProjectile
class CORDL_TYPE GRRangedEnemyProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field applyFreezeEffect, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyFreezeEffect, put=__cordl_internal_set_applyFreezeEffect)) bool  applyFreezeEffect;

/// @brief Field audioSource, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field canHitPlayer, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_canHitPlayer, put=__cordl_internal_set_canHitPlayer)) bool  canHitPlayer;

/// @brief Field entity, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field hitSFX, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitSFX, put=__cordl_internal_set_hitSFX)) ::GlobalNamespace::AbilitySound*  hitSFX;

/// @brief Field hittable, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_hittable, put=__cordl_internal_set_hittable)) ::UnityW<::GlobalNamespace::GameHittable>  hittable;

/// @brief Field lastHitPlayerTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHitPlayerTime, put=__cordl_internal_set_lastHitPlayerTime)) float_t  lastHitPlayerTime;

/// @brief Field meshRenderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field minTimeBetweenHits, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTimeBetweenHits, put=__cordl_internal_set_minTimeBetweenHits)) float_t  minTimeBetweenHits;

/// @brief Field owningEntity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_owningEntity, put=__cordl_internal_set_owningEntity)) ::UnityW<::GlobalNamespace::GameEntity>  owningEntity;

/// @brief Field owningEntityNetID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_owningEntityNetID, put=__cordl_internal_set_owningEntityNetID)) int32_t  owningEntityNetID;

/// @brief Field particleSystem, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystem, put=__cordl_internal_set_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystem;

/// @brief Field postImpactLifetime, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_postImpactLifetime, put=__cordl_internal_set_postImpactLifetime)) float_t  postImpactLifetime;

/// @brief Field projectileHasImpacted, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_projectileHasImpacted, put=__cordl_internal_set_projectileHasImpacted)) bool  projectileHasImpacted;

/// @brief Field projectileHitRadius, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileHitRadius, put=__cordl_internal_set_projectileHitRadius)) float_t  projectileHitRadius;

/// @brief Field projectileImpactTime, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileImpactTime, put=__cordl_internal_set_projectileImpactTime)) double_t  projectileImpactTime;

/// @brief Field projectileLauncher, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileLauncher, put=__cordl_internal_set_projectileLauncher)) ::GlobalNamespace::IGameProjectileLauncher*  projectileLauncher;

/// @brief Field projectileRigidbody, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileRigidbody, put=__cordl_internal_set_projectileRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  projectileRigidbody;

/// @brief Field projectileSpeed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileSpeed, put=__cordl_internal_set_projectileSpeed)) float_t  projectileSpeed;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr operator  ::GlobalNamespace::IGameHittable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameHitter"
constexpr operator  ::GlobalNamespace::IGameHitter*() noexcept;

/// @brief Method Awake, addr 0x58a6970, size 0x160, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindOwningEntity, addr 0x58a6e2c, size 0xa8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntity> FindOwningEntity() ;

/// @brief Method IsHitValid, addr 0x58a7364, size 0x8, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

static inline ::GlobalNamespace::GRRangedEnemyProjectile* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x58a6edc, size 0x2b0, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnEntityDestroy, addr 0x58a6ed4, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58a6d14, size 0x118, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58a6ed8, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnHit, addr 0x58a736c, size 0x10c, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByClub, addr 0x58a7478, size 0x160, virtual false, abstract: false, final false
inline void OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByFlash, addr 0x58a75d8, size 0x4, virtual false, abstract: false, final false
inline void OnHitByFlash(::GlobalNamespace::GRTool*  grTool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByShield, addr 0x58a75dc, size 0xb8, virtual false, abstract: false, final false
inline void OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnSuccessfulHit, addr 0x58a7754, size 0x4, virtual true, abstract: false, final true
inline void OnSuccessfulHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnSuccessfulHitPlayer, addr 0x58a7758, size 0x58, virtual true, abstract: false, final true
inline void OnSuccessfulHitPlayer(::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition) ;

/// @brief Method OnTriggerEnter, addr 0x58a718c, size 0x1d8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method PlayImpactFX, addr 0x58a7694, size 0xc0, virtual false, abstract: false, final false
inline void PlayImpactFX() ;

/// @brief Method Start, addr 0x58a6ad0, size 0x1d4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x58a6ca4, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_applyFreezeEffect() const;

constexpr bool& __cordl_internal_get_applyFreezeEffect() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_canHitPlayer() const;

constexpr bool& __cordl_internal_get_canHitPlayer() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_hitSFX() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_hitSFX() ;

constexpr ::UnityW<::GlobalNamespace::GameHittable> const& __cordl_internal_get_hittable() const;

constexpr ::UnityW<::GlobalNamespace::GameHittable>& __cordl_internal_get_hittable() ;

constexpr float_t const& __cordl_internal_get_lastHitPlayerTime() const;

constexpr float_t& __cordl_internal_get_lastHitPlayerTime() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr float_t const& __cordl_internal_get_minTimeBetweenHits() const;

constexpr float_t& __cordl_internal_get_minTimeBetweenHits() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_owningEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_owningEntity() ;

constexpr int32_t const& __cordl_internal_get_owningEntityNetID() const;

constexpr int32_t& __cordl_internal_get_owningEntityNetID() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystem() ;

constexpr float_t const& __cordl_internal_get_postImpactLifetime() const;

constexpr float_t& __cordl_internal_get_postImpactLifetime() ;

constexpr bool const& __cordl_internal_get_projectileHasImpacted() const;

constexpr bool& __cordl_internal_get_projectileHasImpacted() ;

constexpr float_t const& __cordl_internal_get_projectileHitRadius() const;

constexpr float_t& __cordl_internal_get_projectileHitRadius() ;

constexpr double_t const& __cordl_internal_get_projectileImpactTime() const;

constexpr double_t& __cordl_internal_get_projectileImpactTime() ;

constexpr ::GlobalNamespace::IGameProjectileLauncher* const& __cordl_internal_get_projectileLauncher() const;

constexpr ::GlobalNamespace::IGameProjectileLauncher*& __cordl_internal_get_projectileLauncher() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_projectileRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_projectileRigidbody() ;

constexpr float_t const& __cordl_internal_get_projectileSpeed() const;

constexpr float_t& __cordl_internal_get_projectileSpeed() ;

constexpr void __cordl_internal_set_applyFreezeEffect(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_canHitPlayer(bool  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_hitSFX(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value) ;

constexpr void __cordl_internal_set_lastHitPlayerTime(float_t  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_minTimeBetweenHits(float_t  value) ;

constexpr void __cordl_internal_set_owningEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_owningEntityNetID(int32_t  value) ;

constexpr void __cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_postImpactLifetime(float_t  value) ;

constexpr void __cordl_internal_set_projectileHasImpacted(bool  value) ;

constexpr void __cordl_internal_set_projectileHitRadius(float_t  value) ;

constexpr void __cordl_internal_set_projectileImpactTime(double_t  value) ;

constexpr void __cordl_internal_set_projectileLauncher(::GlobalNamespace::IGameProjectileLauncher*  value) ;

constexpr void __cordl_internal_set_projectileRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_projectileSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x58a77b0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* i___GlobalNamespace__IGameHittable() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameHitter"
constexpr ::GlobalNamespace::IGameHitter* i___GlobalNamespace__IGameHitter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRRangedEnemyProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRRangedEnemyProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRRangedEnemyProjectile(GRRangedEnemyProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRRangedEnemyProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRRangedEnemyProjectile(GRRangedEnemyProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2014};

/// @brief Field owningEntityNetID, offset: 0x20, size: 0x4, def value: None
 int32_t  ___owningEntityNetID;

/// @brief Field entity, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field owningEntity, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___owningEntity;

/// @brief Field projectileLauncher, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::IGameProjectileLauncher*  ___projectileLauncher;

/// @brief Field projectileRigidbody, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___projectileRigidbody;

/// @brief Field particleSystem, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystem;

/// @brief Field audioSource, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field meshRenderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field hittable, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameHittable>  ___hittable;

/// @brief Field projectileSpeed, offset: 0x68, size: 0x4, def value: None
 float_t  ___projectileSpeed;

/// @brief Field projectileHitRadius, offset: 0x6c, size: 0x4, def value: None
 float_t  ___projectileHitRadius;

/// @brief Field postImpactLifetime, offset: 0x70, size: 0x4, def value: None
 float_t  ___postImpactLifetime;

/// @brief Field projectileHasImpacted, offset: 0x74, size: 0x1, def value: None
 bool  ___projectileHasImpacted;

/// @brief Field projectileImpactTime, offset: 0x78, size: 0x8, def value: None
 double_t  ___projectileImpactTime;

/// @brief Field lastHitPlayerTime, offset: 0x80, size: 0x4, def value: None
 float_t  ___lastHitPlayerTime;

/// @brief Field minTimeBetweenHits, offset: 0x84, size: 0x4, def value: None
 float_t  ___minTimeBetweenHits;

/// @brief Field applyFreezeEffect, offset: 0x88, size: 0x1, def value: None
 bool  ___applyFreezeEffect;

/// @brief Field canHitPlayer, offset: 0x89, size: 0x1, def value: None
 bool  ___canHitPlayer;

/// @brief Field hitSFX, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___hitSFX;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___owningEntityNetID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___entity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___owningEntity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___projectileLauncher) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___projectileRigidbody) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___particleSystem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___audioSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___meshRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___hittable) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___projectileSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___projectileHitRadius) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___postImpactLifetime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___projectileHasImpacted) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___projectileImpactTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___lastHitPlayerTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___minTimeBetweenHits) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___applyFreezeEffect) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___canHitPlayer) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRRangedEnemyProjectile, ___hitSFX) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRRangedEnemyProjectile) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
