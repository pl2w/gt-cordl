#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderProjectile)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaTagScripts::Builder {
class BuilderProjectileLauncher;
}
namespace GorillaTagScripts::Builder {
class BuilderProjectile_ProjectileImpactEvent;
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
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderProjectile;
}
namespace GorillaTagScripts::Builder {
class BuilderProjectile_ProjectileImpactEvent;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderProjectile*);
MARK_REF_T(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderProjectile*, "GorillaTagScripts.Builder", "BuilderProjectile");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*, "GorillaTagScripts.Builder", "BuilderProjectile/ProjectileImpactEvent");
// Dependencies SlingshotProjectile::AOEKnockbackConfig, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderProjectile
class CORDL_TYPE BuilderProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ProjectileImpactEvent = ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent;

/// @brief Field OnImpact, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnImpact, put=__cordl_internal_set_OnImpact)) ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*  OnImpact;

/// @brief Field <launchPosition>k__BackingField, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__launchPosition_k__BackingField, put=__cordl_internal_set__launchPosition_k__BackingField)) ::UnityEngine::Vector3  _launchPosition_k__BackingField;

/// @brief Field aoeKnockbackConfig, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_aoeKnockbackConfig, put=__cordl_internal_set_aoeKnockbackConfig)) ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>  aoeKnockbackConfig;

/// @brief Field faceDirectionOfTravel, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_faceDirectionOfTravel, put=__cordl_internal_set_faceDirectionOfTravel)) bool  faceDirectionOfTravel;

/// @brief Field forceComponent, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_forceComponent, put=__cordl_internal_set_forceComponent)) ::UnityW<::UnityEngine::ConstantForce>  forceComponent;

/// @brief Field gravityMultiplier, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityMultiplier, put=__cordl_internal_set_gravityMultiplier)) float_t  gravityMultiplier;

/// @brief Field impactEffectOffset, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_impactEffectOffset, put=__cordl_internal_set_impactEffectOffset)) float_t  impactEffectOffset;

/// @brief Field impactEffectScaleMultiplier, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_impactEffectScaleMultiplier, put=__cordl_internal_set_impactEffectScaleMultiplier)) float_t  impactEffectScaleMultiplier;

/// @brief Field impactSoundPitchOverride, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_impactSoundPitchOverride, put=__cordl_internal_set_impactSoundPitchOverride)) ::System::Nullable_1<float_t>  impactSoundPitchOverride;

/// @brief Field impactSoundVolumeOverride, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_impactSoundVolumeOverride, put=__cordl_internal_set_impactSoundVolumeOverride)) ::System::Nullable_1<float_t>  impactSoundVolumeOverride;

/// @brief Field initialScale, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialScale, put=__cordl_internal_set_initialScale)) float_t  initialScale;

 __declspec(property(get=get_launchPosition, put=set_launchPosition)) ::UnityEngine::Vector3  launchPosition;

/// @brief Field lifeTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifeTime, put=__cordl_internal_set_lifeTime)) float_t  lifeTime;

/// @brief Field particleLaunched, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_particleLaunched, put=__cordl_internal_set_particleLaunched)) bool  particleLaunched;

/// @brief Field previousPosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousPosition, put=__cordl_internal_set_previousPosition)) ::UnityEngine::Vector3  previousPosition;

/// @brief Field projectileId, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileId, put=__cordl_internal_set_projectileId)) int32_t  projectileId;

/// @brief Field projectileRigidbody, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileRigidbody, put=__cordl_internal_set_projectileRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  projectileRigidbody;

/// @brief Field projectileSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileSource, put=__cordl_internal_set_projectileSource)) ::UnityW<::GorillaTagScripts::Builder::BuilderProjectileLauncher>  projectileSource;

/// @brief Field surfaceImpactEffectPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_surfaceImpactEffectPrefab, put=__cordl_internal_set_surfaceImpactEffectPrefab)) ::UnityW<::UnityEngine::GameObject>  surfaceImpactEffectPrefab;

/// @brief Field timeCreated, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeCreated, put=__cordl_internal_set_timeCreated)) float_t  timeCreated;

