#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager)
namespace GlobalNamespace {
struct OVRAnchor_FetchResult;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace GlobalNamespace {
class OVRSceneManager_Classification;
}
namespace GlobalNamespace {
class OVRSceneManager_Development;
}
namespace GlobalNamespace {
struct OVRSceneManager_LoadSceneModelResult;
}
namespace GlobalNamespace {
struct OVRSceneManager_LogForwarder;
}
namespace GlobalNamespace {
struct OVRSceneManager_Metrics;
}
namespace GlobalNamespace {
class OVRSceneManager_RoomLayoutInformation;
}
namespace GlobalNamespace {
struct OVRSceneManager_RoomLayoutUuids;
}
namespace GlobalNamespace {
template<typename T>
struct OVRSceneManager__FetchAnchorsAsync_d__36_1;
}
namespace GlobalNamespace {
struct OVRSceneManager__FetchAnchorsAsync_d__37;
}
namespace GlobalNamespace {
struct OVRSceneManager__FilterByActiveRoom_d__46;
}
namespace GlobalNamespace {
struct OVRSceneManager__LoadSceneModelAsync_d__45;
}
namespace GlobalNamespace {
struct OVRSceneManager__OnApplicationPause_d__38;
}
namespace GlobalNamespace {
struct OVRSceneManager__ProcessBatch_d__44;
}
namespace GlobalNamespace {
struct OVRSceneManager__QueryForExistingAnchorsTransform_d__39;
}
namespace GlobalNamespace {
struct OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass45_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass50_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass53_0;
}
namespace GlobalNamespace {
class OVRScenePlane;
}
namespace GlobalNamespace {
class OVRScenePrefabOverride;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
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
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
class GameObject;
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
namespace GlobalNamespace {
class OVRSceneManager;
}
namespace GlobalNamespace {
class OVRSceneManager_Classification;
}
namespace GlobalNamespace {
class OVRSceneManager_Development;
}
namespace GlobalNamespace {
class OVRSceneManager_RoomLayoutInformation;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass45_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass50_0;
}
namespace GlobalNamespace {
class OVRSceneManager___c__DisplayClass53_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRSceneManager*);
MARK_REF_T(::GlobalNamespace::OVRSceneManager_Classification*);
MARK_REF_T(::GlobalNamespace::OVRSceneManager_Development*);
MARK_REF_T(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*);
MARK_REF_T(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*);
MARK_REF_T(::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0*);
MARK_REF_T(::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager*, "", "OVRSceneManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager_Classification*, "", "OVRSceneManager/Classification");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager_Development*, "", "OVRSceneManager/Development");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*, "", "OVRSceneManager/RoomLayoutInformation");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0*, "", "OVRSceneManager/<>c__DisplayClass45_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0*, "", "OVRSceneManager/<>c__DisplayClass50_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0*, "", "OVRSceneManager/<>c__DisplayClass53_0");
// [HelpURL("https://developer.oculus.com/documentation/unity/unity-scene-use-scene-anchors/")]
// [Obsolete("OVRSceneManager and associated classes are deprecated (v65), please use MR Utility Kit instead (https://developer.oculus.com/documentation/unity/unity-mr-utility-kit-overview)")]
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies IOVRAnchorComponent`1<T>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager
class CORDL_TYPE OVRSceneManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Classification = ::GlobalNamespace::OVRSceneManager_Classification;

using Development = ::GlobalNamespace::OVRSceneManager_Development;

using LoadSceneModelResult = ::GlobalNamespace::OVRSceneManager_LoadSceneModelResult;

using LogForwarder = ::GlobalNamespace::OVRSceneManager_LogForwarder;

using Metrics = ::GlobalNamespace::OVRSceneManager_Metrics;

using RoomLayoutInformation = ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation;

using RoomLayoutUuids = ::GlobalNamespace::OVRSceneManager_RoomLayoutUuids;

template<typename T>
using _FetchAnchorsAsync_d__36_1 = ::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__36_1<T>;

using _FetchAnchorsAsync_d__37 = ::GlobalNamespace::OVRSceneManager__FetchAnchorsAsync_d__37;

using _FilterByActiveRoom_d__46 = ::GlobalNamespace::OVRSceneManager__FilterByActiveRoom_d__46;

using _LoadSceneModelAsync_d__45 = ::GlobalNamespace::OVRSceneManager__LoadSceneModelAsync_d__45;

using _OnApplicationPause_d__38 = ::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38;

using _ProcessBatch_d__44 = ::GlobalNamespace::OVRSceneManager__ProcessBatch_d__44;

using _QueryForExistingAnchorsTransform_d__39 = ::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39;

using __LoadSceneModel_g__AwaitTask_40_0_d = ::GlobalNamespace::OVRSceneManager___LoadSceneModel_g__AwaitTask_40_0_d;

using __c__DisplayClass45_0 = ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0;

using __c__DisplayClass50_0 = ::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0;

using __c__DisplayClass53_0 = ::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0;

/// @brief Field ActiveRoomsOnly, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_ActiveRoomsOnly, put=__cordl_internal_set_ActiveRoomsOnly)) bool  ActiveRoomsOnly;

 __declspec(property(get=get_InitialAnchorParent, put=set_InitialAnchorParent)) ::UnityW<::UnityEngine::Transform>  InitialAnchorParent;

/// @brief Field LoadSceneModelFailedPermissionNotGranted, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_LoadSceneModelFailedPermissionNotGranted, put=__cordl_internal_set_LoadSceneModelFailedPermissionNotGranted)) ::System::Action*  LoadSceneModelFailedPermissionNotGranted;

/// @brief Field MaxSceneAnchorUpdatesPerFrame, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxSceneAnchorUpdatesPerFrame, put=__cordl_internal_set_MaxSceneAnchorUpdatesPerFrame)) int32_t  MaxSceneAnchorUpdatesPerFrame;

/// @brief Field NewSceneModelAvailable, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_NewSceneModelAvailable, put=__cordl_internal_set_NewSceneModelAvailable)) ::System::Action*  NewSceneModelAvailable;

/// @brief Field NoSceneModelToLoad, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_NoSceneModelToLoad, put=__cordl_internal_set_NoSceneModelToLoad)) ::System::Action*  NoSceneModelToLoad;

/// @brief Field PlanePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlanePrefab, put=__cordl_internal_set_PlanePrefab)) ::UnityW<::GlobalNamespace::OVRSceneAnchor>  PlanePrefab;

/// @brief Field PrefabOverrides, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrefabOverrides, put=__cordl_internal_set_PrefabOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*  PrefabOverrides;

/// @brief Field RoomLayout, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomLayout, put=__cordl_internal_set_RoomLayout)) ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*  RoomLayout;

/// @brief Field SceneCaptureReturnedWithoutError, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneCaptureReturnedWithoutError, put=__cordl_internal_set_SceneCaptureReturnedWithoutError)) ::System::Action*  SceneCaptureReturnedWithoutError;

/// @brief Field SceneModelLoadedSuccessfully, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_SceneModelLoadedSuccessfully, put=__cordl_internal_set_SceneModelLoadedSuccessfully)) ::System::Action*  SceneModelLoadedSuccessfully;

/// @brief Field UnexpectedErrorWithSceneCapture, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnexpectedErrorWithSceneCapture, put=__cordl_internal_set_UnexpectedErrorWithSceneCapture)) ::System::Action*  UnexpectedErrorWithSceneCapture;

 __declspec(property(get=get_Verbose)) ::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder>  Verbose;

/// @brief Field VerboseLogging, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_VerboseLogging, put=__cordl_internal_set_VerboseLogging)) bool  VerboseLogging;

/// @brief Field VolumePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VolumePrefab, put=__cordl_internal_set_VolumePrefab)) ::UnityW<::GlobalNamespace::OVRSceneAnchor>  VolumePrefab;

/// @brief Field _cameraRig, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRig, put=__cordl_internal_set__cameraRig)) ::UnityW<::GlobalNamespace::OVRCameraRig>  _cameraRig;

/// @brief Field _hasLoadBeenRequested, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasLoadBeenRequested, put=__cordl_internal_set__hasLoadBeenRequested)) bool  _hasLoadBeenRequested;

/// @brief Field _initialAnchorParent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__initialAnchorParent, put=__cordl_internal_set__initialAnchorParent)) ::UnityW<::UnityEngine::Transform>  _initialAnchorParent;

/// @brief Field _sceneAnchorUpdateIndex, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__sceneAnchorUpdateIndex, put=__cordl_internal_set__sceneAnchorUpdateIndex)) int32_t  _sceneAnchorUpdateIndex;

/// @brief Field _sceneCaptureRequestId, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneCaptureRequestId, put=__cordl_internal_set__sceneCaptureRequestId)) uint64_t  _sceneCaptureRequestId;

/// @brief Method Awake, addr 0xa62ed74, size 0x128, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckClassificationsInRooms, addr 0xa630728, size 0x434, virtual false, abstract: false, final false
static inline void CheckClassificationsInRooms(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task) ;

/// @brief Method CheckIfAnchorsContainClassifications, addr 0xa630b64, size 0x47c, virtual false, abstract: false, final false
static inline void CheckIfAnchorsContainClassifications(bool  success, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomAnchors, ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications, ::GlobalNamespace::OVRTask_1<bool>  task) ;

/// @brief Method CheckIfClassificationsAreValid, addr 0xa630214, size 0x3e8, virtual false, abstract: false, final false
static inline void CheckIfClassificationsAreValid(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications) ;

/// @brief Method CollectLabelsFromAnchors, addr 0xa630fe0, size 0x180, virtual false, abstract: false, final false
static inline void CollectLabelsFromAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::List_1<::StringW>*  labels) ;

/// @brief Method DestroyExistingAnchors, addr 0xa62f524, size 0x284, virtual false, abstract: false, final false
inline void DestroyExistingAnchors() ;

/// @brief Method DoesRoomSetupExist, addr 0xa62ffd4, size 0x238, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> DoesRoomSetupExist(::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications) ;

/// [AsyncStateMachine(typeof(OVRSceneManager::<FetchAnchorsAsync>d__36`1<T>))]
/// @brief Method FetchAnchorsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback) ;

