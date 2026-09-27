#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDeoccluder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_QualityEvaluation_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineDeoccluder)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineDeoccluder_ObstacleAvoidance;
}
namespace GlobalNamespace {
struct CinemachineDeoccluder_QualityEvaluation;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineDeoccluder_VcamExtraState;
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
class Collider;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineDeoccluder;
}
namespace Unity::Cinemachine {
class CinemachineDeoccluder_VcamExtraState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineDeoccluder*);
MARK_REF_T(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineDeoccluder*, "Unity.Cinemachine", "CinemachineDeoccluder");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*, "Unity.Cinemachine", "CinemachineDeoccluder/VcamExtraState");
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Deoccluder")]
// [SaveDuringPlay]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [RequiredTarget((Unity.Cinemachine.RequiredTargetAttribute::RequiredTargets)1)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineDeoccluder.html")]
// Dependencies Unity.Cinemachine.CinemachineDeoccluder::ObstacleAvoidance, Unity.Cinemachine.CinemachineDeoccluder::QualityEvaluation, Unity.Cinemachine.CinemachineExtension, UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.RaycastHit
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineDeoccluder
class CORDL_TYPE CinemachineDeoccluder : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using ObstacleAvoidance = ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance;

using QualityEvaluation = ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation;

using VcamExtraState = ::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState;

/// @brief Field AvoidObstacles, offset 0x48, size 0x2c 
 __declspec(property(get=__cordl_internal_get_AvoidObstacles, put=__cordl_internal_set_AvoidObstacles)) ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance  AvoidObstacles;

/// @brief Field CollideAgainst, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CollideAgainst, put=__cordl_internal_set_CollideAgainst)) ::UnityEngine::LayerMask  CollideAgainst;

/// @brief Field IgnoreTag, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_IgnoreTag, put=__cordl_internal_set_IgnoreTag)) ::StringW  IgnoreTag;

/// @brief Field MinimumDistanceFromTarget, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinimumDistanceFromTarget, put=__cordl_internal_set_MinimumDistanceFromTarget)) float_t  MinimumDistanceFromTarget;

/// @brief Field ShotQualityEvaluation, offset 0x74, size 0x14 
 __declspec(property(get=__cordl_internal_get_ShotQualityEvaluation, put=__cordl_internal_set_ShotQualityEvaluation)) ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation  ShotQualityEvaluation;

/// @brief Field TransparentLayers, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_TransparentLayers, put=__cordl_internal_set_TransparentLayers)) ::UnityEngine::LayerMask  TransparentLayers;

/// @brief Field m_CornerBuffer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CornerBuffer, put=__cordl_internal_set_m_CornerBuffer)) ::ArrayW<::UnityEngine::RaycastHit>  m_CornerBuffer;

/// @brief Field m_extraStateCache, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_extraStateCache, put=__cordl_internal_set_m_extraStateCache)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>*  m_extraStateCache;

/// @brief Field s_ColliderBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ColliderBuffer, put=setStaticF_s_ColliderBuffer)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  s_ColliderBuffer;

/// @brief Convert operator to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr operator  ::Unity::Cinemachine::IShotQualityEvaluator*() noexcept;

/// @brief Method CameraWasDisplaced, addr 0xae8d64c, size 0x18, virtual false, abstract: false, final false
inline bool CameraWasDisplaced(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method ClampRayToBounds, addr 0xae911f8, size 0xc78, virtual false, abstract: false, final false
static inline float_t ClampRayToBounds(::UnityEngine::Ray  ray, float_t  distance, ::UnityEngine::Bounds  bounds) ;

/// @brief Method DebugCollisionPaths, addr 0xae8d9f8, size 0x28c, virtual false, abstract: false, final false
inline void DebugCollisionPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>*  paths, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*  obstacles) ;

