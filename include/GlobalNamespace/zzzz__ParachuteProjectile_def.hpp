#pragma once
// IWYU pragma private; include "GlobalNamespace/ParachuteProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParachuteProjectile)
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class IProjectile;
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
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
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
class ParachuteProjectile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParachuteProjectile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParachuteProjectile*, "", "ParachuteProjectile");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParachuteProjectile
class CORDL_TYPE ParachuteProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x92, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field destroyOnLandDelay, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroyOnLandDelay, put=__cordl_internal_set_destroyOnLandDelay)) float_t  destroyOnLandDelay;

/// @brief Field groudUpThreshold, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_groudUpThreshold, put=__cordl_internal_set_groudUpThreshold)) float_t  groudUpThreshold;

/// @brief Field groundOffset, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundOffset, put=__cordl_internal_set_groundOffset)) float_t  groundOffset;

/// @brief Field impactEffect, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_impactEffect, put=__cordl_internal_set_impactEffect)) ::UnityW<::UnityEngine::GameObject>  impactEffect;

/// @brief Field impactEffectOffset, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_impactEffectOffset, put=__cordl_internal_set_impactEffectOffset)) float_t  impactEffectOffset;

/// @brief Field impactEffectScaleMultiplier, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_impactEffectScaleMultiplier, put=__cordl_internal_set_impactEffectScaleMultiplier)) float_t  impactEffectScaleMultiplier;

/// @brief Field initialAngularDrag, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialAngularDrag, put=__cordl_internal_set_initialAngularDrag)) float_t  initialAngularDrag;

/// @brief Field initialDrag, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialDrag, put=__cordl_internal_set_initialDrag)) float_t  initialDrag;

/// @brief Field landTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_landTime, put=__cordl_internal_set_landTime)) float_t  landTime;

/// @brief Field landed, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_landed, put=__cordl_internal_set_landed)) bool  landed;

/// @brief Field landedMesh, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_landedMesh, put=__cordl_internal_set_landedMesh)) ::UnityW<::UnityEngine::Mesh>  landedMesh;

/// @brief Field launchMesh, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchMesh, put=__cordl_internal_set_launchMesh)) ::UnityW<::UnityEngine::Mesh>  launchMesh;

/// @brief Field launched, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_launched, put=__cordl_internal_set_launched)) bool  launched;

/// @brief Field launchedTime, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchedTime, put=__cordl_internal_set_launchedTime)) float_t  launchedTime;

/// @brief Field monkeMeshFilter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_monkeMeshFilter, put=__cordl_internal_set_monkeMeshFilter)) ::UnityW<::UnityEngine::MeshFilter>  monkeMeshFilter;

/// @brief Field parachute, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_parachute, put=__cordl_internal_set_parachute)) ::UnityW<::UnityEngine::GameObject>  parachute;

/// @brief Field parachuteAngularDrag, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_parachuteAngularDrag, put=__cordl_internal_set_parachuteAngularDrag)) float_t  parachuteAngularDrag;

/// @brief Field parachuteDeployDelay, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_parachuteDeployDelay, put=__cordl_internal_set_parachuteDeployDelay)) float_t  parachuteDeployDelay;

/// @brief Field parachuteDeployed, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_parachuteDeployed, put=__cordl_internal_set_parachuteDeployed)) bool  parachuteDeployed;

/// @brief Field parachuteDrag, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_parachuteDrag, put=__cordl_internal_set_parachuteDrag)) float_t  parachuteDrag;

/// @brief Field parachutingMesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_parachutingMesh, put=__cordl_internal_set_parachutingMesh)) ::UnityW<::UnityEngine::Mesh>  parachutingMesh;

/// @brief Field peakTime, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_peakTime, put=__cordl_internal_set_peakTime)) float_t  peakTime;

/// @brief Field rb, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr operator  ::GorillaTag::Cosmetics::IProjectile*() noexcept;

/// @brief Method Awake, addr 0x56566e0, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeUp, addr 0x5656b98, size 0x124, virtual false, abstract: false, final false
inline void ChangeUp(::UnityEngine::Vector3  newUp) ;

/// @brief Method Launch, addr 0x5656878, size 0x320, virtual true, abstract: false, final true
inline void Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progress) ;

