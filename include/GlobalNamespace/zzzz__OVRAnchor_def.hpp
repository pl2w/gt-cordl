#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRAnchorComponent_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor)
namespace GlobalNamespace {
struct OVRAnchor_ConfigureTrackerResult;
}
namespace GlobalNamespace {
struct OVRAnchor_DeferredKey;
}
namespace GlobalNamespace {
struct OVRAnchor_DeferredValue;
}
namespace GlobalNamespace {
struct OVRAnchor_EraseResult;
}
namespace GlobalNamespace {
struct OVRAnchor_FetchOptions;
}
namespace GlobalNamespace {
struct OVRAnchor_FetchResult;
}
namespace GlobalNamespace {
struct OVRAnchor_FetchTaskData;
}
namespace GlobalNamespace {
struct OVRAnchor_FilterUnion;
}
namespace GlobalNamespace {
struct OVRAnchor_SaveResult;
}
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
class OVRAnchor_Telemetry;
}
namespace GlobalNamespace {
struct OVRAnchor_TrackableType;
}
namespace GlobalNamespace {
struct OVRAnchor_TrackerConfiguration;
}
namespace GlobalNamespace {
class OVRAnchor_Tracker;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchAnchorsAsync_d__56;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchSharedAnchorsAsync_d__10;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchSharedAnchorsAsync_d__9;
}
namespace GlobalNamespace {
struct OVRAnchor__FetchTrackablesAsync_d__66;
}
namespace GlobalNamespace {
struct OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d;
}
namespace GlobalNamespace {
class OVRAnchor___c__DisplayClass54_0;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceDiscoveryResultsData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesEraseResultData;
}
namespace GlobalNamespace {
struct OVRDeserialize_SpacesSaveResultData;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo2;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceStorageLocation;
}
namespace GlobalNamespace {
template<typename TStatus>
struct OVRResult_1;
}
namespace GlobalNamespace {
template<typename TValue,typename TStatus>
struct OVRResult_2;
}
namespace GlobalNamespace {
struct OVRSpaceUser;
}
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace GlobalNamespace {
class Telemetry_OVRAnchor_Annotation;
}
namespace GlobalNamespace {
struct Telemetry_OVRAnchor_Key;
}
namespace GlobalNamespace {
struct Telemetry_OVRAnchor_MarkerId;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor_AsyncLock;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__ConfigureAsync_d__9;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__Dispose_d__12;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__SetupDynamicObjectTracker_d__7;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor__SetupMarkerTracker_d__5;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d;
}
namespace GlobalNamespace {
struct Tracker_OVRAnchor___SetupMarkerTracker_g__CreateTrackerAsync_5_0_d;
}
namespace GlobalNamespace {
struct __c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d;
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
class IList_1;
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
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRAnchor_Telemetry;
}
namespace GlobalNamespace {
class OVRAnchor_Tracker;
}
namespace GlobalNamespace {
class OVRAnchor___c__DisplayClass54_0;
}
namespace GlobalNamespace {
class Telemetry_OVRAnchor_Annotation;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRAnchor_Telemetry*);
MARK_REF_T(::GlobalNamespace::OVRAnchor_Tracker*);
MARK_REF_T(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*);
MARK_REF_T(::GlobalNamespace::Telemetry_OVRAnchor_Annotation*);
MARK_VAL_T(::GlobalNamespace::OVRAnchor);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_Telemetry*, "", "OVRAnchor/Telemetry");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_Tracker*, "", "OVRAnchor/Tracker");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*, "", "OVRAnchor/<>c__DisplayClass54_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Telemetry_OVRAnchor_Annotation*, "", "OVRAnchor/Telemetry/Annotation");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor, "", "OVRAnchor");
// [IsReadOnly]
// Dependencies IOVRAnchorComponent`1<T>, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor
struct CORDL_TYPE OVRAnchor {
public:
// Declarations
using ConfigureTrackerResult = ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult;

using DeferredKey = ::GlobalNamespace::OVRAnchor_DeferredKey;

using DeferredValue = ::GlobalNamespace::OVRAnchor_DeferredValue;

using EraseResult = ::GlobalNamespace::OVRAnchor_EraseResult;

using FetchOptions = ::GlobalNamespace::OVRAnchor_FetchOptions;

using FetchResult = ::GlobalNamespace::OVRAnchor_FetchResult;

using FetchTaskData = ::GlobalNamespace::OVRAnchor_FetchTaskData;

using FilterUnion = ::GlobalNamespace::OVRAnchor_FilterUnion;

using SaveResult = ::GlobalNamespace::OVRAnchor_SaveResult;

using ShareResult = ::GlobalNamespace::OVRAnchor_ShareResult;

using Telemetry = ::GlobalNamespace::OVRAnchor_Telemetry;

using TrackableType = ::GlobalNamespace::OVRAnchor_TrackableType;

using Tracker = ::GlobalNamespace::OVRAnchor_Tracker;

using TrackerConfiguration = ::GlobalNamespace::OVRAnchor_TrackerConfiguration;

using _FetchAnchorsAsync_d__56 = ::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56;

using _FetchSharedAnchorsAsync_d__10 = ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10;

using _FetchSharedAnchorsAsync_d__9 = ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9;

using _FetchTrackablesAsync_d__66 = ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66;

using __FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d = ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d;

using __c__DisplayClass54_0 = ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0;

