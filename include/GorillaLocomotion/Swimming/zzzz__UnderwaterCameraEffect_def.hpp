#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/UnderwaterCameraEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Swimming/zzzz__UnderwaterCameraEffect_CameraOverlapWaterState_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_SurfaceQuery_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnderwaterCameraEffect)
namespace GlobalNamespace {
struct UnderwaterCameraEffect_CameraOverlapWaterState;
}
namespace GorillaLocomotion::Swimming {
class UnderwaterParticleEffects;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Swimming {
class UnderwaterCameraEffect;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Swimming::UnderwaterCameraEffect*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::UnderwaterCameraEffect*, "GorillaLocomotion.Swimming", "UnderwaterCameraEffect");
// [ExecuteAlways]
// Dependencies GorillaLocomotion.Swimming.UnderwaterCameraEffect::CameraOverlapWaterState, GorillaLocomotion.Swimming.WaterVolume::SurfaceQuery, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.UnderwaterCameraEffect
class CORDL_TYPE UnderwaterCameraEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CameraOverlapWaterState = ::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState;

/// @brief Field cachedAspectRatio, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_cachedAspectRatio, put=__cordl_internal_set_cachedAspectRatio)) float_t  cachedAspectRatio;

/// @brief Field cachedFov, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_cachedFov, put=__cordl_internal_set_cachedFov)) float_t  cachedFov;

/// @brief Field cameraOverlapWaterState, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_cameraOverlapWaterState, put=__cordl_internal_set_cameraOverlapWaterState)) ::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState  cameraOverlapWaterState;

/// @brief Field debugDraw, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDraw, put=__cordl_internal_set_debugDraw)) bool  debugDraw;

/// @brief Field distanceFromCamera, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_distanceFromCamera, put=__cordl_internal_set_distanceFromCamera)) float_t  distanceFromCamera;

/// @brief Field frustumPlaneCornersLocal, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_frustumPlaneCornersLocal, put=__cordl_internal_set_frustumPlaneCornersLocal)) ::ArrayW<::UnityEngine::Vector3>  frustumPlaneCornersLocal;

/// @brief Field frustumPlaneExtents, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_frustumPlaneExtents, put=__cordl_internal_set_frustumPlaneExtents)) ::UnityEngine::Vector2  frustumPlaneExtents;

/// @brief Field hasTargetCamera, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasTargetCamera, put=__cordl_internal_set_hasTargetCamera)) bool  hasTargetCamera;

/// @brief Field planeRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_planeRenderer, put=__cordl_internal_set_planeRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  planeRenderer;

/// @brief Field player, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::GorillaLocomotion::GTPlayer>  player;

/// @brief Field shaderParam_GlobalCameraOverlapWaterSurfacePlane, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shaderParam_GlobalCameraOverlapWaterSurfacePlane, put=__cordl_internal_set_shaderParam_GlobalCameraOverlapWaterSurfacePlane)) int32_t  shaderParam_GlobalCameraOverlapWaterSurfacePlane;

/// @brief Field targetCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetCamera, put=__cordl_internal_set_targetCamera)) ::UnityW<::UnityEngine::Camera>  targetCamera;

/// @brief Field underwaterParticleEffect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_underwaterParticleEffect, put=__cordl_internal_set_underwaterParticleEffect)) ::UnityW<::GorillaLocomotion::Swimming::UnderwaterParticleEffects>  underwaterParticleEffect;

/// @brief Field waterSurface, offset 0x60, size 0x1c 
 __declspec(property(get=__cordl_internal_get_waterSurface, put=__cordl_internal_set_waterSurface)) ::GlobalNamespace::WaterVolume_SurfaceQuery  waterSurface;

/// @brief Method CalculateFrustumPlaneBounds, addr 0x5ce152c, size 0xe8, virtual false, abstract: false, final false
inline void CalculateFrustumPlaneBounds(float_t  fieldOfView, float_t  aspectRatio) ;

/// @brief Method GetFrustumCoverageDistance, addr 0x5ce30a8, size 0x80, virtual false, abstract: false, final false
inline float_t GetFrustumCoverageDistance(::UnityEngine::Vector3  localDirection) ;

/// [DebugOption]
/// @brief Method InitializeShaderProperties, addr 0x5ce13b0, size 0xa4, virtual false, abstract: false, final false
inline void InitializeShaderProperties() ;

/// @brief Method IntersectPlanes, addr 0x5ce2f20, size 0x188, virtual false, abstract: false, final false
inline bool IntersectPlanes(::UnityEngine::Plane  p1, ::UnityEngine::Plane  p2, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  direction) ;

/// @brief Method LateUpdate, addr 0x5ce1614, size 0xab8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaLocomotion::Swimming::UnderwaterCameraEffect* New_ctor() ;

/// @brief Method OnEnable, addr 0x5ce12f0, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetCameraOverlapState, addr 0x5ce20cc, size 0x1ec, virtual false, abstract: false, final false
inline void SetCameraOverlapState(::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState  state) ;

/// @brief Method SetFullScreenPosition, addr 0x5ce1288, size 0x68, virtual false, abstract: false, final false
inline void SetFullScreenPosition() ;

/// @brief Method SetOffScreenPosition, addr 0x5ce1214, size 0x74, virtual false, abstract: false, final false
inline void SetOffScreenPosition() ;

/// @brief Method Start, addr 0x5ce1454, size 0xd8, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_cachedAspectRatio() const;

constexpr float_t& __cordl_internal_get_cachedAspectRatio() ;

constexpr float_t const& __cordl_internal_get_cachedFov() const;

constexpr float_t& __cordl_internal_get_cachedFov() ;

constexpr ::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState const& __cordl_internal_get_cameraOverlapWaterState() const;

constexpr ::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState& __cordl_internal_get_cameraOverlapWaterState() ;

constexpr bool const& __cordl_internal_get_debugDraw() const;

constexpr bool& __cordl_internal_get_debugDraw() ;

constexpr float_t const& __cordl_internal_get_distanceFromCamera() const;

constexpr float_t& __cordl_internal_get_distanceFromCamera() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_frustumPlaneCornersLocal() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_frustumPlaneCornersLocal() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_frustumPlaneExtents() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_frustumPlaneExtents() ;

constexpr bool const& __cordl_internal_get_hasTargetCamera() const;

constexpr bool& __cordl_internal_get_hasTargetCamera() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_planeRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_planeRenderer() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_player() ;

constexpr int32_t const& __cordl_internal_get_shaderParam_GlobalCameraOverlapWaterSurfacePlane() const;

constexpr int32_t& __cordl_internal_get_shaderParam_GlobalCameraOverlapWaterSurfacePlane() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_targetCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_targetCamera() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::UnderwaterParticleEffects> const& __cordl_internal_get_underwaterParticleEffect() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::UnderwaterParticleEffects>& __cordl_internal_get_underwaterParticleEffect() ;

constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery const& __cordl_internal_get_waterSurface() const;

constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery& __cordl_internal_get_waterSurface() ;

constexpr void __cordl_internal_set_cachedAspectRatio(float_t  value) ;

constexpr void __cordl_internal_set_cachedFov(float_t  value) ;

constexpr void __cordl_internal_set_cameraOverlapWaterState(::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState  value) ;

constexpr void __cordl_internal_set_debugDraw(bool  value) ;

constexpr void __cordl_internal_set_distanceFromCamera(float_t  value) ;

constexpr void __cordl_internal_set_frustumPlaneCornersLocal(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_frustumPlaneExtents(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_hasTargetCamera(bool  value) ;

constexpr void __cordl_internal_set_planeRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_shaderParam_GlobalCameraOverlapWaterSurfacePlane(int32_t  value) ;

constexpr void __cordl_internal_set_targetCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_underwaterParticleEffect(::UnityW<::GorillaLocomotion::Swimming::UnderwaterParticleEffects>  value) ;

constexpr void __cordl_internal_set_waterSurface(::GlobalNamespace::WaterVolume_SurfaceQuery  value) ;

/// @brief Method .ctor, addr 0x5ce3128, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterCameraEffect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterCameraEffect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnderwaterCameraEffect(UnderwaterCameraEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterCameraEffect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnderwaterCameraEffect(UnderwaterCameraEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4514};

/// @brief Field edgeBuffer offset 0xffffffff size 0x4
static constexpr float_t  edgeBuffer{static_cast<float_t>(0.04f)};

/// @brief Field kShaderKeyword_GlobalCameraFullyUnderwater offset 0xffffffff size 0x8
static constexpr ::ConstString  kShaderKeyword_GlobalCameraFullyUnderwater{u"_GLOBAL_CAMERA_FULLY_UNDERWATER"};

/// @brief Field kShaderKeyword_GlobalCameraTouchingWater offset 0xffffffff size 0x8
static constexpr ::ConstString  kShaderKeyword_GlobalCameraTouchingWater{u"_GLOBAL_CAMERA_TOUCHING_WATER"};

/// [SerializeField]
/// @brief Field targetCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___targetCamera;

/// [SerializeField]
/// @brief Field planeRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___planeRenderer;

/// [SerializeField]
/// @brief Field underwaterParticleEffect, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::UnderwaterParticleEffects>  ___underwaterParticleEffect;

/// [SerializeField]
/// @brief Field distanceFromCamera, offset: 0x38, size: 0x4, def value: None
 float_t  ___distanceFromCamera;

/// [SerializeField]
/// [DebugOption]
/// @brief Field debugDraw, offset: 0x3c, size: 0x1, def value: None
 bool  ___debugDraw;

/// @brief Field cachedAspectRatio, offset: 0x40, size: 0x4, def value: None
 float_t  ___cachedAspectRatio;

/// @brief Field cachedFov, offset: 0x44, size: 0x4, def value: None
 float_t  ___cachedFov;

/// @brief Field frustumPlaneCornersLocal, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___frustumPlaneCornersLocal;

/// @brief Field frustumPlaneExtents, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___frustumPlaneExtents;

/// @brief Field player, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___player;

/// @brief Field waterSurface, offset: 0x60, size: 0x1c, def value: None
 ::GlobalNamespace::WaterVolume_SurfaceQuery  ___waterSurface;

/// @brief Field shaderParam_GlobalCameraOverlapWaterSurfacePlane, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___shaderParam_GlobalCameraOverlapWaterSurfacePlane;

/// @brief Field hasTargetCamera, offset: 0x80, size: 0x1, def value: None
 bool  ___hasTargetCamera;

/// [DebugReadout]
/// @brief Field cameraOverlapWaterState, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState  ___cameraOverlapWaterState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___targetCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___planeRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___underwaterParticleEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___distanceFromCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___debugDraw) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___cachedAspectRatio) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___cachedFov) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___frustumPlaneCornersLocal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___frustumPlaneExtents) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___player) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___waterSurface) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___shaderParam_GlobalCameraOverlapWaterSurfacePlane) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___hasTargetCamera) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect, ___cameraOverlapWaterState) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Swimming::UnderwaterCameraEffect) == 0x88, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
