#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/Summer/Projectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Projectile)
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class IProjectile;
}
namespace GorillaTag::Reactions {
class SpawnWorldEffects;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioClip;
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
class ConstantForce;
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
namespace GorillaTag::Cosmetics::Summer {
class Projectile;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::Summer::Projectile*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::Summer::Projectile*, "GorillaTag.Cosmetics.Summer", "Projectile");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics::Summer {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.Summer.Projectile
class CORDL_TYPE Projectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field collisionLayerMasks, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionLayerMasks, put=__cordl_internal_set_collisionLayerMasks)) ::UnityEngine::LayerMask  collisionLayerMasks;

/// @brief Field collisionTags, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionTags, put=__cordl_internal_set_collisionTags)) ::System::Collections::Generic::List_1<::StringW>*  collisionTags;

/// @brief Field destroyDelay, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroyDelay, put=__cordl_internal_set_destroyDelay)) float_t  destroyDelay;

/// @brief Field destroyOnCollisionEnter, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyOnCollisionEnter, put=__cordl_internal_set_destroyOnCollisionEnter)) bool  destroyOnCollisionEnter;

/// @brief Field forceComponent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_forceComponent, put=__cordl_internal_set_forceComponent)) ::UnityW<::UnityEngine::ConstantForce>  forceComponent;

/// @brief Field impactEffect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_impactEffect, put=__cordl_internal_set_impactEffect)) ::UnityW<::UnityEngine::GameObject>  impactEffect;

/// @brief Field impactEffectOffset, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_impactEffectOffset, put=__cordl_internal_set_impactEffectOffset)) float_t  impactEffectOffset;

/// @brief Field impactEffectSpawned, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_impactEffectSpawned, put=__cordl_internal_set_impactEffectSpawned)) bool  impactEffectSpawned;

/// @brief Field launchAudio, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchAudio, put=__cordl_internal_set_launchAudio)) ::UnityW<::UnityEngine::AudioClip>  launchAudio;

/// @brief Field onImpactShared, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onImpactShared, put=__cordl_internal_set_onImpactShared)) ::UnityEngine::Events::UnityEvent*  onImpactShared;

/// @brief Field onLaunchShared, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLaunchShared, put=__cordl_internal_set_onLaunchShared)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onLaunchShared;

/// @brief Field rigidbody, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbody, put=__cordl_internal_set_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody;

/// @brief Field spawnWorldEffects, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnWorldEffects, put=__cordl_internal_set_spawnWorldEffects)) ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  spawnWorldEffects;

/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr operator  ::GorillaTag::Cosmetics::IProjectile*() noexcept;

/// @brief Method Awake, addr 0x5da74ac, size 0x94, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DestroyProjectile, addr 0x5da7c54, size 0x150, virtual false, abstract: false, final false
inline void DestroyProjectile() ;

/// @brief Method GetColliderHitInfo, addr 0x5da7da4, size 0x2b8, virtual false, abstract: false, final false
inline void GetColliderHitInfo(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal) ;

/// @brief Method HandleImpact, addr 0x5da7840, size 0x200, virtual false, abstract: false, final false
inline void HandleImpact(::UnityEngine::GameObject*  hitObject, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal) ;

/// @brief Method IsTagValid, addr 0x5da77d4, size 0x6c, virtual false, abstract: false, final false
inline bool IsTagValid(::UnityEngine::GameObject*  obj) ;

/// @brief Method Launch, addr 0x5da7544, size 0x290, virtual true, abstract: false, final true
inline void Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progressStep) ;

static inline ::GorillaTag::Cosmetics::Summer::Projectile* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5da805c, size 0xc4, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  other) ;

/// @brief Method OnCollisionStay, addr 0x5da8120, size 0xc4, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  other) ;

