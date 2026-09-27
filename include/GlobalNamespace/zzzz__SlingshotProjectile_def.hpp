#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SlingshotProjectile)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct SlingshotProjectile_AOEKnockbackConfig;
}
namespace GlobalNamespace {
class SlingshotProjectile_ProjectileImpactEvent;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace GorillaTag::Reactions {
class SpawnWorldEffects;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ConstantForce;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GlobalNamespace {
class SlingshotProjectile_ProjectileImpactEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotProjectile*);
MARK_REF_T(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectile*, "", "SlingshotProjectile");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*, "", "SlingshotProjectile/ProjectileImpactEvent");
// Dependencies SlingshotProjectile::AOEKnockbackConfig, System.Nullable`1<T>, UnityEngine.Color, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotProjectile
class CORDL_TYPE SlingshotProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AOEKnockbackConfig = ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig;

using ProjectileImpactEvent = ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent;

/// @brief Field OnHitPlayer, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHitPlayer, put=__cordl_internal_set_OnHitPlayer)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  OnHitPlayer;

/// @brief Field OnImapctEvent, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnImapctEvent, put=__cordl_internal_set_OnImapctEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  OnImapctEvent;

/// @brief Field OnImpact, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnImpact, put=__cordl_internal_set_OnImpact)) ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*  OnImpact;

/// @brief Field OnLaunch, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLaunch, put=__cordl_internal_set_OnLaunch)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  OnLaunch;

/// @brief Field <launchPosition>k__BackingField, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get__launchPosition_k__BackingField, put=__cordl_internal_set__launchPosition_k__BackingField)) ::UnityEngine::Vector3  _launchPosition_k__BackingField;

/// @brief Field aoeKnockbackConfig, offset 0x100, size 0x10 
 __declspec(property(get=__cordl_internal_get_aoeKnockbackConfig, put=__cordl_internal_set_aoeKnockbackConfig)) ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>  aoeKnockbackConfig;

/// @brief Field blueBall, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_blueBall, put=__cordl_internal_set_blueBall)) ::UnityW<::UnityEngine::Renderer>  blueBall;

/// @brief Field blueColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_blueColor, put=__cordl_internal_set_blueColor)) ::UnityEngine::Color  blueColor;

/// @brief Field colorizeBalls, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_colorizeBalls, put=__cordl_internal_set_colorizeBalls)) bool  colorizeBalls;

/// @brief Field defaultBall, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultBall, put=__cordl_internal_set_defaultBall)) ::UnityW<::UnityEngine::Renderer>  defaultBall;

/// @brief Field defaultColor, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultColor, put=__cordl_internal_set_defaultColor)) ::UnityEngine::Color  defaultColor;

/// @brief Field distanceTraveled, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceTraveled, put=__cordl_internal_set_distanceTraveled)) float_t  distanceTraveled;

/// @brief Field dontDestroyOnHit, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontDestroyOnHit, put=__cordl_internal_set_dontDestroyOnHit)) bool  dontDestroyOnHit;

/// @brief Field faceDirectionOfTravel, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get_faceDirectionOfTravel, put=__cordl_internal_set_faceDirectionOfTravel)) bool  faceDirectionOfTravel;

/// @brief Field floorLayerMask, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_floorLayerMask, put=__cordl_internal_set_floorLayerMask)) ::UnityEngine::LayerMask  floorLayerMask;

/// @brief Field forceComponent, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_forceComponent, put=__cordl_internal_set_forceComponent)) ::UnityW<::UnityEngine::ConstantForce>  forceComponent;

/// @brief Field forwardForceMultiplier, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_forwardForceMultiplier, put=__cordl_internal_set_forwardForceMultiplier)) float_t  forwardForceMultiplier;

/// @brief Field gravityController, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityController, put=__cordl_internal_set_gravityController)) ::UnityW<::GorillaTag::Gravity::MonkeGravityController>  gravityController;

/// @brief Field gravityMultiplier, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityMultiplier, put=__cordl_internal_set_gravityMultiplier)) float_t  gravityMultiplier;

/// @brief Field impactEffectOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_impactEffectOffset, put=__cordl_internal_set_impactEffectOffset)) float_t  impactEffectOffset;

/// @brief Field impactEffectScaleMultiplier, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_impactEffectScaleMultiplier, put=__cordl_internal_set_impactEffectScaleMultiplier)) float_t  impactEffectScaleMultiplier;

/// @brief Field impactSoundPitchOverride, offset 0x120, size 0x10 
 __declspec(property(get=__cordl_internal_get_impactSoundPitchOverride, put=__cordl_internal_set_impactSoundPitchOverride)) ::System::Nullable_1<float_t>  impactSoundPitchOverride;

/// @brief Field impactSoundVolumeOverride, offset 0x110, size 0x10 
 __declspec(property(get=__cordl_internal_get_impactSoundVolumeOverride, put=__cordl_internal_set_impactSoundVolumeOverride)) ::System::Nullable_1<float_t>  impactSoundVolumeOverride;

/// @brief Field initialScale, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialScale, put=__cordl_internal_set_initialScale)) float_t  initialScale;

/// @brief Field isSettled, offset 0x17c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSettled, put=__cordl_internal_set_isSettled)) bool  isSettled;

/// @brief Field keepRotationUpright, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_keepRotationUpright, put=__cordl_internal_set_keepRotationUpright)) bool  keepRotationUpright;

