#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/XRInteractorReticleVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractorReticleVisual)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
class XRInteractorReticleVisual;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals", "XRInteractorReticleVisual");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [AddComponentMenu("XR/Visual/XR Interactor Reticle Visual", 11)]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorReticleVisual.html")]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.PhysicsScene, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorReticleVisual
class CORDL_TYPE XRInteractorReticleVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_alignPrefabWithSurfaceNormal, put=set_alignPrefabWithSurfaceNormal)) bool  alignPrefabWithSurfaceNormal;

 __declspec(property(get=get_drawOnNoHit, put=set_drawOnNoHit)) bool  drawOnNoHit;

 __declspec(property(get=get_drawWhileSelecting, put=set_drawWhileSelecting)) bool  drawWhileSelecting;

 __declspec(property(get=get_endpointSmoothingTime, put=set_endpointSmoothingTime)) float_t  endpointSmoothingTime;

/// @brief Field m_AlignPrefabWithSurfaceNormal, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AlignPrefabWithSurfaceNormal, put=__cordl_internal_set_m_AlignPrefabWithSurfaceNormal)) bool  m_AlignPrefabWithSurfaceNormal;

/// @brief Field m_DrawOnNoHit, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DrawOnNoHit, put=__cordl_internal_set_m_DrawOnNoHit)) bool  m_DrawOnNoHit;

/// @brief Field m_DrawWhileSelecting, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DrawWhileSelecting, put=__cordl_internal_set_m_DrawWhileSelecting)) bool  m_DrawWhileSelecting;

/// @brief Field m_EndpointSmoothingTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EndpointSmoothingTime, put=__cordl_internal_set_m_EndpointSmoothingTime)) float_t  m_EndpointSmoothingTime;

/// @brief Field m_HasRaycastHit, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasRaycastHit, put=__cordl_internal_set_m_HasRaycastHit)) bool  m_HasRaycastHit;

/// @brief Field m_Interactor, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactor, put=__cordl_internal_set_m_Interactor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  m_Interactor;

/// @brief Field m_InteractorLinePoints, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_InteractorLinePoints, put=__cordl_internal_set_m_InteractorLinePoints)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  m_InteractorLinePoints;

/// @brief Field m_LocalPhysicsScene, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalPhysicsScene, put=__cordl_internal_set_m_LocalPhysicsScene)) ::UnityEngine::PhysicsScene  m_LocalPhysicsScene;

/// @brief Field m_MaxRaycastDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxRaycastDistance, put=__cordl_internal_set_m_MaxRaycastDistance)) float_t  m_MaxRaycastDistance;

/// @brief Field m_PrefabScalingFactor, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PrefabScalingFactor, put=__cordl_internal_set_m_PrefabScalingFactor)) float_t  m_PrefabScalingFactor;

/// @brief Field m_RaycastHits, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RaycastHits, put=__cordl_internal_set_m_RaycastHits)) ::ArrayW<::UnityEngine::RaycastHit>  m_RaycastHits;

/// @brief Field m_RaycastMask, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RaycastMask, put=__cordl_internal_set_m_RaycastMask)) ::UnityEngine::LayerMask  m_RaycastMask;

/// @brief Field m_ReticleActive, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ReticleActive, put=__cordl_internal_set_m_ReticleActive)) bool  m_ReticleActive;

/// @brief Field m_ReticleInstance, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReticleInstance, put=__cordl_internal_set_m_ReticleInstance)) ::UnityW<::UnityEngine::GameObject>  m_ReticleInstance;

/// @brief Field m_ReticlePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReticlePrefab, put=__cordl_internal_set_m_ReticlePrefab)) ::UnityW<::UnityEngine::GameObject>  m_ReticlePrefab;

/// @brief Field m_TargetEndNormal, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TargetEndNormal, put=__cordl_internal_set_m_TargetEndNormal)) ::UnityEngine::Vector3  m_TargetEndNormal;

