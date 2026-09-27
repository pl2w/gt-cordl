#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKRoom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKRoom)
namespace GlobalNamespace {
struct MRUKAnchor_SceneLabels;
}
namespace GlobalNamespace {
struct MRUKRoom_CouchSeat;
}
namespace GlobalNamespace {
struct MRUKRoom_Surface;
}
namespace GlobalNamespace {
struct MRUKRoom__ShareRoomAsync_d__56;
}
namespace GlobalNamespace {
struct MRUK_PositioningMethod;
}
namespace GlobalNamespace {
struct MRUK_SurfaceType;
}
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
template<typename TStatus>
struct OVRResult_1;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace Meta::XR::MRUtilityKit {
struct LabelFilter;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUKRoom*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUKRoom*, "Meta.XR.MRUtilityKit", "MRUKRoom");
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_m_r_u_k_room")]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies OVRAnchor, System.Nullable`1<T>, UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Pose
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUKRoom
class CORDL_TYPE MRUKRoom : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CouchSeat = ::GlobalNamespace::MRUKRoom_CouchSeat;

using Surface = ::GlobalNamespace::MRUKRoom_Surface;

using _ShareRoomAsync_d__56 = ::GlobalNamespace::MRUKRoom__ShareRoomAsync_d__56;

 __declspec(property(get=get_Anchor, put=set_Anchor)) ::GlobalNamespace::OVRAnchor  Anchor;

 __declspec(property(get=get_AnchorCreatedEvent, put=set_AnchorCreatedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  AnchorCreatedEvent;

 __declspec(property(get=get_AnchorRemovedEvent, put=set_AnchorRemovedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  AnchorRemovedEvent;

 __declspec(property(get=get_AnchorUpdatedEvent, put=set_AnchorUpdatedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  AnchorUpdatedEvent;

 __declspec(property(get=get_Anchors)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  Anchors;

 __declspec(property(get=get_CeilingAnchor, put=set_CeilingAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  CeilingAnchor;

 __declspec(property(get=get_DeltaPose)) ::UnityEngine::Pose  DeltaPose;

 __declspec(property(get=get_FloorAnchor, put=set_FloorAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  FloorAnchor;

 __declspec(property(get=get_GlobalMeshAnchor, put=set_GlobalMeshAnchor)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  GlobalMeshAnchor;

 __declspec(property(get=get_InitialPose, put=set_InitialPose)) ::UnityEngine::Pose  InitialPose;

 __declspec(property(get=get_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_SeatPoses)) ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>*  SeatPoses;

 __declspec(property(get=get_WallAnchors)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  WallAnchors;

/// @brief Field <AnchorCreatedEvent>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnchorCreatedEvent_k__BackingField, put=__cordl_internal_set__AnchorCreatedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  _AnchorCreatedEvent_k__BackingField;

/// @brief Field <AnchorRemovedEvent>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnchorRemovedEvent_k__BackingField, put=__cordl_internal_set__AnchorRemovedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  _AnchorRemovedEvent_k__BackingField;

/// @brief Field <AnchorUpdatedEvent>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnchorUpdatedEvent_k__BackingField, put=__cordl_internal_set__AnchorUpdatedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  _AnchorUpdatedEvent_k__BackingField;

/// @brief Field <Anchor>k__BackingField, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get__Anchor_k__BackingField, put=__cordl_internal_set__Anchor_k__BackingField)) ::GlobalNamespace::OVRAnchor  _Anchor_k__BackingField;

/// @brief Field <Anchors>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Anchors_k__BackingField, put=__cordl_internal_set__Anchors_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  _Anchors_k__BackingField;

/// @brief Field <CeilingAnchor>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__CeilingAnchor_k__BackingField, put=__cordl_internal_set__CeilingAnchor_k__BackingField)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _CeilingAnchor_k__BackingField;

/// @brief Field <FloorAnchor>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__FloorAnchor_k__BackingField, put=__cordl_internal_set__FloorAnchor_k__BackingField)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _FloorAnchor_k__BackingField;

/// @brief Field <GlobalMeshAnchor>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__GlobalMeshAnchor_k__BackingField, put=__cordl_internal_set__GlobalMeshAnchor_k__BackingField)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  _GlobalMeshAnchor_k__BackingField;

/// @brief Field <InitialPose>k__BackingField, offset 0x38, size 0x1c 
 __declspec(property(get=__cordl_internal_get__InitialPose_k__BackingField, put=__cordl_internal_set__InitialPose_k__BackingField)) ::UnityEngine::Pose  _InitialPose_k__BackingField;

/// @brief Field <SeatPoses>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__SeatPoses_k__BackingField, put=__cordl_internal_set__SeatPoses_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>*  _SeatPoses_k__BackingField;

/// @brief Field <WallAnchors>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__WallAnchors_k__BackingField, put=__cordl_internal_set__WallAnchors_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  _WallAnchors_k__BackingField;

/// @brief Field _corners, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__corners, put=__cordl_internal_set__corners)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  _corners;

/// @brief Field _prevRoomPose, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get__prevRoomPose, put=__cordl_internal_set__prevRoomPose)) ::System::Nullable_1<::UnityEngine::Pose>  _prevRoomPose;

/// @brief Field _roomBounds, offset 0x88, size 0x18 
 __declspec(property(get=__cordl_internal_get__roomBounds, put=__cordl_internal_set__roomBounds)) ::UnityEngine::Bounds  _roomBounds;

/// @brief Method CalculateHierarchyReferences, addr 0x9f341cc, size 0xc28, virtual false, abstract: false, final false
inline void CalculateHierarchyReferences() ;

/// @brief Method CalculateRoomOutlineAndBounds, addr 0x9f35008, size 0x608, virtual false, abstract: false, final false
inline void CalculateRoomOutlineAndBounds() ;

/// @brief Method CalculateSeatPoses, addr 0x9f337d4, size 0x9f8, virtual false, abstract: false, final false
inline void CalculateSeatPoses() ;

/// @brief Method ComputeRoomInfo, addr 0x9f33684, size 0x150, virtual false, abstract: false, final false
inline void ComputeRoomInfo() ;

/// [Obsolete("Use \'HasAllLabels()\' instead.")]
/// @brief Method DoesRoomHave, addr 0x9f37bc0, size 0x70, virtual false, abstract: false, final false
inline bool DoesRoomHave(::ArrayW<::StringW>  labels) ;

/// @brief Method FindAnchorByUuid, addr 0x9f334e4, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> FindAnchorByUuid(::System::Guid  uuid) ;

/// [Obsolete("String-based labels are deprecated (v65). Please use the equivalent enum-based methods.")]
/// @brief Method FindLargestSurface, addr 0x9f38084, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> FindLargestSurface(::StringW  anchorLabel) ;

/// @brief Method FindLargestSurface, addr 0x9f380f4, size 0x24c, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> FindLargestSurface(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags) ;

/// @brief Method GenerateRandomPositionInRoom, addr 0x9f38340, size 0x29c, virtual false, abstract: false, final false
inline ::System::Nullable_1<::UnityEngine::Vector3> GenerateRandomPositionInRoom(float_t  minDistanceToSurface, bool  avoidVolumes) ;

/// @brief Method GenerateRandomPositionOnSurface, addr 0x9f385dc, size 0x131c, virtual false, abstract: false, final false
inline bool GenerateRandomPositionOnSurface(::GlobalNamespace::MRUK_SurfaceType  surfaceTypes, float_t  minDistanceToEdge, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal) ;

/// @brief Method GetBestPoseFromRaycast, addr 0x9f36b34, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetBestPoseFromRaycast(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  sceneAnchor, ::GlobalNamespace::MRUK_PositioningMethod  positioningMethod) ;

/// @brief Method GetBestPoseFromRaycast, addr 0x9f36190, size 0x9a4, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetBestPoseFromRaycast(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  sceneAnchor, ::by_ref<::UnityEngine::Vector3>  surfaceNormal, ::GlobalNamespace::MRUK_PositioningMethod  positioningMethod) ;

/// [Obsolete("Use CeilingAnchor property instead")]
/// @brief Method GetCeilingAnchor, addr 0x9f34f48, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> GetCeilingAnchor() ;

/// @brief Method GetDirectionAwayFromClosestWall, addr 0x9f36e90, size 0x3f8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetDirectionAwayFromClosestWall(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::by_ref<int32_t>  cardinalAxisIndex, ::System::Collections::Generic::List_1<int32_t>*  excludedAxes) ;

/// @brief Method GetFacingDirection, addr 0x9f34f60, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetFacingDirection(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// [Obsolete("Use FloorAnchor property instead")]
/// @brief Method GetFloorAnchor, addr 0x9f34f40, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> GetFloorAnchor() ;

/// @brief Method GetGlobalMeshAnchor, addr 0x9f34f50, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> GetGlobalMeshAnchor() ;

/// @brief Method GetKeyWall, addr 0x9f35610, size 0x2e4, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> GetKeyWall(::by_ref<::UnityEngine::Vector2>  wallScale, float_t  tolerance) ;

/// [Obsolete("Use Anchors property instead")]
/// @brief Method GetRoomAnchors, addr 0x9f34df4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* GetRoomAnchors() ;

/// @brief Method GetRoomBounds, addr 0x9f36c8c, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetRoomBounds() ;

/// @brief Method GetRoomOutline, addr 0x9f34ff0, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetRoomOutline() ;

/// @brief Method GetSeatPoses, addr 0x9f376d8, size 0x3dc, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Pose> GetSeatPoses() ;

/// [Obsolete("Use WallAnchors property instead")]
/// @brief Method GetWallAnchors, addr 0x9f34f58, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* GetWallAnchors() ;

/// @brief Method HasAllLabels, addr 0x9f37c30, size 0x148, virtual false, abstract: false, final false
inline bool HasAllLabels(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags) ;

/// @brief Method IsPositionInRoom, addr 0x9f36b88, size 0x104, virtual false, abstract: false, final false
inline bool IsPositionInRoom(::UnityEngine::Vector3  queryPosition, bool  testVerticalBounds) ;

/// @brief Method IsPositionInSceneVolume, addr 0x9f37288, size 0x1c, virtual false, abstract: false, final false
inline bool IsPositionInSceneVolume(::UnityEngine::Vector3  worldPosition, float_t  distanceBuffer) ;

/// @brief Method IsPositionInSceneVolume, addr 0x9f36cdc, size 0x1b4, virtual false, abstract: false, final false
inline bool IsPositionInSceneVolume(::UnityEngine::Vector3  worldPosition, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  sceneObject, bool  testVerticalBounds, float_t  distanceBuffer) ;

/// @brief Method IsPositionInSceneVolume, addr 0x9f372a4, size 0x1c, virtual false, abstract: false, final false
inline bool IsPositionInSceneVolume(::UnityEngine::Vector3  worldPosition, bool  testVerticalBounds, float_t  distanceBuffer) ;

static inline ::Meta::XR::MRUtilityKit::MRUKRoom* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f398f8, size 0xcc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Raycast, addr 0x9f36150, size 0x40, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hit) ;

/// @brief Method Raycast, addr 0x9f360dc, size 0x40, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::by_ref<::UnityEngine::RaycastHit>  hit, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  anchor) ;

/// @brief Method Raycast, addr 0x9f3611c, size 0x34, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::UnityEngine::RaycastHit>  hit) ;

/// @brief Method Raycast, addr 0x9f35e80, size 0x25c, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::by_ref<::UnityEngine::RaycastHit>  hit, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  outAnchor) ;

/// @brief Method RaycastAll, addr 0x9f35b08, size 0x378, virtual false, abstract: false, final false
inline bool RaycastAll(::UnityEngine::Ray  ray, float_t  maxDist, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  raycastHits, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  anchorList) ;

/// [Obsolete("Use UnityEvent AnchorCreatedEvent directly instead")]
/// @brief Method RegisterAnchorCreatedCallback, addr 0x9f331dc, size 0x58, virtual false, abstract: false, final false
inline void RegisterAnchorCreatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback) ;

/// [Obsolete("Use UnityEvent AnchorRemovedEvent directly instead")]
/// @brief Method RegisterAnchorRemovedCallback, addr 0x9f3328c, size 0x58, virtual false, abstract: false, final false
inline void RegisterAnchorRemovedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback) ;

/// [Obsolete("Use UnityEvent AnchorUpdatedEvent directly instead")]
/// @brief Method RegisterAnchorUpdatedCallback, addr 0x9f33234, size 0x58, virtual false, abstract: false, final false
inline void RegisterAnchorUpdatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback) ;

/// @brief Method RemoveAndDestroyAnchor, addr 0x9f34dfc, size 0x144, virtual false, abstract: false, final false
inline void RemoveAndDestroyAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUKRoom::<ShareRoomAsync>d__56))]
/// @brief Method ShareRoomAsync, addr 0x9f333ec, size 0xf8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareRoomAsync(::System::Guid  groupUuid) ;

/// @brief Method SortWallsByWidth, addr 0x9f358f4, size 0x214, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* SortWallsByWidth(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  walls) ;

/// @brief Method TestVerticalBounds, addr 0x9f36cbc, size 0x20, virtual false, abstract: false, final false
inline bool TestVerticalBounds(::UnityEngine::Vector3  queryPosition, ::UnityEngine::Bounds  roomBounds) ;

/// [Obsolete("Use ChildAnchors property instead")]
/// @brief Method TryGetAnchorChildren, addr 0x9f37b30, size 0x90, virtual false, abstract: false, final false
inline bool TryGetAnchorChildren(::Meta::XR::MRUtilityKit::MRUKAnchor*  queryAnchor, ::by_ref<::ArrayW<::Meta::XR::MRUtilityKit::MRUKAnchor*>>  childAnchors) ;

/// [Obsolete("Use ParentAnchor property instead")]
/// @brief Method TryGetAnchorParent, addr 0x9f37ab4, size 0x7c, virtual false, abstract: false, final false
inline bool TryGetAnchorParent(::Meta::XR::MRUtilityKit::MRUKAnchor*  queryAnchor, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  parentAnchor) ;

/// @brief Method TryGetClosestSeatPose, addr 0x9f372c0, size 0x418, virtual false, abstract: false, final false
inline bool TryGetClosestSeatPose(::UnityEngine::Ray  ray, ::by_ref<::UnityEngine::Pose>  seatPose, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  couch) ;

/// @brief Method TryGetClosestSurfacePosition, addr 0x9f37d78, size 0x2c, virtual false, abstract: false, final false
inline float_t TryGetClosestSurfacePosition(::UnityEngine::Vector3  worldPosition, ::by_ref<::UnityEngine::Vector3>  surfacePosition, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  closestAnchor, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter) ;

/// @brief Method TryGetClosestSurfacePosition, addr 0x9f37da4, size 0x2e0, virtual false, abstract: false, final false
inline float_t TryGetClosestSurfacePosition(::UnityEngine::Vector3  worldPosition, ::by_ref<::UnityEngine::Vector3>  surfacePosition, ::by_ref<::Meta::XR::MRUtilityKit::MRUKAnchor*>  closestAnchor, ::by_ref<::UnityEngine::Vector3>  normal, ::Meta::XR::MRUtilityKit::LabelFilter  labelFilter) ;

/// [Obsolete("Use UnityEvent AnchorCreatedEvent directly instead")]
/// @brief Method UnRegisterAnchorCreatedCallback, addr 0x9f332e4, size 0x58, virtual false, abstract: false, final false
inline void UnRegisterAnchorCreatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback) ;

/// [Obsolete("Use UnityEvent AnchorRemovedEvent directly instead")]
/// @brief Method UnRegisterAnchorRemovedCallback, addr 0x9f33394, size 0x58, virtual false, abstract: false, final false
inline void UnRegisterAnchorRemovedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback) ;

/// [Obsolete("Use UnityEvent AnchorUpdatedEvent directly instead")]
/// @brief Method UnRegisterAnchorUpdatedCallback, addr 0x9f3333c, size 0x58, virtual false, abstract: false, final false
inline void UnRegisterAnchorUpdatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  callback) ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& __cordl_internal_get__AnchorCreatedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& __cordl_internal_get__AnchorCreatedEvent_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& __cordl_internal_get__AnchorRemovedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& __cordl_internal_get__AnchorRemovedEvent_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& __cordl_internal_get__AnchorUpdatedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& __cordl_internal_get__AnchorUpdatedEvent_k__BackingField() ;

constexpr ::GlobalNamespace::OVRAnchor const& __cordl_internal_get__Anchor_k__BackingField() const;

constexpr ::GlobalNamespace::OVRAnchor& __cordl_internal_get__Anchor_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& __cordl_internal_get__Anchors_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& __cordl_internal_get__Anchors_k__BackingField() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& __cordl_internal_get__CeilingAnchor_k__BackingField() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& __cordl_internal_get__CeilingAnchor_k__BackingField() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& __cordl_internal_get__FloorAnchor_k__BackingField() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& __cordl_internal_get__FloorAnchor_k__BackingField() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& __cordl_internal_get__GlobalMeshAnchor_k__BackingField() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& __cordl_internal_get__GlobalMeshAnchor_k__BackingField() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__InitialPose_k__BackingField() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__InitialPose_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>* const& __cordl_internal_get__SeatPoses_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>*& __cordl_internal_get__SeatPoses_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* const& __cordl_internal_get__WallAnchors_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*& __cordl_internal_get__WallAnchors_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get__corners() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get__corners() ;

constexpr ::System::Nullable_1<::UnityEngine::Pose> const& __cordl_internal_get__prevRoomPose() const;

constexpr ::System::Nullable_1<::UnityEngine::Pose>& __cordl_internal_get__prevRoomPose() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__roomBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__roomBounds() ;

constexpr void __cordl_internal_set__AnchorCreatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

constexpr void __cordl_internal_set__AnchorRemovedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

constexpr void __cordl_internal_set__AnchorUpdatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

constexpr void __cordl_internal_set__Anchor_k__BackingField(::GlobalNamespace::OVRAnchor  value) ;

constexpr void __cordl_internal_set__Anchors_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

constexpr void __cordl_internal_set__CeilingAnchor_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value) ;

constexpr void __cordl_internal_set__FloorAnchor_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value) ;

constexpr void __cordl_internal_set__GlobalMeshAnchor_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value) ;

