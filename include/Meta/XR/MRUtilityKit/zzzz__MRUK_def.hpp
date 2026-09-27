#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SceneDataSource_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK)
namespace GlobalNamespace {
struct MRUKAnchor_SceneLabels;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukLabel;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukLogLevel;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukPlane;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukResult;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukRoomAnchor;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukSceneAnchor;
}
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukVolume;
}
namespace GlobalNamespace {
struct MRUK_AnchorRepresentation;
}
namespace GlobalNamespace {
struct MRUK_LoadDeviceResult;
}
namespace GlobalNamespace {
struct MRUK_PositioningMethod;
}
namespace GlobalNamespace {
struct MRUK_RoomFilter;
}
namespace GlobalNamespace {
struct MRUK_SceneDataSource;
}
namespace GlobalNamespace {
struct MRUK_SceneTrackingSettings;
}
namespace GlobalNamespace {
struct MRUK_SharedRoomsData;
}
namespace GlobalNamespace {
struct MRUK_SurfaceType;
}
namespace GlobalNamespace {
struct MRUK_TrackableState;
}
namespace GlobalNamespace {
struct MRUK__ConfigureTrackerAndLogResult_d__135;
}
namespace GlobalNamespace {
struct MRUK__HasSceneModel_d__48;
}
namespace GlobalNamespace {
struct MRUK__LoadSceneFromDeviceInternal_d__78;
}
namespace GlobalNamespace {
struct MRUK__LoadSceneFromDeviceSharedLib_d__93;
}
namespace GlobalNamespace {
struct MRUK__LoadSceneFromDevice_d__77;
}
namespace GlobalNamespace {
struct MRUK__LoadSceneFromJsonSharedLib_d__94;
}
namespace GlobalNamespace {
struct MRUK__LoadSceneFromJsonString_d__83;
}
namespace GlobalNamespace {
struct MRUK__LoadSceneFromPrefabSharedLib_d__96;
}
namespace GlobalNamespace {
struct MRUK__LoadSceneFromPrefab_d__80;
}
namespace GlobalNamespace {
struct MRUK__LoadSceneFromSharedRooms_d__73;
}
namespace GlobalNamespace {
struct MRUK__LoadScene_d__69;
}
namespace GlobalNamespace {
struct MRUK__LocalizeTrackable_d__138;
}
namespace GlobalNamespace {
struct MRUK__ShareRoomsAsync_d__76;
}
namespace GlobalNamespace {
struct MRUK__WaitForDiscoveryFinished_d__121;
}
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
struct OVRAnchor_TrackerConfiguration;
}
namespace GlobalNamespace {
class OVRAnchor_Tracker;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
struct OVRLocatable;
}
namespace GlobalNamespace {
template<typename TStatus>
struct OVRResult_1;
}
namespace GlobalNamespace {
struct OVRSemanticLabels_Classification;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace GlobalNamespace {
struct SerializationHelpers_CoordinateSystem;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace Meta::XR::MRUtilityKit {
class MRUKTrackable;
}
namespace Meta::XR::MRUtilityKit {
class MRUK_MRUKSettings;
}
namespace Meta::XR::MRUtilityKit {
class MRUK__TrackerCoroutine_d__137;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class MRUK;
}
namespace Meta::XR::MRUtilityKit {
class MRUK_MRUKSettings;
}
namespace Meta::XR::MRUtilityKit {
class MRUK__TrackerCoroutine_d__137;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUK*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*);
MARK_REF_T(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUK*, "Meta.XR.MRUtilityKit", "MRUK");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*, "Meta.XR.MRUtilityKit", "MRUK/MRUKSettings");
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137*, "Meta.XR.MRUtilityKit", "MRUK/<TrackerCoroutine>d__137");
// [HelpURL("https://developers.meta.com/horizon/reference/mruk/latest/class_meta_x_r_m_r_utility_kit_m_r_u_k")]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies Meta.XR.MRUtilityKit.MRUK::LoadDeviceResult, OVRTask`1<TResult>, System.Nullable`1<T>, System.TimeSpan, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour, UnityEngine.Pose
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUK
class CORDL_TYPE MRUK : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AnchorRepresentation = ::GlobalNamespace::MRUK_AnchorRepresentation;

using LoadDeviceResult = ::GlobalNamespace::MRUK_LoadDeviceResult;

using PositioningMethod = ::GlobalNamespace::MRUK_PositioningMethod;

using RoomFilter = ::GlobalNamespace::MRUK_RoomFilter;

using SceneDataSource = ::GlobalNamespace::MRUK_SceneDataSource;

using SceneTrackingSettings = ::GlobalNamespace::MRUK_SceneTrackingSettings;

using SharedRoomsData = ::GlobalNamespace::MRUK_SharedRoomsData;

using SurfaceType = ::GlobalNamespace::MRUK_SurfaceType;

using TrackableState = ::GlobalNamespace::MRUK_TrackableState;

using _ConfigureTrackerAndLogResult_d__135 = ::GlobalNamespace::MRUK__ConfigureTrackerAndLogResult_d__135;

using _HasSceneModel_d__48 = ::GlobalNamespace::MRUK__HasSceneModel_d__48;

using _LoadSceneFromDeviceInternal_d__78 = ::GlobalNamespace::MRUK__LoadSceneFromDeviceInternal_d__78;

using _LoadSceneFromDeviceSharedLib_d__93 = ::GlobalNamespace::MRUK__LoadSceneFromDeviceSharedLib_d__93;

using _LoadSceneFromDevice_d__77 = ::GlobalNamespace::MRUK__LoadSceneFromDevice_d__77;

using _LoadSceneFromJsonSharedLib_d__94 = ::GlobalNamespace::MRUK__LoadSceneFromJsonSharedLib_d__94;

using _LoadSceneFromJsonString_d__83 = ::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83;

using _LoadSceneFromPrefabSharedLib_d__96 = ::GlobalNamespace::MRUK__LoadSceneFromPrefabSharedLib_d__96;

using _LoadSceneFromPrefab_d__80 = ::GlobalNamespace::MRUK__LoadSceneFromPrefab_d__80;

using _LoadSceneFromSharedRooms_d__73 = ::GlobalNamespace::MRUK__LoadSceneFromSharedRooms_d__73;

using _LoadScene_d__69 = ::GlobalNamespace::MRUK__LoadScene_d__69;

using _LocalizeTrackable_d__138 = ::GlobalNamespace::MRUK__LocalizeTrackable_d__138;

using _ShareRoomsAsync_d__76 = ::GlobalNamespace::MRUK__ShareRoomsAsync_d__76;

using _WaitForDiscoveryFinished_d__121 = ::GlobalNamespace::MRUK__WaitForDiscoveryFinished_d__121;

using MRUKSettings = ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings;

using _TrackerCoroutine_d__137 = ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137;