/// [AsyncStateMachine(typeof(OVRSceneManager::<FetchAnchorsAsync>d__37))]
/// @brief Method FetchAnchorsAsync, addr 0xa62f1dc, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors) ;

/// [AsyncStateMachine(typeof(OVRSceneManager::<FilterByActiveRoom>d__46))]
/// @brief Method FilterByActiveRoom, addr 0xa62fabc, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::System::ValueTuple_2<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult,int32_t>> FilterByActiveRoom(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor,::GlobalNamespace::OVRSceneManager_RoomLayoutUuids>*  layouts) ;

/// @brief Method GetRoomLayoutInformation, addr 0xa63184c, size 0x1b8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* GetRoomLayoutInformation() ;

/// @brief Method GetUuidsToQuery, addr 0xa6305fc, size 0x12c, virtual false, abstract: false, final false
static inline void GetUuidsToQuery(::GlobalNamespace::OVRAnchor  anchor, ::System::Collections::Generic::HashSet_1<::System::Guid>*  uuidsToQuery) ;

/// @brief Method InstantiateSceneAnchor, addr 0xa632104, size 0x548, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::OVRSceneAnchor> InstantiateSceneAnchor(::GlobalNamespace::OVRAnchor  anchor, ::GlobalNamespace::OVRSceneAnchor*  prefab) ;