 __declspec(property(get=get_Handle)) uint64_t  Handle;

/// @brief Field Null, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::GlobalNamespace::OVRAnchor  Null;

 __declspec(property(get=get_Uuid)) ::System::Guid  Uuid;

/// @brief Field _deferredTasks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__deferredTasks, put=setStaticF__deferredTasks)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*  _deferredTasks;

/// @brief Field _typeMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__typeMap, put=setStaticF__typeMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::OVRPlugin_SpaceComponentType>*  _typeMap;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*() ;

/// @brief Method CreateDeferredSpaceComponentStatusTask, addr 0xa56aee4, size 0x210, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<bool> CreateDeferredSpaceComponentStatusTask(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, bool  enabledDesired, double_t  timeout) ;

/// @brief Method CreateSpatialAnchorAsync, addr 0xa567ce0, size 0x194, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Pose  trackingSpacePose) ;

/// @brief Method CreateSpatialAnchorAsync, addr 0xa567e74, size 0x188, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Transform*  transform, ::UnityEngine::Camera*  centerEyeCamera) ;

/// @brief Method Dispose, addr 0xa56a8c4, size 0x80, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Equals, addr 0xa56a60c, size 0xa4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa56a550, size 0xbc, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRAnchor  other) ;

/// @brief Method EraseAsync, addr 0xa568820, size 0x84, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> EraseAsync() ;

/// @brief Method EraseAsync, addr 0xa568b1c, size 0x53c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> EraseAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids) ;

/// [Obsolete]
/// @brief Method EraseSpace, addr 0xa56c1a8, size 0x160, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result EraseSpace(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId) ;

/// @brief Method EraseSpacesAsync, addr 0xa5688a4, size 0x278, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> EraseSpacesAsync(::System::ReadOnlySpan_1<uint64_t>  spaces, ::System::ReadOnlySpan_1<::System::Guid>  uuids) ;

/// @brief Method FetchAnchors, addr 0xa56aa5c, size 0x488, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> FetchAnchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  queryInfo) ;

/// @brief Method FetchAnchorsAsync, addr 0xa567054, size 0x18c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> FetchAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRAnchor_FetchOptions  options, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback) ;

/// [Obsolete("Use the overload of FetchAnchorsAsync that accepts a FetchOptions parameter")]
/// @brief Method FetchAnchorsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRSpace_StorageLocation  location, int32_t  maxResults, double_t  timeout) ;

/// [AsyncStateMachine(typeof(OVRAnchor::<FetchAnchorsAsync>d__56))]
/// [Obsolete]
/// @brief Method FetchAnchorsAsync, addr 0xa56be74, size 0x11c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::GlobalNamespace::OVRPlugin_SpaceComponentType  type, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRSpace_StorageLocation  location, int32_t  maxResults, double_t  timeout) ;

/// [Obsolete("Use the overload of FetchAnchorsAsync that accepts a FetchOptions parameter")]
/// @brief Method FetchAnchorsAsync, addr 0xa56b5e8, size 0x128, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRSpace_StorageLocation  location, double_t  timeout) ;

/// [AsyncStateMachine(typeof(OVRAnchor::<FetchSharedAnchorsAsync>d__10))]
/// @brief Method FetchSharedAnchorsAsync, addr 0xa567bcc, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> FetchSharedAnchorsAsync(::System::Guid  groupUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  allowedAnchorUuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors) ;

/// [AsyncStateMachine(typeof(OVRAnchor::<FetchSharedAnchorsAsync>d__9))]
/// @brief Method FetchSharedAnchorsAsync, addr 0xa567ad0, size 0xfc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> FetchSharedAnchorsAsync(::System::Guid  groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors) ;

/// [AsyncStateMachine(typeof(OVRAnchor::<FetchTrackablesAsync>d__66))]
/// @brief Method FetchTrackablesAsync, addr 0xa56c980, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback) ;

/// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T GetComponent() ;

/// @brief Method GetHashCode, addr 0xa56a7bc, size 0x98, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetRequiredComponents, addr 0xa56c740, size 0x240, virtual false, abstract: false, final false
static inline void GetRequiredComponents(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypesOut, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*  requiredComponentsOut) ;

/// @brief Method GetSupportedComponents, addr 0xa56a30c, size 0x244, virtual false, abstract: false, final false
inline bool GetSupportedComponents(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*  components) ;

/// @brief Method GetTrackableType, addr 0xa56c370, size 0x3d0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRAnchor_TrackableType GetTrackableType() ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Init, addr 0xa56a944, size 0xa0, virtual false, abstract: false, final false
static inline void Init() ;

/// @brief Method OnEraseSpacesResult, addr 0xa569058, size 0x6c, virtual false, abstract: false, final false
static inline void OnEraseSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData  eventData) ;

