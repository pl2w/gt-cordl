#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterShadeFleeing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticCritterShadeFleeing)
namespace GlobalNamespace {
class CosmeticCritterShadeFleeing_ModelSwap;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterShadeFleeing;
}
namespace GlobalNamespace {
class CosmeticCritterShadeFleeing_ModelSwap;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterShadeFleeing*);
MARK_REF_T(::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterShadeFleeing*, "", "CosmeticCritterShadeFleeing");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*, "", "CosmeticCritterShadeFleeing/ModelSwap");
// Dependencies CosmeticCritter, CosmeticCritterShadeFleeing::ModelSwap, UnityEngine.AudioClip, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterShadeFleeing
class CORDL_TYPE CosmeticCritterShadeFleeing : public ::GlobalNamespace::CosmeticCritter {
public:
// Declarations
using ModelSwap = ::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap;

/// @brief Field animator, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field animatorProperty, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_animatorProperty, put=__cordl_internal_set_animatorProperty)) int32_t  animatorProperty;

/// @brief Field closestCatcherDistance, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_closestCatcherDistance, put=__cordl_internal_set_closestCatcherDistance)) float_t  closestCatcherDistance;

/// @brief Field fleeBobFrequencyXY, offset 0xc4, size 0x8 
 __declspec(property(get=__cordl_internal_get_fleeBobFrequencyXY, put=__cordl_internal_set_fleeBobFrequencyXY)) ::UnityEngine::Vector2  fleeBobFrequencyXY;

/// @brief Field fleeBobFrequencyXYMax, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_fleeBobFrequencyXYMax, put=__cordl_internal_set_fleeBobFrequencyXYMax)) ::UnityEngine::Vector2  fleeBobFrequencyXYMax;

/// @brief Field fleeBobMagnitudeXY, offset 0xcc, size 0x8 
 __declspec(property(get=__cordl_internal_get_fleeBobMagnitudeXY, put=__cordl_internal_set_fleeBobMagnitudeXY)) ::UnityEngine::Vector2  fleeBobMagnitudeXY;

/// @brief Field fleeBobMagnitudeXYMax, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_fleeBobMagnitudeXYMax, put=__cordl_internal_set_fleeBobMagnitudeXYMax)) ::UnityEngine::Vector2  fleeBobMagnitudeXYMax;

/// @brief Field fleeDistanceToDespawn, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_fleeDistanceToDespawn, put=__cordl_internal_set_fleeDistanceToDespawn)) float_t  fleeDistanceToDespawn;

/// @brief Field fleeForward, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_fleeForward, put=__cordl_internal_set_fleeForward)) ::UnityEngine::Vector3  fleeForward;

/// @brief Field fleeRight, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_fleeRight, put=__cordl_internal_set_fleeRight)) ::UnityEngine::Vector3  fleeRight;

/// @brief Field fleeSpeed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_fleeSpeed, put=__cordl_internal_set_fleeSpeed)) float_t  fleeSpeed;

/// @brief Field fleeUp, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_fleeUp, put=__cordl_internal_set_fleeUp)) ::UnityEngine::Vector3  fleeUp;

/// @brief Field modelSwaps, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_modelSwaps, put=__cordl_internal_set_modelSwaps)) ::ArrayW<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>  modelSwaps;

/// @brief Field origin, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_origin, put=__cordl_internal_set_origin)) ::UnityEngine::Vector3  origin;

/// @brief Field pullVector, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_pullVector, put=__cordl_internal_set_pullVector)) ::UnityEngine::Vector3  pullVector;

/// @brief Field spawnAudioClips, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnAudioClips, put=__cordl_internal_set_spawnAudioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  spawnAudioClips;

/// @brief Field spawnAudioSource, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnAudioSource, put=__cordl_internal_set_spawnAudioSource)) ::UnityW<::UnityEngine::AudioSource>  spawnAudioSource;

/// @brief Field spawnFX, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnFX, put=__cordl_internal_set_spawnFX)) ::UnityW<::UnityEngine::ParticleSystem>  spawnFX;

/// @brief Field trailingPosition, offset 0xd4, size 0xc 
 __declspec(property(get=__cordl_internal_get_trailingPosition, put=__cordl_internal_set_trailingPosition)) ::UnityEngine::Vector3  trailingPosition;

static inline ::GlobalNamespace::CosmeticCritterShadeFleeing* New_ctor() ;

/// @brief Method OnSpawn, addr 0x57f3444, size 0xf4, virtual true, abstract: false, final false
inline void OnSpawn() ;

/// @brief Method SetFleePosition, addr 0x57f30e8, size 0x258, virtual false, abstract: false, final false
inline void SetFleePosition(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  fleeFrom) ;

/// @brief Method SetRandomVariables, addr 0x57f3538, size 0x160, virtual true, abstract: false, final false
inline void SetRandomVariables() ;

/// @brief Method Tick, addr 0x57f3698, size 0x29c, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr int32_t const& __cordl_internal_get_animatorProperty() const;

constexpr int32_t& __cordl_internal_get_animatorProperty() ;

constexpr float_t const& __cordl_internal_get_closestCatcherDistance() const;

constexpr float_t& __cordl_internal_get_closestCatcherDistance() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_fleeBobFrequencyXY() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_fleeBobFrequencyXY() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_fleeBobFrequencyXYMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_fleeBobFrequencyXYMax() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_fleeBobMagnitudeXY() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_fleeBobMagnitudeXY() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_fleeBobMagnitudeXYMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_fleeBobMagnitudeXYMax() ;

constexpr float_t const& __cordl_internal_get_fleeDistanceToDespawn() const;

constexpr float_t& __cordl_internal_get_fleeDistanceToDespawn() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_fleeForward() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_fleeForward() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_fleeRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_fleeRight() ;

constexpr float_t const& __cordl_internal_get_fleeSpeed() const;

constexpr float_t& __cordl_internal_get_fleeSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_fleeUp() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_fleeUp() ;

constexpr ::ArrayW<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*> const& __cordl_internal_get_modelSwaps() const;

constexpr ::ArrayW<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>& __cordl_internal_get_modelSwaps() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_origin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_origin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pullVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pullVector() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_spawnAudioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_spawnAudioClips() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_spawnAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_spawnAudioSource() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_spawnFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_spawnFX() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_trailingPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_trailingPosition() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_animatorProperty(int32_t  value) ;

constexpr void __cordl_internal_set_closestCatcherDistance(float_t  value) ;

constexpr void __cordl_internal_set_fleeBobFrequencyXY(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_fleeBobFrequencyXYMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_fleeBobMagnitudeXY(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_fleeBobMagnitudeXYMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_fleeDistanceToDespawn(float_t  value) ;

constexpr void __cordl_internal_set_fleeForward(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_fleeRight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_fleeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_fleeUp(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_modelSwaps(::ArrayW<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>  value) ;

constexpr void __cordl_internal_set_origin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pullVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_spawnAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_spawnAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_spawnFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_trailingPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x57f3934, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterShadeFleeing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterShadeFleeing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterShadeFleeing(CosmeticCritterShadeFleeing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterShadeFleeing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterShadeFleeing(CosmeticCritterShadeFleeing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{201};

/// [Tooltip("Randomly selects one of these models when spawned, accounting for relative probabilities. For example, if one model has a probability of 1 and another a probability of 2, the second is twice as likely to be picked (and thus will be picked 67% of the time).")]
/// [SerializeField]
/// @brief Field modelSwaps, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap*>  ___modelSwaps;

/// [Space]
/// [Tooltip("Despawn the Shade after it has fled (fleed?) this many meters.")]
/// [SerializeField]
/// @brief Field fleeDistanceToDespawn, offset: 0x50, size: 0x4, def value: None
 float_t  ___fleeDistanceToDespawn;

/// [Tooltip("Flee away from the spotter at this many meters per second.")]
/// [SerializeField]
/// @brief Field fleeSpeed, offset: 0x54, size: 0x4, def value: None
 float_t  ___fleeSpeed;

/// [Tooltip("The maximum strength the shade can move bob around in the horizontal and vertical axes, with final value chosen randomly.")]
/// [SerializeField]
/// @brief Field fleeBobMagnitudeXYMax, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___fleeBobMagnitudeXYMax;

/// [Tooltip("The maximum frequency the shade can move bob around in the horizontal and vertical axes, with final value chosen randomly.")]
/// [SerializeField]
/// @brief Field fleeBobFrequencyXYMax, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___fleeBobFrequencyXYMax;

/// [SerializeField]
/// @brief Field animator, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// [SerializeField]
/// @brief Field spawnFX, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___spawnFX;

/// [SerializeField]
/// @brief Field spawnAudioSource, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___spawnAudioSource;

/// [SerializeField]
/// @brief Field spawnAudioClips, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___spawnAudioClips;

/// [HideInInspector]
/// @brief Field pullVector, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pullVector;

/// @brief Field origin, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___origin;

/// @brief Field fleeForward, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___fleeForward;

/// @brief Field fleeRight, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___fleeRight;

/// @brief Field fleeUp, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___fleeUp;

/// @brief Field fleeBobFrequencyXY, offset: 0xc4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___fleeBobFrequencyXY;

/// @brief Field fleeBobMagnitudeXY, offset: 0xcc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___fleeBobMagnitudeXY;

/// @brief Field trailingPosition, offset: 0xd4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___trailingPosition;

/// @brief Field closestCatcherDistance, offset: 0xe0, size: 0x4, def value: None
 float_t  ___closestCatcherDistance;

/// @brief Field animatorProperty, offset: 0xe4, size: 0x4, def value: None
 int32_t  ___animatorProperty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___modelSwaps) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___fleeDistanceToDespawn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___fleeSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___fleeBobMagnitudeXYMax) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___fleeBobFrequencyXYMax) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___animator) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___spawnFX) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___spawnAudioSource) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___spawnAudioClips) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___pullVector) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___origin) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___fleeForward) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___fleeRight) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___fleeUp) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___fleeBobFrequencyXY) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___fleeBobMagnitudeXY) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___trailingPosition) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___closestCatcherDistance) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing, ___animatorProperty) == 0xe4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterShadeFleeing) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterShadeFleeing/ModelSwap
class CORDL_TYPE CosmeticCritterShadeFleeing_ModelSwap : public ::System::Object {
public:
// Declarations
/// @brief Field gameObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field relativeProbability, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_relativeProbability, put=__cordl_internal_set_relativeProbability)) float_t  relativeProbability;

static inline ::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr float_t const& __cordl_internal_get_relativeProbability() const;

constexpr float_t& __cordl_internal_get_relativeProbability() ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_relativeProbability(float_t  value) ;

/// @brief Method .ctor, addr 0x57f39d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterShadeFleeing_ModelSwap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterShadeFleeing_ModelSwap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterShadeFleeing_ModelSwap(CosmeticCritterShadeFleeing_ModelSwap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterShadeFleeing_ModelSwap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterShadeFleeing_ModelSwap(CosmeticCritterShadeFleeing_ModelSwap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{200};

/// @brief Field relativeProbability, offset: 0x10, size: 0x4, def value: None
 float_t  ___relativeProbability;

/// @brief Field gameObject, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap, ___relativeProbability) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap, ___gameObject) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterShadeFleeing_ModelSwap) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