/// @brief Method OnEnable, addr 0x5da7540, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5da81e4, size 0x6c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x5da8250, size 0x98, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method SpawnImpactEffect, addr 0x5da7a40, size 0x214, virtual false, abstract: false, final false
inline void SpawnImpactEffect(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collisionLayerMasks() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collisionLayerMasks() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_collisionTags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_collisionTags() ;

constexpr float_t const& __cordl_internal_get_destroyDelay() const;

constexpr float_t& __cordl_internal_get_destroyDelay() ;

constexpr bool const& __cordl_internal_get_destroyOnCollisionEnter() const;

constexpr bool& __cordl_internal_get_destroyOnCollisionEnter() ;

constexpr ::UnityW<::UnityEngine::ConstantForce> const& __cordl_internal_get_forceComponent() const;

constexpr ::UnityW<::UnityEngine::ConstantForce>& __cordl_internal_get_forceComponent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_impactEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_impactEffect() ;

constexpr float_t const& __cordl_internal_get_impactEffectOffset() const;

constexpr float_t& __cordl_internal_get_impactEffectOffset() ;

constexpr bool const& __cordl_internal_get_impactEffectSpawned() const;

constexpr bool& __cordl_internal_get_impactEffectSpawned() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_launchAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_launchAudio() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onImpactShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onImpactShared() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onLaunchShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onLaunchShared() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbody() ;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects> const& __cordl_internal_get_spawnWorldEffects() const;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>& __cordl_internal_get_spawnWorldEffects() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_collisionLayerMasks(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_collisionTags(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_destroyDelay(float_t  value) ;

constexpr void __cordl_internal_set_destroyOnCollisionEnter(bool  value) ;

constexpr void __cordl_internal_set_forceComponent(::UnityW<::UnityEngine::ConstantForce>  value) ;

constexpr void __cordl_internal_set_impactEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_impactEffectOffset(float_t  value) ;

constexpr void __cordl_internal_set_impactEffectSpawned(bool  value) ;

constexpr void __cordl_internal_set_launchAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_onImpactShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onLaunchShared(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_spawnWorldEffects(::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  value) ;

/// @brief Method .ctor, addr 0x5da82e8, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* i___GorillaTag__Cosmetics__IProjectile() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Projectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Projectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Projectile(Projectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Projectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Projectile(Projectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4993};

/// [SerializeField]
/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field impactEffect, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___impactEffect;

/// [SerializeField]
/// @brief Field launchAudio, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___launchAudio;

/// [SerializeField]
/// @brief Field collisionLayerMasks, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___collisionLayerMasks;

/// [SerializeField]
/// @brief Field collisionTags, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___collisionTags;

/// [SerializeField]
/// @brief Field destroyOnCollisionEnter, offset: 0x48, size: 0x1, def value: None
 bool  ___destroyOnCollisionEnter;

/// [SerializeField]
/// @brief Field destroyDelay, offset: 0x4c, size: 0x4, def value: None
 float_t  ___destroyDelay;

/// [Tooltip("Distance from the surface that the particle should spawn.")]
/// [SerializeField]
/// @brief Field impactEffectOffset, offset: 0x50, size: 0x4, def value: None
 float_t  ___impactEffectOffset;

/// [SerializeField]
/// @brief Field spawnWorldEffects, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  ___spawnWorldEffects;

/// @brief Field forceComponent, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ConstantForce>  ___forceComponent;

/// @brief Field onLaunchShared, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onLaunchShared;

/// @brief Field onImpactShared, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onImpactShared;

/// @brief Field impactEffectSpawned, offset: 0x78, size: 0x1, def value: None
 bool  ___impactEffectSpawned;

/// @brief Field rigidbody, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidbody;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___impactEffect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___launchAudio) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___collisionLayerMasks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___collisionTags) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___destroyOnCollisionEnter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___destroyDelay) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___impactEffectOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___spawnWorldEffects) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___forceComponent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___onLaunchShared) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___onImpactShared) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___impactEffectSpawned) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Summer::Projectile, ___rigidbody) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::Summer::Projectile) == 0x88, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics::Summer