/// @brief Method OnSaveSpacesResult, addr 0xa5687b4, size 0x6c, virtual false, abstract: false, final false
static inline void OnSaveSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData  eventData) ;

/// @brief Method OnShareAnchorsToGroupsComplete, addr 0xa56a278, size 0x80, virtual false, abstract: false, final false
static inline void OnShareAnchorsToGroupsComplete(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result) ;

/// @brief Method OnSpaceDiscoveryComplete, addr 0xa5667c0, size 0x330, virtual false, abstract: false, final false
static inline void OnSpaceDiscoveryComplete(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData  data) ;

/// @brief Method OnSpaceDiscoveryResultsAvailable, addr 0xa566cc4, size 0x384, virtual false, abstract: false, final false
static inline void OnSpaceDiscoveryResultsAvailable(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData  data) ;

/// @brief Method OnSpaceEraseComplete, addr 0xa56c308, size 0x68, virtual false, abstract: false, final false
static inline void OnSpaceEraseComplete(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData  eventData) ;

/// @brief Method OnSpaceListSaveResult, addr 0xa56c13c, size 0x6c, virtual false, abstract: false, final false
static inline void OnSpaceListSaveResult(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData  eventData) ;

/// @brief Method OnSpaceQueryComplete, addr 0xa56b710, size 0x610, virtual false, abstract: false, final false
static inline void OnSpaceQueryComplete(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData  data) ;

/// @brief Method OnSpaceSetComponentStatusComplete, addr 0xa56b0f4, size 0x4e4, virtual false, abstract: false, final false
static inline void OnSpaceSetComponentStatusComplete(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData  eventData) ;

/// @brief Method SaveAsync, addr 0xa567ffc, size 0x7c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> SaveAsync() ;

/// @brief Method SaveAsync, addr 0xa568260, size 0x398, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> SaveAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*  anchors) ;

/// [Obsolete]
/// @brief Method SaveSpaceList, addr 0xa56bf90, size 0x1ac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SaveSpaceList(uint64_t*  spaces, uint32_t  numSpaces, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId) ;

/// @brief Method SaveSpacesAsync, addr 0xa568078, size 0x1e8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> SaveSpacesAsync(::System::ReadOnlySpan_1<uint64_t>  spaces) ;

/// @brief Method ShareAsync, addr 0xa569ed4, size 0x3a4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Guid  groupUuid) ;