static inline ::GlobalNamespace::ParachuteProjectile* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5657278, size 0x2ac, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDisable, addr 0x56567f4, size 0x84, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5656738, size 0xbc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLanded, addr 0x5656d6c, size 0x15c, virtual false, abstract: false, final false
inline void OnLanded(::UnityEngine::Collision*  collision) ;

/// @brief Method OnPeakReached, addr 0x5656cbc, size 0xb0, virtual false, abstract: false, final false
inline void OnPeakReached() ;

/// @brief Method OnTriggerEvent, addr 0x565707c, size 0x1fc, virtual false, abstract: false, final false
inline void OnTriggerEvent(bool  isLeft, ::UnityEngine::Collider*  col) ;

/// @brief Method PlayImpactEffects, addr 0x5656ec8, size 0x1b4, virtual false, abstract: false, final false
inline void PlayImpactEffects(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal) ;

/// @brief Method Tick, addr 0x5657534, size 0xf8, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_destroyOnLandDelay() const;

constexpr float_t& __cordl_internal_get_destroyOnLandDelay() ;

constexpr float_t const& __cordl_internal_get_groudUpThreshold() const;

constexpr float_t& __cordl_internal_get_groudUpThreshold() ;

constexpr float_t const& __cordl_internal_get_groundOffset() const;

constexpr float_t& __cordl_internal_get_groundOffset() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_impactEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_impactEffect() ;

constexpr float_t const& __cordl_internal_get_impactEffectOffset() const;

constexpr float_t& __cordl_internal_get_impactEffectOffset() ;

constexpr float_t const& __cordl_internal_get_impactEffectScaleMultiplier() const;

constexpr float_t& __cordl_internal_get_impactEffectScaleMultiplier() ;

constexpr float_t const& __cordl_internal_get_initialAngularDrag() const;

constexpr float_t& __cordl_internal_get_initialAngularDrag() ;

constexpr float_t const& __cordl_internal_get_initialDrag() const;

constexpr float_t& __cordl_internal_get_initialDrag() ;

constexpr float_t const& __cordl_internal_get_landTime() const;

constexpr float_t& __cordl_internal_get_landTime() ;

constexpr bool const& __cordl_internal_get_landed() const;

constexpr bool& __cordl_internal_get_landed() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_landedMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_landedMesh() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_launchMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_launchMesh() ;

constexpr bool const& __cordl_internal_get_launched() const;

constexpr bool& __cordl_internal_get_launched() ;

constexpr float_t const& __cordl_internal_get_launchedTime() const;

constexpr float_t& __cordl_internal_get_launchedTime() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_monkeMeshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_monkeMeshFilter() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_parachute() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_parachute() ;

constexpr float_t const& __cordl_internal_get_parachuteAngularDrag() const;

constexpr float_t& __cordl_internal_get_parachuteAngularDrag() ;

constexpr float_t const& __cordl_internal_get_parachuteDeployDelay() const;

constexpr float_t& __cordl_internal_get_parachuteDeployDelay() ;

constexpr bool const& __cordl_internal_get_parachuteDeployed() const;

constexpr bool& __cordl_internal_get_parachuteDeployed() ;

constexpr float_t const& __cordl_internal_get_parachuteDrag() const;

constexpr float_t& __cordl_internal_get_parachuteDrag() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_parachutingMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_parachutingMesh() ;

constexpr float_t const& __cordl_internal_get_peakTime() const;

constexpr float_t& __cordl_internal_get_peakTime() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_destroyOnLandDelay(float_t  value) ;

constexpr void __cordl_internal_set_groudUpThreshold(float_t  value) ;

constexpr void __cordl_internal_set_groundOffset(float_t  value) ;

constexpr void __cordl_internal_set_impactEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_impactEffectOffset(float_t  value) ;

constexpr void __cordl_internal_set_impactEffectScaleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_initialAngularDrag(float_t  value) ;

constexpr void __cordl_internal_set_initialDrag(float_t  value) ;

constexpr void __cordl_internal_set_landTime(float_t  value) ;

constexpr void __cordl_internal_set_landed(bool  value) ;

constexpr void __cordl_internal_set_landedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_launchMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_launched(bool  value) ;

constexpr void __cordl_internal_set_launchedTime(float_t  value) ;

