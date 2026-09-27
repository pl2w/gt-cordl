#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_EraseOptions_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_SaveOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpatialAnchor)
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
struct OVRAnchor_SaveResult;
}
namespace GlobalNamespace {
struct OVRAnchor_ShareResult;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceStorageLocation;
}
namespace GlobalNamespace {
struct OVRPose;
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
struct OVRSpace;
}
namespace GlobalNamespace {
class OVRSpatialAnchor_Development;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_EraseOptions;
}
namespace GlobalNamespace {
template<typename TResult,typename TCapture>
struct OVRSpatialAnchor_InvertedCapture_2;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_LoadOptions;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_MultiAnchorActionType;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_MultiAnchorDelegatePair;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_OperationResult;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_SaveOptions;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__WhenCreatedAsync_d__19;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor__WhenLocalizedAsync_d__22;
}
namespace GlobalNamespace {
class OVRSpatialAnchor___c;
}
namespace GlobalNamespace {
class OVRSpatialAnchor___c__DisplayClass65_0;
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
class ICollection_1;
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
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace GlobalNamespace {
class OVRSpatialAnchor_Development;
}
namespace GlobalNamespace {
class OVRSpatialAnchor___c;
}
namespace GlobalNamespace {
class OVRSpatialAnchor___c__DisplayClass65_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRSpatialAnchor*);
MARK_REF_T(::GlobalNamespace::OVRSpatialAnchor_Development*);
MARK_REF_T(::GlobalNamespace::OVRSpatialAnchor___c*);
MARK_REF_T(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor*, "", "OVRSpatialAnchor");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor_Development*, "", "OVRSpatialAnchor/Development");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor___c*, "", "OVRSpatialAnchor/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*, "", "OVRSpatialAnchor/<>c__DisplayClass65_0");
// [DisallowMultipleComponent]
// [HelpURL("https://developer.oculus.com/documentation/unity/unity-spatial-anchors-persist-content/#ovrspatialanchor-component")]
// [Feature((Meta.XR.Util.Feature)0)]
// Dependencies OVRAnchor, OVRSpatialAnchor::EraseOptions, OVRSpatialAnchor::SaveOptions, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpatialAnchor
class CORDL_TYPE OVRSpatialAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Development = ::GlobalNamespace::OVRSpatialAnchor_Development;

using EraseOptions = ::GlobalNamespace::OVRSpatialAnchor_EraseOptions;

template<typename TResult,typename TCapture>
using InvertedCapture_2 = ::GlobalNamespace::OVRSpatialAnchor_InvertedCapture_2<TResult, TCapture>;

using LoadOptions = ::GlobalNamespace::OVRSpatialAnchor_LoadOptions;

using MultiAnchorActionType = ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType;

using MultiAnchorDelegatePair = ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair;

using OperationResult = ::GlobalNamespace::OVRSpatialAnchor_OperationResult;

using SaveOptions = ::GlobalNamespace::OVRSpatialAnchor_SaveOptions;

using UnboundAnchor = ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor;

using _LoadUnboundAnchorsAsync_d__65 = ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65;

using _LoadUnboundSharedAnchorsAsync_d__62 = ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62;

using _LoadUnboundSharedAnchorsAsync_d__63 = ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__63;

using _LoadUnboundSharedAnchorsAsync_d__64 = ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__64;

using _WhenCreatedAsync_d__19 = ::GlobalNamespace::OVRSpatialAnchor__WhenCreatedAsync_d__19;

using _WhenLocalizedAsync_d__22 = ::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22;

using __c = ::GlobalNamespace::OVRSpatialAnchor___c;

using __c__DisplayClass65_0 = ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0;

/// @brief Field AsyncRequestTaskIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AsyncRequestTaskIds, put=setStaticF_AsyncRequestTaskIds)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::System::Guid>*  AsyncRequestTaskIds;

 __declspec(property(get=get_Created)) bool  Created;

/// @brief Field CreationRequests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CreationRequests, put=setStaticF_CreationRequests)) ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  CreationRequests;

 __declspec(property(get=get_Localized)) bool  Localized;

/// @brief Field MultiAnchorCompletionDelegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MultiAnchorCompletionDelegates, put=setStaticF_MultiAnchorCompletionDelegates)) ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*  MultiAnchorCompletionDelegates;

 __declspec(property(get=get_PendingCreation)) bool  PendingCreation;