/// @brief Method ShareAsync, addr 0xa5695e4, size 0x704, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users) ;

/// @brief Method ShareAsync, addr 0xa569ce8, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsync(::System::Guid  groupUuid) ;

/// @brief Method ShareAsync, addr 0xa5690c4, size 0x408, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users) ;

/// @brief Method ShareAsyncInternal, addr 0xa569d7c, size 0x158, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsyncInternal(::System::ReadOnlySpan_1<uint64_t>  anchors, ::System::ReadOnlySpan_1<::System::Guid>  groupUuids) ;

/// @brief Method ShareSpacesAsync, addr 0xa5694cc, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareSpacesAsync(::System::ReadOnlySpan_1<uint64_t>  spaces, ::System::ReadOnlySpan_1<uint64_t>  users) ;

/// @brief Method SupportsComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool SupportsComponent() ;

/// @brief Method ToString, addr 0xa56a854, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::IOVRAnchorComponent_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool TryGetComponent(::by_ref<T>  component) ;

/// [CompilerGenerated]
/// @brief Method <FetchTrackablesAsync>g__DoesComponentMatchTrackableType|66_1, addr 0xa56cf70, size 0x1a8, virtual false, abstract: false, final false
static inline bool _FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::GlobalNamespace::OVRAnchor  anchor, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType) ;

/// [AsyncStateMachine(typeof(OVRAnchor::<<FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0>d))]
/// [CompilerGenerated]
/// @brief Method <FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0, addr 0xa56ce48, size 0x128, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> _FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback) ;

/// @brief Method .ctor, addr 0xa567048, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint64_t  handle, ::System::Guid  uuid) ;

static inline ::GlobalNamespace::OVRAnchor getStaticF_Null() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>* getStaticF__deferredTasks() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::OVRPlugin_SpaceComponentType>* getStaticF__typeMap() ;

/// [CompilerGenerated]
/// @brief Method get_Handle, addr 0xa56a2f8, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_Handle() ;

/// [CompilerGenerated]
/// @brief Method get_Uuid, addr 0xa56a300, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_Uuid() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>* i___System__IEquatable_1___GlobalNamespace__OVRAnchor_() ;

/// @brief Method op_Equality, addr 0xa56a6b0, size 0x84, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRAnchor  lhs, ::GlobalNamespace::OVRAnchor  rhs) ;

/// @brief Method op_Inequality, addr 0xa56a734, size 0x88, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRAnchor  lhs, ::GlobalNamespace::OVRAnchor  rhs) ;

static inline void setStaticF_Null(::GlobalNamespace::OVRAnchor  value) ;

static inline void setStaticF__deferredTasks(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey,::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*  value) ;