/// @brief Field m_TargetEndPoint, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_TargetEndPoint, put=__cordl_internal_set_m_TargetEndPoint)) ::UnityEngine::Vector3  m_TargetEndPoint;

/// @brief Field m_UndoDistanceScaling, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UndoDistanceScaling, put=__cordl_internal_set_m_UndoDistanceScaling)) bool  m_UndoDistanceScaling;

/// @brief Field m_XROrigin, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XROrigin, put=__cordl_internal_set_m_XROrigin)) ::UnityW<::Unity::XR::CoreUtils::XROrigin>  m_XROrigin;

 __declspec(property(get=get_maxRaycastDistance, put=set_maxRaycastDistance)) float_t  maxRaycastDistance;

 __declspec(property(get=get_prefabScalingFactor, put=set_prefabScalingFactor)) float_t  prefabScalingFactor;

 __declspec(property(get=get_raycastMask, put=set_raycastMask)) ::UnityEngine::LayerMask  raycastMask;

 __declspec(property(get=get_reticleActive, put=set_reticleActive)) bool  reticleActive;

 __declspec(property(get=get_reticlePrefab, put=set_reticlePrefab)) ::UnityW<::UnityEngine::GameObject>  reticlePrefab;

 __declspec(property(get=get_undoDistanceScaling, put=set_undoDistanceScaling)) bool  undoDistanceScaling;

/// @brief Method ActivateReticleAtTarget, addr 0xb48cf28, size 0x5f4, virtual false, abstract: false, final false
inline void ActivateReticleAtTarget() ;

/// @brief Method Awake, addr 0xb48c838, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindClosestHit, addr 0xb48d63c, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit FindClosestHit(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  hitCount) ;

/// @brief Method FindXROrigin, addr 0xb48c948, size 0xb4, virtual false, abstract: false, final false
inline void FindXROrigin() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb48d51c, size 0x120, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb48c9fc, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnSelectEntered, addr 0xb48d858, size 0x8, virtual false, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method SetupReticlePrefab, addr 0xb48c614, size 0x10c, virtual false, abstract: false, final false
inline void SetupReticlePrefab() ;

/// @brief Method TryGetRaycastPoint, addr 0xb48d720, size 0x138, virtual false, abstract: false, final false
inline bool TryGetRaycastPoint(::by_ref<::UnityEngine::Vector3>  raycastPos, ::by_ref<::UnityEngine::Vector3>  raycastNormal) ;

/// @brief Method Update, addr 0xb48ca04, size 0x8c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateReticleTarget, addr 0xb48ca90, size 0x498, virtual false, abstract: false, final false
inline bool UpdateReticleTarget() ;

constexpr bool const& __cordl_internal_get_m_AlignPrefabWithSurfaceNormal() const;

constexpr bool& __cordl_internal_get_m_AlignPrefabWithSurfaceNormal() ;

constexpr bool const& __cordl_internal_get_m_DrawOnNoHit() const;

constexpr bool& __cordl_internal_get_m_DrawOnNoHit() ;

constexpr bool const& __cordl_internal_get_m_DrawWhileSelecting() const;

constexpr bool& __cordl_internal_get_m_DrawWhileSelecting() ;

constexpr float_t const& __cordl_internal_get_m_EndpointSmoothingTime() const;

constexpr float_t& __cordl_internal_get_m_EndpointSmoothingTime() ;

constexpr bool const& __cordl_internal_get_m_HasRaycastHit() const;

constexpr bool& __cordl_internal_get_m_HasRaycastHit() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> const& __cordl_internal_get_m_Interactor() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>& __cordl_internal_get_m_Interactor() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get_m_InteractorLinePoints() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get_m_InteractorLinePoints() ;

constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene() ;

constexpr float_t const& __cordl_internal_get_m_MaxRaycastDistance() const;

constexpr float_t& __cordl_internal_get_m_MaxRaycastDistance() ;

constexpr float_t const& __cordl_internal_get_m_PrefabScalingFactor() const;

constexpr float_t& __cordl_internal_get_m_PrefabScalingFactor() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_RaycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_RaycastHits() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_RaycastMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_RaycastMask() ;

