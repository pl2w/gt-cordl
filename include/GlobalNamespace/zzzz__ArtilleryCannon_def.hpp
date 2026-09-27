#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCannon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArtilleryCannon)
namespace GlobalNamespace {
struct ArtilleryCannonState_CrankSyncState;
}
namespace GlobalNamespace {
class ArtilleryCannonState;
}
namespace GlobalNamespace {
class ArtilleryCrank;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ArtilleryCannon;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArtilleryCannon*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArtilleryCannon*, "", "ArtilleryCannon");
// Dependencies SlingshotProjectile::AOEKnockbackConfig, UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: ArtilleryCannon
class CORDL_TYPE ArtilleryCannon : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_LocalActorNr)) int32_t  LocalActorNr;

/// @brief Field fireHitNotifier, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireHitNotifier, put=__cordl_internal_set_fireHitNotifier)) ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  fireHitNotifier;

/// @brief Field fireSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireSound, put=__cordl_internal_set_fireSound)) ::UnityW<::UnityEngine::AudioSource>  fireSound;

/// @brief Field knockbackConfig, offset 0x78, size 0x18 
 __declspec(property(get=__cordl_internal_get_knockbackConfig, put=__cordl_internal_set_knockbackConfig)) ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  knockbackConfig;

/// @brief Field launchSpeed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchSpeed, put=__cordl_internal_set_launchSpeed)) float_t  launchSpeed;

/// @brief Field muzzle, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_muzzle, put=__cordl_internal_set_muzzle)) ::UnityW<::UnityEngine::Transform>  muzzle;

/// @brief Field pitchCrank, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_pitchCrank, put=__cordl_internal_set_pitchCrank)) ::UnityW<::GlobalNamespace::ArtilleryCrank>  pitchCrank;

/// @brief Field pitchTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_pitchTransform, put=__cordl_internal_set_pitchTransform)) ::UnityW<::UnityEngine::Transform>  pitchTransform;

/// @brief Field projectileHash, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileHash, put=__cordl_internal_set_projectileHash)) int32_t  projectileHash;

/// @brief Field projectilePrefab, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  projectilePrefab;

/// @brief Field state, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::UnityW<::GlobalNamespace::ArtilleryCannonState>  state;

/// @brief Field stateRef, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_stateRef, put=__cordl_internal_set_stateRef)) ::GlobalNamespace::XSceneRef  stateRef;

/// @brief Field yawCrank, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_yawCrank, put=__cordl_internal_set_yawCrank)) ::UnityW<::GlobalNamespace::ArtilleryCrank>  yawCrank;

/// @brief Field yawTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_yawTransform, put=__cordl_internal_set_yawTransform)) ::UnityW<::UnityEngine::Transform>  yawTransform;

/// @brief Method ApplyRotation, addr 0x5bf8f20, size 0x13c, virtual false, abstract: false, final false
inline void ApplyRotation() ;

/// @brief Method Awake, addr 0x5bf87e8, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Bind, addr 0x5bf89c0, size 0x16c, virtual false, abstract: false, final false
inline void Bind(::GlobalNamespace::ArtilleryCannonState*  newState) ;

/// @brief Method Fire, addr 0x5bf9e54, size 0x8c, virtual false, abstract: false, final false
inline void Fire() ;

/// @brief Method FireLocal, addr 0x5bfa0d0, size 0x2d8, virtual false, abstract: false, final false
inline void FireLocal() ;

/// @brief Method IsCrankHeldLocally, addr 0x5bf9784, size 0x3c, virtual false, abstract: false, final false
inline bool IsCrankHeldLocally(int32_t  crankIndex) ;

/// @brief Method LateUpdate, addr 0x5bf9194, size 0x198, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::ArtilleryCannon* New_ctor() ;

/// @brief Method OnCrankGrabbed, addr 0x5bf97c0, size 0x18, virtual false, abstract: false, final false
inline bool OnCrankGrabbed(int32_t  crankIndex, bool  isLeftHand) ;

/// @brief Method OnCrankInput, addr 0x5bf9c00, size 0x24, virtual false, abstract: false, final false
inline void OnCrankInput(int32_t  crankIndex, float_t  degrees) ;

/// @brief Method OnCrankReleased, addr 0x5bf99f0, size 0x14, virtual false, abstract: false, final false
inline void OnCrankReleased(int32_t  crankIndex, float_t  finalAngle) ;

/// @brief Method OnDisable, addr 0x5bf8b2c, size 0x120, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bf8860, size 0x160, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFireProjectileHit, addr 0x5bfa3a8, size 0x4, virtual false, abstract: false, final false
inline void OnFireProjectileHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method OnFiredRemote, addr 0x5bfa3ac, size 0x4, virtual false, abstract: false, final false
inline void OnFiredRemote() ;

/// @brief Method OnRotationChanged, addr 0x5bf9e50, size 0x4, virtual false, abstract: false, final false
inline void OnRotationChanged() ;