constexpr void __cordl_internal_set_monkeMeshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_parachute(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_parachuteAngularDrag(float_t  value) ;

constexpr void __cordl_internal_set_parachuteDeployDelay(float_t  value) ;

constexpr void __cordl_internal_set_parachuteDeployed(bool  value) ;

constexpr void __cordl_internal_set_parachuteDrag(float_t  value) ;

constexpr void __cordl_internal_set_parachutingMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_peakTime(float_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x565762c, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5657524, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* i___GorillaTag__Cosmetics__IProjectile() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x565752c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParachuteProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParachuteProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParachuteProjectile(ParachuteProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParachuteProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParachuteProjectile(ParachuteProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{749};

/// [SerializeField]
/// @brief Field monkeMeshFilter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___monkeMeshFilter;

/// [SerializeField]
/// @brief Field parachute, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___parachute;

/// [SerializeField]
/// @brief Field launchMesh, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___launchMesh;

/// [SerializeField]
/// @brief Field parachutingMesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___parachutingMesh;

/// [SerializeField]
/// @brief Field landedMesh, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___landedMesh;

/// [Tooltip("time to wait after launch before deploying the parachute")]
/// [SerializeField]
/// @brief Field parachuteDeployDelay, offset: 0x48, size: 0x4, def value: None
 float_t  ___parachuteDeployDelay;

/// [Tooltip("time to wait after landing before destroying")]
/// [SerializeField]
/// @brief Field destroyOnLandDelay, offset: 0x4c, size: 0x4, def value: None
 float_t  ___destroyOnLandDelay;

/// [Tooltip("How far from the collision point should the projectile sit when landed")]
/// [SerializeField]
/// @brief Field groundOffset, offset: 0x50, size: 0x4, def value: None
 float_t  ___groundOffset;

/// [Tooltip("Acceptable angle in degrees of surface from world up to be considered the ground")]
/// [SerializeField]
/// @brief Field groudUpThreshold, offset: 0x54, size: 0x4, def value: None
 float_t  ___groudUpThreshold;

/// [Tooltip("Drag before the parachute is deployed.")]
/// [SerializeField]
/// @brief Field initialDrag, offset: 0x58, size: 0x4, def value: None
 float_t  ___initialDrag;

/// [Tooltip("Drag before the parachute is deployed.")]
/// [SerializeField]
/// @brief Field initialAngularDrag, offset: 0x5c, size: 0x4, def value: None
 float_t  ___initialAngularDrag;

/// [Tooltip("Drag after the parachute is deployed.")]
/// [SerializeField]
/// @brief Field parachuteDrag, offset: 0x60, size: 0x4, def value: None
 float_t  ___parachuteDrag;

/// [Tooltip("Drag after the parachute is deployed.")]
/// [SerializeField]
/// @brief Field parachuteAngularDrag, offset: 0x64, size: 0x4, def value: None
 float_t  ___parachuteAngularDrag;

/// [SerializeField]
/// @brief Field impactEffect, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___impactEffect;

/// [SerializeField]
/// @brief Field impactEffectScaleMultiplier, offset: 0x70, size: 0x4, def value: None
 float_t  ___impactEffectScaleMultiplier;

/// [Tooltip("Distance from the surface that the particle should spawn.")]
/// [SerializeField]
/// @brief Field impactEffectOffset, offset: 0x74, size: 0x4, def value: None
 float_t  ___impactEffectOffset;

/// @brief Field rb, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field launched, offset: 0x80, size: 0x1, def value: None
 bool  ___launched;

/// @brief Field launchedTime, offset: 0x84, size: 0x4, def value: None
 float_t  ___launchedTime;

/// @brief Field landTime, offset: 0x88, size: 0x4, def value: None
 float_t  ___landTime;

/// @brief Field peakTime, offset: 0x8c, size: 0x4, def value: None
 float_t  ___peakTime;

/// @brief Field parachuteDeployed, offset: 0x90, size: 0x1, def value: None
 bool  ___parachuteDeployed;

/// @brief Field landed, offset: 0x91, size: 0x1, def value: None
 bool  ___landed;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x92, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___monkeMeshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___parachute) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___launchMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___parachutingMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___landedMesh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___parachuteDeployDelay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___destroyOnLandDelay) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___groundOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___groudUpThreshold) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___initialDrag) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___initialAngularDrag) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___parachuteDrag) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___parachuteAngularDrag) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___impactEffect) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___impactEffectScaleMultiplier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___impactEffectOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___rb) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___launched) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___launchedTime) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___landTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___peakTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___parachuteDeployed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ___landed) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParachuteProjectile, ____TickRunning_k__BackingField) == 0x92, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParachuteProjectile) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