constexpr bool const& __cordl_internal_get_m_ReticleActive() const;

constexpr bool& __cordl_internal_get_m_ReticleActive() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ReticleInstance() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ReticleInstance() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ReticlePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ReticlePrefab() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetEndNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetEndNormal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_TargetEndPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_TargetEndPoint() ;

constexpr bool const& __cordl_internal_get_m_UndoDistanceScaling() const;

constexpr bool& __cordl_internal_get_m_UndoDistanceScaling() ;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get_m_XROrigin() const;

constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get_m_XROrigin() ;

constexpr void __cordl_internal_set_m_AlignPrefabWithSurfaceNormal(bool  value) ;

constexpr void __cordl_internal_set_m_DrawOnNoHit(bool  value) ;

constexpr void __cordl_internal_set_m_DrawWhileSelecting(bool  value) ;

constexpr void __cordl_internal_set_m_EndpointSmoothingTime(float_t  value) ;

constexpr void __cordl_internal_set_m_HasRaycastHit(bool  value) ;

constexpr void __cordl_internal_set_m_Interactor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  value) ;

constexpr void __cordl_internal_set_m_InteractorLinePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value) ;

constexpr void __cordl_internal_set_m_MaxRaycastDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_PrefabScalingFactor(float_t  value) ;

constexpr void __cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_RaycastMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_ReticleActive(bool  value) ;

constexpr void __cordl_internal_set_m_ReticleInstance(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_ReticlePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_TargetEndNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_TargetEndPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_UndoDistanceScaling(bool  value) ;

constexpr void __cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value) ;

/// @brief Method .ctor, addr 0xb48d860, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_alignPrefabWithSurfaceNormal, addr 0xb48c740, size 0x8, virtual false, abstract: false, final false
inline bool get_alignPrefabWithSurfaceNormal() ;

/// @brief Method get_drawOnNoHit, addr 0xb48c770, size 0x8, virtual false, abstract: false, final false
inline bool get_drawOnNoHit() ;

/// @brief Method get_drawWhileSelecting, addr 0xb48c760, size 0x8, virtual false, abstract: false, final false
inline bool get_drawWhileSelecting() ;

/// @brief Method get_endpointSmoothingTime, addr 0xb48c750, size 0x8, virtual false, abstract: false, final false
inline float_t get_endpointSmoothingTime() ;

/// @brief Method get_maxRaycastDistance, addr 0xb48c5e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxRaycastDistance() ;

/// @brief Method get_prefabScalingFactor, addr 0xb48c720, size 0x8, virtual false, abstract: false, final false
inline float_t get_prefabScalingFactor() ;

/// @brief Method get_raycastMask, addr 0xb48c780, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_raycastMask() ;

/// @brief Method get_reticleActive, addr 0xb48c790, size 0x8, virtual false, abstract: false, final false
inline bool get_reticleActive() ;

/// @brief Method get_reticlePrefab, addr 0xb48c5f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_reticlePrefab() ;

/// @brief Method get_undoDistanceScaling, addr 0xb48c730, size 0x8, virtual false, abstract: false, final false
inline bool get_undoDistanceScaling() ;

/// @brief Method set_alignPrefabWithSurfaceNormal, addr 0xb48c748, size 0x8, virtual false, abstract: false, final false
inline void set_alignPrefabWithSurfaceNormal(bool  value) ;

/// @brief Method set_drawOnNoHit, addr 0xb48c778, size 0x8, virtual false, abstract: false, final false
inline void set_drawOnNoHit(bool  value) ;

/// @brief Method set_drawWhileSelecting, addr 0xb48c768, size 0x8, virtual false, abstract: false, final false
inline void set_drawWhileSelecting(bool  value) ;

/// @brief Method set_endpointSmoothingTime, addr 0xb48c758, size 0x8, virtual false, abstract: false, final false
inline void set_endpointSmoothingTime(float_t  value) ;

