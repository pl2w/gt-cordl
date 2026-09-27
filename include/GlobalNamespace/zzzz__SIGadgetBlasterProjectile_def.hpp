#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetBlasterProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetBlasterProjectile)
namespace GlobalNamespace {
class SIGadgetBlaster;
}
namespace GlobalNamespace {
class SIGadgetProjectileType;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetBlasterProjectile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetBlasterProjectile*, "", "SIGadgetBlasterProjectile");
// [RequireComponent(typeof(SIGadgetProjectileType))]
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetBlasterProjectile
class CORDL_TYPE SIGadgetBlasterProjectile : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field audioSource, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field blasterProjectileExplosionPools, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_blasterProjectileExplosionPools, put=setStaticF_blasterProjectileExplosionPools)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  blasterProjectileExplosionPools;

/// @brief Field exclusionZoneDespawnEffect, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_exclusionZoneDespawnEffect, put=__cordl_internal_set_exclusionZoneDespawnEffect)) ::UnityW<::UnityEngine::GameObject>  exclusionZoneDespawnEffect;

/// @brief Field explosionTypeKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_explosionTypeKey, put=setStaticF_explosionTypeKey)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  explosionTypeKey;

/// @brief Field firedByPlayer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_firedByPlayer, put=__cordl_internal_set_firedByPlayer)) ::UnityW<::GlobalNamespace::SIPlayer>  firedByPlayer;

/// @brief Field hapticHitDuration, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticHitDuration, put=__cordl_internal_set_hapticHitDuration)) float_t  hapticHitDuration;

/// @brief Field hapticHitStrength, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticHitStrength, put=__cordl_internal_set_hapticHitStrength)) float_t  hapticHitStrength;

/// @brief Field hitEffect, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitEffect, put=__cordl_internal_set_hitEffect)) ::UnityW<::UnityEngine::GameObject>  hitEffect;

/// @brief Field hitEffectPlayer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitEffectPlayer, put=__cordl_internal_set_hitEffectPlayer)) ::UnityW<::UnityEngine::GameObject>  hitEffectPlayer;

/// @brief Field maxLifetime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLifetime, put=__cordl_internal_set_maxLifetime)) float_t  maxLifetime;

/// @brief Field parentBlaster, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentBlaster, put=__cordl_internal_set_parentBlaster)) ::UnityW<::GlobalNamespace::SIGadgetBlaster>  parentBlaster;

/// @brief Field poolId, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_poolId, put=__cordl_internal_set_poolId)) int32_t  poolId;

/// @brief Field projectileId, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileId, put=__cordl_internal_set_projectileId)) int32_t  projectileId;

/// @brief Field projectileType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileType, put=__cordl_internal_set_projectileType)) ::GlobalNamespace::SIGadgetProjectileType*  projectileType;

/// @brief Field rb, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field startingVelocity, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingVelocity, put=__cordl_internal_set_startingVelocity)) float_t  startingVelocity;

/// @brief Field timeSpawned, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSpawned, put=__cordl_internal_set_timeSpawned)) float_t  timeSpawned;

/// @brief Method DespawnExplosion, addr 0x57f6f44, size 0x124, virtual false, abstract: false, final false
static inline void DespawnExplosion(::UnityEngine::GameObject*  explosion) ;

/// @brief Method DespawnProjectile, addr 0x57f6aa0, size 0x18, virtual false, abstract: false, final false
inline void DespawnProjectile() ;

/// @brief Method InitializeProjectile, addr 0x57fac0c, size 0x250, virtual false, abstract: false, final false
inline void InitializeProjectile() ;

/// @brief Method KnockbackWithHaptics, addr 0x57f6f18, size 0x8, virtual false, abstract: false, final false
inline void KnockbackWithHaptics(::UnityEngine::Vector3  directionAndMagnitude, bool  adjustForDirection) ;

/// @brief Method KnockbackWithHaptics, addr 0x57f8760, size 0x53c, virtual false, abstract: false, final false
inline void KnockbackWithHaptics(::UnityEngine::Vector3  directionAndMagnitude, float_t  hapticStrength, float_t  hapticDuration, bool  adjustForDirection) ;