/// @brief Method ApplyHitKnockback, addr 0x5c2d494, size 0x3b4, virtual false, abstract: false, final false
inline void ApplyHitKnockback(::UnityEngine::Vector3  hitNormal) ;

/// @brief Method Awake, addr 0x5c2d198, size 0xb4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Deactivate, addr 0x5c2cf7c, size 0x170, virtual false, abstract: false, final false
inline void Deactivate() ;

/// @brief Method Launch, addr 0x5c2c9a4, size 0x5d8, virtual false, abstract: false, final false
inline void Launch(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::GorillaTagScripts::Builder::BuilderProjectileLauncher*  sourceObject, int32_t  projectileCount, float_t  scale, int32_t  timeStamp) ;

static inline ::GorillaTagScripts::Builder::BuilderProjectile* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5c2da4c, size 0x204, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  other) ;

/// @brief Method OnCollisionStay, addr 0x5c2dc50, size 0x204, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  other) ;

/// @brief Method OnDisable, addr 0x5c2d854, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c2d848, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5c2de54, size 0x1a4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method SpawnImpactEffect, addr 0x5c2d24c, size 0x248, virtual false, abstract: false, final false
inline void SpawnImpactEffect(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

/// @brief Method UpdateProjectile, addr 0x5c2d968, size 0xe4, virtual false, abstract: false, final false
inline void UpdateProjectile() ;

constexpr ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent* const& __cordl_internal_get_OnImpact() const;

constexpr ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*& __cordl_internal_get_OnImpact() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__launchPosition_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__launchPosition_k__BackingField() ;

constexpr ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig> const& __cordl_internal_get_aoeKnockbackConfig() const;

constexpr ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>& __cordl_internal_get_aoeKnockbackConfig() ;

constexpr bool const& __cordl_internal_get_faceDirectionOfTravel() const;

constexpr bool& __cordl_internal_get_faceDirectionOfTravel() ;

constexpr ::UnityW<::UnityEngine::ConstantForce> const& __cordl_internal_get_forceComponent() const;

constexpr ::UnityW<::UnityEngine::ConstantForce>& __cordl_internal_get_forceComponent() ;

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

constexpr float_t const& __cordl_internal_get_lifeTime() const;

constexpr float_t& __cordl_internal_get_lifeTime() ;

constexpr bool const& __cordl_internal_get_particleLaunched() const;

constexpr bool& __cordl_internal_get_particleLaunched() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousPosition() ;

constexpr int32_t const& __cordl_internal_get_projectileId() const;

constexpr int32_t& __cordl_internal_get_projectileId() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_projectileRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_projectileRigidbody() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderProjectileLauncher> const& __cordl_internal_get_projectileSource() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderProjectileLauncher>& __cordl_internal_get_projectileSource() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_surfaceImpactEffectPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_surfaceImpactEffectPrefab() ;

constexpr float_t const& __cordl_internal_get_timeCreated() const;

constexpr float_t& __cordl_internal_get_timeCreated() ;

constexpr void __cordl_internal_set_OnImpact(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*  value) ;

constexpr void __cordl_internal_set__launchPosition_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_aoeKnockbackConfig(::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>  value) ;

constexpr void __cordl_internal_set_faceDirectionOfTravel(bool  value) ;

constexpr void __cordl_internal_set_forceComponent(::UnityW<::UnityEngine::ConstantForce>  value) ;

constexpr void __cordl_internal_set_gravityMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_impactEffectOffset(float_t  value) ;

constexpr void __cordl_internal_set_impactEffectScaleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_impactSoundPitchOverride(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_impactSoundVolumeOverride(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_initialScale(float_t  value) ;

constexpr void __cordl_internal_set_lifeTime(float_t  value) ;

constexpr void __cordl_internal_set_particleLaunched(bool  value) ;

constexpr void __cordl_internal_set_previousPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_projectileId(int32_t  value) ;

constexpr void __cordl_internal_set_projectileRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_projectileSource(::UnityW<::GorillaTagScripts::Builder::BuilderProjectileLauncher>  value) ;

constexpr void __cordl_internal_set_surfaceImpactEffectPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_timeCreated(float_t  value) ;

/// @brief Method .ctor, addr 0x5c2dff8, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnImpact, addr 0x5c2c86c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnImpact(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method get_launchPosition, addr 0x5c2c854, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_launchPosition() ;

/// [CompilerGenerated]
/// @brief Method remove_OnImpact, addr 0x5c2c908, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnImpact(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_launchPosition, addr 0x5c2c860, size 0xc, virtual false, abstract: false, final false
inline void set_launchPosition(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderProjectile(BuilderProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderProjectile(BuilderProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4166};

/// @brief Field projectileSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::BuilderProjectileLauncher>  ___projectileSource;

/// [Tooltip("Rotates to point along the Y axis after spawn.")]
/// @brief Field surfaceImpactEffectPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___surfaceImpactEffectPrefab;

/// [Tooltip("Distance from the surface that the particle should spawn.")]
/// @brief Field impactEffectOffset, offset: 0x30, size: 0x4, def value: None
 float_t  ___impactEffectOffset;

/// @brief Field lifeTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___lifeTime;

/// @brief Field faceDirectionOfTravel, offset: 0x38, size: 0x1, def value: None
 bool  ___faceDirectionOfTravel;

/// @brief Field particleLaunched, offset: 0x39, size: 0x1, def value: None
 bool  ___particleLaunched;

/// @brief Field timeCreated, offset: 0x3c, size: 0x4, def value: None
 float_t  ___timeCreated;

/// [CompilerGenerated]
/// @brief Field <launchPosition>k__BackingField, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____launchPosition_k__BackingField;

/// @brief Field projectileRigidbody, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___projectileRigidbody;

/// @brief Field projectileId, offset: 0x58, size: 0x4, def value: None
 int32_t  ___projectileId;

/// @brief Field initialScale, offset: 0x5c, size: 0x4, def value: None
 float_t  ___initialScale;

/// @brief Field previousPosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousPosition;

/// [HideInInspector]
/// @brief Field aoeKnockbackConfig, offset: 0x70, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig>  ___aoeKnockbackConfig;

/// [HideInInspector]
/// @brief Field impactSoundVolumeOverride, offset: 0x80, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ___impactSoundVolumeOverride;

/// [HideInInspector]
/// @brief Field impactSoundPitchOverride, offset: 0x90, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ___impactSoundPitchOverride;

/// [HideInInspector]
/// @brief Field impactEffectScaleMultiplier, offset: 0xa0, size: 0x4, def value: None
 float_t  ___impactEffectScaleMultiplier;

/// [HideInInspector]
/// @brief Field gravityMultiplier, offset: 0xa4, size: 0x4, def value: None
 float_t  ___gravityMultiplier;

/// @brief Field forceComponent, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ConstantForce>  ___forceComponent;

/// [CompilerGenerated]
/// @brief Field OnImpact, offset: 0xb0, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent*  ___OnImpact;

/// @brief Size padding 0xb0 - 0xb8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___projectileSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___surfaceImpactEffectPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___impactEffectOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___lifeTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___faceDirectionOfTravel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___particleLaunched) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___timeCreated) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ____launchPosition_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___projectileRigidbody) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___projectileId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___initialScale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___previousPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___aoeKnockbackConfig) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___impactSoundVolumeOverride) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___impactSoundPitchOverride) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___impactEffectScaleMultiplier) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___gravityMultiplier) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___forceComponent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectile, ___OnImpact) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderProjectile) == 0xb0, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies System.MulticastDelegate
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderProjectile/ProjectileImpactEvent
class CORDL_TYPE BuilderProjectile_ProjectileImpactEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c2e138, size 0xa0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GorillaTagScripts::Builder::BuilderProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c2e1d8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c2e124, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GorillaTagScripts::Builder::BuilderProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer) ;

static inline ::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c2e018, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderProjectile_ProjectileImpactEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderProjectile_ProjectileImpactEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderProjectile_ProjectileImpactEvent(BuilderProjectile_ProjectileImpactEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderProjectile_ProjectileImpactEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderProjectile_ProjectileImpactEvent(BuilderProjectile_ProjectileImpactEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::Builder::BuilderProjectile_ProjectileImpactEvent) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