/// @brief Method set_maxRaycastDistance, addr 0xb48c5e8, size 0x8, virtual false, abstract: false, final false
inline void set_maxRaycastDistance(float_t  value) ;

/// @brief Method set_prefabScalingFactor, addr 0xb48c728, size 0x8, virtual false, abstract: false, final false
inline void set_prefabScalingFactor(float_t  value) ;

/// @brief Method set_raycastMask, addr 0xb48c788, size 0x8, virtual false, abstract: false, final false
inline void set_raycastMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_reticleActive, addr 0xb48c798, size 0xa0, virtual false, abstract: false, final false
inline void set_reticleActive(bool  value) ;

/// @brief Method set_reticlePrefab, addr 0xb48c5f8, size 0x1c, virtual false, abstract: false, final false
inline void set_reticlePrefab(::UnityEngine::GameObject*  value) ;

/// @brief Method set_undoDistanceScaling, addr 0xb48c738, size 0x8, virtual false, abstract: false, final false
inline void set_undoDistanceScaling(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractorReticleVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorReticleVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractorReticleVisual(XRInteractorReticleVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractorReticleVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractorReticleVisual(XRInteractorReticleVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11497};

/// @brief Field k_MaxRaycastHits offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxRaycastHits{static_cast<int32_t>(0xa)};

/// [SerializeField]
/// @brief Field m_MaxRaycastDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_MaxRaycastDistance;

/// [SerializeField]
/// @brief Field m_ReticlePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_ReticlePrefab;

/// [SerializeField]
/// @brief Field m_PrefabScalingFactor, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_PrefabScalingFactor;

/// [SerializeField]
/// @brief Field m_UndoDistanceScaling, offset: 0x34, size: 0x1, def value: None
 bool  ___m_UndoDistanceScaling;

/// [SerializeField]
/// @brief Field m_AlignPrefabWithSurfaceNormal, offset: 0x35, size: 0x1, def value: None
 bool  ___m_AlignPrefabWithSurfaceNormal;

/// [SerializeField]
/// @brief Field m_EndpointSmoothingTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_EndpointSmoothingTime;

/// [SerializeField]
/// @brief Field m_DrawWhileSelecting, offset: 0x3c, size: 0x1, def value: None
 bool  ___m_DrawWhileSelecting;

/// [SerializeField]
/// @brief Field m_DrawOnNoHit, offset: 0x3d, size: 0x1, def value: None
 bool  ___m_DrawOnNoHit;

/// [SerializeField]
/// @brief Field m_RaycastMask, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_RaycastMask;

/// @brief Field m_ReticleActive, offset: 0x44, size: 0x1, def value: None
 bool  ___m_ReticleActive;

/// @brief Field m_InteractorLinePoints, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  ___m_InteractorLinePoints;

/// @brief Field m_XROrigin, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Unity::XR::CoreUtils::XROrigin>  ___m_XROrigin;

/// @brief Field m_ReticleInstance, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_ReticleInstance;

/// @brief Field m_Interactor, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  ___m_Interactor;

/// @brief Field m_TargetEndPoint, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TargetEndPoint;

/// @brief Field m_TargetEndNormal, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_TargetEndNormal;

/// @brief Field m_LocalPhysicsScene, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  ___m_LocalPhysicsScene;

/// @brief Field m_HasRaycastHit, offset: 0x90, size: 0x1, def value: None
 bool  ___m_HasRaycastHit;

/// @brief Field m_RaycastHits, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_RaycastHits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_MaxRaycastDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_ReticlePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_PrefabScalingFactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_UndoDistanceScaling) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_AlignPrefabWithSurfaceNormal) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_EndpointSmoothingTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_DrawWhileSelecting) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_DrawOnNoHit) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_RaycastMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_ReticleActive) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_InteractorLinePoints) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_XROrigin) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_ReticleInstance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_Interactor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_TargetEndPoint) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_TargetEndNormal) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_LocalPhysicsScene) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_HasRaycastHit) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual, ___m_RaycastHits) == 0x98, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorReticleVisual) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals
