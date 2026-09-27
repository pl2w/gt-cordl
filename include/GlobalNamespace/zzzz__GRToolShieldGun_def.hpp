#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolShieldGun.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolShieldGun_State_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolShieldGun)
namespace GlobalNamespace {
class AbilityHaptic;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
struct GRToolShieldGun_State;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolShieldGun;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolShieldGun*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolShieldGun*, "", "GRToolShieldGun");
// Dependencies GRToolShieldGun::State, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolShieldGun
class CORDL_TYPE GRToolShieldGun : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GRToolShieldGun_State;

/// @brief Field activatedLocally, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_activatedLocally, put=__cordl_internal_set_activatedLocally)) bool  activatedLocally;

/// @brief Field aeoHitRadius, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_aeoHitRadius, put=__cordl_internal_set_aeoHitRadius)) float_t  aeoHitRadius;

/// @brief Field allowAoeHits, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowAoeHits, put=__cordl_internal_set_allowAoeHits)) bool  allowAoeHits;

/// @brief Field attributes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field chargeDuration, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeDuration, put=__cordl_internal_set_chargeDuration)) float_t  chargeDuration;

/// @brief Field chargeSound, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeSound, put=__cordl_internal_set_chargeSound)) ::UnityW<::UnityEngine::AudioClip>  chargeSound;

/// @brief Field chargeSoundVolume, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeSoundVolume, put=__cordl_internal_set_chargeSoundVolume)) float_t  chargeSoundVolume;

/// @brief Field colliders, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field cooldownDuration, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownDuration, put=__cordl_internal_set_cooldownDuration)) float_t  cooldownDuration;

/// @brief Field cooldownMinimum, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownMinimum, put=__cordl_internal_set_cooldownMinimum)) float_t  cooldownMinimum;

/// @brief Field firedProjectile, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_firedProjectile, put=__cordl_internal_set_firedProjectile)) ::UnityW<::GlobalNamespace::SlingshotProjectile>  firedProjectile;

/// @brief Field firingSound, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_firingSound, put=__cordl_internal_set_firingSound)) ::UnityW<::UnityEngine::AudioClip>  firingSound;

/// @brief Field firingSoundVolume, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_firingSoundVolume, put=__cordl_internal_set_firingSoundVolume)) float_t  firingSoundVolume;

/// @brief Field firingTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_firingTransform, put=__cordl_internal_set_firingTransform)) ::UnityW<::UnityEngine::Transform>  firingTransform;

/// @brief Field flashDuration, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashDuration, put=__cordl_internal_set_flashDuration)) float_t  flashDuration;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field onHaptic, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onHaptic, put=__cordl_internal_set_onHaptic)) ::GlobalNamespace::AbilityHaptic*  onHaptic;

/// @brief Field projectileColor, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_projectileColor, put=__cordl_internal_set_projectileColor)) ::UnityEngine::Color  projectileColor;

/// @brief Field projectilePrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  projectilePrefab;

/// @brief Field projectileSpeed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileSpeed, put=__cordl_internal_set_projectileSpeed)) float_t  projectileSpeed;

/// @brief Field projectileTrailPrefab, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileTrailPrefab, put=__cordl_internal_set_projectileTrailPrefab)) ::UnityW<::UnityEngine::GameObject>  projectileTrailPrefab;

/// @brief Field state, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRToolShieldGun_State  state;

/// @brief Field stateTimeRemaining, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateTimeRemaining, put=__cordl_internal_set_stateTimeRemaining)) float_t  stateTimeRemaining;

/// @brief Field timeLastFired, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastFired, put=__cordl_internal_set_timeLastFired)) float_t  timeLastFired;

/// @brief Field tool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Field upgrade1FiringSound, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade1FiringSound, put=__cordl_internal_set_upgrade1FiringSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade1FiringSound;

/// @brief Field upgrade2FiringSound, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade2FiringSound, put=__cordl_internal_set_upgrade2FiringSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade2FiringSound;

/// @brief Field upgrade3FiringSound, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade3FiringSound, put=__cordl_internal_set_upgrade3FiringSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade3FiringSound;

/// @brief Field vrRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vrRigs, put=setStaticF_vrRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  vrRigs;

/// @brief Field waitingForButtonRelease, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingForButtonRelease, put=__cordl_internal_set_waitingForButtonRelease)) bool  waitingForButtonRelease;

