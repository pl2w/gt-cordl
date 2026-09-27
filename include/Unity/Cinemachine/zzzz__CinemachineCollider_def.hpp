#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineCollider_ResolutionStrategy_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineCollider)
namespace GlobalNamespace {
struct CinemachineCollider_ResolutionStrategy;
}
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineCollider_VcamExtraState;
}
namespace Unity::Cinemachine {
class CinemachineDeoccluder;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class IShotQualityEvaluator;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineCollider;
}
namespace Unity::Cinemachine {
class CinemachineCollider_VcamExtraState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineCollider*);
MARK_REF_T(::Unity::Cinemachine::CinemachineCollider_VcamExtraState*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCollider*, "Unity.Cinemachine", "CinemachineCollider");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineCollider_VcamExtraState*, "Unity.Cinemachine", "CinemachineCollider/VcamExtraState");
// [Obsolete("CinemachineCollider has been deprecated. Use CinemachineDeoccluder instead")]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// Dependencies Unity.Cinemachine.CinemachineCollider::ResolutionStrategy, Unity.Cinemachine.CinemachineExtension, UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.RaycastHit
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCollider
class CORDL_TYPE CinemachineCollider : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using ResolutionStrategy = ::GlobalNamespace::CinemachineCollider_ResolutionStrategy;