static inline void setStaticF__typeMap(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::OVRPlugin_SpaceComponentType>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor() ;

// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor(uint64_t  _Handle_k__BackingField, ::System::Guid  _Uuid_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11839};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _Handle_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Uuid>k__BackingField, offset: 0x8, size: 0x10, def value: None
 ::System::Guid  _Uuid_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor, _Uuid_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies OVRSpace::StorageLocation, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRAnchor/<>c__DisplayClass54_0
class CORDL_TYPE OVRAnchor___c__DisplayClass54_0 : public ::System::Object {
public:
// Declarations
using __FetchAnchorsAsync_g__execute_0_d = ::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d;

/// @brief Field anchors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchors, put=__cordl_internal_set_anchors)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors;

/// @brief Field location, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_location, put=__cordl_internal_set_location)) ::GlobalNamespace::OVRSpace_StorageLocation  location;

/// @brief Field timeout, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeout, put=__cordl_internal_set_timeout)) double_t  timeout;

/// @brief Field uuids, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_uuids, put=__cordl_internal_set_uuids)) ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids;

static inline ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0* New_ctor() ;

/// [AsyncStateMachine(typeof(OVRAnchor::<>c__DisplayClass54_0::<<FetchAnchorsAsync>g__execute|0>d))]
/// @brief Method <FetchAnchorsAsync>g__execute|0, addr 0xa5718a4, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> _FetchAnchorsAsync_g__execute_0() ;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* const& __cordl_internal_get_anchors() const;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*& __cordl_internal_get_anchors() ;

constexpr ::GlobalNamespace::OVRSpace_StorageLocation const& __cordl_internal_get_location() const;

constexpr ::GlobalNamespace::OVRSpace_StorageLocation& __cordl_internal_get_location() ;

constexpr double_t const& __cordl_internal_get_timeout() const;

constexpr double_t& __cordl_internal_get_timeout() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>* const& __cordl_internal_get_uuids() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>*& __cordl_internal_get_uuids() ;

constexpr void __cordl_internal_set_anchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  value) ;

constexpr void __cordl_internal_set_location(::GlobalNamespace::OVRSpace_StorageLocation  value) ;

constexpr void __cordl_internal_set_timeout(double_t  value) ;

constexpr void __cordl_internal_set_uuids(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  value) ;

/// @brief Method .ctor, addr 0xa57189c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor___c__DisplayClass54_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRAnchor___c__DisplayClass54_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRAnchor___c__DisplayClass54_0(OVRAnchor___c__DisplayClass54_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRAnchor___c__DisplayClass54_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRAnchor___c__DisplayClass54_0(OVRAnchor___c__DisplayClass54_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11834};

/// @brief Field uuids, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  ___uuids;

/// @brief Field location, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRSpace_StorageLocation  ___location;

/// @brief Field timeout, offset: 0x20, size: 0x8, def value: None
 double_t  ___timeout;

/// @brief Field anchors, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  ___anchors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0, ___uuids) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0, ___location) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0, ___timeout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0, ___anchors) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor___c__DisplayClass54_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRAnchor::TrackerConfiguration, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRAnchor/Tracker
class CORDL_TYPE OVRAnchor_Tracker : public ::System::Object {
public:
// Declarations
using AsyncLock = ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock;

using _ConfigureAsync_d__9 = ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9;

using _Dispose_d__12 = ::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__12;

using _SetupDynamicObjectTracker_d__7 = ::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__7;

using _SetupMarkerTracker_d__5 = ::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5;

using __SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d = ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d;

using __SetupMarkerTracker_g__CreateTrackerAsync_5_0_d = ::GlobalNamespace::Tracker_OVRAnchor___SetupMarkerTracker_g__CreateTrackerAsync_5_0_d;

 __declspec(property(get=get_Configuration)) ::GlobalNamespace::OVRAnchor_TrackerConfiguration  Configuration;

/// @brief Field _asyncOperationCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__asyncOperationCount, put=__cordl_internal_set__asyncOperationCount)) int32_t  _asyncOperationCount;

/// @brief Field _configuration, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get__configuration, put=__cordl_internal_set__configuration)) ::GlobalNamespace::OVRAnchor_TrackerConfiguration  _configuration;

/// @brief Field _dynamicObjectTracker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dynamicObjectTracker, put=__cordl_internal_set__dynamicObjectTracker)) uint64_t  _dynamicObjectTracker;

/// @brief Field _markerTracker, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__markerTracker, put=__cordl_internal_set__markerTracker)) uint64_t  _markerTracker;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [AsyncStateMachine(typeof(OVRAnchor::Tracker::<ConfigureAsync>d__9))]
/// @brief Method ConfigureAsync, addr 0xa56e390, size 0xfc, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>> ConfigureAsync(::GlobalNamespace::OVRAnchor_TrackerConfiguration  configuration) ;

/// [AsyncStateMachine(typeof(OVRAnchor::Tracker::<Dispose>d__12))]
/// @brief Method Dispose, addr 0xa56e720, size 0xa4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FetchTrackablesAsync, addr 0xa56e48c, size 0x1a4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback) ;

/// @brief Method Finalize, addr 0xa56e630, size 0xf0, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::GlobalNamespace::OVRAnchor_Tracker* New_ctor() ;

/// [AsyncStateMachine(typeof(OVRAnchor::Tracker::<SetupDynamicObjectTracker>d__7))]
/// @brief Method SetupDynamicObjectTracker, addr 0xa56e29c, size 0xf4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> SetupDynamicObjectTracker(::GlobalNamespace::OVRAnchor_TrackerConfiguration  config) ;

/// [AsyncStateMachine(typeof(OVRAnchor::Tracker::<SetupMarkerTracker>d__5))]
/// @brief Method SetupMarkerTracker, addr 0xa56e1a8, size 0xf4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> SetupMarkerTracker(::GlobalNamespace::OVRAnchor_TrackerConfiguration  config) ;

/// [AsyncStateMachine(typeof(OVRAnchor::Tracker::<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|7_1>d))]
/// [CompilerGenerated]
/// @brief Method <SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|7_1, addr 0xa56ea08, size 0xe8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>> _SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1(uint64_t  tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config) ;

/// [CompilerGenerated]
/// @brief Method <SetupDynamicObjectTracker>g__SetClassesAsync|7_0, addr 0xa56e8a4, size 0x164, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>> _SetupDynamicObjectTracker_g__SetClassesAsync_7_0(uint64_t  tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config) ;

/// [AsyncStateMachine(typeof(OVRAnchor::Tracker::<<SetupMarkerTracker>g__CreateTrackerAsync|5_0>d))]
/// [CompilerGenerated]
/// @brief Method <SetupMarkerTracker>g__CreateTrackerAsync|5_0, addr 0xa56e7cc, size 0xd8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>> _SetupMarkerTracker_g__CreateTrackerAsync_5_0(::GlobalNamespace::OVRAnchor_TrackerConfiguration  config) ;

constexpr int32_t const& __cordl_internal_get__asyncOperationCount() const;

constexpr int32_t& __cordl_internal_get__asyncOperationCount() ;

constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration const& __cordl_internal_get__configuration() const;

constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration& __cordl_internal_get__configuration() ;

constexpr uint64_t const& __cordl_internal_get__dynamicObjectTracker() const;

constexpr uint64_t& __cordl_internal_get__dynamicObjectTracker() ;

constexpr uint64_t const& __cordl_internal_get__markerTracker() const;

constexpr uint64_t& __cordl_internal_get__markerTracker() ;

constexpr void __cordl_internal_set__asyncOperationCount(int32_t  value) ;

constexpr void __cordl_internal_set__configuration(::GlobalNamespace::OVRAnchor_TrackerConfiguration  value) ;

constexpr void __cordl_internal_set__dynamicObjectTracker(uint64_t  value) ;

constexpr void __cordl_internal_set__markerTracker(uint64_t  value) ;

/// @brief Method .ctor, addr 0xa56e7c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Configuration, addr 0xa56e1a0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRAnchor_TrackerConfiguration get_Configuration() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_Tracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRAnchor_Tracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRAnchor_Tracker(OVRAnchor_Tracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRAnchor_Tracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRAnchor_Tracker(OVRAnchor_Tracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11831};

/// @brief Field _configuration, offset: 0x10, size: 0x2, def value: None
 ::GlobalNamespace::OVRAnchor_TrackerConfiguration  ____configuration;

/// @brief Field _asyncOperationCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ____asyncOperationCount;

/// @brief Field _markerTracker, offset: 0x18, size: 0x8, def value: None
 uint64_t  ____markerTracker;

/// @brief Field _dynamicObjectTracker, offset: 0x20, size: 0x8, def value: None
 uint64_t  ____dynamicObjectTracker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_Tracker, ____configuration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_Tracker, ____asyncOperationCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_Tracker, ____markerTracker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor_Tracker, ____dynamicObjectTracker) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_Tracker) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRAnchor/Telemetry