/// @brief Method IsUserInRoom, addr 0xa62fbbc, size 0x2f4, virtual false, abstract: false, final false
static inline bool IsUserInRoom(::UnityEngine::Vector3  userPosition, ::GlobalNamespace::OVRAnchor  floor, ::GlobalNamespace::OVRAnchor  ceiling) ;

/// @brief Method LoadSceneModel, addr 0xa62f430, size 0xf4, virtual false, abstract: false, final false
inline bool LoadSceneModel() ;

/// [AsyncStateMachine(typeof(OVRSceneManager::<LoadSceneModelAsync>d__45))]
/// @brief Method LoadSceneModelAsync, addr 0xa62f7a8, size 0xe8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult> LoadSceneModelAsync() ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Log, addr 0xa62ed68, size 0x4, virtual false, abstract: false, final false
static inline void Log(::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogError, addr 0xa62ed70, size 0x4, virtual false, abstract: false, final false
static inline void LogError(::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// @brief Method LogResult, addr 0xa62f184, size 0x58, virtual false, abstract: false, final false
static inline void LogResult(::GlobalNamespace::OVRAnchor_FetchResult  value) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogWarning, addr 0xa62ed6c, size 0x4, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

static inline ::GlobalNamespace::OVRSceneManager* New_ctor() ;

/// @brief Method OVRManager_SceneCaptureComplete, addr 0xa631f3c, size 0x10c, virtual false, abstract: false, final false
inline void OVRManager_SceneCaptureComplete(uint64_t  requestId, bool  result) ;

/// [AsyncStateMachine(typeof(OVRSceneManager::<OnApplicationPause>d__38))]
/// @brief Method OnApplicationPause, addr 0xa62f2dc, size 0xc0, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  isPaused) ;

/// @brief Method OnDisable, addr 0xa631d14, size 0x228, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa631a8c, size 0x288, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTrackingSpaceChanged, addr 0xa631160, size 0x4, virtual false, abstract: false, final false
static inline void OnTrackingSpaceChanged(::UnityEngine::Transform*  trackingSpace) ;

/// @brief Method PointInPolygon2D, addr 0xa62feb0, size 0xa4, virtual false, abstract: false, final false
static inline bool PointInPolygon2D(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  boundaryVertices, ::UnityEngine::Vector2  target) ;

/// [AsyncStateMachine(typeof(OVRSceneManager::<ProcessBatch>d__44))]
/// @brief Method ProcessBatch, addr 0xa62f9ac, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics> ProcessBatch(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, int32_t  startingIndex) ;

/// [AsyncStateMachine(typeof(OVRSceneManager::<QueryForExistingAnchorsTransform>d__39))]
/// @brief Method QueryForExistingAnchorsTransform, addr 0xa62f39c, size 0x94, virtual false, abstract: false, final false
inline void QueryForExistingAnchorsTransform() ;

/// @brief Method RequestSceneCapture, addr 0xa62ff54, size 0x80, virtual false, abstract: false, final false
inline bool RequestSceneCapture() ;

/// @brief Method Start, addr 0xa62ef58, size 0x22c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa631394, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAllSceneAnchors, addr 0xa631164, size 0x230, virtual false, abstract: false, final false
static inline void UpdateAllSceneAnchors() ;

/// @brief Method UpdateSomeSceneAnchors, addr 0xa631398, size 0x130, virtual false, abstract: false, final false
inline void UpdateSomeSceneAnchors() ;

/// [AsyncStateMachine(typeof(OVRSceneManager::<<LoadSceneModel>g__AwaitTask|40_0>d))]
/// [CompilerGenerated]
/// @brief Method <LoadSceneModel>g__AwaitTask|40_0, addr 0xa62f890, size 0xbc, virtual false, abstract: false, final false
inline void _LoadSceneModel_g__AwaitTask_40_0(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_LoadSceneModelResult>  task) ;

/// [CompilerGenerated]
/// @brief Method <LoadSceneModel>g__InterpretResult|40_1, addr 0xa62f94c, size 0x60, virtual false, abstract: false, final false
inline bool _LoadSceneModel_g__InterpretResult_40_1(::GlobalNamespace::OVRSceneManager_LoadSceneModelResult  result) ;

constexpr bool const& __cordl_internal_get_ActiveRoomsOnly() const;

constexpr bool& __cordl_internal_get_ActiveRoomsOnly() ;

constexpr ::System::Action* const& __cordl_internal_get_LoadSceneModelFailedPermissionNotGranted() const;

constexpr ::System::Action*& __cordl_internal_get_LoadSceneModelFailedPermissionNotGranted() ;

constexpr int32_t const& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() const;

constexpr int32_t& __cordl_internal_get_MaxSceneAnchorUpdatesPerFrame() ;

constexpr ::System::Action* const& __cordl_internal_get_NewSceneModelAvailable() const;

constexpr ::System::Action*& __cordl_internal_get_NewSceneModelAvailable() ;

constexpr ::System::Action* const& __cordl_internal_get_NoSceneModelToLoad() const;

constexpr ::System::Action*& __cordl_internal_get_NoSceneModelToLoad() ;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_PlanePrefab() const;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_PlanePrefab() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>* const& __cordl_internal_get_PrefabOverrides() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*& __cordl_internal_get_PrefabOverrides() ;

constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* const& __cordl_internal_get_RoomLayout() const;

constexpr ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*& __cordl_internal_get_RoomLayout() ;

constexpr ::System::Action* const& __cordl_internal_get_SceneCaptureReturnedWithoutError() const;

constexpr ::System::Action*& __cordl_internal_get_SceneCaptureReturnedWithoutError() ;

constexpr ::System::Action* const& __cordl_internal_get_SceneModelLoadedSuccessfully() const;

constexpr ::System::Action*& __cordl_internal_get_SceneModelLoadedSuccessfully() ;

constexpr ::System::Action* const& __cordl_internal_get_UnexpectedErrorWithSceneCapture() const;

constexpr ::System::Action*& __cordl_internal_get_UnexpectedErrorWithSceneCapture() ;

constexpr bool const& __cordl_internal_get_VerboseLogging() const;

constexpr bool& __cordl_internal_get_VerboseLogging() ;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get_VolumePrefab() const;

constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get_VolumePrefab() ;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get__cameraRig() const;

constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get__cameraRig() ;

constexpr bool const& __cordl_internal_get__hasLoadBeenRequested() const;

constexpr bool& __cordl_internal_get__hasLoadBeenRequested() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__initialAnchorParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__initialAnchorParent() ;

constexpr int32_t const& __cordl_internal_get__sceneAnchorUpdateIndex() const;

constexpr int32_t& __cordl_internal_get__sceneAnchorUpdateIndex() ;

constexpr uint64_t const& __cordl_internal_get__sceneCaptureRequestId() const;

constexpr uint64_t& __cordl_internal_get__sceneCaptureRequestId() ;

constexpr void __cordl_internal_set_ActiveRoomsOnly(bool  value) ;

constexpr void __cordl_internal_set_LoadSceneModelFailedPermissionNotGranted(::System::Action*  value) ;

constexpr void __cordl_internal_set_MaxSceneAnchorUpdatesPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_NewSceneModelAvailable(::System::Action*  value) ;

constexpr void __cordl_internal_set_NoSceneModelToLoad(::System::Action*  value) ;

constexpr void __cordl_internal_set_PlanePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value) ;

constexpr void __cordl_internal_set_PrefabOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*  value) ;