/// @brief Method AttachTrail, addr 0x58c7c50, size 0x18c, virtual false, abstract: false, final false
inline void AttachTrail(int32_t  trailHash, ::UnityEngine::GameObject*  newProjectile, ::UnityEngine::Vector3  location, bool  blueTeam, bool  orangeTeam) ;

/// @brief Method Awake, addr 0x58c6ff8, size 0xdc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanChangeState, addr 0x58c7504, size 0x48, virtual false, abstract: false, final false
inline bool CanChangeState(int64_t  newStateIndex) ;

/// @brief Method IsButtonHeld, addr 0x58c735c, size 0xd4, virtual false, abstract: false, final false
inline bool IsButtonHeld() ;

/// @brief Method IsHeldLocal, addr 0x58c715c, size 0x78, virtual false, abstract: false, final false
inline bool IsHeldLocal() ;

static inline ::GlobalNamespace::GRToolShieldGun* New_ctor() ;

/// @brief Method OnProjectileImpact, addr 0x58c7ddc, size 0x578, virtual false, abstract: false, final false
inline void OnProjectileImpact(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer) ;

/// @brief Method OnToolUpgraded, addr 0x58c70d4, size 0x88, virtual false, abstract: false, final false
inline void OnToolUpgraded(::GlobalNamespace::GRTool*  tool) ;

/// @brief Method OnUpdateAuthority, addr 0x58c7224, size 0x110, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58c7334, size 0x28, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PlayVibration, addr 0x58c7b38, size 0x118, virtual false, abstract: false, final false
inline void PlayVibration(float_t  strength, float_t  duration) ;

/// @brief Method SetState, addr 0x58c7468, size 0x9c, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRToolShieldGun_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58c7430, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::GRToolShieldGun_State  newState) ;

/// @brief Method StartCharge, addr 0x58c754c, size 0x10c, virtual false, abstract: false, final false
inline void StartCharge() ;

/// @brief Method StartFiring, addr 0x58c7658, size 0x4e0, virtual false, abstract: false, final false
inline void StartFiring() ;

/// @brief Method Update, addr 0x58c71d4, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_activatedLocally() const;

constexpr bool& __cordl_internal_get_activatedLocally() ;

constexpr float_t const& __cordl_internal_get_aeoHitRadius() const;

constexpr float_t& __cordl_internal_get_aeoHitRadius() ;

constexpr bool const& __cordl_internal_get_allowAoeHits() const;

constexpr bool& __cordl_internal_get_allowAoeHits() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_chargeDuration() const;

constexpr float_t& __cordl_internal_get_chargeDuration() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_chargeSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_chargeSound() ;

constexpr float_t const& __cordl_internal_get_chargeSoundVolume() const;

constexpr float_t& __cordl_internal_get_chargeSoundVolume() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr float_t const& __cordl_internal_get_cooldownDuration() const;

constexpr float_t& __cordl_internal_get_cooldownDuration() ;

constexpr float_t const& __cordl_internal_get_cooldownMinimum() const;

constexpr float_t& __cordl_internal_get_cooldownMinimum() ;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectile> const& __cordl_internal_get_firedProjectile() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectile>& __cordl_internal_get_firedProjectile() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_firingSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_firingSound() ;

constexpr float_t const& __cordl_internal_get_firingSoundVolume() const;

constexpr float_t& __cordl_internal_get_firingSoundVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_firingTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_firingTransform() ;

constexpr float_t const& __cordl_internal_get_flashDuration() const;

constexpr float_t& __cordl_internal_get_flashDuration() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_onHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_onHaptic() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_projectileColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_projectileColor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectilePrefab() ;

constexpr float_t const& __cordl_internal_get_projectileSpeed() const;

constexpr float_t& __cordl_internal_get_projectileSpeed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectileTrailPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectileTrailPrefab() ;

constexpr ::GlobalNamespace::GRToolShieldGun_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRToolShieldGun_State& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_stateTimeRemaining() const;

constexpr float_t& __cordl_internal_get_stateTimeRemaining() ;

constexpr float_t const& __cordl_internal_get_timeLastFired() const;

constexpr float_t& __cordl_internal_get_timeLastFired() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade1FiringSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade1FiringSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade2FiringSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade2FiringSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade3FiringSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade3FiringSound() ;

constexpr bool const& __cordl_internal_get_waitingForButtonRelease() const;

constexpr bool& __cordl_internal_get_waitingForButtonRelease() ;

constexpr void __cordl_internal_set_activatedLocally(bool  value) ;

constexpr void __cordl_internal_set_aeoHitRadius(float_t  value) ;