/// @brief Field SaveRequests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SaveRequests, put=setStaticF_SaveRequests)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  SaveRequests;

/// @brief Field ShareRequests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ShareRequests, put=setStaticF_ShareRequests)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*  ShareRequests;

/// @brief [Obsolete("This property exposes an internal handle that should no longer be necessary. You can Save, Erase, and Share anchors using the methods in this class.")]
 __declspec(property(get=get_Space)) ::GlobalNamespace::OVRSpace  Space;

/// @brief Field SpatialAnchors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpatialAnchors, put=setStaticF_SpatialAnchors)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  SpatialAnchors;

 __declspec(property(get=get_Uuid)) ::System::Guid  Uuid;

/// @brief Field <_anchor>k__BackingField, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get___anchor_k__BackingField, put=__cordl_internal_set___anchor_k__BackingField)) ::GlobalNamespace::OVRAnchor  __anchor_k__BackingField;

 __declspec(property(get=get__anchor, put=set__anchor)) ::GlobalNamespace::OVRAnchor  _anchor;

/// @brief Field _creationFailed, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__creationFailed, put=__cordl_internal_set__creationFailed)) bool  _creationFailed;

/// @brief Field _defaultEraseOptions, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultEraseOptions, put=__cordl_internal_set__defaultEraseOptions)) ::GlobalNamespace::OVRSpatialAnchor_EraseOptions  _defaultEraseOptions;

/// @brief Field _defaultSaveOptions, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultSaveOptions, put=__cordl_internal_set__defaultSaveOptions)) ::GlobalNamespace::OVRSpatialAnchor_SaveOptions  _defaultSaveOptions;

/// @brief Field _onLocalize, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLocalize, put=__cordl_internal_set__onLocalize)) ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  _onLocalize;

/// @brief Field _requestId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestId, put=__cordl_internal_set__requestId)) uint64_t  _requestId;

/// @brief Field _startCalled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__startCalled, put=__cordl_internal_set__startCalled)) bool  _startCalled;

/// @brief Method AreSortedUserListsEqual, addr 0xa642238, size 0x298, virtual false, abstract: false, final false
static inline bool AreSortedUserListsEqual(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*  sortedList1, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSpaceUser>*  sortedList2) ;

/// @brief Method CopyAnchorListIntoListFromPool, addr 0xa646598, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* CopyAnchorListIntoListFromPool(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchorList) ;

/// @brief Method CreateSpatialAnchor, addr 0xa6431a0, size 0x16c, virtual false, abstract: false, final false
inline void CreateSpatialAnchor() ;

/// [Obsolete("Use EraseAsync instead.")]
/// @brief Method Erase, addr 0xa645ebc, size 0xb0, virtual false, abstract: false, final false
inline void Erase(::GlobalNamespace::OVRSpatialAnchor_EraseOptions  eraseOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*  onComplete) ;

/// [Obsolete("Use EraseAsync instead.")]
/// @brief Method Erase, addr 0xa645eac, size 0x10, virtual false, abstract: false, final false
inline void Erase(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*  onComplete) ;

/// @brief Method EraseAnchorAsync, addr 0xa6428b0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> EraseAnchorAsync() ;

/// @brief Method EraseAnchorsAsync, addr 0xa642924, size 0x3ac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> EraseAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids) ;

/// [Obsolete("Use EraseAnchorAsync instead.")]
/// @brief Method EraseAsync, addr 0xa6468c8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> EraseAsync() ;

/// [Obsolete("Use EraseAnchorAsync instead.")]
/// @brief Method EraseAsync, addr 0xa645f6c, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> EraseAsync(::GlobalNamespace::OVRSpatialAnchor_EraseOptions  eraseOptions) ;

/// @brief Method FromOVRAnchor, addr 0xa645290, size 0x154, virtual false, abstract: false, final false
static inline bool FromOVRAnchor(::GlobalNamespace::OVRAnchor  anchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  unboundAnchor) ;

/// @brief Method GetListToStoreTheShareRequest, addr 0xa641ef8, size 0x340, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* GetListToStoreTheShareRequest(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*  users) ;

/// @brief Method GetTrackingSpacePose, addr 0xa643f18, size 0xc4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPose GetTrackingSpacePose() ;