static inline ::GlobalNamespace::SIGadgetBlasterProjectile* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x57fb4c8, size 0x1d8, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnTriggerEnter, addr 0x57fb190, size 0x338, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method SpawnExplosion, addr 0x57f64a8, size 0x3b8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> SpawnExplosion(::UnityEngine::GameObject*  explosionPrefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Tick, addr 0x57fb150, size 0x40, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_exclusionZoneDespawnEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_exclusionZoneDespawnEffect() ;

constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& __cordl_internal_get_firedByPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SIPlayer>& __cordl_internal_get_firedByPlayer() ;

constexpr float_t const& __cordl_internal_get_hapticHitDuration() const;

constexpr float_t& __cordl_internal_get_hapticHitDuration() ;

constexpr float_t const& __cordl_internal_get_hapticHitStrength() const;

constexpr float_t& __cordl_internal_get_hapticHitStrength() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hitEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hitEffect() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hitEffectPlayer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hitEffectPlayer() ;

constexpr float_t const& __cordl_internal_get_maxLifetime() const;

constexpr float_t& __cordl_internal_get_maxLifetime() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster> const& __cordl_internal_get_parentBlaster() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster>& __cordl_internal_get_parentBlaster() ;

constexpr int32_t const& __cordl_internal_get_poolId() const;

constexpr int32_t& __cordl_internal_get_poolId() ;

constexpr int32_t const& __cordl_internal_get_projectileId() const;

constexpr int32_t& __cordl_internal_get_projectileId() ;

constexpr ::GlobalNamespace::SIGadgetProjectileType* const& __cordl_internal_get_projectileType() const;

constexpr ::GlobalNamespace::SIGadgetProjectileType*& __cordl_internal_get_projectileType() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_startingVelocity() const;

constexpr float_t& __cordl_internal_get_startingVelocity() ;

constexpr float_t const& __cordl_internal_get_timeSpawned() const;

constexpr float_t& __cordl_internal_get_timeSpawned() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_exclusionZoneDespawnEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_firedByPlayer(::UnityW<::GlobalNamespace::SIPlayer>  value) ;

constexpr void __cordl_internal_set_hapticHitDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticHitStrength(float_t  value) ;

constexpr void __cordl_internal_set_hitEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hitEffectPlayer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_maxLifetime(float_t  value) ;

constexpr void __cordl_internal_set_parentBlaster(::UnityW<::GlobalNamespace::SIGadgetBlaster>  value) ;

constexpr void __cordl_internal_set_poolId(int32_t  value) ;

constexpr void __cordl_internal_set_projectileId(int32_t  value) ;

constexpr void __cordl_internal_set_projectileType(::GlobalNamespace::SIGadgetProjectileType*  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_startingVelocity(float_t  value) ;

constexpr void __cordl_internal_set_timeSpawned(float_t  value) ;

/// @brief Method .ctor, addr 0x57fb6a0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* getStaticF_blasterProjectileExplosionPools() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>* getStaticF_explosionTypeKey() ;

static inline void setStaticF_blasterProjectileExplosionPools(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  value) ;

static inline void setStaticF_explosionTypeKey(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetBlasterProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetBlasterProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetBlasterProjectile(SIGadgetBlasterProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetBlasterProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetBlasterProjectile(SIGadgetBlasterProjectile const& ) = delete;

/// @brief Field EXCLUSION_ZONE_MINIMUM_LIFETIME offset 0xffffffff size 0x4
static constexpr float_t  EXCLUSION_ZONE_MINIMUM_LIFETIME{static_cast<float_t>(0.02f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{225};

/// @brief Field poolId, offset: 0x24, size: 0x4, def value: None
 int32_t  ___poolId;

/// @brief Field projectileType, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::SIGadgetProjectileType*  ___projectileType;

/// @brief Field rb, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field hitEffect, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hitEffect;

/// @brief Field hitEffectPlayer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hitEffectPlayer;

/// @brief Field maxLifetime, offset: 0x48, size: 0x4, def value: None
 float_t  ___maxLifetime;

/// @brief Field timeSpawned, offset: 0x4c, size: 0x4, def value: None
 float_t  ___timeSpawned;

/// @brief Field hapticHitStrength, offset: 0x50, size: 0x4, def value: None
 float_t  ___hapticHitStrength;

/// @brief Field hapticHitDuration, offset: 0x54, size: 0x4, def value: None
 float_t  ___hapticHitDuration;

/// @brief Field parentBlaster, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlaster>  ___parentBlaster;

/// @brief Field projectileId, offset: 0x60, size: 0x4, def value: None
 int32_t  ___projectileId;

/// @brief Field firedByPlayer, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIPlayer>  ___firedByPlayer;

/// @brief Field startingVelocity, offset: 0x70, size: 0x4, def value: None
 float_t  ___startingVelocity;

/// @brief Field exclusionZoneDespawnEffect, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___exclusionZoneDespawnEffect;

/// @brief Field audioSource, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___poolId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___projectileType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___rb) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___hitEffect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___hitEffectPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___maxLifetime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___timeSpawned) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___hapticHitStrength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___hapticHitDuration) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___parentBlaster) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___projectileId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___firedByPlayer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___startingVelocity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___exclusionZoneDespawnEffect) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetBlasterProjectile, ___audioSource) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetBlasterProjectile) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