constexpr void __cordl_internal_set_RoomLayout(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*  value) ;

constexpr void __cordl_internal_set_SceneCaptureReturnedWithoutError(::System::Action*  value) ;

constexpr void __cordl_internal_set_SceneModelLoadedSuccessfully(::System::Action*  value) ;

constexpr void __cordl_internal_set_UnexpectedErrorWithSceneCapture(::System::Action*  value) ;

constexpr void __cordl_internal_set_VerboseLogging(bool  value) ;

constexpr void __cordl_internal_set_VolumePrefab(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value) ;

constexpr void __cordl_internal_set__cameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value) ;

constexpr void __cordl_internal_set__hasLoadBeenRequested(bool  value) ;

constexpr void __cordl_internal_set__initialAnchorParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__sceneAnchorUpdateIndex(int32_t  value) ;

constexpr void __cordl_internal_set__sceneCaptureRequestId(uint64_t  value) ;

/// @brief Method .ctor, addr 0xa632708, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_LoadSceneModelFailedPermissionNotGranted, addr 0xa62ebc8, size 0x9c, virtual false, abstract: false, final false
inline void add_LoadSceneModelFailedPermissionNotGranted(::System::Action*  value) ;

/// @brief Method get_InitialAnchorParent, addr 0xa62ebb8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_InitialAnchorParent() ;