class CORDL_TYPE OVRAnchor_Telemetry : public ::System::Object {
public:
// Declarations
using Annotation = ::GlobalNamespace::Telemetry_OVRAnchor_Annotation;

using Key = ::GlobalNamespace::Telemetry_OVRAnchor_Key;

using MarkerId = ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId;

/// @brief Field s_markers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_markers, put=setStaticF_s_markers)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key,::GlobalNamespace::OVRTelemetryMarker>*  s_markers;

/// @brief Method AddMarker, addr 0xa56d3a0, size 0xb0, virtual false, abstract: false, final false
static inline void AddMarker(uint64_t  requestId, ::GlobalNamespace::OVRTelemetryMarker  marker) ;

/// @brief Method GetMarker, addr 0xa566af0, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId) ;

/// @brief Method GetRemove, addr 0xa56d67c, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GetRemove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId) ;

/// @brief Method OnInit, addr 0xa56a9e4, size 0x78, virtual false, abstract: false, final false
static inline void OnInit() ;

/// @brief Method Remove, addr 0xa56d5e4, size 0x98, virtual false, abstract: false, final false
static inline bool Remove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, ::by_ref<::GlobalNamespace::OVRTelemetryMarker>  marker) ;

/// @brief Method SetAsyncResult, addr 0xa56bd20, size 0x154, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> SetAsyncResult(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, int64_t  result) ;