/// @brief Method ForceCameraPosition, addr 0xae8dd4c, size 0x88, virtual true, abstract: false, final false
inline void ForceCameraPosition(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetAvoidanceResolutionTargetPoint, addr 0xae8e958, size 0x1d8, virtual false, abstract: false, final false
inline bool GetAvoidanceResolutionTargetPoint(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::by_ref<::Unity::Cinemachine::CameraState>  state, ::by_ref<::UnityEngine::Vector3>  resolutuionTargetPoint) ;

/// @brief Method GetCameraDisplacementDistance, addr 0xae8d664, size 0xc8, virtual false, abstract: false, final false
inline float_t GetCameraDisplacementDistance(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

/// @brief Method GetMaxDampTime, addr 0xae8dc84, size 0x2c, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method GetPushBackDistance, addr 0xae90ff8, size 0x200, virtual false, abstract: false, final false
inline float_t GetPushBackDistance(::UnityEngine::Ray  ray, ::UnityEngine::Plane  startPlane, float_t  targetDistance, ::UnityEngine::Vector3  lookAtPos) ;

/// @brief Method GetWalkingDirection, addr 0xae90834, size 0x7c4, virtual false, abstract: false, final false
inline bool GetWalkingDirection(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  pushDir, ::UnityEngine::RaycastHit  obstacle, ::by_ref<::UnityEngine::Vector3>  outDir) ;

/// @brief Method IsTargetObscured, addr 0xae8fa14, size 0x2e8, virtual false, abstract: false, final false
inline bool IsTargetObscured(::Unity::Cinemachine::CameraState  state) ;

/// @brief Method IsTargetObscured, addr 0xae8d5e4, size 0x68, virtual false, abstract: false, final false
inline bool IsTargetObscured(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam) ;

static inline ::Unity::Cinemachine::CinemachineDeoccluder* New_ctor() ;

/// @brief Method OnDestroy, addr 0xae8d898, size 0x60, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0xae8d8f8, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTargetObjectWarped, addr 0xae8dcb0, size 0x9c, virtual true, abstract: false, final false
inline void OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta) ;

/// @brief Method OnValidate, addr 0xae8d72c, size 0x78, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xae8ddd4, size 0xb84, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method PreserveLineOfSight, addr 0xae8eb30, size 0x3b0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PreserveLineOfSight(::by_ref<::Unity::Cinemachine::CameraState>  state, ::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>  extra, ::UnityEngine::Vector3  lookAtPoint) ;

/// @brief Method PullCameraInFrontOfNearestObstacle, addr 0xae8fcfc, size 0x320, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PullCameraInFrontOfNearestObstacle(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPos, int32_t  layerMask, ::by_ref<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method PushCameraBack, addr 0xae90020, size 0x814, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PushCameraBack(::UnityEngine::Vector3  currentPos, ::UnityEngine::Vector3  pushDir, ::UnityEngine::RaycastHit  obstacle, ::UnityEngine::Vector3  lookAtPos, ::UnityEngine::Plane  startPlane, float_t  targetDistance, int32_t  iterations, ::by_ref<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>  extra) ;

/// @brief Method Reset, addr 0xae8d7a4, size 0xa4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method RespectCameraRadius, addr 0xae8f084, size 0x990, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 RespectCameraRadius(::UnityEngine::Vector3  cameraPos, ::UnityEngine::Vector3  lookAtPos) ;

constexpr ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance const& __cordl_internal_get_AvoidObstacles() const;

constexpr ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance& __cordl_internal_get_AvoidObstacles() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_CollideAgainst() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_CollideAgainst() ;

constexpr ::StringW const& __cordl_internal_get_IgnoreTag() const;

constexpr ::StringW& __cordl_internal_get_IgnoreTag() ;

constexpr float_t const& __cordl_internal_get_MinimumDistanceFromTarget() const;

constexpr float_t& __cordl_internal_get_MinimumDistanceFromTarget() ;

constexpr ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation const& __cordl_internal_get_ShotQualityEvaluation() const;

constexpr ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation& __cordl_internal_get_ShotQualityEvaluation() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_TransparentLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_TransparentLayers() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_CornerBuffer() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_CornerBuffer() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>* const& __cordl_internal_get_m_extraStateCache() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>*& __cordl_internal_get_m_extraStateCache() ;

constexpr void __cordl_internal_set_AvoidObstacles(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance  value) ;

constexpr void __cordl_internal_set_CollideAgainst(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_IgnoreTag(::StringW  value) ;

constexpr void __cordl_internal_set_MinimumDistanceFromTarget(float_t  value) ;

constexpr void __cordl_internal_set_ShotQualityEvaluation(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation  value) ;

constexpr void __cordl_internal_set_TransparentLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_CornerBuffer(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_extraStateCache(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>*  value) ;

/// @brief Method .ctor, addr 0xae91e70, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> getStaticF_s_ColliderBuffer() ;

/// @brief Convert to "::Unity::Cinemachine::IShotQualityEvaluator"
constexpr ::Unity::Cinemachine::IShotQualityEvaluator* i___Unity__Cinemachine__IShotQualityEvaluator() noexcept;

static inline void setStaticF_s_ColliderBuffer(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDeoccluder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDeoccluder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineDeoccluder(CinemachineDeoccluder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDeoccluder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineDeoccluder(CinemachineDeoccluder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22167};

/// @brief Field k_AngleThreshold offset 0xffffffff size 0x4
static constexpr float_t  k_AngleThreshold{static_cast<float_t>(0.1f)};

/// @brief Field k_PrecisionSlush offset 0xffffffff size 0x4
static constexpr float_t  k_PrecisionSlush{static_cast<float_t>(0.001f)};

/// [Tooltip("Objects on these layers will be detected")]
/// @brief Field CollideAgainst, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___CollideAgainst;

/// [TagField]
/// [Tooltip("Obstacles with this tag will be ignored.  It is a good idea to set this field to the target\'s tag")]
/// @brief Field IgnoreTag, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___IgnoreTag;

/// [Tooltip("Objects on these layers will never obstruct view of the target")]
/// @brief Field TransparentLayers, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___TransparentLayers;

/// [Tooltip("Obstacles closer to the target than this will be ignored")]
/// @brief Field MinimumDistanceFromTarget, offset: 0x44, size: 0x4, def value: None
 float_t  ___MinimumDistanceFromTarget;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field AvoidObstacles, offset: 0x48, size: 0x2c, def value: None
 ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance  ___AvoidObstacles;

/// [FoldoutWithEnabledButton("Enabled")]
/// @brief Field ShotQualityEvaluation, offset: 0x74, size: 0x14, def value: None
 ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation  ___ShotQualityEvaluation;

/// @brief Field m_extraStateCache, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState*>*  ___m_extraStateCache;

/// @brief Field m_CornerBuffer, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_CornerBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder, ___CollideAgainst) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder, ___IgnoreTag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder, ___TransparentLayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder, ___MinimumDistanceFromTarget) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder, ___AvoidObstacles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder, ___ShotQualityEvaluation) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder, ___m_extraStateCache) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder, ___m_CornerBuffer) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineDeoccluder) == 0x98, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineDeoccluder/VcamExtraState
class CORDL_TYPE CinemachineDeoccluder_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field DebugResolutionPath, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_DebugResolutionPath, put=__cordl_internal_set_DebugResolutionPath)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  DebugResolutionPath;

/// @brief Field OccludingObjects, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OccludingObjects, put=__cordl_internal_set_OccludingObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  OccludingObjects;

/// @brief Field OcclusionStartTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_OcclusionStartTime, put=__cordl_internal_set_OcclusionStartTime)) float_t  OcclusionStartTime;

/// @brief Field PreviousCameraOffset, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviousCameraOffset, put=__cordl_internal_set_PreviousCameraOffset)) ::UnityEngine::Vector3  PreviousCameraOffset;

/// @brief Field PreviousCameraPosition, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviousCameraPosition, put=__cordl_internal_set_PreviousCameraPosition)) ::UnityEngine::Vector3  PreviousCameraPosition;

/// @brief Field PreviousDampTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_PreviousDampTime, put=__cordl_internal_set_PreviousDampTime)) float_t  PreviousDampTime;

/// @brief Field PreviousDisplacement, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_PreviousDisplacement, put=__cordl_internal_set_PreviousDisplacement)) ::UnityEngine::Vector3  PreviousDisplacement;

/// @brief Field StateIsValid, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_StateIsValid, put=__cordl_internal_set_StateIsValid)) bool  StateIsValid;

/// @brief Field TargetObscured, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_TargetObscured, put=__cordl_internal_set_TargetObscured)) bool  TargetObscured;

/// @brief Field m_SmoothedDistance, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothedDistance, put=__cordl_internal_set_m_SmoothedDistance)) float_t  m_SmoothedDistance;

/// @brief Field m_SmoothedTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SmoothedTime, put=__cordl_internal_set_m_SmoothedTime)) float_t  m_SmoothedTime;

/// @brief Method AddPointToDebugPath, addr 0xae9001c, size 0x4, virtual false, abstract: false, final false
inline void AddPointToDebugPath(::UnityEngine::Vector3  p, ::UnityEngine::Collider*  c) ;

/// @brief Method ApplyDistanceSmoothing, addr 0xae8efe0, size 0xa4, virtual false, abstract: false, final false
inline float_t ApplyDistanceSmoothing(float_t  distance, float_t  smoothingTime) ;

static inline ::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState* New_ctor() ;

/// @brief Method ResetDistanceSmoothing, addr 0xae8eee0, size 0x78, virtual false, abstract: false, final false
inline void ResetDistanceSmoothing(float_t  smoothingTime) ;

/// @brief Method UpdateDistanceSmoothing, addr 0xae8ef58, size 0x88, virtual false, abstract: false, final false
inline void UpdateDistanceSmoothing(float_t  distance) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_DebugResolutionPath() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_DebugResolutionPath() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_OccludingObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_OccludingObjects() ;

constexpr float_t const& __cordl_internal_get_OcclusionStartTime() const;

constexpr float_t& __cordl_internal_get_OcclusionStartTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviousCameraOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviousCameraOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviousCameraPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviousCameraPosition() ;

constexpr float_t const& __cordl_internal_get_PreviousDampTime() const;

constexpr float_t& __cordl_internal_get_PreviousDampTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PreviousDisplacement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PreviousDisplacement() ;

constexpr bool const& __cordl_internal_get_StateIsValid() const;

constexpr bool& __cordl_internal_get_StateIsValid() ;

constexpr bool const& __cordl_internal_get_TargetObscured() const;

constexpr bool& __cordl_internal_get_TargetObscured() ;

constexpr float_t const& __cordl_internal_get_m_SmoothedDistance() const;

constexpr float_t& __cordl_internal_get_m_SmoothedDistance() ;

constexpr float_t const& __cordl_internal_get_m_SmoothedTime() const;

constexpr float_t& __cordl_internal_get_m_SmoothedTime() ;

constexpr void __cordl_internal_set_DebugResolutionPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_OccludingObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_OcclusionStartTime(float_t  value) ;

constexpr void __cordl_internal_set_PreviousCameraOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PreviousCameraPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_PreviousDampTime(float_t  value) ;

constexpr void __cordl_internal_set_PreviousDisplacement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_StateIsValid(bool  value) ;

constexpr void __cordl_internal_set_TargetObscured(bool  value) ;

constexpr void __cordl_internal_set_m_SmoothedDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_SmoothedTime(float_t  value) ;

/// @brief Method .ctor, addr 0xae91fa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDeoccluder_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDeoccluder_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineDeoccluder_VcamExtraState(CinemachineDeoccluder_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDeoccluder_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineDeoccluder_VcamExtraState(CinemachineDeoccluder_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22166};

/// @brief Field PreviousDisplacement, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviousDisplacement;

/// @brief Field TargetObscured, offset: 0x24, size: 0x1, def value: None
 bool  ___TargetObscured;

/// @brief Field OcclusionStartTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___OcclusionStartTime;

/// @brief Field DebugResolutionPath, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___DebugResolutionPath;

/// @brief Field OccludingObjects, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___OccludingObjects;

/// @brief Field PreviousCameraOffset, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviousCameraOffset;

/// @brief Field PreviousCameraPosition, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PreviousCameraPosition;

/// @brief Field PreviousDampTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___PreviousDampTime;

/// @brief Field StateIsValid, offset: 0x5c, size: 0x1, def value: None
 bool  ___StateIsValid;

/// @brief Field m_SmoothedDistance, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_SmoothedDistance;

/// @brief Field m_SmoothedTime, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_SmoothedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___PreviousDisplacement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___TargetObscured) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___OcclusionStartTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___DebugResolutionPath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___OccludingObjects) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___PreviousCameraOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___PreviousCameraPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___PreviousDampTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___StateIsValid) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___m_SmoothedDistance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState, ___m_SmoothedTime) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineDeoccluder_VcamExtraState) == 0x68, "Size mismatch!");

} // namespace end def Unity::Cinemachine