/// @brief Method get_Verbose, addr 0xa62ed00, size 0x68, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::OVRSceneManager_LogForwarder> get_Verbose() ;

/// [CompilerGenerated]
/// @brief Method remove_LoadSceneModelFailedPermissionNotGranted, addr 0xa62ec64, size 0x9c, virtual false, abstract: false, final false
inline void remove_LoadSceneModelFailedPermissionNotGranted(::System::Action*  value) ;

/// @brief Method set_InitialAnchorParent, addr 0xa62ebc0, size 0x8, virtual false, abstract: false, final false
inline void set_InitialAnchorParent(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager(OVRSceneManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager(OVRSceneManager const& ) = delete;

/// @brief Field DeprecationMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  DeprecationMessage{u"OVRSceneManager and associated classes are deprecated (v65), please use MR Utility Kit instead (https://developer.oculus.com/documentation/unity/unity-mr-utility-kit-overview)"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12429};

/// [FormerlySerializedAs("planePrefab")]
/// [Tooltip("A prefab that will be used to instantiate any Plane found when querying the Scene model. If the anchor contains both Volume and Plane elements, Volume will be used instead.")]
/// @brief Field PlanePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneAnchor>  ___PlanePrefab;

/// [FormerlySerializedAs("volumePrefab")]
/// [Tooltip("A prefab that will be used to instantiate any Volume found when querying the Scene model. This anchor may also contain Plane elements.")]
/// @brief Field VolumePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneAnchor>  ___VolumePrefab;

/// [FormerlySerializedAs("prefabOverrides")]
/// [Tooltip("Overrides the instantiation of the generic Plane/Volume prefabs with specialized ones.")]
/// @brief Field PrefabOverrides, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRScenePrefabOverride*>*  ___PrefabOverrides;

/// [Tooltip("Scene manager will only present the room(s) the user is currently in.")]
/// @brief Field ActiveRoomsOnly, offset: 0x38, size: 0x1, def value: None
 bool  ___ActiveRoomsOnly;

/// [FormerlySerializedAs("verboseLogging")]
/// [Tooltip("When enabled, verbose debug logs will be emitted.")]
/// @brief Field VerboseLogging, offset: 0x39, size: 0x1, def value: None
 bool  ___VerboseLogging;

/// [Tooltip("The maximum number of scene anchors that will be updated each frame.")]
/// @brief Field MaxSceneAnchorUpdatesPerFrame, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___MaxSceneAnchorUpdatesPerFrame;

/// [SerializeField]
/// [Tooltip("(Optional) The parent transform for each new scene anchor. Changing this value does not affect existing scene anchors. May be null.")]
/// @brief Field _initialAnchorParent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____initialAnchorParent;

/// @brief Field SceneModelLoadedSuccessfully, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___SceneModelLoadedSuccessfully;

/// @brief Field NoSceneModelToLoad, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___NoSceneModelToLoad;

/// [CompilerGenerated]
/// @brief Field LoadSceneModelFailedPermissionNotGranted, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___LoadSceneModelFailedPermissionNotGranted;

/// @brief Field SceneCaptureReturnedWithoutError, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___SceneCaptureReturnedWithoutError;

/// @brief Field UnexpectedErrorWithSceneCapture, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___UnexpectedErrorWithSceneCapture;

/// @brief Field NewSceneModelAvailable, offset: 0x70, size: 0x8, def value: None
 ::System::Action*  ___NewSceneModelAvailable;

/// [Obsolete("RoomLayout is obsoleted. For each room\'s layout information (floor, ceiling, walls) see OVRSceneRoom.", false)]
/// @brief Field RoomLayout, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation*  ___RoomLayout;

/// @brief Field _sceneCaptureRequestId, offset: 0x80, size: 0x8, def value: None
 uint64_t  ____sceneCaptureRequestId;

/// @brief Field _cameraRig, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRCameraRig>  ____cameraRig;

/// @brief Field _sceneAnchorUpdateIndex, offset: 0x90, size: 0x4, def value: None
 int32_t  ____sceneAnchorUpdateIndex;

/// @brief Field _hasLoadBeenRequested, offset: 0x94, size: 0x1, def value: None
 bool  ____hasLoadBeenRequested;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PlanePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VolumePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___PrefabOverrides) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___ActiveRoomsOnly) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___VerboseLogging) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___MaxSceneAnchorUpdatesPerFrame) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____initialAnchorParent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneModelLoadedSuccessfully) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___NoSceneModelToLoad) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___LoadSceneModelFailedPermissionNotGranted) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___SceneCaptureReturnedWithoutError) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___UnexpectedErrorWithSceneCapture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___NewSceneModelAvailable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ___RoomLayout) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneCaptureRequestId) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____cameraRig) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____sceneAnchorUpdateIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager, ____hasLoadBeenRequested) == 0x94, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies OVRTask`1<TResult>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/<>c__DisplayClass53_0
class CORDL_TYPE OVRSceneManager___c__DisplayClass53_0 : public ::System::Object {
public:
// Declarations
/// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestedAnchorClassifications, put=__cordl_internal_set_requestedAnchorClassifications)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications;

/// @brief Field roomAnchors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomAnchors, put=__cordl_internal_set_roomAnchors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  roomAnchors;

/// @brief Field task, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::GlobalNamespace::OVRTask_1<bool>  task;

static inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0* New_ctor() ;

/// @brief Method <CheckClassificationsInRooms>b__0, addr 0xa633240, size 0x14, virtual false, abstract: false, final false
inline void _CheckClassificationsInRooms_b__0(bool  result) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get_requestedAnchorClassifications() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_requestedAnchorClassifications() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get_roomAnchors() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get_roomAnchors() ;

constexpr ::GlobalNamespace::OVRTask_1<bool> const& __cordl_internal_get_task() const;

constexpr ::GlobalNamespace::OVRTask_1<bool>& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_roomAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  value) ;

constexpr void __cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa630b5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager___c__DisplayClass53_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass53_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager___c__DisplayClass53_0(OVRSceneManager___c__DisplayClass53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass53_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager___c__DisplayClass53_0(OVRSceneManager___c__DisplayClass53_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12421};

/// @brief Field requestedAnchorClassifications, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::StringW>*  ___requestedAnchorClassifications;

/// @brief Field task, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1<bool>  ___task;

/// @brief Field roomAnchors, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  ___roomAnchors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0, ___requestedAnchorClassifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0, ___task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0, ___roomAnchors) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager___c__DisplayClass53_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies OVRTask`1<TResult>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/<>c__DisplayClass50_0
class CORDL_TYPE OVRSceneManager___c__DisplayClass50_0 : public ::System::Object {
public:
// Declarations
/// @brief Field requestedAnchorClassifications, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestedAnchorClassifications, put=__cordl_internal_set_requestedAnchorClassifications)) ::System::Collections::Generic::IEnumerable_1<::StringW>*  requestedAnchorClassifications;

/// @brief Field task, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::GlobalNamespace::OVRTask_1<bool>  task;

static inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0* New_ctor() ;

/// @brief Method <DoesRoomSetupExist>b__0, addr 0xa633228, size 0x18, virtual false, abstract: false, final false
inline void _DoesRoomSetupExist_b__0(bool  result, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& __cordl_internal_get_requestedAnchorClassifications() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_requestedAnchorClassifications() ;

constexpr ::GlobalNamespace::OVRTask_1<bool> const& __cordl_internal_get_task() const;

constexpr ::GlobalNamespace::OVRTask_1<bool>& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_requestedAnchorClassifications(::System::Collections::Generic::IEnumerable_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_task(::GlobalNamespace::OVRTask_1<bool>  value) ;

/// @brief Method .ctor, addr 0xa63020c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager___c__DisplayClass50_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass50_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager___c__DisplayClass50_0(OVRSceneManager___c__DisplayClass50_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass50_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager___c__DisplayClass50_0(OVRSceneManager___c__DisplayClass50_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12420};

/// @brief Field requestedAnchorClassifications, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::StringW>*  ___requestedAnchorClassifications;

/// @brief Field task, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1<bool>  ___task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0, ___requestedAnchorClassifications) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0, ___task) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager___c__DisplayClass50_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/<>c__DisplayClass45_0
class CORDL_TYPE OVRSceneManager___c__DisplayClass45_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this;

/// @brief Field tasks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tasks, put=__cordl_internal_set_tasks)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>*  tasks;

static inline ::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0* New_ctor() ;

/// @brief Method <LoadSceneModelAsync>b__0, addr 0xa633154, size 0xd4, virtual false, abstract: false, final false
inline void _LoadSceneModelAsync_b__0(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  rooms, int32_t  startingIndex) ;

constexpr ::UnityW<::GlobalNamespace::OVRSceneManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::OVRSceneManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>* const& __cordl_internal_get_tasks() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>*& __cordl_internal_get_tasks() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneManager>  value) ;

constexpr void __cordl_internal_set_tasks(::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>*  value) ;

/// @brief Method .ctor, addr 0xa63314c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager___c__DisplayClass45_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass45_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager___c__DisplayClass45_0(OVRSceneManager___c__DisplayClass45_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager___c__DisplayClass45_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager___c__DisplayClass45_0(OVRSceneManager___c__DisplayClass45_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12419};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneManager>  _____4__this;

/// @brief Field tasks, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSceneManager_Metrics>>*  ___tasks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0, ___tasks) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager___c__DisplayClass45_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/Development
class CORDL_TYPE OVRSceneManager_Development : public ::System::Object {
public:
// Declarations
/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Log, addr 0xa632ce0, size 0xbc, virtual false, abstract: false, final false
static inline void Log(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogError, addr 0xa632e58, size 0xbc, virtual false, abstract: false, final false
static inline void LogError(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogWarning, addr 0xa632d9c, size 0xbc, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  context, ::StringW  message, ::UnityEngine::GameObject*  gameObject) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_Development() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Development", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager_Development(OVRSceneManager_Development && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Development", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager_Development(OVRSceneManager_Development const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12414};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRSceneManager_Development) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [Obsolete("RoomLayoutInformation is obsoleted. For each room\'s layout information (floor, ceiling, walls) see OVRSceneRoom.", false)]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/RoomLayoutInformation
class CORDL_TYPE OVRSceneManager_RoomLayoutInformation : public ::System::Object {
public:
// Declarations
/// @brief Field Ceiling, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ceiling, put=__cordl_internal_set_Ceiling)) ::UnityW<::GlobalNamespace::OVRScenePlane>  Ceiling;

/// @brief Field Floor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Floor, put=__cordl_internal_set_Floor)) ::UnityW<::GlobalNamespace::OVRScenePlane>  Floor;

/// @brief Field Walls, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Walls, put=__cordl_internal_set_Walls)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*  Walls;

static inline ::GlobalNamespace::OVRSceneManager_RoomLayoutInformation* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Ceiling() const;

constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Ceiling() ;

constexpr ::UnityW<::GlobalNamespace::OVRScenePlane> const& __cordl_internal_get_Floor() const;

constexpr ::UnityW<::GlobalNamespace::OVRScenePlane>& __cordl_internal_get_Floor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>* const& __cordl_internal_get_Walls() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*& __cordl_internal_get_Walls() ;

constexpr void __cordl_internal_set_Ceiling(::UnityW<::GlobalNamespace::OVRScenePlane>  value) ;

constexpr void __cordl_internal_set_Floor(::UnityW<::GlobalNamespace::OVRScenePlane>  value) ;

constexpr void __cordl_internal_set_Walls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*  value) ;

/// @brief Method .ctor, addr 0xa631a04, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_RoomLayoutInformation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_RoomLayoutInformation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager_RoomLayoutInformation(OVRSceneManager_RoomLayoutInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_RoomLayoutInformation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager_RoomLayoutInformation(OVRSceneManager_RoomLayoutInformation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12412};

/// @brief Field Floor, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRScenePlane>  ___Floor;

/// @brief Field Ceiling, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRScenePlane>  ___Ceiling;

/// @brief Field Walls, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRScenePlane>>*  ___Walls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, ___Floor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, ___Ceiling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation, ___Walls) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager_RoomLayoutInformation) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [Obsolete("OVRSceneManager and associated classes are deprecated (v65), please use MR Utility Kit instead (https://developer.oculus.com/documentation/unity/unity-mr-utility-kit-overview)")]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneManager/Classification
class CORDL_TYPE OVRSceneManager_Classification : public ::System::Object {
public:
// Declarations
/// @brief Field <List>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__List_k__BackingField, put=setStaticF__List_k__BackingField)) ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  _List_k__BackingField;

/// @brief Field <Set>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Set_k__BackingField, put=setStaticF__Set_k__BackingField)) ::System::Collections::Generic::HashSet_1<::StringW>*  _Set_k__BackingField;

static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* getStaticF__List_k__BackingField() ;

static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF__Set_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_List, addr 0xa6327a8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_List() ;

/// [CompilerGenerated]
/// @brief Method get_Set, addr 0xa632800, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::HashSet_1<::StringW>* get_Set() ;

static inline void setStaticF__List_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  value) ;

static inline void setStaticF__Set_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager_Classification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Classification", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSceneManager_Classification(OVRSceneManager_Classification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneManager_Classification", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSceneManager_Classification(OVRSceneManager_Classification const& ) = delete;

/// @brief Field Bed offset 0xffffffff size 0x8
static constexpr ::ConstString  Bed{u"BED"};

/// @brief Field Ceiling offset 0xffffffff size 0x8
static constexpr ::ConstString  Ceiling{u"CEILING"};

/// @brief Field Couch offset 0xffffffff size 0x8
static constexpr ::ConstString  Couch{u"COUCH"};

/// @brief Field Desk offset 0xffffffff size 0x8
static constexpr ::ConstString  Desk{u"DESK"};

/// @brief Field DoorFrame offset 0xffffffff size 0x8
static constexpr ::ConstString  DoorFrame{u"DOOR_FRAME"};

/// @brief Field Floor offset 0xffffffff size 0x8
static constexpr ::ConstString  Floor{u"FLOOR"};

/// @brief Field GlobalMesh offset 0xffffffff size 0x8
static constexpr ::ConstString  GlobalMesh{u"GLOBAL_MESH"};

/// @brief Field InvisibleWallFace offset 0xffffffff size 0x8
static constexpr ::ConstString  InvisibleWallFace{u"INVISIBLE_WALL_FACE"};

/// @brief Field Lamp offset 0xffffffff size 0x8
static constexpr ::ConstString  Lamp{u"LAMP"};

/// @brief Field Other offset 0xffffffff size 0x8
static constexpr ::ConstString  Other{u"OTHER"};

/// @brief Field Plant offset 0xffffffff size 0x8
static constexpr ::ConstString  Plant{u"PLANT"};

/// @brief Field Screen offset 0xffffffff size 0x8
static constexpr ::ConstString  Screen{u"SCREEN"};

/// @brief Field Storage offset 0xffffffff size 0x8
static constexpr ::ConstString  Storage{u"STORAGE"};

/// @brief Field Table offset 0xffffffff size 0x8
static constexpr ::ConstString  Table{u"TABLE"};

/// @brief Field WallArt offset 0xffffffff size 0x8
static constexpr ::ConstString  WallArt{u"WALL_ART"};

/// @brief Field WallFace offset 0xffffffff size 0x8
static constexpr ::ConstString  WallFace{u"WALL_FACE"};

/// @brief Field WindowFrame offset 0xffffffff size 0x8
static constexpr ::ConstString  WindowFrame{u"WINDOW_FRAME"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12411};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRSceneManager_Classification) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