/// @brief Field EnableWorldLock, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableWorldLock, put=__cordl_internal_set_EnableWorldLock)) bool  EnableWorldLock;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_IsWorldLockActive)) bool  IsWorldLockActive;

 __declspec(property(get=get_RoomCreatedEvent, put=set_RoomCreatedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  RoomCreatedEvent;

 __declspec(property(get=get_RoomRemovedEvent, put=set_RoomRemovedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  RoomRemovedEvent;

 __declspec(property(get=get_RoomUpdatedEvent, put=set_RoomUpdatedEvent)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  RoomUpdatedEvent;

 __declspec(property(get=get_Rooms)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  Rooms;

 __declspec(property(get=get_SceneLoadedEvent, put=set_SceneLoadedEvent)) ::UnityEngine::Events::UnityEvent*  SceneLoadedEvent;

/// @brief Field SceneSettings, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneSettings, put=__cordl_internal_set_SceneSettings)) ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*  SceneSettings;

/// @brief Field TimeBetweenFetchTrackables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TimeBetweenFetchTrackables, put=setStaticF_TimeBetweenFetchTrackables)) ::System::TimeSpan  TimeBetweenFetchTrackables;

 __declspec(property(get=get_TrackerConfiguration)) ::GlobalNamespace::OVRAnchor_TrackerConfiguration  TrackerConfiguration;

/// @brief Field TrackingSpaceOffset, offset 0x4c, size 0x40 
 __declspec(property(get=__cordl_internal_get_TrackingSpaceOffset, put=__cordl_internal_set_TrackingSpaceOffset)) ::UnityEngine::Matrix4x4  TrackingSpaceOffset;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  _Instance_k__BackingField;

/// @brief Field <IsInitialized>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInitialized_k__BackingField, put=__cordl_internal_set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <RoomCreatedEvent>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__RoomCreatedEvent_k__BackingField, put=__cordl_internal_set__RoomCreatedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  _RoomCreatedEvent_k__BackingField;

/// @brief Field <RoomRemovedEvent>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__RoomRemovedEvent_k__BackingField, put=__cordl_internal_set__RoomRemovedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  _RoomRemovedEvent_k__BackingField;

/// @brief Field <RoomUpdatedEvent>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__RoomUpdatedEvent_k__BackingField, put=__cordl_internal_set__RoomUpdatedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  _RoomUpdatedEvent_k__BackingField;

/// @brief Field <Rooms>k__BackingField, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Rooms_k__BackingField, put=__cordl_internal_set__Rooms_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  _Rooms_k__BackingField;

/// @brief Field <SceneLoadedEvent>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__SceneLoadedEvent_k__BackingField, put=__cordl_internal_set__SceneLoadedEvent_k__BackingField)) ::UnityEngine::Events::UnityEvent*  _SceneLoadedEvent_k__BackingField;

/// @brief Field <_cameraRig>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get___cameraRig_k__BackingField, put=__cordl_internal_set___cameraRig_k__BackingField)) ::UnityW<::GlobalNamespace::OVRCameraRig>  __cameraRig_k__BackingField;

/// @brief Field _cachedCurrentRoom, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedCurrentRoom, put=__cordl_internal_set__cachedCurrentRoom)) ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  _cachedCurrentRoom;

/// @brief Field _cachedCurrentRoomFrame, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedCurrentRoomFrame, put=__cordl_internal_set__cachedCurrentRoomFrame)) int32_t  _cachedCurrentRoomFrame;

 __declspec(property(get=get__cameraRig, put=set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  _cameraRig;

/// @brief Field _classificationsBuffer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__classificationsBuffer, put=__cordl_internal_set__classificationsBuffer)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSemanticLabels_Classification>*  _classificationsBuffer;

/// @brief Field _currentAppSpace, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentAppSpace, put=__cordl_internal_set__currentAppSpace)) uint64_t  _currentAppSpace;

/// @brief Field _immersiveSceneDebuggerPrefab, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__immersiveSceneDebuggerPrefab, put=__cordl_internal_set__immersiveSceneDebuggerPrefab)) ::UnityW<::UnityEngine::GameObject>  _immersiveSceneDebuggerPrefab;

/// @brief Field _loadSceneCalled, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get__loadSceneCalled, put=__cordl_internal_set__loadSceneCalled)) bool  _loadSceneCalled;

/// @brief Field _loadSceneTask, offset 0xe0, size 0x10 
 __declspec(property(get=__cordl_internal_get__loadSceneTask, put=__cordl_internal_set__loadSceneTask)) ::System::Nullable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::MRUK_LoadDeviceResult>>  _loadSceneTask;

/// @brief Field _openXrInitialised, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__openXrInitialised, put=__cordl_internal_set__openXrInitialised)) bool  _openXrInitialised;

/// @brief Field _prevTrackingSpacePose, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get__prevTrackingSpacePose, put=__cordl_internal_set__prevTrackingSpacePose)) ::System::Nullable_1<::UnityEngine::Pose>  _prevTrackingSpacePose;

/// @brief Field _trackableStates, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackableStates, put=__cordl_internal_set__trackableStates)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::MRUK_TrackableState>*  _trackableStates;

/// @brief Field _trackableTransforms, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackableTransforms, put=__cordl_internal_set__trackableTransforms)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>*  _trackableTransforms;

/// @brief Field _tracker, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__tracker, put=__cordl_internal_set__tracker)) ::GlobalNamespace::OVRAnchor_Tracker*  _tracker;

/// @brief Field _trackerCoroutine, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackerCoroutine, put=__cordl_internal_set__trackerCoroutine)) ::UnityEngine::Coroutine*  _trackerCoroutine;

/// @brief Field _worldLockActive, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__worldLockActive, put=__cordl_internal_set__worldLockActive)) bool  _worldLockActive;

/// @brief Field _worldLockWasEnabled, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__worldLockWasEnabled, put=__cordl_internal_set__worldLockWasEnabled)) bool  _worldLockWasEnabled;

/// @brief Method Awake, addr 0x9f21550, size 0x4b0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearScene, addr 0x9f23970, size 0x4, virtual false, abstract: false, final false
inline void ClearScene() ;

/// @brief Method ClearSceneSharedLib, addr 0x9f23974, size 0x5c, virtual false, abstract: false, final false
inline void ClearSceneSharedLib() ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<ConfigureTrackerAndLogResult>d__135))]
/// @brief Method ConfigureTrackerAndLogResult, addr 0x9f26260, size 0xb8, virtual false, abstract: false, final false
inline void ConfigureTrackerAndLogResult(::GlobalNamespace::OVRAnchor_TrackerConfiguration  config) ;

/// @brief Method ConvertLabel, addr 0x9f25d68, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MRUKAnchor_SceneLabels ConvertLabel(::GlobalNamespace::MRUKNativeFuncs_MrukLabel  label) ;

/// @brief Method ConvertPlane, addr 0x9f25598, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MRUKNativeFuncs_MrukPlane ConvertPlane(::GlobalNamespace::MRUKNativeFuncs_MrukPlane  plane) ;

/// @brief Method ConvertResult, addr 0x9f25d6c, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MRUK_LoadDeviceResult ConvertResult(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result) ;

/// @brief Method ConvertVolume, addr 0x9f2556c, size 0x2c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MRUKNativeFuncs_MrukVolume ConvertVolume(::GlobalNamespace::MRUKNativeFuncs_MrukVolume  volume) ;

/// @brief Method CreateMrukSceneAnchor, addr 0x9f25184, size 0x3a8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor CreateMrukSceneAnchor(::StringW  semanticLabel, ::System::Collections::Generic::List_1<::System::Runtime::InteropServices::GCHandle>*  handles, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  objScale, ::GlobalNamespace::MRUK_AnchorRepresentation  representation) ;

/// @brief Method DestroyAnchorStore, addr 0x9f222bc, size 0xfc, virtual false, abstract: false, final false
inline void DestroyAnchorStore() ;

/// @brief Method FindAllObjects, addr 0x9f23dc0, size 0x458, virtual false, abstract: false, final false
inline void FindAllObjects(::UnityEngine::GameObject*  roomPrefab, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>  walls, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>  volumes, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>  planes) ;

/// @brief Method FindObjects, addr 0x9f24218, size 0x354, virtual false, abstract: false, final false
inline void FindObjects(::StringW  objName, ::UnityEngine::Transform*  rootTransform, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>  objList) ;

/// @brief Method FindRoomByUuid, addr 0x9f255a4, size 0x1a0, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> FindRoomByUuid(::System::Guid  uuid) ;

/// @brief Method FlipX, addr 0x9f2552c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 FlipX(::UnityEngine::Vector2  vector) ;

/// @brief Method FlipX, addr 0x9f25534, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FlipX(::UnityEngine::Vector3  vector) ;

/// @brief Method FlipZ, addr 0x9f22eb0, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose FlipZ(::UnityEngine::Pose  pose) ;

/// @brief Method FlipZ, addr 0x9f25544, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FlipZ(::UnityEngine::Quaternion  quaternion) ;

/// @brief Method FlipZ, addr 0x9f2553c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FlipZ(::UnityEngine::Vector3  vector) ;

/// @brief Method FlipZRotateY180, addr 0x9f225a4, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose FlipZRotateY180(::UnityEngine::Pose  pose) ;

/// @brief Method FlipZRotateY180, addr 0x9f25550, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion FlipZRotateY180(::UnityEngine::Quaternion  rotation) ;

/// @brief Method GetAdjacentMrukSceneWall, addr 0x9f24dd0, size 0x3b4, virtual false, abstract: false, final false
inline ::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor GetAdjacentMrukSceneWall(::by_ref<int32_t>  thisID, ::System::Collections::Generic::List_1<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>*  randomWalls) ;

/// [Obsolete("Use GetCurrentRoom().Anchors instead")]
/// @brief Method GetAnchors, addr 0x9f2137c, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>* GetAnchors() ;

/// @brief Method GetCurrentRoom, addr 0x9f17f74, size 0x2f4, virtual false, abstract: false, final false
inline ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> GetCurrentRoom() ;

/// @brief Method GetRoomIndex, addr 0x9f23874, size 0x4c, virtual false, abstract: false, final false
inline int32_t GetRoomIndex(bool  fromPrefabs) ;

/// [Obsolete("Use Rooms property instead")]
/// @brief Method GetRooms, addr 0x9f21374, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* GetRooms() ;

/// @brief Method GetTrackables, addr 0x9f25eb0, size 0x2c8, virtual false, abstract: false, final false
inline void GetTrackables(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  trackables) ;

/// @brief Method GetTrackingSpace, addr 0x9f223bc, size 0x1e8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetTrackingSpace() ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::TrackingSpacePoseGetter))]
/// @brief Method GetTrackingSpacePose, addr 0x9f1f8c0, size 0x250, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetTrackingSpacePose() ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<HasSceneModel>d__48))]
/// @brief Method HasSceneModel, addr 0x9f21398, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* HasSceneModel() ;

/// @brief Method InitializeAnchorStore, addr 0x9f21a00, size 0x654, virtual false, abstract: false, final false
inline void InitializeAnchorStore() ;

/// @brief Method InitializeScene, addr 0x9f211a0, size 0xcc, virtual false, abstract: false, final false
inline void InitializeScene() ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LoadScene>d__69))]
/// @brief Method LoadScene, addr 0x9f22054, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadScene(::GlobalNamespace::MRUK_SceneDataSource  dataSource) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LoadSceneFromDevice>d__77))]
/// @brief Method LoadSceneFromDevice, addr 0x9f1f314, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* LoadSceneFromDevice(bool  requestSceneCaptureIfNoDataFound, bool  removeMissingRooms) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LoadSceneFromDeviceInternal>d__78))]
/// @brief Method LoadSceneFromDeviceInternal, addr 0x9f23c6c, size 0x154, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* LoadSceneFromDeviceInternal(bool  requestSceneCaptureIfNoDataFound, bool  removeMissingRooms, ::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>  sharedRoomsData) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LoadSceneFromDeviceSharedLib>d__93))]
/// @brief Method LoadSceneFromDeviceSharedLib, addr 0x9f24a24, size 0x15c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* LoadSceneFromDeviceSharedLib(bool  requestSceneCaptureIfNoDataFound, bool  removeMissingRooms, ::System::Nullable_1<::GlobalNamespace::MRUK_SharedRoomsData>  sharedRoomsData) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LoadSceneFromJsonSharedLib>d__94))]
/// @brief Method LoadSceneFromJsonSharedLib, addr 0x9f24b80, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* LoadSceneFromJsonSharedLib(::StringW  jsonString, bool  removeMissingRooms) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LoadSceneFromJsonString>d__83))]
/// @brief Method LoadSceneFromJsonString, addr 0x9f248a4, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* LoadSceneFromJsonString(::StringW  jsonString, bool  removeMissingRooms) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LoadSceneFromPrefab>d__80))]
/// @brief Method LoadSceneFromPrefab, addr 0x9f2456c, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* LoadSceneFromPrefab(::UnityEngine::GameObject*  scenePrefab, bool  clearSceneFirst) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LoadSceneFromPrefabSharedLib>d__96))]
/// @brief Method LoadSceneFromPrefabSharedLib, addr 0x9f24cb0, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* LoadSceneFromPrefabSharedLib(::UnityEngine::GameObject*  scenePrefab) ;

/// @brief Method LoadSceneFromSharedRooms, addr 0x9f23b30, size 0x40, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* LoadSceneFromSharedRooms(::System::Guid  groupUuid, /* [TupleElementNames(new[] { "alignmentRoomUuid", "floorWorldPoseOnHost" })] */ ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>  alignmentData, bool  removeMissingRooms) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LoadSceneFromSharedRooms>d__73))]
/// @brief Method LoadSceneFromSharedRooms, addr 0x9f239d0, size 0x160, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* LoadSceneFromSharedRooms(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  roomUuids, ::System::Guid  groupUuid, /* [TupleElementNames(new[] { "alignmentRoomUuid", "floorWorldPoseOnHost" })] */ ::System::Nullable_1<::System::ValueTuple_2<::System::Guid,::UnityEngine::Pose>>  alignmentData, bool  removeMissingRooms) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<LocalizeTrackable>d__138))]
/// @brief Method LocalizeTrackable, addr 0x9f26318, size 0xd0, virtual false, abstract: false, final false
inline void LocalizeTrackable(::GlobalNamespace::OVRAnchor  anchor, ::GlobalNamespace::OVRLocatable  locatable) ;

static inline ::Meta::XR::MRUtilityKit::MRUK* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f22140, size 0x17c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9f2621c, size 0x44, virtual false, abstract: false, final false
inline void OnDisable() ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukOnDiscoveryFinished))]
/// @brief Method OnDiscoveryFinished, addr 0x9f20f30, size 0x1ec, virtual false, abstract: false, final false
static inline void OnDiscoveryFinished(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext) ;