constexpr void __cordl_internal_set_allowAoeHits(bool  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_chargeDuration(float_t  value) ;

constexpr void __cordl_internal_set_chargeSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_chargeSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_cooldownDuration(float_t  value) ;

constexpr void __cordl_internal_set_cooldownMinimum(float_t  value) ;

constexpr void __cordl_internal_set_firedProjectile(::UnityW<::GlobalNamespace::SlingshotProjectile>  value) ;

constexpr void __cordl_internal_set_firingSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_firingSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_firingTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_flashDuration(float_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_onHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_projectileColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_projectileSpeed(float_t  value) ;

constexpr void __cordl_internal_set_projectileTrailPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRToolShieldGun_State  value) ;

constexpr void __cordl_internal_set_stateTimeRemaining(float_t  value) ;

constexpr void __cordl_internal_set_timeLastFired(float_t  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

constexpr void __cordl_internal_set_upgrade1FiringSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade2FiringSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade3FiringSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_waitingForButtonRelease(bool  value) ;

/// @brief Method .ctor, addr 0x58c8354, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_vrRigs() ;

static inline void setStaticF_vrRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolShieldGun() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolShieldGun", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolShieldGun(GRToolShieldGun && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolShieldGun", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolShieldGun(GRToolShieldGun const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2084};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field tool, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field attributes, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field projectilePrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectilePrefab;

/// @brief Field projectileTrailPrefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectileTrailPrefab;

/// @brief Field firingTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___firingTransform;

/// @brief Field colliders, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field projectileSpeed, offset: 0x58, size: 0x4, def value: None
 float_t  ___projectileSpeed;

/// @brief Field projectileColor, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Color  ___projectileColor;

/// @brief Field allowAoeHits, offset: 0x6c, size: 0x1, def value: None
 bool  ___allowAoeHits;

/// @brief Field aeoHitRadius, offset: 0x70, size: 0x4, def value: None
 float_t  ___aeoHitRadius;

/// @brief Field chargeDuration, offset: 0x74, size: 0x4, def value: None
 float_t  ___chargeDuration;

/// @brief Field flashDuration, offset: 0x78, size: 0x4, def value: None
 float_t  ___flashDuration;

/// @brief Field cooldownDuration, offset: 0x7c, size: 0x4, def value: None
 float_t  ___cooldownDuration;

/// @brief Field audioSource, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field chargeSound, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___chargeSound;

/// @brief Field chargeSoundVolume, offset: 0x90, size: 0x4, def value: None
 float_t  ___chargeSoundVolume;

/// @brief Field firingSound, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___firingSound;

/// @brief Field firingSoundVolume, offset: 0xa0, size: 0x4, def value: None
 float_t  ___firingSoundVolume;

/// @brief Field upgrade1FiringSound, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade1FiringSound;

/// @brief Field upgrade2FiringSound, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade2FiringSound;

/// @brief Field upgrade3FiringSound, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade3FiringSound;

/// [Header("Haptic")]
/// @brief Field onHaptic, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___onHaptic;

/// @brief Field state, offset: 0xc8, size: 0x4, def value: None
 ::GlobalNamespace::GRToolShieldGun_State  ___state;

/// @brief Field stateTimeRemaining, offset: 0xcc, size: 0x4, def value: None
 float_t  ___stateTimeRemaining;

/// @brief Field activatedLocally, offset: 0xd0, size: 0x1, def value: None
 bool  ___activatedLocally;

/// @brief Field waitingForButtonRelease, offset: 0xd1, size: 0x1, def value: None
 bool  ___waitingForButtonRelease;

/// @brief Field timeLastFired, offset: 0xd4, size: 0x4, def value: None
 float_t  ___timeLastFired;

/// @brief Field cooldownMinimum, offset: 0xd8, size: 0x4, def value: None
 float_t  ___cooldownMinimum;

/// @brief Field firedProjectile, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectile>  ___firedProjectile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___tool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___attributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___projectilePrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___projectileTrailPrefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___firingTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___colliders) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___projectileSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___projectileColor) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___allowAoeHits) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___aeoHitRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___chargeDuration) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___flashDuration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___cooldownDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___audioSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___chargeSound) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___chargeSoundVolume) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___firingSound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___firingSoundVolume) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___upgrade1FiringSound) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___upgrade2FiringSound) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___upgrade3FiringSound) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___onHaptic) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___state) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___stateTimeRemaining) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___activatedLocally) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___waitingForButtonRelease) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___timeLastFired) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___cooldownMinimum) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolShieldGun, ___firedProjectile) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolShieldGun) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