using VcamExtraState = ::Unity::Cinemachine::CinemachineCollider_VcamExtraState;

 __declspec(property(get=get_DebugPaths)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*  DebugPaths;

/// @brief Field m_AvoidObstacles, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AvoidObstacles, put=__cordl_internal_set_m_AvoidObstacles)) bool  m_AvoidObstacles;

/// @brief Field m_CameraRadius, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CameraRadius, put=__cordl_internal_set_m_CameraRadius)) float_t  m_CameraRadius;

/// @brief Field m_CollideAgainst, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CollideAgainst, put=__cordl_internal_set_m_CollideAgainst)) ::UnityEngine::LayerMask  m_CollideAgainst;

/// @brief Field m_CornerBuffer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CornerBuffer, put=__cordl_internal_set_m_CornerBuffer)) ::ArrayW<::UnityEngine::RaycastHit>  m_CornerBuffer;

/// @brief Field m_Damping, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Damping, put=__cordl_internal_set_m_Damping)) float_t  m_Damping;

/// @brief Field m_DampingWhenOccluded, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DampingWhenOccluded, put=__cordl_internal_set_m_DampingWhenOccluded)) float_t  m_DampingWhenOccluded;

/// @brief Field m_DistanceLimit, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DistanceLimit, put=__cordl_internal_set_m_DistanceLimit)) float_t  m_DistanceLimit;

/// @brief Field m_IgnoreTag, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IgnoreTag, put=__cordl_internal_set_m_IgnoreTag)) ::StringW  m_IgnoreTag;

/// @brief Field m_MaximumEffort, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaximumEffort, put=__cordl_internal_set_m_MaximumEffort)) int32_t  m_MaximumEffort;

/// @brief Field m_MinimumDistanceFromTarget, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumDistanceFromTarget, put=__cordl_internal_set_m_MinimumDistanceFromTarget)) float_t  m_MinimumDistanceFromTarget;

/// @brief Field m_MinimumOcclusionTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinimumOcclusionTime, put=__cordl_internal_set_m_MinimumOcclusionTime)) float_t  m_MinimumOcclusionTime;

/// @brief Field m_OptimalTargetDistance, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_OptimalTargetDistance, put=__cordl_internal_set_m_OptimalTargetDistance)) float_t  m_OptimalTargetDistance;

/// @brief Field m_SmoothingTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothingTime, put=__cordl_internal_set_m_SmoothingTime)) float_t  m_SmoothingTime;

/// @brief Field m_Strategy, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Strategy, put=__cordl_internal_set_m_Strategy)) ::GlobalNamespace::CinemachineCollider_ResolutionStrategy  m_Strategy;

/// @brief Field m_TransparentLayers, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TransparentLayers, put=__cordl_internal_set_m_TransparentLayers)) ::UnityEngine::LayerMask  m_TransparentLayers;

/// @brief Field m_extraStateCache, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_extraStateCache, put=__cordl_internal_set_m_extraStateCache)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>*  m_extraStateCache;

/// @brief Field s_ColliderBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ColliderBuffer, put=setStaticF_s_ColliderBuffer)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  s_ColliderBuffer;

/// @brief Convert operator to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr operator  ::Unity::Cinemachine::IShotQualityEvaluator*() noexcept;

/// @brief Method CameraWasDisplaced, addr 0xaec4a34, size 0x18, virtual false, abstract: false, final false
inline bool CameraWasDisplaced(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method CheckForTargetObstructions, addr 0xaec69a8, size 0x2d8, virtual false, abstract: false, final false
inline bool CheckForTargetObstructions(::Unity::Cinemachine::CameraState  state) ;

/// @brief Method ClampRayToBounds, addr 0xaec8254, size 0xc78, virtual false, abstract: false, final false
static inline float_t ClampRayToBounds(::UnityEngine::Ray  ray, float_t  distance, ::UnityEngine::Bounds  bounds) ;

/// @brief Method GetCameraDisplacementDistance, addr 0xaec4a4c, size 0xc8, virtual false, abstract: false, final false
inline float_t GetCameraDisplacementDistance(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method GetMaxDampTime, addr 0xaec4e44, size 0x1c, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method GetPushBackDistance, addr 0xaec7ff0, size 0x264, virtual false, abstract: false, final false
inline float_t GetPushBackDistance(::UnityEngine::Ray  ray, ::UnityEngine::Plane  startPlane, float_t  targetDistance, ::UnityEngine::Vector3  lookAtPos) ;

/// @brief Method GetWalkingDirection, addr 0xaec7804, size 0x7ec, virtual false, abstract: false, final false
inline bool GetWalkingDirection(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  pushDir, ::UnityEngine::RaycastHit  obstacle, ::by_ref<::UnityEngine::Vector3>  outDir) ;

/// @brief Method IsTargetObscured, addr 0xaec49cc, size 0x68, virtual false, abstract: false, final false
inline bool IsTargetObscured(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method IsTargetOffscreen, addr 0xaec66f8, size 0x2b0, virtual false, abstract: false, final false
static inline bool IsTargetOffscreen(::Unity::Cinemachine::CameraState  state) ;

static inline ::Unity::Cinemachine::CinemachineCollider* New_ctor() ;

/// @brief Method OnDestroy, addr 0xaec4b64, size 0x60, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnValidate, addr 0xaec4b14, size 0x50, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xaec4e60, size 0x990, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method PreserveLineOfSight, addr 0xaec57f0, size 0x3f0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PreserveLineOfSight(::by_ref<::Unity::Cinemachine::CameraState>  state, ::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>  extra) ;

/// @brief Method PullCameraInFrontOfNearestObstacle, addr 0xaec6c80, size 0x310, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PullCameraInFrontOfNearestObstacle(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPos, int32_t  layerMask, ::by_ref<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method PushCameraBack, addr 0xaec6f94, size 0x870, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PushCameraBack(::UnityEngine::Vector3  currentPos, ::UnityEngine::Vector3  pushDir, ::UnityEngine::RaycastHit  obstacle, ::UnityEngine::Vector3  lookAtPos, ::UnityEngine::Plane  startPlane, float_t  targetDistance, int32_t  iterations, ::by_ref<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>  extra) ;

/// @brief Method RespectCameraRadius, addr 0xaec5d7c, size 0x97c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 RespectCameraRadius(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPos) ;

/// @brief Method UpgradeToCm3, addr 0xaec8ecc, size 0x94, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineDeoccluder*  c) ;

constexpr bool const& __cordl_internal_get_m_AvoidObstacles() const;

constexpr bool& __cordl_internal_get_m_AvoidObstacles() ;

constexpr float_t const& __cordl_internal_get_m_CameraRadius() const;

constexpr float_t& __cordl_internal_get_m_CameraRadius() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_CollideAgainst() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_CollideAgainst() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_CornerBuffer() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_CornerBuffer() ;

constexpr float_t const& __cordl_internal_get_m_Damping() const;

constexpr float_t& __cordl_internal_get_m_Damping() ;

constexpr float_t const& __cordl_internal_get_m_DampingWhenOccluded() const;

constexpr float_t& __cordl_internal_get_m_DampingWhenOccluded() ;

constexpr float_t const& __cordl_internal_get_m_DistanceLimit() const;

constexpr float_t& __cordl_internal_get_m_DistanceLimit() ;

constexpr ::StringW const& __cordl_internal_get_m_IgnoreTag() const;

constexpr ::StringW& __cordl_internal_get_m_IgnoreTag() ;

constexpr int32_t const& __cordl_internal_get_m_MaximumEffort() const;

constexpr int32_t& __cordl_internal_get_m_MaximumEffort() ;

constexpr float_t const& __cordl_internal_get_m_MinimumDistanceFromTarget() const;

constexpr float_t& __cordl_internal_get_m_MinimumDistanceFromTarget() ;

constexpr float_t const& __cordl_internal_get_m_MinimumOcclusionTime() const;

constexpr float_t& __cordl_internal_get_m_MinimumOcclusionTime() ;

constexpr float_t const& __cordl_internal_get_m_OptimalTargetDistance() const;

constexpr float_t& __cordl_internal_get_m_OptimalTargetDistance() ;

constexpr float_t const& __cordl_internal_get_m_SmoothingTime() const;

constexpr float_t& __cordl_internal_get_m_SmoothingTime() ;

constexpr ::GlobalNamespace::CinemachineCollider_ResolutionStrategy const& __cordl_internal_get_m_Strategy() const;

constexpr ::GlobalNamespace::CinemachineCollider_ResolutionStrategy& __cordl_internal_get_m_Strategy() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_TransparentLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_TransparentLayers() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>* const& __cordl_internal_get_m_extraStateCache() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>*& __cordl_internal_get_m_extraStateCache() ;

constexpr void __cordl_internal_set_m_AvoidObstacles(bool  value) ;

constexpr void __cordl_internal_set_m_CameraRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_CollideAgainst(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_CornerBuffer(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_Damping(float_t  value) ;

constexpr void __cordl_internal_set_m_DampingWhenOccluded(float_t  value) ;

constexpr void __cordl_internal_set_m_DistanceLimit(float_t  value) ;

constexpr void __cordl_internal_set_m_IgnoreTag(::StringW  value) ;

constexpr void __cordl_internal_set_m_MaximumEffort(int32_t  value) ;

constexpr void __cordl_internal_set_m_MinimumDistanceFromTarget(float_t  value) ;

constexpr void __cordl_internal_set_m_MinimumOcclusionTime(float_t  value) ;

constexpr void __cordl_internal_set_m_OptimalTargetDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_SmoothingTime(float_t  value) ;

constexpr void __cordl_internal_set_m_Strategy(::GlobalNamespace::CinemachineCollider_ResolutionStrategy  value) ;

constexpr void __cordl_internal_set_m_TransparentLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_extraStateCache(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>*  value) ;

/// @brief Method .ctor, addr 0xaec8f60, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF_s_ColliderBuffer() ;

/// @brief Method get_DebugPaths, addr 0xaec4bc4, size 0x280, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* get_DebugPaths() ;

/// @brief Convert to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr ::Unity::Cinemachine::IShotQualityEvaluator* i___Unity__Cinemachine__IShotQualityEvaluator() noexcept;

static inline void setStaticF_s_ColliderBuffer(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCollider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCollider(CinemachineCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCollider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCollider(CinemachineCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22393};

/// @brief Field k_AngleThreshold offset 0xffffffff size 0x4
static constexpr float_t  k_AngleThreshold{static_cast<float_t>(0.1f)};

/// @brief Field k_PrecisionSlush offset 0xffffffff size 0x4
static constexpr float_t  k_PrecisionSlush{static_cast<float_t>(0.001f)};

/// [Header("Obstacle Detection")]
/// [Tooltip("Objects on these layers will be detected")]
/// @brief Field m_CollideAgainst, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_CollideAgainst;

/// [TagField]
/// [Tooltip("Obstacles with this tag will be ignored.  It is a good idea to set this field to the target\'s tag")]
/// @brief Field m_IgnoreTag, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___m_IgnoreTag;

/// [Tooltip("Objects on these layers will never obstruct view of the target")]
/// @brief Field m_TransparentLayers, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_TransparentLayers;

/// [Tooltip("Obstacles closer to the target than this will be ignored")]
/// @brief Field m_MinimumDistanceFromTarget, offset: 0x44, size: 0x4, def value: None
 float_t  ___m_MinimumDistanceFromTarget;

/// [Space]
/// [Tooltip("When enabled, will attempt to resolve situations where the line of sight to the target is blocked by an obstacle")]
/// [FormerlySerializedAs("m_PreserveLineOfSight")]
/// @brief Field m_AvoidObstacles, offset: 0x48, size: 0x1, def value: None
 bool  ___m_AvoidObstacles;

/// [Tooltip("The maximum raycast distance when checking if the line of sight to this camera\'s target is clear.  If the setting is 0 or less, the current actual distance to target will be used.")]
/// [FormerlySerializedAs("m_LineOfSightFeelerDistance")]
/// @brief Field m_DistanceLimit, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_DistanceLimit;

/// [Tooltip("Don\'t take action unless occlusion has lasted at least this long.")]
/// @brief Field m_MinimumOcclusionTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_MinimumOcclusionTime;

/// [Tooltip("Camera will try to maintain this distance from any obstacle.  Try to keep this value small.  Increase it if you are seeing inside obstacles due to a large FOV on the camera.")]
/// @brief Field m_CameraRadius, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_CameraRadius;

/// [Tooltip("The way in which the Collider will attempt to preserve sight of the target.")]
/// @brief Field m_Strategy, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineCollider_ResolutionStrategy  ___m_Strategy;

/// [Range(1, 10)]
/// [Tooltip("Upper limit on how many obstacle hits to process.  Higher numbers may impact performance.  In most environments, 4 is enough.")]
/// @brief Field m_MaximumEffort, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___m_MaximumEffort;

/// [Range(0, 2)]
/// [Tooltip("Smoothing to apply to obstruction resolution.  Nearest camera point is held for at least this long")]
/// @brief Field m_SmoothingTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_SmoothingTime;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera returns to its normal position after having been corrected.  Higher numbers will move the camera more gradually back to normal.")]
/// [FormerlySerializedAs("m_Smoothing")]
/// @brief Field m_Damping, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_Damping;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera moves to resolve an occlusion.  Higher numbers will move the camera more gradually.")]
/// @brief Field m_DampingWhenOccluded, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_DampingWhenOccluded;

/// [Header("Shot Evaluation")]
/// [Tooltip("If greater than zero, a higher score will be given to shots when the target is closer to this distance.  Set this to zero to disable this feature.")]
/// @brief Field m_OptimalTargetDistance, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_OptimalTargetDistance;

/// @brief Field m_extraStateCache, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineCollider_VcamExtraState*>*  ___m_extraStateCache;

/// @brief Field m_CornerBuffer, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_CornerBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_CollideAgainst) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_IgnoreTag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_TransparentLayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_MinimumDistanceFromTarget) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_AvoidObstacles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_DistanceLimit) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_MinimumOcclusionTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_CameraRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_Strategy) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_MaximumEffort) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_SmoothingTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_Damping) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_DampingWhenOccluded) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_OptimalTargetDistance) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_extraStateCache) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider, ___m_CornerBuffer) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineCollider) == 0x80, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineCollider/VcamExtraState
class CORDL_TYPE CinemachineCollider_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field debugResolutionPath, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugResolutionPath, put=__cordl_internal_set_debugResolutionPath)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  debugResolutionPath;

/// @brief Field m_SmoothedDistance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothedDistance, put=__cordl_internal_set_m_SmoothedDistance)) float_t  m_SmoothedDistance;

/// @brief Field m_SmoothedTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothedTime, put=__cordl_internal_set_m_SmoothedTime)) float_t  m_SmoothedTime;

/// @brief Field occlusionStartTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_occlusionStartTime, put=__cordl_internal_set_occlusionStartTime)) float_t  occlusionStartTime;

/// @brief Field previousCameraOffset, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousCameraOffset, put=__cordl_internal_set_previousCameraOffset)) ::UnityEngine::Vector3  previousCameraOffset;

/// @brief Field previousCameraPosition, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousCameraPosition, put=__cordl_internal_set_previousCameraPosition)) ::UnityEngine::Vector3  previousCameraPosition;

/// @brief Field previousDampTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousDampTime, put=__cordl_internal_set_previousDampTime)) float_t  previousDampTime;

/// @brief Field previousDisplacement, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousDisplacement, put=__cordl_internal_set_previousDisplacement)) ::UnityEngine::Vector3  previousDisplacement;

/// @brief Field targetObscured, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_targetObscured, put=__cordl_internal_set_targetObscured)) bool  targetObscured;

/// @brief Method AddPointToDebugPath, addr 0xaec6f90, size 0x4, virtual false, abstract: false, final false
inline void AddPointToDebugPath(::UnityEngine::Vector3  p) ;

/// @brief Method ApplyDistanceSmoothing, addr 0xaec5c60, size 0xa4, virtual false, abstract: false, final false
inline float_t ApplyDistanceSmoothing(float_t  distance, float_t  smoothingTime) ;

static inline ::Unity::Cinemachine::CinemachineCollider_VcamExtraState* New_ctor() ;

/// @brief Method ResetDistanceSmoothing, addr 0xaec5d04, size 0x78, virtual false, abstract: false, final false
inline void ResetDistanceSmoothing(float_t  smoothingTime) ;

/// @brief Method UpdateDistanceSmoothing, addr 0xaec5be0, size 0x80, virtual false, abstract: false, final false
inline void UpdateDistanceSmoothing(float_t  distance) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_debugResolutionPath() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_debugResolutionPath() ;

constexpr float_t const& __cordl_internal_get_m_SmoothedDistance() const;

constexpr float_t& __cordl_internal_get_m_SmoothedDistance() ;

constexpr float_t const& __cordl_internal_get_m_SmoothedTime() const;

constexpr float_t& __cordl_internal_get_m_SmoothedTime() ;

constexpr float_t const& __cordl_internal_get_occlusionStartTime() const;

constexpr float_t& __cordl_internal_get_occlusionStartTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousCameraOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousCameraOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousCameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousCameraPosition() ;

constexpr float_t const& __cordl_internal_get_previousDampTime() const;

constexpr float_t& __cordl_internal_get_previousDampTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousDisplacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousDisplacement() ;

constexpr bool const& __cordl_internal_get_targetObscured() const;

constexpr bool& __cordl_internal_get_targetObscured() ;

constexpr void __cordl_internal_set_debugResolutionPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_m_SmoothedDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_SmoothedTime(float_t  value) ;

constexpr void __cordl_internal_set_occlusionStartTime(float_t  value) ;

constexpr void __cordl_internal_set_previousCameraOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_previousCameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_previousDampTime(float_t  value) ;

constexpr void __cordl_internal_set_previousDisplacement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetObscured(bool  value) ;

/// @brief Method .ctor, addr 0xaec9098, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCollider_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCollider_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineCollider_VcamExtraState(CinemachineCollider_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineCollider_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineCollider_VcamExtraState(CinemachineCollider_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22392};

/// @brief Field previousDisplacement, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousDisplacement;

/// @brief Field previousCameraOffset, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousCameraOffset;

/// @brief Field previousCameraPosition, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousCameraPosition;

/// @brief Field previousDampTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___previousDampTime;

/// @brief Field targetObscured, offset: 0x40, size: 0x1, def value: None
 bool  ___targetObscured;

/// @brief Field occlusionStartTime, offset: 0x44, size: 0x4, def value: None
 float_t  ___occlusionStartTime;

/// @brief Field debugResolutionPath, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___debugResolutionPath;

/// @brief Field m_SmoothedDistance, offset: 0x50, size: 0x4, def value: None
 float_t  ___m_SmoothedDistance;

/// @brief Field m_SmoothedTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_SmoothedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState, ___previousDisplacement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState, ___previousCameraOffset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState, ___previousCameraPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState, ___previousDampTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState, ___targetObscured) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState, ___occlusionStartTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState, ___debugResolutionPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState, ___m_SmoothedDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState, ___m_SmoothedTime) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineCollider_VcamExtraState) == 0x58, "Size mismatch!");

} // namespace end def Unity::Cinemachine