/// @brief Method OnEnable, addr 0x9f26178, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukOnEnvironmentRaycasterCreated))]
/// @brief Method OnEnvironmentRaycasterCreated, addr 0x9f2111c, size 0x4, virtual false, abstract: false, final false
static inline void OnEnvironmentRaycasterCreated(::GlobalNamespace::MRUKNativeFuncs_MrukResult  result, ::System::IntPtr  userContext) ;

/// [MonoPInvokeCallback(typeof(OVRPlugin::OpenXREventDelegateType))]
/// @brief Method OnOpenXrEvent, addr 0x9f1fc78, size 0x104, virtual false, abstract: false, final false
static inline void OnOpenXrEvent(::System::IntPtr  data, ::System::IntPtr  context) ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukOnPreRoomAnchorAdded))]
/// @brief Method OnPreRoomAnchorAdded, addr 0x9f1fd7c, size 0x41c, virtual false, abstract: false, final false
static inline void OnPreRoomAnchorAdded(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext) ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukOnRoomAnchorAdded))]
/// @brief Method OnRoomAnchorAdded, addr 0x9f20198, size 0x1d4, virtual false, abstract: false, final false
static inline void OnRoomAnchorAdded(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext) ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukOnRoomAnchorRemoved))]
/// @brief Method OnRoomAnchorRemoved, addr 0x9f205b4, size 0x284, virtual false, abstract: false, final false
static inline void OnRoomAnchorRemoved(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::System::IntPtr  userContext) ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukOnRoomAnchorUpdated))]
/// @brief Method OnRoomAnchorUpdated, addr 0x9f2036c, size 0x248, virtual false, abstract: false, final false
static inline void OnRoomAnchorUpdated(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukRoomAnchor>  roomAnchor, ::by_ref<::System::Guid>  oldRoomAnchorUuid, bool  significantChange, ::System::IntPtr  userContext) ;