/// @brief Method SetAsyncResultAndSend, addr 0xa566bbc, size 0x108, virtual false, abstract: false, final false
static inline void SetAsyncResultAndSend(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, int64_t  result) ;

/// @brief Method SetSyncResult, addr 0xa5685f8, size 0x1bc, virtual false, abstract: false, final false
static inline void SetSyncResult(::GlobalNamespace::OVRTelemetryMarker  marker, uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result) ;

/// @brief Method Start, addr 0xa56d460, size 0xe0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTelemetryMarker Start(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result) ;

/// @brief Method TryGetMarker, addr 0xa56d54c, size 0x98, virtual false, abstract: false, final false
static inline bool TryGetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId  markerId, uint64_t  requestId, ::by_ref<::GlobalNamespace::OVRTelemetryMarker>  marker) ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key,::GlobalNamespace::OVRTelemetryMarker>* getStaticF_s_markers() ;

static inline void setStaticF_s_markers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key,::GlobalNamespace::OVRTelemetryMarker>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_Telemetry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRAnchor_Telemetry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRAnchor_Telemetry(OVRAnchor_Telemetry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRAnchor_Telemetry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRAnchor_Telemetry(OVRAnchor_Telemetry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11820};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRAnchor_Telemetry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRAnchor/Telemetry/Annotation
class CORDL_TYPE Telemetry_OVRAnchor_Annotation : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Telemetry_OVRAnchor_Annotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Telemetry_OVRAnchor_Annotation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Telemetry_OVRAnchor_Annotation(Telemetry_OVRAnchor_Annotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Telemetry_OVRAnchor_Annotation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Telemetry_OVRAnchor_Annotation(Telemetry_OVRAnchor_Annotation const& ) = delete;

/// @brief Field AsynchronousResult offset 0xffffffff size 0x8
static constexpr ::ConstString  AsynchronousResult{u"async_result"};

/// @brief Field ComponentTypes offset 0xffffffff size 0x8
static constexpr ::ConstString  ComponentTypes{u"component_types"};

/// @brief Field DynamicObjectClasses offset 0xffffffff size 0x8
static constexpr ::ConstString  DynamicObjectClasses{u"dynamic_object_classes"};

/// @brief Field GroupCount offset 0xffffffff size 0x8
static constexpr ::ConstString  GroupCount{u"group_count"};

/// @brief Field MarkerTypes offset 0xffffffff size 0x8
static constexpr ::ConstString  MarkerTypes{u"marker_types"};

/// @brief Field MaxResults offset 0xffffffff size 0x8
static constexpr ::ConstString  MaxResults{u"max_results"};

/// @brief Field ResultsCount offset 0xffffffff size 0x8
static constexpr ::ConstString  ResultsCount{u"results_count"};

/// @brief Field SpaceCount offset 0xffffffff size 0x8
static constexpr ::ConstString  SpaceCount{u"space_count"};

/// @brief Field StorageLocation offset 0xffffffff size 0x8
static constexpr ::ConstString  StorageLocation{u"storage_location"};

/// @brief Field SynchronousResult offset 0xffffffff size 0x8
static constexpr ::ConstString  SynchronousResult{u"sync_result"};

/// @brief Field Timeout offset 0xffffffff size 0x8
static constexpr ::ConstString  Timeout{u"timeout"};

/// @brief Field TotalFilterCount offset 0xffffffff size 0x8
static constexpr ::ConstString  TotalFilterCount{u"total_filter_count"};

/// @brief Field UuidCount offset 0xffffffff size 0x8
static constexpr ::ConstString  UuidCount{u"uuid_count"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11819};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Telemetry_OVRAnchor_Annotation) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