constexpr void __cordl_internal_set__InitialPose_k__BackingField(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__SeatPoses_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>*  value) ;

constexpr void __cordl_internal_set__WallAnchors_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

constexpr void __cordl_internal_set__corners(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set__prevRoomPose(::System::Nullable_1<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set__roomBounds(::UnityEngine::Bounds  value) ;

/// @brief Method .ctor, addr 0x9f399c4, size 0x278, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Anchor, addr 0x9f32fa0, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRAnchor get_Anchor() ;

/// [CompilerGenerated]
/// @brief Method get_AnchorCreatedEvent, addr 0x9f331ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* get_AnchorCreatedEvent() ;

/// [CompilerGenerated]
/// @brief Method get_AnchorRemovedEvent, addr 0x9f331cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* get_AnchorRemovedEvent() ;

/// [CompilerGenerated]
/// @brief Method get_AnchorUpdatedEvent, addr 0x9f331bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* get_AnchorUpdatedEvent() ;

/// [CompilerGenerated]
/// @brief Method get_Anchors, addr 0x9f33164, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* get_Anchors() ;

/// [CompilerGenerated]
/// @brief Method get_CeilingAnchor, addr 0x9f33184, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> get_CeilingAnchor() ;

/// @brief Method get_DeltaPose, addr 0x9f32ff8, size 0x16c, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_DeltaPose() ;

/// [CompilerGenerated]
/// @brief Method get_FloorAnchor, addr 0x9f33174, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> get_FloorAnchor() ;

/// [CompilerGenerated]
/// @brief Method get_GlobalMeshAnchor, addr 0x9f33194, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> get_GlobalMeshAnchor() ;

/// [CompilerGenerated]
/// @brief Method get_InitialPose, addr 0x9f32fc8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_InitialPose() ;

/// @brief Method get_IsLocal, addr 0x9f2eb48, size 0x5c, virtual false, abstract: false, final false
inline bool get_IsLocal() ;

/// [CompilerGenerated]
/// @brief Method get_SeatPoses, addr 0x9f331a4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>* get_SeatPoses() ;

/// [CompilerGenerated]
/// @brief Method get_WallAnchors, addr 0x9f3316c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* get_WallAnchors() ;

/// [CompilerGenerated]
/// @brief Method set_Anchor, addr 0x9f32fb4, size 0x14, virtual false, abstract: false, final false
inline void set_Anchor(::GlobalNamespace::OVRAnchor  value) ;

/// [CompilerGenerated]
/// @brief Method set_AnchorCreatedEvent, addr 0x9f331b4, size 0x8, virtual false, abstract: false, final false
inline void set_AnchorCreatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AnchorRemovedEvent, addr 0x9f331d4, size 0x8, virtual false, abstract: false, final false
inline void set_AnchorRemovedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AnchorUpdatedEvent, addr 0x9f331c4, size 0x8, virtual false, abstract: false, final false
inline void set_AnchorUpdatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CeilingAnchor, addr 0x9f3318c, size 0x8, virtual false, abstract: false, final false
inline void set_CeilingAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_FloorAnchor, addr 0x9f3317c, size 0x8, virtual false, abstract: false, final false
inline void set_FloorAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_GlobalMeshAnchor, addr 0x9f3319c, size 0x8, virtual false, abstract: false, final false
inline void set_GlobalMeshAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_InitialPose, addr 0x9f32fdc, size 0x1c, virtual false, abstract: false, final false
inline void set_InitialPose(::UnityEngine::Pose  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUKRoom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUKRoom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUKRoom(MRUKRoom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUKRoom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUKRoom(MRUKRoom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25892};

/// [CompilerGenerated]
/// @brief Field <Anchor>k__BackingField, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::OVRAnchor  ____Anchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InitialPose>k__BackingField, offset: 0x38, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____InitialPose_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Anchors>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  ____Anchors_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WallAnchors>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  ____WallAnchors_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FloorAnchor>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ____FloorAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CeilingAnchor>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ____CeilingAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GlobalMeshAnchor>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  ____GlobalMeshAnchor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SeatPoses>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKRoom_CouchSeat>*  ____SeatPoses_k__BackingField;

/// @brief Field _roomBounds, offset: 0x88, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____roomBounds;

/// @brief Field _corners, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ____corners;

/// @brief Field _prevRoomPose, offset: 0xa8, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Pose>  ____prevRoomPose;

/// [CompilerGenerated]
/// @brief Field <AnchorCreatedEvent>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  ____AnchorCreatedEvent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AnchorUpdatedEvent>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  ____AnchorUpdatedEvent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AnchorRemovedEvent>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  ____AnchorRemovedEvent_k__BackingField;

/// @brief Size padding 0xe0 - 0xd0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____Anchor_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____InitialPose_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____Anchors_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____WallAnchors_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____FloorAnchor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____CeilingAnchor_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____GlobalMeshAnchor_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____SeatPoses_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____roomBounds) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____corners) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____prevRoomPose) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____AnchorCreatedEvent_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____AnchorUpdatedEvent_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUKRoom, ____AnchorRemovedEvent_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUKRoom) == 0xe0, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