 __declspec(property(get=get_launchPosition, put=set_launchPosition)) ::UnityEngine::Vector3  launchPosition;

/// @brief Field launchSoundBankPlayer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchSoundBankPlayer, put=__cordl_internal_set_launchSoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  launchSoundBankPlayer;

/// @brief Field lifeTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifeTime, put=__cordl_internal_set_lifeTime)) float_t  lifeTime;

/// @brief Field m_sendNetworkedImpact, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_sendNetworkedImpact, put=__cordl_internal_set_m_sendNetworkedImpact)) bool  m_sendNetworkedImpact;

/// @brief Field matPropBlock, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_matPropBlock, put=__cordl_internal_set_matPropBlock)) ::UnityEngine::MaterialPropertyBlock*  matPropBlock;

/// @brief Field myProjectileCount, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_myProjectileCount, put=__cordl_internal_set_myProjectileCount)) int32_t  myProjectileCount;

/// @brief Field orangeBall, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_orangeBall, put=__cordl_internal_set_orangeBall)) ::UnityW<::UnityEngine::Renderer>  orangeBall;

/// @brief Field orangeColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_orangeColor, put=__cordl_internal_set_orangeColor)) ::UnityEngine::Color  orangeColor;

/// @brief Field particleLaunched, offset 0xb2, size 0x1 
 __declspec(property(get=__cordl_internal_get_particleLaunched, put=__cordl_internal_set_particleLaunched)) bool  particleLaunched;

/// @brief Field placementOffset, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_placementOffset, put=__cordl_internal_set_placementOffset)) float_t  placementOffset;

/// @brief Field playerImpactEffectPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerImpactEffectPrefab, put=__cordl_internal_set_playerImpactEffectPrefab)) ::UnityW<::UnityEngine::GameObject>  playerImpactEffectPrefab;

/// @brief Field previousPosition, offset 0xf0, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousPosition, put=__cordl_internal_set_previousPosition)) ::UnityEngine::Vector3  previousPosition;

/// @brief Field projectileOwner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileOwner, put=__cordl_internal_set_projectileOwner)) ::GlobalNamespace::NetPlayer*  projectileOwner;

/// @brief Field projectileRigidbody, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileRigidbody, put=__cordl_internal_set_projectileRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  projectileRigidbody;

/// @brief Field remainingLifeTime, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingLifeTime, put=__cordl_internal_set_remainingLifeTime)) float_t  remainingLifeTime;

/// @brief Field spawnWorldEffects, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnWorldEffects, put=__cordl_internal_set_spawnWorldEffects)) ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  spawnWorldEffects;

/// @brief Field surfaceImpactEffectPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceImpactEffectPrefab, put=__cordl_internal_set_surfaceImpactEffectPrefab)) ::UnityW<::UnityEngine::GameObject>  surfaceImpactEffectPrefab;

/// @brief Field teamColor, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_teamColor, put=__cordl_internal_set_teamColor)) ::UnityEngine::Color  teamColor;

/// @brief Field teamRenderer, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamRenderer, put=__cordl_internal_set_teamRenderer)) ::UnityW<::UnityEngine::Renderer>  teamRenderer;

/// @brief Field timeCreated, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeCreated, put=__cordl_internal_set_timeCreated)) float_t  timeCreated;

/// @brief Field useForwardForce, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_useForwardForce, put=__cordl_internal_set_useForwardForce)) bool  useForwardForce;

/// @brief Method ApplyColor, addr 0x573a410, size 0x138, virtual false, abstract: false, final false
inline void ApplyColor(::UnityEngine::Renderer*  rend, ::UnityEngine::Color  color) ;

/// @brief Method ApplyTeamModelAndColor, addr 0x5737dfc, size 0x11c, virtual false, abstract: false, final false
inline void ApplyTeamModelAndColor(bool  blueTeam, bool  orangeTeam, bool  shouldOverrideColor, ::UnityEngine::Color  overrideColor) ;

/// @brief Method Awake, addr 0x5739824, size 0x220, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForAOEKnockback, addr 0x5739f5c, size 0x4b4, virtual false, abstract: false, final false
inline void CheckForAOEKnockback(::UnityEngine::Vector3  impactPosition, float_t  impactSpeed) ;

/// @brief Method Deactivate, addr 0x5739a44, size 0x1bc, virtual false, abstract: false, final false
inline void Deactivate() ;

/// @brief Method DestroyAfterRelease, addr 0x573a95c, size 0xa4, virtual false, abstract: false, final false
inline void DestroyAfterRelease() ;

/// @brief Method GetDistanceTraveled, addr 0x573b034, size 0xb8, virtual false, abstract: false, final false
inline float_t GetDistanceTraveled() ;

/// @brief Method GetRemainingLifeTime, addr 0x573b024, size 0x8, virtual false, abstract: false, final false
inline float_t GetRemainingLifeTime() ;

/// @brief Method InvokeUpdate, addr 0x573a850, size 0x10c, virtual false, abstract: false, final false
inline void InvokeUpdate() ;

/// @brief Method Launch, addr 0x5739340, size 0x4e4, virtual false, abstract: false, final false
inline void Launch(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::GlobalNamespace::NetPlayer*  player, bool  blueTeam, bool  orangeTeam, int32_t  projectileCount, float_t  scale, bool  shouldOverrideColor, ::UnityEngine::Color  overrideColor) ;

static inline ::GlobalNamespace::SlingshotProjectile* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x573b0ec, size 0x204, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionStay, addr 0x573b3a4, size 0x20c, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDisable, addr 0x573a6f8, size 0x58, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x573a548, size 0x5c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x573b690, size 0x634, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x573b5cc, size 0xa8, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method SettleProjectile, addr 0x573aa00, size 0x624, virtual false, abstract: false, final false
inline void SettleProjectile() ;

/// @brief Method SpawnImpactEffect, addr 0x5739c00, size 0x35c, virtual false, abstract: false, final false
inline void SpawnImpactEffect(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

/// @brief Method UpdateRemainingLifeTime, addr 0x573b02c, size 0x8, virtual false, abstract: false, final false
inline void UpdateRemainingLifeTime(float_t  newLifeTime) ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_OnHitPlayer() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_OnHitPlayer() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_OnImapctEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_OnImapctEvent() ;

constexpr ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* const& __cordl_internal_get_OnImpact() const;

constexpr ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*& __cordl_internal_get_OnImpact() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_OnLaunch() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_OnLaunch() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__launchPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__launchPosition_k__BackingField() ;

constexpr ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig> const& __cordl_internal_get_aoeKnockbackConfig() const;

constexpr ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>& __cordl_internal_get_aoeKnockbackConfig() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_blueBall() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_blueBall() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_blueColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_blueColor() ;

constexpr bool const& __cordl_internal_get_colorizeBalls() const;

constexpr bool& __cordl_internal_get_colorizeBalls() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_defaultBall() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_defaultBall() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_defaultColor() ;

constexpr float_t const& __cordl_internal_get_distanceTraveled() const;

constexpr float_t& __cordl_internal_get_distanceTraveled() ;

constexpr bool const& __cordl_internal_get_dontDestroyOnHit() const;

constexpr bool& __cordl_internal_get_dontDestroyOnHit() ;

constexpr bool const& __cordl_internal_get_faceDirectionOfTravel() const;

constexpr bool& __cordl_internal_get_faceDirectionOfTravel() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_floorLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_floorLayerMask() ;

constexpr ::UnityW<::UnityEngine::ConstantForce> const& __cordl_internal_get_forceComponent() const;

constexpr ::UnityW<::UnityEngine::ConstantForce>& __cordl_internal_get_forceComponent() ;

constexpr float_t const& __cordl_internal_get_forwardForceMultiplier() const;

constexpr float_t& __cordl_internal_get_forwardForceMultiplier() ;

constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController> const& __cordl_internal_get_gravityController() const;

constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController>& __cordl_internal_get_gravityController() ;

constexpr float_t const& __cordl_internal_get_gravityMultiplier() const;

constexpr float_t& __cordl_internal_get_gravityMultiplier() ;

constexpr float_t const& __cordl_internal_get_impactEffectOffset() const;

constexpr float_t& __cordl_internal_get_impactEffectOffset() ;

constexpr float_t const& __cordl_internal_get_impactEffectScaleMultiplier() const;

constexpr float_t& __cordl_internal_get_impactEffectScaleMultiplier() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_impactSoundPitchOverride() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_impactSoundPitchOverride() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_impactSoundVolumeOverride() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_impactSoundVolumeOverride() ;

constexpr float_t const& __cordl_internal_get_initialScale() const;

constexpr float_t& __cordl_internal_get_initialScale() ;

constexpr bool const& __cordl_internal_get_isSettled() const;

constexpr bool& __cordl_internal_get_isSettled() ;

constexpr bool const& __cordl_internal_get_keepRotationUpright() const;

constexpr bool& __cordl_internal_get_keepRotationUpright() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_launchSoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_launchSoundBankPlayer() ;

constexpr float_t const& __cordl_internal_get_lifeTime() const;

constexpr float_t& __cordl_internal_get_lifeTime() ;

constexpr bool const& __cordl_internal_get_m_sendNetworkedImpact() const;

constexpr bool& __cordl_internal_get_m_sendNetworkedImpact() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_matPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_matPropBlock() ;

constexpr int32_t const& __cordl_internal_get_myProjectileCount() const;

constexpr int32_t& __cordl_internal_get_myProjectileCount() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_orangeBall() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_orangeBall() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_orangeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_orangeColor() ;

constexpr bool const& __cordl_internal_get_particleLaunched() const;

constexpr bool& __cordl_internal_get_particleLaunched() ;

constexpr float_t const& __cordl_internal_get_placementOffset() const;

constexpr float_t& __cordl_internal_get_placementOffset() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerImpactEffectPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerImpactEffectPrefab() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousPosition() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_projectileOwner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_projectileOwner() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_projectileRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_projectileRigidbody() ;

constexpr float_t const& __cordl_internal_get_remainingLifeTime() const;

constexpr float_t& __cordl_internal_get_remainingLifeTime() ;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects> const& __cordl_internal_get_spawnWorldEffects() const;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>& __cordl_internal_get_spawnWorldEffects() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_surfaceImpactEffectPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_surfaceImpactEffectPrefab() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_teamColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_teamColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_teamRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_teamRenderer() ;

constexpr float_t const& __cordl_internal_get_timeCreated() const;

constexpr float_t& __cordl_internal_get_timeCreated() ;

constexpr bool const& __cordl_internal_get_useForwardForce() const;

constexpr bool& __cordl_internal_get_useForwardForce() ;

constexpr void __cordl_internal_set_OnHitPlayer(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_OnImapctEvent(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_OnImpact(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*  value) ;

constexpr void __cordl_internal_set_OnLaunch(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set__launchPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_aoeKnockbackConfig(::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>  value) ;

constexpr void __cordl_internal_set_blueBall(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_blueColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorizeBalls(bool  value) ;

constexpr void __cordl_internal_set_defaultBall(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_distanceTraveled(float_t  value) ;

constexpr void __cordl_internal_set_dontDestroyOnHit(bool  value) ;

constexpr void __cordl_internal_set_faceDirectionOfTravel(bool  value) ;

constexpr void __cordl_internal_set_floorLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_forceComponent(::UnityW<::UnityEngine::ConstantForce>  value) ;

constexpr void __cordl_internal_set_forwardForceMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_gravityController(::UnityW<::GorillaTag::Gravity::MonkeGravityController>  value) ;

constexpr void __cordl_internal_set_gravityMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_impactEffectOffset(float_t  value) ;

constexpr void __cordl_internal_set_impactEffectScaleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_impactSoundPitchOverride(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_impactSoundVolumeOverride(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_initialScale(float_t  value) ;

constexpr void __cordl_internal_set_isSettled(bool  value) ;

constexpr void __cordl_internal_set_keepRotationUpright(bool  value) ;

constexpr void __cordl_internal_set_launchSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_lifeTime(float_t  value) ;

constexpr void __cordl_internal_set_m_sendNetworkedImpact(bool  value) ;

constexpr void __cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_myProjectileCount(int32_t  value) ;

constexpr void __cordl_internal_set_orangeBall(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_orangeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_particleLaunched(bool  value) ;

constexpr void __cordl_internal_set_placementOffset(float_t  value) ;

constexpr void __cordl_internal_set_playerImpactEffectPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_previousPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_projectileOwner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_projectileRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_remainingLifeTime(float_t  value) ;

constexpr void __cordl_internal_set_spawnWorldEffects(::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  value) ;

constexpr void __cordl_internal_set_surfaceImpactEffectPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_teamColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_teamRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_timeCreated(float_t  value) ;

constexpr void __cordl_internal_set_useForwardForce(bool  value) ;

/// @brief Method .ctor, addr 0x573bce0, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnImpact, addr 0x5739208, size 0x9c, virtual false, abstract: false, final false
inline void add_OnImpact(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method get_launchPosition, addr 0x57391f0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_launchPosition() ;

/// [CompilerGenerated]
/// @brief Method remove_OnImpact, addr 0x57392a4, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnImpact(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_launchPosition, addr 0x57391fc, size 0xc, virtual false, abstract: false, final false
inline void set_launchPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotProjectile(SlingshotProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotProjectile(SlingshotProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1218};

/// @brief Field projectileOwner, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___projectileOwner;

/// [Tooltip("Rotates to point along the Y axis after spawn.")]
/// @brief Field surfaceImpactEffectPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___surfaceImpactEffectPrefab;

/// [Tooltip("if left empty, the default player impact that is set in Room System Setting will be played")]
/// @brief Field playerImpactEffectPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerImpactEffectPrefab;

/// [Tooltip("Distance from the surface that the particle should spawn.")]
/// [SerializeField]
/// @brief Field impactEffectOffset, offset: 0x38, size: 0x4, def value: None
 float_t  ___impactEffectOffset;

/// [SerializeField]
/// @brief Field launchSoundBankPlayer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___launchSoundBankPlayer;

/// [SerializeField]
/// @brief Field dontDestroyOnHit, offset: 0x48, size: 0x1, def value: None
 bool  ___dontDestroyOnHit;

/// [SerializeField]
/// @brief Field floorLayerMask, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___floorLayerMask;

/// [SerializeField]
/// @brief Field placementOffset, offset: 0x50, size: 0x4, def value: None
 float_t  ___placementOffset;

/// [SerializeField]
/// @brief Field keepRotationUpright, offset: 0x54, size: 0x1, def value: None
 bool  ___keepRotationUpright;

/// @brief Field lifeTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___lifeTime;

/// @brief Field gravityMultiplier, offset: 0x5c, size: 0x4, def value: None
 float_t  ___gravityMultiplier;

/// @brief Field useForwardForce, offset: 0x60, size: 0x1, def value: None
 bool  ___useForwardForce;

/// @brief Field forwardForceMultiplier, offset: 0x64, size: 0x4, def value: None
 float_t  ___forwardForceMultiplier;

/// @brief Field defaultColor, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ___defaultColor;

/// @brief Field orangeColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___orangeColor;

/// @brief Field blueColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ___blueColor;

/// [Tooltip("Renderers with team specific meshes, materials, effects, etc.")]
/// @brief Field defaultBall, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___defaultBall;

/// [Tooltip("Renderers with team specific meshes, materials, effects, etc.")]
/// @brief Field orangeBall, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___orangeBall;

/// [Tooltip("Renderers with team specific meshes, materials, effects, etc.")]
/// @brief Field blueBall, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___blueBall;

/// @brief Field colorizeBalls, offset: 0xb0, size: 0x1, def value: None
 bool  ___colorizeBalls;

/// @brief Field faceDirectionOfTravel, offset: 0xb1, size: 0x1, def value: None
 bool  ___faceDirectionOfTravel;

/// @brief Field particleLaunched, offset: 0xb2, size: 0x1, def value: None
 bool  ___particleLaunched;

/// @brief Field timeCreated, offset: 0xb4, size: 0x4, def value: None
 float_t  ___timeCreated;

/// [CompilerGenerated]
/// @brief Field <launchPosition>k__BackingField, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____launchPosition_k__BackingField;

/// @brief Field projectileRigidbody, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___projectileRigidbody;

/// @brief Field teamColor, offset: 0xd0, size: 0x10, def value: None
 ::UnityEngine::Color  ___teamColor;

/// @brief Field teamRenderer, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___teamRenderer;

/// @brief Field myProjectileCount, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___myProjectileCount;

/// @brief Field initialScale, offset: 0xec, size: 0x4, def value: None
 float_t  ___initialScale;

/// @brief Field previousPosition, offset: 0xf0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousPosition;

/// [HideInInspector]
/// @brief Field aoeKnockbackConfig, offset: 0x100, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>  ___aoeKnockbackConfig;

/// [HideInInspector]
/// @brief Field impactSoundVolumeOverride, offset: 0x110, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ___impactSoundVolumeOverride;

/// [HideInInspector]
/// @brief Field impactSoundPitchOverride, offset: 0x120, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ___impactSoundPitchOverride;

/// [HideInInspector]
/// @brief Field impactEffectScaleMultiplier, offset: 0x130, size: 0x4, def value: None
 float_t  ___impactEffectScaleMultiplier;

/// @brief Field forceComponent, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ConstantForce>  ___forceComponent;

/// @brief Field m_sendNetworkedImpact, offset: 0x140, size: 0x1, def value: None
 bool  ___m_sendNetworkedImpact;

/// [CompilerGenerated]
/// @brief Field OnImpact, offset: 0x148, size: 0x8, def value: None
 ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent*  ___OnImpact;

/// @brief Field OnLaunch, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::NetPlayer*>*  ___OnLaunch;

/// @brief Field OnImapctEvent, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___OnImapctEvent;

/// @brief Field matPropBlock, offset: 0x160, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___matPropBlock;

/// @brief Field spawnWorldEffects, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  ___spawnWorldEffects;

/// @brief Field OnHitPlayer, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___OnHitPlayer;

/// @brief Field remainingLifeTime, offset: 0x178, size: 0x4, def value: None
 float_t  ___remainingLifeTime;

/// @brief Field isSettled, offset: 0x17c, size: 0x1, def value: None
 bool  ___isSettled;

/// @brief Field distanceTraveled, offset: 0x180, size: 0x4, def value: None
 float_t  ___distanceTraveled;

/// @brief Field gravityController, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Gravity::MonkeGravityController>  ___gravityController;

/// @brief Size padding 0x188 - 0x190 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___projectileOwner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___surfaceImpactEffectPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___playerImpactEffectPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___impactEffectOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___launchSoundBankPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___dontDestroyOnHit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___floorLayerMask) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___placementOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___keepRotationUpright) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___lifeTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___gravityMultiplier) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___useForwardForce) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___forwardForceMultiplier) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___defaultColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___orangeColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___blueColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___defaultBall) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___orangeBall) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___blueBall) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___colorizeBalls) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___faceDirectionOfTravel) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___particleLaunched) == 0xb2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___timeCreated) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ____launchPosition_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___projectileRigidbody) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___teamColor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___teamRenderer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___myProjectileCount) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___initialScale) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___previousPosition) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___aoeKnockbackConfig) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___impactSoundVolumeOverride) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___impactSoundPitchOverride) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___impactEffectScaleMultiplier) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___forceComponent) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___m_sendNetworkedImpact) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___OnImpact) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___OnLaunch) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___OnImapctEvent) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___matPropBlock) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___spawnWorldEffects) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___OnHitPlayer) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___remainingLifeTime) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___isSettled) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___distanceTraveled) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotProjectile, ___gravityController) == 0x188, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlingshotProjectile) == 0x188, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotProjectile/ProjectileImpactEvent
class CORDL_TYPE SlingshotProjectile_ProjectileImpactEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x573be68, size 0xa0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x573bf08, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x573be54, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer) ;

static inline ::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x573bd48, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotProjectile_ProjectileImpactEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectile_ProjectileImpactEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotProjectile_ProjectileImpactEvent(SlingshotProjectile_ProjectileImpactEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotProjectile_ProjectileImpactEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotProjectile_ProjectileImpactEvent(SlingshotProjectile_ProjectileImpactEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1217};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SlingshotProjectile_ProjectileImpactEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