/// @brief Method OnStateSceneLoaded, addr 0x5bf8d7c, size 0x6c, virtual false, abstract: false, final false
inline void OnStateSceneLoaded() ;

/// @brief Method Unbind, addr 0x5bf8c4c, size 0x130, virtual false, abstract: false, final false
inline void Unbind() ;

/// @brief Method UpdateRemoteCrankVisual, addr 0x5bf9394, size 0x10c, virtual false, abstract: false, final false
inline void UpdateRemoteCrankVisual(::GlobalNamespace::ArtilleryCrank*  crank, ::GlobalNamespace::ArtilleryCannonState_CrankSyncState  syncState, int32_t  localActor) ;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& __cordl_internal_get_fireHitNotifier() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& __cordl_internal_get_fireHitNotifier() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_fireSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_fireSound() ;

constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig const& __cordl_internal_get_knockbackConfig() const;

constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig& __cordl_internal_get_knockbackConfig() ;

constexpr float_t const& __cordl_internal_get_launchSpeed() const;

constexpr float_t& __cordl_internal_get_launchSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_muzzle() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_muzzle() ;

constexpr ::UnityW<::GlobalNamespace::ArtilleryCrank> const& __cordl_internal_get_pitchCrank() const;

constexpr ::UnityW<::GlobalNamespace::ArtilleryCrank>& __cordl_internal_get_pitchCrank() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pitchTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pitchTransform() ;

constexpr int32_t const& __cordl_internal_get_projectileHash() const;

constexpr int32_t& __cordl_internal_get_projectileHash() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectilePrefab() ;

constexpr ::UnityW<::GlobalNamespace::ArtilleryCannonState> const& __cordl_internal_get_state() const;

constexpr ::UnityW<::GlobalNamespace::ArtilleryCannonState>& __cordl_internal_get_state() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_stateRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_stateRef() ;

constexpr ::UnityW<::GlobalNamespace::ArtilleryCrank> const& __cordl_internal_get_yawCrank() const;

constexpr ::UnityW<::GlobalNamespace::ArtilleryCrank>& __cordl_internal_get_yawCrank() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_yawTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_yawTransform() ;

constexpr void __cordl_internal_set_fireHitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value) ;

constexpr void __cordl_internal_set_fireSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_knockbackConfig(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  value) ;

constexpr void __cordl_internal_set_launchSpeed(float_t  value) ;

constexpr void __cordl_internal_set_muzzle(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pitchCrank(::UnityW<::GlobalNamespace::ArtilleryCrank>  value) ;

constexpr void __cordl_internal_set_pitchTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_projectileHash(int32_t  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_state(::UnityW<::GlobalNamespace::ArtilleryCannonState>  value) ;

constexpr void __cordl_internal_set_stateRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_yawCrank(::UnityW<::GlobalNamespace::ArtilleryCrank>  value) ;

constexpr void __cordl_internal_set_yawTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5bfa3b0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LocalActorNr, addr 0x5bf8764, size 0x84, virtual false, abstract: false, final false
inline int32_t get_LocalActorNr() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArtilleryCannon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArtilleryCannon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArtilleryCannon(ArtilleryCannon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArtilleryCannon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArtilleryCannon(ArtilleryCannon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{397};

/// [Header("Network State")]
/// [SerializeField]
/// @brief Field stateRef, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___stateRef;

/// [Header("Cranks")]
/// [SerializeField]
/// @brief Field pitchCrank, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ArtilleryCrank>  ___pitchCrank;

/// [SerializeField]
/// @brief Field yawCrank, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ArtilleryCrank>  ___yawCrank;

/// [Header("Rotation")]
/// [SerializeField]
/// @brief Field yawTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___yawTransform;

/// [SerializeField]
/// @brief Field pitchTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pitchTransform;

/// [Header("Firing")]
/// [SerializeField]
/// @brief Field muzzle, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___muzzle;

/// [SerializeField]
/// @brief Field projectilePrefab, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectilePrefab;

/// [SerializeField]
/// @brief Field launchSpeed, offset: 0x68, size: 0x4, def value: None
 float_t  ___launchSpeed;

/// [SerializeField]
/// @brief Field fireSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___fireSound;

/// [SerializeField]
/// @brief Field knockbackConfig, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  ___knockbackConfig;

/// [Header("Fire Trigger")]
/// [Tooltip("When a projectile hits this notifier, the cannon fires.")]
/// [SerializeField]
/// @brief Field fireHitNotifier, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  ___fireHitNotifier;

/// @brief Field state, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ArtilleryCannonState>  ___state;

/// @brief Field projectileHash, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___projectileHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___stateRef) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___pitchCrank) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___yawCrank) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___yawTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___pitchTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___muzzle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___projectilePrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___launchSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___fireSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___knockbackConfig) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___fireHitNotifier) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___state) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannon, ___projectileHash) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArtilleryCannon) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