/// @brief Method OnRoomDestroyed, addr 0x9f238c0, size 0xb0, virtual false, abstract: false, final false
inline void OnRoomDestroyed(::Meta::XR::MRUtilityKit::MRUKRoom*  room) ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukOnSceneAnchorAdded))]
/// @brief Method OnSceneAnchorAdded, addr 0x9f20838, size 0x38c, virtual false, abstract: false, final false
static inline void OnSceneAnchorAdded(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext) ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukOnSceneAnchorRemoved))]
/// @brief Method OnSceneAnchorRemoved, addr 0x9f20d80, size 0x1b0, virtual false, abstract: false, final false
static inline void OnSceneAnchorRemoved(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, ::System::IntPtr  userContext) ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::MrukOnSceneAnchorUpdated))]
/// @brief Method OnSceneAnchorUpdated, addr 0x9f20bc4, size 0x1bc, virtual false, abstract: false, final false
static inline void OnSceneAnchorUpdated(::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor, bool  significantChange, ::System::IntPtr  userContext) ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::LogPrinter))]
/// @brief Method OnSharedLibLog, addr 0x9f1f6bc, size 0x204, virtual false, abstract: false, final false
static inline void OnSharedLibLog(::GlobalNamespace::MRUKNativeFuncs_MrukLogLevel  logLevel, char16_t*  message, uint32_t  length) ;

/// [Obsolete("Use UnityEvent RoomCreatedEvent directly instead")]
/// @brief Method RegisterRoomCreatedCallback, addr 0x9f2126c, size 0x58, virtual false, abstract: false, final false
inline void RegisterRoomCreatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  callback) ;

/// [Obsolete("Use UnityEvent RoomRemovedEvent directly instead")]
/// @brief Method RegisterRoomRemovedCallback, addr 0x9f2131c, size 0x58, virtual false, abstract: false, final false
inline void RegisterRoomRemovedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  callback) ;

/// [Obsolete("Use UnityEvent RoomUpdatedEvent directly instead")]
/// @brief Method RegisterRoomUpdatedCallback, addr 0x9f212c4, size 0x58, virtual false, abstract: false, final false
inline void RegisterRoomUpdatedCallback(::UnityEngine::Events::UnityAction_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  callback) ;

/// @brief Method RegisterSceneLoadedCallback, addr 0x9f19ae4, size 0x54, virtual false, abstract: false, final false
inline void RegisterSceneLoadedCallback(::UnityEngine::Events::UnityAction*  callback) ;

/// @brief Method SaveSceneToJsonSharedLib, addr 0x9f246a8, size 0x1fc, virtual false, abstract: false, final false
inline ::StringW SaveSceneToJsonSharedLib(bool  includeGlobalMesh, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms) ;

/// [Obsolete("Coordinate system is now obsolete, use the overload that doesn\'t take this parameter")]
/// @brief Method SaveSceneToJsonString, addr 0x9f2469c, size 0xc, virtual false, abstract: false, final false
inline ::StringW SaveSceneToJsonString(::GlobalNamespace::SerializationHelpers_CoordinateSystem  coordinateSystem, bool  includeGlobalMesh, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms) ;

/// @brief Method SaveSceneToJsonString, addr 0x9f1bbe8, size 0x4, virtual false, abstract: false, final false
inline ::StringW SaveSceneToJsonString(bool  includeGlobalMesh, ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms) ;