/// [Obsolete("You should use LoadUnboundAnchorsAsync to load previously saved anchors and AddComponent<OVRSpatialAnchor>() to create a new anchor. You should no longer need to use an OVRSpace handle directly.")]
/// @brief Method InitializeFromExisting, addr 0xa645680, size 0x230, virtual false, abstract: false, final false
inline void InitializeFromExisting(::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method InitializeOnLoad, addr 0xa6441a0, size 0xd0, virtual false, abstract: false, final false
static inline void InitializeOnLoad() ;

/// @brief Method InitializeUnchecked, addr 0xa642df8, size 0x294, virtual false, abstract: false, final false
inline void InitializeUnchecked(::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid) ;

/// @brief Method InvokeMultiAnchorDelegate, addr 0xa644784, size 0x3cc, virtual false, abstract: false, final false
static inline void InvokeMultiAnchorDelegate(uint64_t  requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result, ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorActionType  actionType) ;

/// @brief Method LateUpdate, addr 0xa643330, size 0x50, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// [Obsolete("Use LoadUnboundAnchorsAsync instead.")]
/// @brief Method LoadUnboundAnchors, addr 0xa64607c, size 0xf4, virtual false, abstract: false, final false
static inline bool LoadUnboundAnchors(::GlobalNamespace::OVRSpatialAnchor_LoadOptions  options, ::System::Action_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>>*  onComplete) ;

/// [Obsolete("Use the overload of LoadUnboundAnchorsAsync that accepts a collection of Guids instead.")]
/// @brief Method LoadUnboundAnchorsAsync, addr 0xa646170, size 0x180, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::ArrayW<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>> LoadUnboundAnchorsAsync(::GlobalNamespace::OVRSpatialAnchor_LoadOptions  options) ;

/// [AsyncStateMachine(typeof(OVRSpatialAnchor::<LoadUnboundAnchorsAsync>d__65))]
/// @brief Method LoadUnboundAnchorsAsync, addr 0xa644e5c, size 0x120, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> LoadUnboundAnchorsAsync(::GlobalNamespace::OVRAnchor_FetchOptions  fetchOptions, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  resultsHandler) ;

/// @brief Method LoadUnboundAnchorsAsync, addr 0xa644d3c, size 0x120, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>> LoadUnboundAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  onIncrementalResultsAvailable) ;

/// [AsyncStateMachine(typeof(OVRSpatialAnchor::<LoadUnboundSharedAnchorsAsync>d__64))]
/// @brief Method LoadUnboundSharedAnchorsAsync, addr 0xa645178, size 0x118, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>> LoadUnboundSharedAnchorsAsync(::System::Guid  groupUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  allowedAnchorUuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors) ;

/// [AsyncStateMachine(typeof(OVRSpatialAnchor::<LoadUnboundSharedAnchorsAsync>d__63))]
/// @brief Method LoadUnboundSharedAnchorsAsync, addr 0xa645080, size 0xf8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>> LoadUnboundSharedAnchorsAsync(::System::Guid  groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors) ;

/// [AsyncStateMachine(typeof(OVRSpatialAnchor::<LoadUnboundSharedAnchorsAsync>d__62))]
/// @brief Method LoadUnboundSharedAnchorsAsync, addr 0xa644f7c, size 0x104, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>> LoadUnboundSharedAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors) ;

static inline ::GlobalNamespace::OVRSpatialAnchor* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa643dc8, size 0x150, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnShareSpacesComplete, addr 0xa6455f4, size 0x8c, virtual false, abstract: false, final false
static inline void OnShareSpacesComplete(uint64_t  requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result) ;

/// @brief Method OnSpaceEraseComplete, addr 0xa646e60, size 0x4, virtual false, abstract: false, final false
static inline void OnSpaceEraseComplete(uint64_t  requestId, bool  result, ::System::Guid  uuid, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location) ;

/// @brief Method OnSpaceListSaveComplete, addr 0xa6473f4, size 0x8c, virtual false, abstract: false, final false
static inline void OnSpaceListSaveComplete(uint64_t  requestId, ::GlobalNamespace::OVRSpatialAnchor_OperationResult  result) ;

/// @brief Method OnSpaceQueryComplete, addr 0xa646e64, size 0x590, virtual false, abstract: false, final false
static inline void OnSpaceQueryComplete(uint64_t  requestId, bool  queryResult) ;

/// @brief Method OnSpaceSaveComplete, addr 0xa646e5c, size 0x4, virtual false, abstract: false, final false
static inline void OnSpaceSaveComplete(uint64_t  requestId, ::GlobalNamespace::OVRSpace  space, bool  result, ::System::Guid  uuid) ;

/// @brief Method OnSpaceSetComponentStatusComplete, addr 0xa645514, size 0xe0, virtual false, abstract: false, final false
static inline void OnSpaceSetComponentStatusComplete(uint64_t  requestId, bool  result, ::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, bool  enabled) ;

/// @brief Method OnSpatialAnchorCreateComplete, addr 0xa644b50, size 0x1ec, virtual false, abstract: false, final false
static inline void OnSpatialAnchorCreateComplete(uint64_t  requestId, bool  success, ::GlobalNamespace::OVRSpace  space, ::System::Guid  uuid) ;

/// [Obsolete("Use SaveAsync instead.")]
/// @brief Method Save, addr 0xa646610, size 0x2b8, virtual false, abstract: false, final false
static inline void Save(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions  saveOptions, ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete) ;

/// [Obsolete("Use SaveAsync instead.")]
/// @brief Method Save, addr 0xa6458b0, size 0x10, virtual false, abstract: false, final false
inline void Save(::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*  onComplete) ;

/// [Obsolete("Use SaveAsync instead.")]
/// @brief Method Save, addr 0xa6458c0, size 0xb0, virtual false, abstract: false, final false
inline void Save(::GlobalNamespace::OVRSpatialAnchor_SaveOptions  saveOptions, ::System::Action_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,bool>*  onComplete) ;

/// @brief Method SaveAnchorAsync, addr 0xa64283c, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> SaveAnchorAsync() ;

/// @brief Method SaveAnchorsAsync, addr 0xa6424d0, size 0x36c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> SaveAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors) ;

/// [Obsolete("Use SaveAnchorsAsync instead.")]
/// @brief Method SaveAsync, addr 0xa6468d8, size 0x4ac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> SaveAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::GlobalNamespace::OVRSpatialAnchor_SaveOptions  saveOptions) ;

/// [Obsolete("Use SaveAnchorAsync instead.")]
/// @brief Method SaveAsync, addr 0xa6468d0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> SaveAsync() ;

/// [Obsolete("Use SaveAnchorAsync instead.")]
/// @brief Method SaveAsync, addr 0xa645970, size 0x16c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> SaveAsync(::GlobalNamespace::OVRSpatialAnchor_SaveOptions  saveOptions) ;

/// [Obsolete]
/// @brief Method SaveBatchAnchors, addr 0xa643380, size 0x1e0, virtual false, abstract: false, final false
static inline void SaveBatchAnchors() ;

/// [Obsolete("Use ShareAsync instead.")]
/// @brief Method Share, addr 0xa6437b8, size 0x610, virtual false, abstract: false, final false
static inline void Share(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSpaceUser>*  users, ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete) ;

/// [Obsolete("Use ShareAsync instead.")]
/// @brief Method Share, addr 0xa645b38, size 0xa4, virtual false, abstract: false, final false
inline void Share(::GlobalNamespace::OVRSpaceUser  user, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete) ;

/// [Obsolete("Use ShareAsync instead.")]
/// @brief Method Share, addr 0xa645bdc, size 0xac, virtual false, abstract: false, final false
inline void Share(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete) ;

/// [Obsolete("Use ShareAsync instead.")]
/// @brief Method Share, addr 0xa645c88, size 0xbc, virtual false, abstract: false, final false
inline void Share(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::GlobalNamespace::OVRSpaceUser  user3, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete) ;

/// [Obsolete("Use ShareAsync instead.")]
/// @brief Method Share, addr 0xa645d44, size 0xc4, virtual false, abstract: false, final false
inline void Share(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::GlobalNamespace::OVRSpaceUser  user3, ::GlobalNamespace::OVRSpaceUser  user4, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete) ;

/// [Obsolete("Use ShareAsync instead.")]
/// @brief Method Share, addr 0xa645e08, size 0xa4, virtual false, abstract: false, final false
inline void Share(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users, ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  onComplete) ;

/// @brief Method ShareAsync, addr 0xa641438, size 0x42c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Guid  groupUuid) ;

/// @brief Method ShareAsync, addr 0xa641864, size 0x694, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  groupUuids) ;

/// @brief Method ShareAsync, addr 0xa640af0, size 0x138, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> ShareAsync(::System::Guid  groupUuid) ;

/// @brief Method ShareAsync, addr 0xa640c28, size 0x7a0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users) ;

/// @brief Method ShareAsync, addr 0xa6403c4, size 0xd0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser  user) ;

/// @brief Method ShareAsync, addr 0xa6405d8, size 0x128, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2) ;

/// @brief Method ShareAsync, addr 0xa640700, size 0x188, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::GlobalNamespace::OVRSpaceUser  user3) ;

/// @brief Method ShareAsync, addr 0xa640888, size 0x1e0, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::GlobalNamespace::OVRSpaceUser  user1, ::GlobalNamespace::OVRSpaceUser  user2, ::GlobalNamespace::OVRSpaceUser  user3, ::GlobalNamespace::OVRSpaceUser  user4) ;

/// @brief Method ShareAsync, addr 0xa640a68, size 0x88, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*  users) ;

/// @brief Method ShareAsyncInternal, addr 0xa640494, size 0x144, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult> ShareAsyncInternal(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*  users) ;

/// @brief Method ShareBatchAnchors, addr 0xa643560, size 0x258, virtual false, abstract: false, final false
static inline void ShareBatchAnchors() ;

/// @brief Method Start, addr 0xa643174, size 0x2c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ThrowIfBound, addr 0xa642cd0, size 0x128, virtual false, abstract: false, final false
static inline void ThrowIfBound(::System::Guid  uuid) ;

/// @brief Method ToNativeArray, addr 0xa6462f0, size 0x2a8, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<uint64_t> ToNativeArray(::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  anchors) ;

/// @brief Method TryGetPose, addr 0xa643fdc, size 0x1c4, virtual false, abstract: false, final false
static inline bool TryGetPose(::GlobalNamespace::OVRSpace  space, ::by_ref<::GlobalNamespace::OVRPose>  pose) ;

/// @brief Method TryGetUnbound, addr 0xa6453e4, size 0x124, virtual false, abstract: false, final false
static inline bool TryGetUnbound(::GlobalNamespace::OVRAnchor  anchor, ::by_ref<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  unboundAnchor) ;

/// @brief Method Update, addr 0xa64330c, size 0x24, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateTransform, addr 0xa64308c, size 0xe8, virtual false, abstract: false, final false
inline void UpdateTransform() ;

/// [AsyncStateMachine(typeof(OVRSpatialAnchor::<WhenCreatedAsync>d__19))]
/// @brief Method WhenCreatedAsync, addr 0xa640140, size 0xe4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> WhenCreatedAsync() ;

/// [AsyncStateMachine(typeof(OVRSpatialAnchor::<WhenLocalizedAsync>d__22))]
/// @brief Method WhenLocalizedAsync, addr 0xa6402e0, size 0xe4, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1<bool> WhenLocalizedAsync() ;

constexpr ::GlobalNamespace::OVRAnchor const& __cordl_internal_get___anchor_k__BackingField() const;

constexpr ::GlobalNamespace::OVRAnchor& __cordl_internal_get___anchor_k__BackingField() ;

constexpr bool const& __cordl_internal_get__creationFailed() const;

constexpr bool& __cordl_internal_get__creationFailed() ;

constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions const& __cordl_internal_get__defaultEraseOptions() const;

constexpr ::GlobalNamespace::OVRSpatialAnchor_EraseOptions& __cordl_internal_get__defaultEraseOptions() ;

constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions const& __cordl_internal_get__defaultSaveOptions() const;

constexpr ::GlobalNamespace::OVRSpatialAnchor_SaveOptions& __cordl_internal_get__defaultSaveOptions() ;

constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const& __cordl_internal_get__onLocalize() const;

constexpr ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*& __cordl_internal_get__onLocalize() ;

constexpr uint64_t const& __cordl_internal_get__requestId() const;

constexpr uint64_t& __cordl_internal_get__requestId() ;

constexpr bool const& __cordl_internal_get__startCalled() const;

constexpr bool& __cordl_internal_get__startCalled() ;

constexpr void __cordl_internal_set___anchor_k__BackingField(::GlobalNamespace::OVRAnchor  value) ;

constexpr void __cordl_internal_set__creationFailed(bool  value) ;

constexpr void __cordl_internal_set__defaultEraseOptions(::GlobalNamespace::OVRSpatialAnchor_EraseOptions  value) ;

constexpr void __cordl_internal_set__defaultSaveOptions(::GlobalNamespace::OVRSpatialAnchor_SaveOptions  value) ;

constexpr void __cordl_internal_set__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

constexpr void __cordl_internal_set__requestId(uint64_t  value) ;

constexpr void __cordl_internal_set__startCalled(bool  value) ;

/// @brief Method .ctor, addr 0xa647480, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnLocalize, addr 0xa63fe90, size 0xf4, virtual false, abstract: false, final false
inline void add_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

/// [CompilerGenerated]
/// @brief Method add__onLocalize, addr 0xa63fd08, size 0xb0, virtual false, abstract: false, final false
inline void add__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::System::Guid>* getStaticF_AsyncRequestTaskIds() ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* getStaticF_CreationRequests() ;

static inline ::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>* getStaticF_MultiAnchorCompletionDelegates() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* getStaticF_SaveRequests() ;

static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>* getStaticF_ShareRequests() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* getStaticF_SpatialAnchors() ;

/// @brief Method get_Created, addr 0xa63ff84, size 0xe8, virtual false, abstract: false, final false
inline bool get_Created() ;

/// @brief Method get_Localized, addr 0xa640224, size 0xbc, virtual false, abstract: false, final false
inline bool get_Localized() ;

/// @brief Method get_PendingCreation, addr 0xa6400cc, size 0x74, virtual false, abstract: false, final false
inline bool get_PendingCreation() ;

/// @brief Method get_Space, addr 0xa645adc, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSpace get_Space() ;

/// @brief Method get_Uuid, addr 0xa640070, size 0x5c, virtual false, abstract: false, final false
inline ::System::Guid get_Uuid() ;

/// [CompilerGenerated]
/// @brief Method get__anchor, addr 0xa63fe68, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRAnchor get__anchor() ;

/// @brief Method remove_OnLocalize, addr 0xa64006c, size 0x4, virtual false, abstract: false, final false
inline void remove_OnLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove__onLocalize, addr 0xa63fdb8, size 0xb0, virtual false, abstract: false, final false
inline void remove__onLocalize(::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  value) ;

static inline void setStaticF_AsyncRequestTaskIds(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::System::Guid>*  value) ;

static inline void setStaticF_CreationRequests(::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  value) ;

static inline void setStaticF_MultiAnchorCompletionDelegates(::System::Collections::Generic::Dictionary_2<uint64_t,::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair>*  value) ;

static inline void setStaticF_SaveRequests(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace_StorageLocation,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*  value) ;

static inline void setStaticF_ShareRequests(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>>*  value) ;

static inline void setStaticF_SpatialAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set__anchor, addr 0xa63fe7c, size 0x14, virtual false, abstract: false, final false
inline void set__anchor(::GlobalNamespace::OVRAnchor  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSpatialAnchor(OVRSpatialAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSpatialAnchor(OVRSpatialAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12477};

/// @brief Field _startCalled, offset: 0x20, size: 0x1, def value: None
 bool  ____startCalled;

/// @brief Field _requestId, offset: 0x28, size: 0x8, def value: None
 uint64_t  ____requestId;

/// @brief Field _creationFailed, offset: 0x30, size: 0x1, def value: None
 bool  ____creationFailed;

/// [CompilerGenerated]
/// @brief Field _onLocalize, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  ____onLocalize;

/// [CompilerGenerated]
/// @brief Field <_anchor>k__BackingField, offset: 0x40, size: 0x18, def value: None
 ::GlobalNamespace::OVRAnchor  _____anchor_k__BackingField;

/// [Obsolete("See SaveAnchorAsync overload without SaveOptions")]
/// @brief Field _defaultSaveOptions, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::OVRSpatialAnchor_SaveOptions  ____defaultSaveOptions;

/// [Obsolete("See EraseAnchorAsync overload without EraseOptions")]
/// @brief Field _defaultEraseOptions, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::OVRSpatialAnchor_EraseOptions  ____defaultEraseOptions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____startCalled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____requestId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____creationFailed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____onLocalize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, _____anchor_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____defaultSaveOptions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor, ____defaultEraseOptions) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpatialAnchor/<>c__DisplayClass65_0
class CORDL_TYPE OVRSpatialAnchor___c__DisplayClass65_0 : public ::System::Object {
public:
// Declarations
/// @brief Field resultsHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultsHandler, put=__cordl_internal_set_resultsHandler)) ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  resultsHandler;

/// @brief Field unboundAnchors, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_unboundAnchors, put=__cordl_internal_set_unboundAnchors)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors;

static inline ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0* New_ctor() ;

/// @brief Method <LoadUnboundAnchorsAsync>b__0, addr 0xa6483f0, size 0x244, virtual false, abstract: false, final false
inline void _LoadUnboundAnchorsAsync_b__0(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  incrementalResults, int32_t  staringIndex) ;

constexpr ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>* const& __cordl_internal_get_resultsHandler() const;

constexpr ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*& __cordl_internal_get_resultsHandler() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* const& __cordl_internal_get_unboundAnchors() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*& __cordl_internal_get_unboundAnchors() ;

constexpr void __cordl_internal_set_resultsHandler(::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  value) ;

constexpr void __cordl_internal_set_unboundAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  value) ;

/// @brief Method .ctor, addr 0xa6483e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor___c__DisplayClass65_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor___c__DisplayClass65_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSpatialAnchor___c__DisplayClass65_0(OVRSpatialAnchor___c__DisplayClass65_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor___c__DisplayClass65_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSpatialAnchor___c__DisplayClass65_0(OVRSpatialAnchor___c__DisplayClass65_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12470};

/// @brief Field unboundAnchors, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  ___unboundAnchors;

/// @brief Field resultsHandler, offset: 0x18, size: 0x8, def value: None
 ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  ___resultsHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0, ___unboundAnchors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0, ___resultsHandler) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpatialAnchor/<>c
class CORDL_TYPE OVRSpatialAnchor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::OVRSpatialAnchor___c*  __9;

/// @brief Field <>9__33_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__33_0, put=setStaticF___9__33_0)) ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*  __9__33_0;

static inline ::GlobalNamespace::OVRSpatialAnchor___c* New_ctor() ;

/// @brief Method <GetListToStoreTheShareRequest>b__33_0, addr 0xa6483ac, size 0x3c, virtual false, abstract: false, final false
inline int32_t _GetListToStoreTheShareRequest_b__33_0(::GlobalNamespace::OVRSpaceUser  x, ::GlobalNamespace::OVRSpaceUser  y) ;

/// @brief Method .ctor, addr 0xa6483a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OVRSpatialAnchor___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* getStaticF___9__33_0() ;

static inline void setStaticF___9(::GlobalNamespace::OVRSpatialAnchor___c*  value) ;

static inline void setStaticF___9__33_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSpatialAnchor___c(OVRSpatialAnchor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSpatialAnchor___c(OVRSpatialAnchor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12469};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSpatialAnchor/Development
class CORDL_TYPE OVRSpatialAnchor_Development : public ::System::Object {
public:
// Declarations
/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Log, addr 0xa647f7c, size 0x8c, virtual false, abstract: false, final false
static inline void Log(::StringW  message) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogError, addr 0xa648094, size 0x8c, virtual false, abstract: false, final false
static inline void LogError(::StringW  message) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// @brief Method LogRequest, addr 0xa648178, size 0x4, virtual false, abstract: false, final false
static inline void LogRequest(uint64_t  requestId, ::StringW  message) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogRequestOrError, addr 0xa648120, size 0x58, virtual false, abstract: false, final false
static inline void LogRequestOrError(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_Result  result, ::StringW  successMessage, ::StringW  failureMessage) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// @brief Method LogRequestResult, addr 0xa64817c, size 0x4, virtual false, abstract: false, final false
static inline void LogRequestResult(uint64_t  requestId, bool  result, ::StringW  successMessage, ::StringW  failureMessage) ;

/// [Conditional("DEVELOPMENT_BUILD")]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method LogWarning, addr 0xa648008, size 0x8c, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor_Development() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor_Development", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSpatialAnchor_Development(OVRSpatialAnchor_Development && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSpatialAnchor_Development", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSpatialAnchor_Development(OVRSpatialAnchor_Development const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor_Development) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