/// [MonoPInvokeCallback(typeof(Meta.XR.MRUtilityKit.MRUKNativeFuncs::TrackingSpacePoseSetter))]
/// @brief Method SetTrackingSpacePose, addr 0x9f1fb10, size 0x168, virtual false, abstract: false, final false
static inline void SetTrackingSpacePose(::UnityEngine::Pose  openXrPose) ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<ShareRoomsAsync>d__76))]
/// @brief Method ShareRoomsAsync, addr 0x9f23b70, size 0xfc, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareRoomsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  rooms, ::System::Guid  groupUuid) ;

/// @brief Method Start, addr 0x9f223b8, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<TrackerCoroutine>d__137))]
/// @brief Method TrackerCoroutine, addr 0x9f261a8, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TrackerCoroutine() ;

/// @brief Method Update, addr 0x9f22648, size 0x6ec, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAnchorProperties, addr 0x9f25744, size 0x624, virtual false, abstract: false, final false
static inline void UpdateAnchorProperties(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::by_ref<::GlobalNamespace::MRUKNativeFuncs_MrukSceneAnchor>  sceneAnchor) ;

/// @brief Method UpdateAnchorStore, addr 0x9f22d34, size 0x17c, virtual false, abstract: false, final false
inline void UpdateAnchorStore() ;

/// @brief Method UpdateTrackables, addr 0x9f22f54, size 0x920, virtual false, abstract: false, final false
inline void UpdateTrackables() ;

/// [AsyncStateMachine(typeof(Meta.XR.MRUtilityKit.MRUK::<WaitForDiscoveryFinished>d__121))]
/// @brief Method WaitForDiscoveryFinished, addr 0x9f25d8c, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MRUK_LoadDeviceResult>* WaitForDiscoveryFinished() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__61_0, addr 0x9f2673c, size 0xac, virtual false, abstract: false, final false
inline void _Awake_b__61_0(::StringW  permissionId) ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__61_1, addr 0x9f267e8, size 0x18, virtual false, abstract: false, final false
inline void _Awake_b__61_1(::StringW  permissionId) ;

constexpr bool const& __cordl_internal_get_EnableWorldLock() const;

constexpr bool& __cordl_internal_get_EnableWorldLock() ;

constexpr ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings* const& __cordl_internal_get_SceneSettings() const;

constexpr ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*& __cordl_internal_get_SceneSettings() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_TrackingSpaceOffset() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_TrackingSpaceOffset() ;

constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& __cordl_internal_get__RoomCreatedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& __cordl_internal_get__RoomCreatedEvent_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& __cordl_internal_get__RoomRemovedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& __cordl_internal_get__RoomRemovedEvent_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& __cordl_internal_get__RoomUpdatedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& __cordl_internal_get__RoomUpdatedEvent_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& __cordl_internal_get__Rooms_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& __cordl_internal_get__Rooms_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__SceneLoadedEvent_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__SceneLoadedEvent_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get___cameraRig_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get___cameraRig_k__BackingField() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom> const& __cordl_internal_get__cachedCurrentRoom() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>& __cordl_internal_get__cachedCurrentRoom() ;

constexpr int32_t const& __cordl_internal_get__cachedCurrentRoomFrame() const;

constexpr int32_t& __cordl_internal_get__cachedCurrentRoomFrame() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSemanticLabels_Classification>* const& __cordl_internal_get__classificationsBuffer() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSemanticLabels_Classification>*& __cordl_internal_get__classificationsBuffer() ;

constexpr uint64_t const& __cordl_internal_get__currentAppSpace() const;

constexpr uint64_t& __cordl_internal_get__currentAppSpace() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__immersiveSceneDebuggerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__immersiveSceneDebuggerPrefab() ;

constexpr bool const& __cordl_internal_get__loadSceneCalled() const;

constexpr bool& __cordl_internal_get__loadSceneCalled() ;

constexpr ::System::Nullable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::MRUK_LoadDeviceResult>> const& __cordl_internal_get__loadSceneTask() const;

constexpr ::System::Nullable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::MRUK_LoadDeviceResult>>& __cordl_internal_get__loadSceneTask() ;

constexpr bool const& __cordl_internal_get__openXrInitialised() const;

constexpr bool& __cordl_internal_get__openXrInitialised() ;

constexpr ::System::Nullable_1<::UnityEngine::Pose> const& __cordl_internal_get__prevTrackingSpacePose() const;

constexpr ::System::Nullable_1<::UnityEngine::Pose>& __cordl_internal_get__prevTrackingSpacePose() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::MRUK_TrackableState>* const& __cordl_internal_get__trackableStates() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::MRUK_TrackableState>*& __cordl_internal_get__trackableStates() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__trackableTransforms() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__trackableTransforms() ;

constexpr ::GlobalNamespace::OVRAnchor_Tracker* const& __cordl_internal_get__tracker() const;

constexpr ::GlobalNamespace::OVRAnchor_Tracker*& __cordl_internal_get__tracker() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__trackerCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__trackerCoroutine() ;

constexpr bool const& __cordl_internal_get__worldLockActive() const;

constexpr bool& __cordl_internal_get__worldLockActive() ;

constexpr bool const& __cordl_internal_get__worldLockWasEnabled() const;

constexpr bool& __cordl_internal_get__worldLockWasEnabled() ;

constexpr void __cordl_internal_set_EnableWorldLock(bool  value) ;

constexpr void __cordl_internal_set_SceneSettings(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*  value) ;

constexpr void __cordl_internal_set_TrackingSpaceOffset(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__RoomCreatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

constexpr void __cordl_internal_set__RoomRemovedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

constexpr void __cordl_internal_set__RoomUpdatedEvent_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

constexpr void __cordl_internal_set__Rooms_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

constexpr void __cordl_internal_set__SceneLoadedEvent_k__BackingField(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set___cameraRig_k__BackingField(::UnityW<::GlobalNamespace::OVRCameraRig>  value) ;

constexpr void __cordl_internal_set__cachedCurrentRoom(::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  value) ;

constexpr void __cordl_internal_set__cachedCurrentRoomFrame(int32_t  value) ;

constexpr void __cordl_internal_set__classificationsBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSemanticLabels_Classification>*  value) ;

constexpr void __cordl_internal_set__currentAppSpace(uint64_t  value) ;

constexpr void __cordl_internal_set__immersiveSceneDebuggerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__loadSceneCalled(bool  value) ;

constexpr void __cordl_internal_set__loadSceneTask(::System::Nullable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::MRUK_LoadDeviceResult>>  value) ;

constexpr void __cordl_internal_set__openXrInitialised(bool  value) ;

constexpr void __cordl_internal_set__prevTrackingSpacePose(::System::Nullable_1<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set__trackableStates(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::MRUK_TrackableState>*  value) ;

constexpr void __cordl_internal_set__trackableTransforms(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__tracker(::GlobalNamespace::OVRAnchor_Tracker*  value) ;

constexpr void __cordl_internal_set__trackerCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__worldLockActive(bool  value) ;

constexpr void __cordl_internal_set__worldLockWasEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x9f263e8, size 0x2dc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::TimeSpan getStaticF_TimeBetweenFetchTrackables() ;

static inline ::UnityW<::Meta::XR::MRUtilityKit::MRUK> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x9f21490, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::Meta::XR::MRUtilityKit::MRUK> get_Instance() ;

/// [CompilerGenerated]
/// @brief Method get_IsInitialized, addr 0x9f21120, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_IsOpenXRAvailable, addr 0x9f249d4, size 0x50, virtual false, abstract: false, final false
static inline bool get_IsOpenXRAvailable() ;

/// @brief Method get_IsWorldLockActive, addr 0x9f21170, size 0x20, virtual false, abstract: false, final false
inline bool get_IsWorldLockActive() ;

/// [CompilerGenerated]
/// @brief Method get_RoomCreatedEvent, addr 0x9f21140, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* get_RoomCreatedEvent() ;

/// [CompilerGenerated]
/// @brief Method get_RoomRemovedEvent, addr 0x9f21160, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* get_RoomRemovedEvent() ;

/// [CompilerGenerated]
/// @brief Method get_RoomUpdatedEvent, addr 0x9f21150, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* get_RoomUpdatedEvent() ;

/// [CompilerGenerated]
/// @brief Method get_Rooms, addr 0x9f21488, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* get_Rooms() ;

/// [CompilerGenerated]
/// @brief Method get_SceneLoadedEvent, addr 0x9f21130, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_SceneLoadedEvent() ;

/// @brief Method get_TrackerConfiguration, addr 0x9f25e98, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRAnchor_TrackerConfiguration get_TrackerConfiguration() ;

/// [CompilerGenerated]
/// @brief Method get__cameraRig, addr 0x9f21190, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::OVRCameraRig> get__cameraRig() ;

static inline void setStaticF_TimeBetweenFetchTrackables(::System::TimeSpan  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::Meta::XR::MRUtilityKit::MRUK>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x9f214e8, size 0x68, virtual false, abstract: false, final false
static inline void set_Instance(::Meta::XR::MRUtilityKit::MRUK*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsInitialized, addr 0x9f21128, size 0x8, virtual false, abstract: false, final false
inline void set_IsInitialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoomCreatedEvent, addr 0x9f21148, size 0x8, virtual false, abstract: false, final false
inline void set_RoomCreatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoomRemovedEvent, addr 0x9f21168, size 0x8, virtual false, abstract: false, final false
inline void set_RoomRemovedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoomUpdatedEvent, addr 0x9f21158, size 0x8, virtual false, abstract: false, final false
inline void set_RoomUpdatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SceneLoadedEvent, addr 0x9f21138, size 0x8, virtual false, abstract: false, final false
inline void set_SceneLoadedEvent(::UnityEngine::Events::UnityEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method set__cameraRig, addr 0x9f21198, size 0x8, virtual false, abstract: false, final false
inline void set__cameraRig(::GlobalNamespace::OVRCameraRig*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUK() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUK", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUK(MRUK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUK", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUK(MRUK const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25883};

/// [CompilerGenerated]
/// @brief Field <IsInitialized>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsInitialized_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [FormerlySerializedAs("SceneLoadedEvent")]
/// @brief Field <SceneLoadedEvent>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____SceneLoadedEvent_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [FormerlySerializedAs("RoomCreatedEvent")]
/// @brief Field <RoomCreatedEvent>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  ____RoomCreatedEvent_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [FormerlySerializedAs("RoomUpdatedEvent")]
/// @brief Field <RoomUpdatedEvent>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  ____RoomUpdatedEvent_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [FormerlySerializedAs("RoomRemovedEvent")]
/// @brief Field <RoomRemovedEvent>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  ____RoomRemovedEvent_k__BackingField;

/// @brief Field EnableWorldLock, offset: 0x48, size: 0x1, def value: None
 bool  ___EnableWorldLock;

/// [HideInInspector]
/// @brief Field TrackingSpaceOffset, offset: 0x4c, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___TrackingSpaceOffset;

/// [CompilerGenerated]
/// @brief Field <_cameraRig>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRCameraRig>  _____cameraRig_k__BackingField;

/// @brief Field _worldLockActive, offset: 0x98, size: 0x1, def value: None
 bool  ____worldLockActive;

/// @brief Field _worldLockWasEnabled, offset: 0x99, size: 0x1, def value: None
 bool  ____worldLockWasEnabled;

/// @brief Field _loadSceneCalled, offset: 0x9a, size: 0x1, def value: None
 bool  ____loadSceneCalled;

/// @brief Field _prevTrackingSpacePose, offset: 0xa0, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Pose>  ____prevTrackingSpacePose;

/// @brief Field _classificationsBuffer, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSemanticLabels_Classification>*  ____classificationsBuffer;

/// [Tooltip("Contains all the information regarding data loading.")]
/// @brief Field SceneSettings, offset: 0xb8, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings*  ___SceneSettings;

/// @brief Field _cachedCurrentRoom, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>  ____cachedCurrentRoom;

/// @brief Field _cachedCurrentRoomFrame, offset: 0xc8, size: 0x4, def value: None
 int32_t  ____cachedCurrentRoomFrame;

/// [CompilerGenerated]
/// @brief Field <Rooms>k__BackingField, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  ____Rooms_k__BackingField;

/// [SerializeField]
/// @brief Field _immersiveSceneDebuggerPrefab, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____immersiveSceneDebuggerPrefab;

/// @brief Field _loadSceneTask, offset: 0xe0, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::MRUK_LoadDeviceResult>>  ____loadSceneTask;

/// @brief Field _currentAppSpace, offset: 0xf0, size: 0x8, def value: None
 uint64_t  ____currentAppSpace;

/// @brief Field _openXrInitialised, offset: 0xf8, size: 0x1, def value: None
 bool  ____openXrInitialised;

/// @brief Field _tracker, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::OVRAnchor_Tracker*  ____tracker;

/// @brief Field _trackerCoroutine, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____trackerCoroutine;

/// @brief Field _trackableStates, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::MRUK_TrackableState>*  ____trackableStates;

/// @brief Field _trackableTransforms, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::UnityW<::UnityEngine::Transform>>*  ____trackableTransforms;

/// @brief Size padding 0x138 - 0x120 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____IsInitialized_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____SceneLoadedEvent_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____RoomCreatedEvent_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____RoomUpdatedEvent_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____RoomRemovedEvent_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ___EnableWorldLock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ___TrackingSpaceOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, _____cameraRig_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____worldLockActive) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____worldLockWasEnabled) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____loadSceneCalled) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____prevTrackingSpacePose) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____classificationsBuffer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ___SceneSettings) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____cachedCurrentRoom) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____cachedCurrentRoomFrame) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____Rooms_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____immersiveSceneDebuggerPrefab) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____loadSceneTask) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____currentAppSpace) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____openXrInitialised) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____tracker) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____trackerCoroutine) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____trackableStates) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK, ____trackableTransforms) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUK) == 0x138, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// [CompilerGenerated]
// Dependencies OVRAnchor::FetchResult, OVRAnchor::TrackerConfiguration, OVRResult`2<TValue, TStatus>, OVRTask`1<TResult>, System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUK/<TrackerCoroutine>d__137
class CORDL_TYPE MRUK__TrackerCoroutine_d__137 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this;

/// @brief Field <anchors>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__anchors_5__2, put=__cordl_internal_set__anchors_5__2)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__2;

/// @brief Field <hasScenePermission>5__5, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasScenePermission_5__5, put=__cordl_internal_set__hasScenePermission_5__5)) bool  _hasScenePermission_5__5;

/// @brief Field <lastConfig>5__4, offset 0x38, size 0x2 
 __declspec(property(get=__cordl_internal_get__lastConfig_5__4, put=__cordl_internal_set__lastConfig_5__4)) ::GlobalNamespace::OVRAnchor_TrackerConfiguration  _lastConfig_5__4;

/// @brief Field <nextFetchTime>5__6, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextFetchTime_5__6, put=__cordl_internal_set__nextFetchTime_5__6)) double_t  _nextFetchTime_5__6;

/// @brief Field <removed>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__removed_5__3, put=__cordl_internal_set__removed_5__3)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor>*  _removed_5__3;

/// @brief Field <startFrame>5__7, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__startFrame_5__7, put=__cordl_internal_set__startFrame_5__7)) int32_t  _startFrame_5__7;

/// @brief Field <task>5__8, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get__task_5__8, put=__cordl_internal_set__task_5__8)) ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  _task_5__8;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9f2ec28, size 0x109c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9f304c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9f304c8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9f30500, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9f2ec24, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUK> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUK>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get__anchors_5__2() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get__anchors_5__2() ;

constexpr bool const& __cordl_internal_get__hasScenePermission_5__5() const;

constexpr bool& __cordl_internal_get__hasScenePermission_5__5() ;

constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration const& __cordl_internal_get__lastConfig_5__4() const;

constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration& __cordl_internal_get__lastConfig_5__4() ;

constexpr double_t const& __cordl_internal_get__nextFetchTime_5__6() const;

constexpr double_t& __cordl_internal_get__nextFetchTime_5__6() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get__removed_5__3() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get__removed_5__3() ;

constexpr int32_t const& __cordl_internal_get__startFrame_5__7() const;

constexpr int32_t& __cordl_internal_get__startFrame_5__7() ;

constexpr ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> const& __cordl_internal_get__task_5__8() const;

constexpr ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>& __cordl_internal_get__task_5__8() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::XR::MRUtilityKit::MRUK>  value) ;

constexpr void __cordl_internal_set__anchors_5__2(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value) ;

constexpr void __cordl_internal_set__hasScenePermission_5__5(bool  value) ;

constexpr void __cordl_internal_set__lastConfig_5__4(::GlobalNamespace::OVRAnchor_TrackerConfiguration  value) ;

constexpr void __cordl_internal_set__nextFetchTime_5__6(double_t  value) ;

constexpr void __cordl_internal_set__removed_5__3(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor>*  value) ;

constexpr void __cordl_internal_set__startFrame_5__7(int32_t  value) ;

constexpr void __cordl_internal_set__task_5__8(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9f2ebfc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUK__TrackerCoroutine_d__137() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUK__TrackerCoroutine_d__137", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUK__TrackerCoroutine_d__137(MRUK__TrackerCoroutine_d__137 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUK__TrackerCoroutine_d__137", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUK__TrackerCoroutine_d__137(MRUK__TrackerCoroutine_d__137 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25881};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  _____4__this;

/// @brief Field <anchors>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  ____anchors_5__2;

/// @brief Field <removed>5__3, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor>*  ____removed_5__3;

/// @brief Field <lastConfig>5__4, offset: 0x38, size: 0x2, def value: None
 ::GlobalNamespace::OVRAnchor_TrackerConfiguration  ____lastConfig_5__4;

/// @brief Field <hasScenePermission>5__5, offset: 0x3a, size: 0x1, def value: None
 bool  ____hasScenePermission_5__5;

/// @brief Field <nextFetchTime>5__6, offset: 0x40, size: 0x8, def value: None
 double_t  ____nextFetchTime_5__6;

/// @brief Field <startFrame>5__7, offset: 0x48, size: 0x4, def value: None
 int32_t  ____startFrame_5__7;

/// @brief Field <task>5__8, offset: 0x4c, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  ____task_5__8;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, ____anchors_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, ____removed_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, ____lastConfig_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, ____hasScenePermission_5__5) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, ____nextFetchTime_5__6) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, ____startFrame_5__7) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137, ____task_5__8) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUK__TrackerCoroutine_d__137) == 0x60, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
// Dependencies Meta.XR.MRUtilityKit.MRUK::SceneDataSource, OVRAnchor::TrackerConfiguration, System.Object, UnityEngine.GameObject, UnityEngine.TextAsset
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.MRUK/MRUKSettings
class CORDL_TYPE MRUK_MRUKSettings : public ::System::Object {
public:
// Declarations
/// @brief Field DataSource, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_DataSource, put=__cordl_internal_set_DataSource)) ::GlobalNamespace::MRUK_SceneDataSource  DataSource;

/// @brief Field LoadSceneOnStartup, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_LoadSceneOnStartup, put=__cordl_internal_set_LoadSceneOnStartup)) bool  LoadSceneOnStartup;

/// @brief Field RoomIndex, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_RoomIndex, put=__cordl_internal_set_RoomIndex)) int32_t  RoomIndex;

/// @brief Field RoomPrefabs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomPrefabs, put=__cordl_internal_set_RoomPrefabs)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  RoomPrefabs;

/// @brief Field SceneJson, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneJson, put=__cordl_internal_set_SceneJson)) ::StringW  SceneJson;

/// @brief Field SceneJsons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneJsons, put=__cordl_internal_set_SceneJsons)) ::ArrayW<::UnityW<::UnityEngine::TextAsset>>  SceneJsons;

/// @brief Field SeatWidth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_SeatWidth, put=__cordl_internal_set_SeatWidth)) float_t  SeatWidth;

 __declspec(property(get=get_TrackableAdded, put=set_TrackableAdded)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  TrackableAdded;

 __declspec(property(get=get_TrackableRemoved, put=set_TrackableRemoved)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  TrackableRemoved;

 __declspec(property(get=get_TrackerConfiguration, put=set_TrackerConfiguration)) ::GlobalNamespace::OVRAnchor_TrackerConfiguration  TrackerConfiguration;

/// @brief Field <TrackableAdded>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrackableAdded_k__BackingField, put=__cordl_internal_set__TrackableAdded_k__BackingField)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  _TrackableAdded_k__BackingField;

/// @brief Field <TrackableRemoved>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrackableRemoved_k__BackingField, put=__cordl_internal_set__TrackableRemoved_k__BackingField)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  _TrackableRemoved_k__BackingField;

/// @brief Field <TrackerConfiguration>k__BackingField, offset 0x38, size 0x2 
 __declspec(property(get=__cordl_internal_get__TrackerConfiguration_k__BackingField, put=__cordl_internal_set__TrackerConfiguration_k__BackingField)) ::GlobalNamespace::OVRAnchor_TrackerConfiguration  _TrackerConfiguration_k__BackingField;

static inline ::Meta::XR::MRUtilityKit::MRUK_MRUKSettings* New_ctor() ;

constexpr ::GlobalNamespace::MRUK_SceneDataSource const& __cordl_internal_get_DataSource() const;

constexpr ::GlobalNamespace::MRUK_SceneDataSource& __cordl_internal_get_DataSource() ;

constexpr bool const& __cordl_internal_get_LoadSceneOnStartup() const;

constexpr bool& __cordl_internal_get_LoadSceneOnStartup() ;

constexpr int32_t const& __cordl_internal_get_RoomIndex() const;

constexpr int32_t& __cordl_internal_get_RoomIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_RoomPrefabs() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_RoomPrefabs() ;

constexpr ::StringW const& __cordl_internal_get_SceneJson() const;

constexpr ::StringW& __cordl_internal_get_SceneJson() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::TextAsset>> const& __cordl_internal_get_SceneJsons() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::TextAsset>>& __cordl_internal_get_SceneJsons() ;

constexpr float_t const& __cordl_internal_get_SeatWidth() const;

constexpr float_t& __cordl_internal_get_SeatWidth() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* const& __cordl_internal_get__TrackableAdded_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*& __cordl_internal_get__TrackableAdded_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* const& __cordl_internal_get__TrackableRemoved_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*& __cordl_internal_get__TrackableRemoved_k__BackingField() ;

constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration const& __cordl_internal_get__TrackerConfiguration_k__BackingField() const;

constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration& __cordl_internal_get__TrackerConfiguration_k__BackingField() ;

constexpr void __cordl_internal_set_DataSource(::GlobalNamespace::MRUK_SceneDataSource  value) ;

constexpr void __cordl_internal_set_LoadSceneOnStartup(bool  value) ;

constexpr void __cordl_internal_set_RoomIndex(int32_t  value) ;

constexpr void __cordl_internal_set_RoomPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_SceneJson(::StringW  value) ;

constexpr void __cordl_internal_set_SceneJsons(::ArrayW<::UnityW<::UnityEngine::TextAsset>>  value) ;

constexpr void __cordl_internal_set_SeatWidth(float_t  value) ;

constexpr void __cordl_internal_set__TrackableAdded_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  value) ;

constexpr void __cordl_internal_set__TrackableRemoved_k__BackingField(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  value) ;

constexpr void __cordl_internal_set__TrackerConfiguration_k__BackingField(::GlobalNamespace::OVRAnchor_TrackerConfiguration  value) ;

/// @brief Method .ctor, addr 0x9f26830, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TrackableAdded, addr 0x9f26810, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* get_TrackableAdded() ;

/// [CompilerGenerated]
/// @brief Method get_TrackableRemoved, addr 0x9f26820, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>* get_TrackableRemoved() ;

/// [CompilerGenerated]
/// @brief Method get_TrackerConfiguration, addr 0x9f26800, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRAnchor_TrackerConfiguration get_TrackerConfiguration() ;

/// [CompilerGenerated]
/// @brief Method set_TrackableAdded, addr 0x9f26818, size 0x8, virtual false, abstract: false, final false
inline void set_TrackableAdded(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrackableRemoved, addr 0x9f26828, size 0x8, virtual false, abstract: false, final false
inline void set_TrackableRemoved(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrackerConfiguration, addr 0x9f26808, size 0x8, virtual false, abstract: false, final false
inline void set_TrackerConfiguration(::GlobalNamespace::OVRAnchor_TrackerConfiguration  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MRUK_MRUKSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MRUK_MRUKSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MRUK_MRUKSettings(MRUK_MRUKSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MRUK_MRUKSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MRUK_MRUKSettings(MRUK_MRUKSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25865};

/// [Header("Data Source settings")]
/// [SerializeField]
/// [Tooltip("Where to load the data from.")]
/// @brief Field DataSource, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::MRUK_SceneDataSource  ___DataSource;

/// [SerializeField]
/// [Tooltip("The index (0-based) into the RoomPrefabs or SceneJsons array; -1 is random.")]
/// @brief Field RoomIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  ___RoomIndex;

/// [SerializeField]
/// [Tooltip("The list of prefab rooms to use.")]
/// @brief Field RoomPrefabs, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___RoomPrefabs;

/// [SerializeField]
/// [Tooltip("The list of JSON text files with scene data to use. Uses RoomIndex")]
/// @brief Field SceneJsons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::TextAsset>>  ___SceneJsons;

/// [Space]
/// [Header("Startup settings")]
/// [SerializeField]
/// [Tooltip("Trigger a scene load on startup. If set to false, you can call LoadSceneFromDevice(), LoadSceneFromPrefab() or LoadSceneFromJsonString() manually.")]
/// @brief Field LoadSceneOnStartup, offset: 0x28, size: 0x1, def value: None
 bool  ___LoadSceneOnStartup;

/// [Space]
/// [Header("Other settings")]
/// [SerializeField]
/// [Tooltip("The width of a seat. Used to calculate seat positions with the COUCH label.")]
/// @brief Field SeatWidth, offset: 0x2c, size: 0x4, def value: None
 float_t  ___SeatWidth;

/// [SerializeField]
/// [HideInInspector]
/// [Obsolete]
/// @brief Field SceneJson, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___SceneJson;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("Settings related to trackables that are detectable in the environment at runtime.")]
/// @brief Field <TrackerConfiguration>k__BackingField, offset: 0x38, size: 0x2, def value: None
 ::GlobalNamespace::OVRAnchor_TrackerConfiguration  ____TrackerConfiguration_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("Invoked after a newly detected anchor has been localized.")]
/// @brief Field <TrackableAdded>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  ____TrackableAdded_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// [Tooltip("The event is invoked when an anchor is removed.")]
/// @brief Field <TrackableRemoved>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKTrackable>>*  ____TrackableRemoved_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ___DataSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ___RoomIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ___RoomPrefabs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ___SceneJsons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ___LoadSceneOnStartup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ___SeatWidth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ___SceneJson) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ____TrackerConfiguration_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ____TrackableAdded_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings, ____TrackableRemoved_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::MRUK_MRUKSettings) == 0x50, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
