#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_StartingMapConfig_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksManager)
namespace GlobalNamespace {
class BuilderTableSerializationConfig;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipUserData;
}
namespace GlobalNamespace {
class SetUserDataResponse;
}
namespace GlobalNamespace {
struct SharedBlocksManager_GetMapDataFromPlayerRequestData;
}
namespace GlobalNamespace {
struct SharedBlocksManager_LocalPublishInfo;
}
namespace GlobalNamespace {
struct SharedBlocksManager_MapSortMethod;
}
namespace GlobalNamespace {
struct SharedBlocksManager_StartingMapConfig;
}
namespace GlobalNamespace {
struct SharedBlocksManager__Start_d__100;
}
namespace GlobalNamespace {
struct SharedBlocksManager__WaitForMothership_d__149;
}
namespace GlobalNamespace {
struct SharedBlocksManager__WaitForPlayfabSessionToken_d__130;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_BlocksMapRequestCallback;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_GetMapDataFromIDRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_GetMapIDFromPlayerRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_GetMapIDFromPlayerResponse;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_GetMapsRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_PublishMapRequestCallback;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_PublishMapRequestData;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_SharedBlocksMapMetaData;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_SharedBlocksMap;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_SharedBlocksRequestBase;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_UpdateMapActiveRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_VoteRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__GetMapDataFromID_d__122;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__GetTopMaps_d__125;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__PostPublishMapRequest_d__120;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__PostUpdateMapActive_d__128;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__PostVote_d__115;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__RetryAfterWaitTime_d__135;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__SendPlayfabUserDataRequest_d__145;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager___c__DisplayClass104_0;
}
namespace PlayFab::ClientModels {
class GetUserDataRequest;
}
namespace PlayFab::ClientModels {
class GetUserDataResult;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
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
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class SharedBlocksManager;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_BlocksMapRequestCallback;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_GetMapDataFromIDRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_GetMapIDFromPlayerRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_GetMapIDFromPlayerResponse;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_GetMapsRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_PublishMapRequestCallback;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_PublishMapRequestData;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_SharedBlocksMap;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_SharedBlocksMapMetaData;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_SharedBlocksRequestBase;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_UpdateMapActiveRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_VoteRequest;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__GetMapDataFromID_d__122;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__GetTopMaps_d__125;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__PostPublishMapRequest_d__120;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__PostUpdateMapActive_d__128;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__PostVote_d__115;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__RetryAfterWaitTime_d__135;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager__SendPlayfabUserDataRequest_d__145;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager___c__DisplayClass104_0;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*);
MARK_REF_T(::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager*, "GorillaTagScripts.Builder", "SharedBlocksManager");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*, "GorillaTagScripts.Builder", "SharedBlocksManager/BlocksMapRequestCallback");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*, "GorillaTagScripts.Builder", "SharedBlocksManager/GetMapDataFromIDRequest");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest*, "GorillaTagScripts.Builder", "SharedBlocksManager/GetMapIDFromPlayerRequest");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse*, "GorillaTagScripts.Builder", "SharedBlocksManager/GetMapIDFromPlayerResponse");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*, "GorillaTagScripts.Builder", "SharedBlocksManager/GetMapsRequest");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*, "GorillaTagScripts.Builder", "SharedBlocksManager/PublishMapRequestCallback");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*, "GorillaTagScripts.Builder", "SharedBlocksManager/PublishMapRequestData");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*, "GorillaTagScripts.Builder", "SharedBlocksManager/SharedBlocksMap");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*, "GorillaTagScripts.Builder", "SharedBlocksManager/SharedBlocksMapMetaData");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase*, "GorillaTagScripts.Builder", "SharedBlocksManager/SharedBlocksRequestBase");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*, "GorillaTagScripts.Builder", "SharedBlocksManager/UpdateMapActiveRequest");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*, "GorillaTagScripts.Builder", "SharedBlocksManager/VoteRequest");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122*, "GorillaTagScripts.Builder", "SharedBlocksManager/<GetMapDataFromID>d__122");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125*, "GorillaTagScripts.Builder", "SharedBlocksManager/<GetTopMaps>d__125");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120*, "GorillaTagScripts.Builder", "SharedBlocksManager/<PostPublishMapRequest>d__120");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128*, "GorillaTagScripts.Builder", "SharedBlocksManager/<PostUpdateMapActive>d__128");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115*, "GorillaTagScripts.Builder", "SharedBlocksManager/<PostVote>d__115");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135*, "GorillaTagScripts.Builder", "SharedBlocksManager/<RetryAfterWaitTime>d__135");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145*, "GorillaTagScripts.Builder", "SharedBlocksManager/<SendPlayfabUserDataRequest>d__145");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0*, "GorillaTagScripts.Builder", "SharedBlocksManager/<>c__DisplayClass104_0");
// Dependencies GorillaTagScripts.Builder.SharedBlocksManager::StartingMapConfig, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager
class CORDL_TYPE SharedBlocksManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GetMapDataFromPlayerRequestData = ::GlobalNamespace::SharedBlocksManager_GetMapDataFromPlayerRequestData;

using LocalPublishInfo = ::GlobalNamespace::SharedBlocksManager_LocalPublishInfo;

using MapSortMethod = ::GlobalNamespace::SharedBlocksManager_MapSortMethod;

using StartingMapConfig = ::GlobalNamespace::SharedBlocksManager_StartingMapConfig;

using _Start_d__100 = ::GlobalNamespace::SharedBlocksManager__Start_d__100;

using _WaitForMothership_d__149 = ::GlobalNamespace::SharedBlocksManager__WaitForMothership_d__149;

using _WaitForPlayfabSessionToken_d__130 = ::GlobalNamespace::SharedBlocksManager__WaitForPlayfabSessionToken_d__130;

using BlocksMapRequestCallback = ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback;

using GetMapDataFromIDRequest = ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest;

using GetMapIDFromPlayerRequest = ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest;

using GetMapIDFromPlayerResponse = ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse;

using GetMapsRequest = ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest;

using PublishMapRequestCallback = ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback;

using PublishMapRequestData = ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData;

using SharedBlocksMap = ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap;

using SharedBlocksMapMetaData = ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData;

using SharedBlocksRequestBase = ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase;

using UpdateMapActiveRequest = ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest;

using VoteRequest = ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest;

using _GetMapDataFromID_d__122 = ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122;

using _GetTopMaps_d__125 = ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125;

using _PostPublishMapRequest_d__120 = ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120;

using _PostUpdateMapActive_d__128 = ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128;

using _PostVote_d__115 = ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115;

using _RetryAfterWaitTime_d__135 = ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135;

using _SendPlayfabUserDataRequest_d__145 = ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145;

using __c__DisplayClass104_0 = ::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0;

 __declspec(property(get=get_BuildData)) ::ArrayW<::StringW>  BuildData;

 __declspec(property(get=get_LatestPopularMaps)) ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  LatestPopularMaps;

/// @brief Field OnFetchPrivateScanComplete, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFetchPrivateScanComplete, put=__cordl_internal_set_OnFetchPrivateScanComplete)) ::System::Action_2<int32_t,bool>*  OnFetchPrivateScanComplete;

/// @brief Field OnFoundDefaultSharedBlocksMap, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFoundDefaultSharedBlocksMap, put=__cordl_internal_set_OnFoundDefaultSharedBlocksMap)) ::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  OnFoundDefaultSharedBlocksMap;

/// @brief Field OnGetPopularMapsComplete, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGetPopularMapsComplete, put=__cordl_internal_set_OnGetPopularMapsComplete)) ::System::Action_1<bool>*  OnGetPopularMapsComplete;

/// @brief Field OnGetTableConfiguration, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGetTableConfiguration, put=__cordl_internal_set_OnGetTableConfiguration)) ::System::Action_1<::StringW>*  OnGetTableConfiguration;

/// @brief Field OnGetTitleDataBuildComplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGetTitleDataBuildComplete, put=__cordl_internal_set_OnGetTitleDataBuildComplete)) ::System::Action_1<::StringW>*  OnGetTitleDataBuildComplete;

/// @brief Field OnRecentMapIdsUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnRecentMapIdsUpdated, put=setStaticF_OnRecentMapIdsUpdated)) ::System::Action*  OnRecentMapIdsUpdated;

/// @brief Field OnSavePrivateScanFailed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSavePrivateScanFailed, put=__cordl_internal_set_OnSavePrivateScanFailed)) ::System::Action_2<int32_t,::StringW>*  OnSavePrivateScanFailed;

/// @brief Field OnSavePrivateScanSuccess, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSavePrivateScanSuccess, put=__cordl_internal_set_OnSavePrivateScanSuccess)) ::System::Action_1<int32_t>*  OnSavePrivateScanSuccess;

/// @brief Field OnSaveTimeUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnSaveTimeUpdated, put=setStaticF_OnSaveTimeUpdated)) ::System::Action*  OnSaveTimeUpdated;

/// @brief Field currentGetScanIndex, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentGetScanIndex, put=__cordl_internal_set_currentGetScanIndex)) int32_t  currentGetScanIndex;

/// @brief Field currentSaveScanData, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentSaveScanData, put=__cordl_internal_set_currentSaveScanData)) ::StringW  currentSaveScanData;

/// @brief Field currentSaveScanIndex, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSaveScanIndex, put=__cordl_internal_set_currentSaveScanIndex)) int32_t  currentSaveScanIndex;

/// @brief Field defaultMap, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMap, put=__cordl_internal_set_defaultMap)) ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  defaultMap;

/// @brief Field defaultMapCacheTime, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMapCacheTime, put=__cordl_internal_set_defaultMapCacheTime)) double_t  defaultMapCacheTime;

/// @brief Field devScanDataCache, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_devScanDataCache, put=__cordl_internal_set_devScanDataCache)) ::StringW  devScanDataCache;

/// @brief Field fetchPlayfabBuildsRetryCount, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_fetchPlayfabBuildsRetryCount, put=__cordl_internal_set_fetchPlayfabBuildsRetryCount)) int32_t  fetchPlayfabBuildsRetryCount;

/// @brief Field fetchTableConfigRetryCount, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fetchTableConfigRetryCount, put=__cordl_internal_set_fetchTableConfigRetryCount)) int32_t  fetchTableConfigRetryCount;

/// @brief Field fetchTitleDataBuildComplete, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_fetchTitleDataBuildComplete, put=__cordl_internal_set_fetchTitleDataBuildComplete)) bool  fetchTitleDataBuildComplete;

/// @brief Field fetchTitleDataBuildInProgress, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_fetchTitleDataBuildInProgress, put=__cordl_internal_set_fetchTitleDataBuildInProgress)) bool  fetchTitleDataBuildInProgress;

/// @brief Field fetchTitleDataRetryCount, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fetchTitleDataRetryCount, put=__cordl_internal_set_fetchTitleDataRetryCount)) int32_t  fetchTitleDataRetryCount;

/// @brief Field fetchedTableConfig, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_fetchedTableConfig, put=__cordl_internal_set_fetchedTableConfig)) bool  fetchedTableConfig;

/// @brief Field getDefaultMapInProgress, offset 0x148, size 0x1 
 __declspec(property(get=__cordl_internal_get_getDefaultMapInProgress, put=__cordl_internal_set_getDefaultMapInProgress)) bool  getDefaultMapInProgress;

/// @brief Field getMapDataFromIDInProgress, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_getMapDataFromIDInProgress, put=__cordl_internal_set_getMapDataFromIDInProgress)) bool  getMapDataFromIDInProgress;

/// @brief Field getMapDataFromIDRetryCount, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_getMapDataFromIDRetryCount, put=__cordl_internal_set_getMapDataFromIDRetryCount)) int32_t  getMapDataFromIDRetryCount;

/// @brief Field getScanInProgress, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_getScanInProgress, put=__cordl_internal_set_getScanInProgress)) bool  getScanInProgress;

/// @brief Field getTopMapsInProgress, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get_getTopMapsInProgress, put=__cordl_internal_set_getTopMapsInProgress)) bool  getTopMapsInProgress;

/// @brief Field getTopMapsRetryCount, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_getTopMapsRetryCount, put=__cordl_internal_set_getTopMapsRetryCount)) int32_t  getTopMapsRetryCount;

/// @brief Field hasCachedTopMaps, offset 0x10c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCachedTopMaps, put=__cordl_internal_set_hasCachedTopMaps)) bool  hasCachedTopMaps;

/// @brief Field hasDefaultMap, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasDefaultMap, put=__cordl_internal_set_hasDefaultMap)) bool  hasDefaultMap;

/// @brief Field hasPulledDevScan, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPulledDevScan, put=__cordl_internal_set_hasPulledDevScan)) bool  hasPulledDevScan;

/// @brief Field hasPulledPrivateScanMothership, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hasPulledPrivateScanMothership, put=__cordl_internal_set_hasPulledPrivateScanMothership)) ::ArrayW<bool>  hasPulledPrivateScanMothership;

/// @brief Field hasPulledPrivateScanPlayfab, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_hasPulledPrivateScanPlayfab, put=__cordl_internal_set_hasPulledPrivateScanPlayfab)) ::ArrayW<bool>  hasPulledPrivateScanPlayfab;

/// @brief Field hasQueriedSaveTime, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasQueriedSaveTime, put=__cordl_internal_set_hasQueriedSaveTime)) bool  hasQueriedSaveTime;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  instance;

/// @brief Field lastGetTopMapsTime, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastGetTopMapsTime, put=__cordl_internal_set_lastGetTopMapsTime)) double_t  lastGetTopMapsTime;

/// @brief Field latestPopularMaps, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_latestPopularMaps, put=__cordl_internal_set_latestPopularMaps)) ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  latestPopularMaps;

/// @brief Field localMapIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localMapIds, put=setStaticF_localMapIds)) ::System::Collections::Generic::List_1<::StringW>*  localMapIds;

/// @brief Field localPublishData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_localPublishData, put=setStaticF_localPublishData)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SharedBlocksManager_LocalPublishInfo>*  localPublishData;

/// @brief Field mapResponseCache, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapResponseCache, put=__cordl_internal_set_mapResponseCache)) ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  mapResponseCache;

/// @brief Field maxRetriesOnFail, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRetriesOnFail, put=__cordl_internal_set_maxRetriesOnFail)) int32_t  maxRetriesOnFail;

/// @brief Field postPublishMapRetryCount, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_postPublishMapRetryCount, put=__cordl_internal_set_postPublishMapRetryCount)) int32_t  postPublishMapRetryCount;

/// @brief Field privateScanDataCache, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_privateScanDataCache, put=__cordl_internal_set_privateScanDataCache)) ::ArrayW<::StringW>  privateScanDataCache;

/// @brief Field publicSlotIndex, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_publicSlotIndex, put=__cordl_internal_set_publicSlotIndex)) int32_t  publicSlotIndex;

/// @brief Field publishRequestInProgress, offset 0xf5, size 0x1 
 __declspec(property(get=__cordl_internal_get_publishRequestInProgress, put=__cordl_internal_set_publishRequestInProgress)) bool  publishRequestInProgress;

/// @brief Field recentUpVotes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_recentUpVotes, put=setStaticF_recentUpVotes)) ::System::Collections::Generic::LinkedList_1<::StringW>*  recentUpVotes;

/// @brief Field saveDateKeys, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_saveDateKeys, put=setStaticF_saveDateKeys)) ::System::Collections::Generic::List_1<::StringW>*  saveDateKeys;

/// @brief Field saveScanInProgress, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveScanInProgress, put=__cordl_internal_set_saveScanInProgress)) bool  saveScanInProgress;

/// @brief Field serializationConfig, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializationConfig, put=__cordl_internal_set_serializationConfig)) ::UnityW<::GlobalNamespace::BuilderTableSerializationConfig>  serializationConfig;

/// @brief Field startingMapConfig, offset 0x68, size 0x20 
 __declspec(property(get=__cordl_internal_get_startingMapConfig, put=__cordl_internal_set_startingMapConfig)) ::GlobalNamespace::SharedBlocksManager_StartingMapConfig  startingMapConfig;

/// @brief Field tableConfigResponse, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_tableConfigResponse, put=__cordl_internal_set_tableConfigResponse)) ::StringW  tableConfigResponse;

/// @brief Field titleDataBuildCache, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataBuildCache, put=__cordl_internal_set_titleDataBuildCache)) ::StringW  titleDataBuildCache;

/// @brief Field updateMapActiveInProgress, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateMapActiveInProgress, put=__cordl_internal_set_updateMapActiveInProgress)) bool  updateMapActiveInProgress;

/// @brief Field updateMapActiveRetryCount, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateMapActiveRetryCount, put=__cordl_internal_set_updateMapActiveRetryCount)) int32_t  updateMapActiveRetryCount;

/// @brief Field voteInProgress, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_voteInProgress, put=__cordl_internal_set_voteInProgress)) bool  voteInProgress;

/// @brief Field voteRetryCount, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_voteRetryCount, put=__cordl_internal_set_voteRetryCount)) int32_t  voteRetryCount;

/// @brief Method AddMapToResponseCache, addr 0x5c376c4, size 0x2d8, virtual false, abstract: false, final false
inline void AddMapToResponseCache(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map) ;

/// @brief Method Awake, addr 0x5c3702c, size 0x1a4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FetchBuildFromPlayfab, addr 0x5c3b220, size 0x268, virtual false, abstract: false, final false
inline void FetchBuildFromPlayfab() ;

/// @brief Method FetchConfigurationFromTitleData, addr 0x5c3a5c0, size 0x124, virtual false, abstract: false, final false
inline void FetchConfigurationFromTitleData() ;

/// @brief Method FetchTitleDataBuild, addr 0x5c3aa30, size 0x168, virtual false, abstract: false, final false
inline void FetchTitleDataBuild() ;

/// @brief Method GetLocalMapIDs, addr 0x5c37b18, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::StringW>* GetLocalMapIDs() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<GetMapDataFromID>d__122))]
/// @brief Method GetMapDataFromID, addr 0x5c39a94, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetMapDataFromID(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*  data, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  callback) ;

/// @brief Method GetMapDataFromIDComplete, addr 0x5c39b58, size 0xdc, virtual false, abstract: false, final false
inline void GetMapDataFromIDComplete(::StringW  mapID, /* [CanBeNull] */ ::StringW  response, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  callback) ;

/// @brief Method GetPlayfabKeyForSlot, addr 0x5c3ae78, size 0x74, virtual false, abstract: false, final false
inline ::StringW GetPlayfabKeyForSlot(int32_t  slot) ;

/// @brief Method GetPlayfabLastSaveTime, addr 0x5c38688, size 0x2b8, virtual false, abstract: false, final false
inline void GetPlayfabLastSaveTime() ;

/// @brief Method GetPlayfabSlotTimeKey, addr 0x5c3aeec, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetPlayfabSlotTimeKey(int32_t  slot) ;

/// @brief Method GetPublishInfoForSlot, addr 0x5c37e2c, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SharedBlocksManager_LocalPublishInfo GetPublishInfoForSlot(int32_t  slot) ;

/// @brief Method GetRecentUpVotes, addr 0x5c37ac0, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::LinkedList_1<::StringW>* GetRecentUpVotes() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<GetTopMaps>d__125))]
/// @brief Method GetTopMaps, addr 0x5c39c3c, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetTopMaps(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*  data, ::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*  callback) ;

/// @brief Method GetTopMapsComplete, addr 0x5c39d00, size 0x4ec, virtual false, abstract: false, final false
inline void GetTopMapsComplete(/* [CanBeNull] */ ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*  maps) ;

/// @brief Method IsMapIDValid, addr 0x5c379a4, size 0x11c, virtual false, abstract: false, final false
static inline bool IsMapIDValid(::StringW  mapID) ;

/// @brief Method IsWaitingOnRequest, addr 0x5c3700c, size 0x20, virtual false, abstract: false, final false
inline bool IsWaitingOnRequest() ;

/// @brief Method LoadPlayerPrefs, addr 0x5c37f2c, size 0x75c, virtual false, abstract: false, final false
inline void LoadPlayerPrefs() ;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c37278, size 0x14c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnFetchBuildFromPlayfabFail, addr 0x5c3b904, size 0x228, virtual false, abstract: false, final false
inline void OnFetchBuildFromPlayfabFail(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnFetchBuildFromPlayfabSuccess, addr 0x5c3b54c, size 0x1f4, virtual false, abstract: false, final false
inline void OnFetchBuildFromPlayfabSuccess(::PlayFab::ClientModels::GetUserDataResult*  result) ;

/// @brief Method OnGetConfigurationFail, addr 0x5c3a7b8, size 0x1d4, virtual false, abstract: false, final false
inline void OnGetConfigurationFail(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnGetConfigurationSuccess, addr 0x5c3a6e4, size 0xd4, virtual false, abstract: false, final false
inline void OnGetConfigurationSuccess(::StringW  dataRecord) ;

/// @brief Method OnGetLastSaveTimeFailure, addr 0x5c3af6c, size 0xc8, virtual false, abstract: false, final false
inline void OnGetLastSaveTimeFailure(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnGetLastSaveTimeSuccess, addr 0x5c3b034, size 0x1ec, virtual false, abstract: false, final false
inline void OnGetLastSaveTimeSuccess(::PlayFab::ClientModels::GetUserDataResult*  result) ;

/// @brief Method OnGetMothershipPrivateScanFail, addr 0x5c3cee0, size 0x1b0, virtual false, abstract: false, final false
inline void OnGetMothershipPrivateScanFail(::GlobalNamespace::MothershipError*  error, int32_t  status) ;

/// @brief Method OnGetMothershipPrivateScanSuccess, addr 0x5c3cbc4, size 0x31c, virtual false, abstract: false, final false
inline void OnGetMothershipPrivateScanSuccess(::GlobalNamespace::MothershipUserData*  response) ;

/// @brief Method OnGetTitleDataBuildFail, addr 0x5c3aca0, size 0x1d8, virtual false, abstract: false, final false
inline void OnGetTitleDataBuildFail(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnGetTitleDataBuildSuccess, addr 0x5c3ab98, size 0x108, virtual false, abstract: false, final false
inline void OnGetTitleDataBuildSuccess(::StringW  dataRecord) ;

/// @brief Method OnJoinedRoom, addr 0x5c373c4, size 0x74, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnSetMothershipDataComplete, addr 0x5c3c87c, size 0x11c, virtual false, abstract: false, final false
inline void OnSetMothershipDataComplete(bool  success) ;

/// @brief Method OnSetMothershipUserDataFail, addr 0x5c3ca48, size 0xf4, virtual false, abstract: false, final false
inline void OnSetMothershipUserDataFail(::GlobalNamespace::MothershipError*  error, int32_t  status) ;

/// @brief Method OnSetMothershipUserDataSuccess, addr 0x5c3c998, size 0xb0, virtual false, abstract: false, final false
inline void OnSetMothershipUserDataSuccess(::GlobalNamespace::SetUserDataResponse*  response) ;

/// @brief Method OnUpdatedMapActiveComplete, addr 0x5c3a4cc, size 0x8, virtual false, abstract: false, final false
inline void OnUpdatedMapActiveComplete(bool  success) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<PostPublishMapRequest>d__120))]
/// @brief Method PostPublishMapRequest, addr 0x5c39790, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PostPublishMapRequest(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*  data, ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*  callback) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<PostUpdateMapActive>d__128))]
/// @brief Method PostUpdateMapActive, addr 0x5c3a408, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PostUpdateMapActive(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*  data, ::System::Action_1<bool>*  callback) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<PostVote>d__115))]
/// @brief Method PostVote, addr 0x5c38cec, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PostVote(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*  data, ::System::Action_2<bool,::StringW>*  callback) ;

/// @brief Method PublishMapComplete, addr 0x5c392a8, size 0x440, virtual false, abstract: false, final false
inline void PublishMapComplete(bool  success, ::StringW  key, /* [CanBeNull] */ ::StringW  mapID, int64_t  response) ;

/// @brief Method PullMothershipPrivateScanThenPush, addr 0x5c3be80, size 0x15c, virtual false, abstract: false, final false
inline void PullMothershipPrivateScanThenPush(int32_t  scanIndex) ;

/// @brief Method PushMothershipPrivateScan, addr 0x5c3c778, size 0x104, virtual false, abstract: false, final false
inline void PushMothershipPrivateScan(int32_t  scan, bool  success) ;

/// @brief Method RefreshPopularMapsForRandom, addr 0x5c37438, size 0xfc, virtual false, abstract: false, final false
inline void RefreshPopularMapsForRandom() ;

/// @brief Method RequestFetchPrivateScan, addr 0x5c3c294, size 0x4e4, virtual false, abstract: false, final false
inline void RequestFetchPrivateScan(int32_t  slot) ;

/// @brief Method RequestGetConfiguredTopMaps, addr 0x5c38db0, size 0xc, virtual false, abstract: false, final false
inline bool RequestGetConfiguredTopMaps() ;

/// @brief Method RequestGetTopMaps, addr 0x5c38dbc, size 0x230, virtual false, abstract: false, final false
inline bool RequestGetTopMaps(int32_t  pageNum, int32_t  pageSize, ::StringW  sort) ;

/// @brief Method RequestMapDataFromID, addr 0x5c3985c, size 0x230, virtual false, abstract: false, final false
inline void RequestMapDataFromID(::StringW  mapID, ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  callback) ;

/// @brief Method RequestPublishMap, addr 0x5c38fec, size 0x2bc, virtual false, abstract: false, final false
inline void RequestPublishMap(::StringW  userMetadataKey) ;

/// @brief Method RequestSavePrivateScan, addr 0x5c3b740, size 0x1c4, virtual false, abstract: false, final false
inline void RequestSavePrivateScan(int32_t  scanIndex, ::StringW  scanData) ;

/// @brief Method RequestSetMothershipUserData, addr 0x5c3bfdc, size 0x2b8, virtual false, abstract: false, final false
inline void RequestSetMothershipUserData(::StringW  keyName, ::StringW  value) ;

/// @brief Method RequestTableConfiguration, addr 0x5c3a598, size 0x28, virtual false, abstract: false, final false
inline void RequestTableConfiguration() ;

/// @brief Method RequestUpdateMapActive, addr 0x5c3a1ec, size 0x214, virtual false, abstract: false, final false
inline void RequestUpdateMapActive(::StringW  userMetadataKey, bool  active) ;

/// @brief Method RequestVote, addr 0x5c38aa8, size 0x23c, virtual false, abstract: false, final false
inline void RequestVote(::StringW  mapID, bool  up, ::System::Action_2<bool,::StringW>*  callback) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<RetryAfterWaitTime>d__135))]
/// @brief Method RetryAfterWaitTime, addr 0x5c3a98c, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RetryAfterWaitTime(float_t  waitTime, ::System::Action*  function) ;

/// @brief Method SaveLocalMapIdsToPlayerPrefs, addr 0x5c389f4, size 0xb4, virtual false, abstract: false, final false
inline void SaveLocalMapIdsToPlayerPrefs() ;

/// @brief Method SaveRecentVotesToPlayerPrefs, addr 0x5c38940, size 0xb4, virtual false, abstract: false, final false
inline void SaveRecentVotesToPlayerPrefs() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<SendPlayfabUserDataRequest>d__145))]
/// @brief Method SendPlayfabUserDataRequest, addr 0x5c3b488, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendPlayfabUserDataRequest(::PlayFab::ClientModels::GetUserDataRequest*  request, ::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback) ;

/// @brief Method SetMapIDAndPublishTimeForSlot, addr 0x5c37d20, size 0x10c, virtual false, abstract: false, final false
static inline void SetMapIDAndPublishTimeForSlot(int32_t  slotID, ::StringW  mapID, ::System::DateTime  time) ;

/// @brief Method SetPublishTimeForSlot, addr 0x5c37b70, size 0x1b0, virtual false, abstract: false, final false
static inline void SetPublishTimeForSlot(int32_t  slotID, ::System::DateTime  time) ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<Start>d__100))]
/// @brief Method Start, addr 0x5c371d0, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetCachedSharedBlocksMapByMapID, addr 0x5c37534, size 0x190, virtual false, abstract: false, final false
inline bool TryGetCachedSharedBlocksMapByMapID(::StringW  mapID, ::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>  result) ;

/// @brief Method TryGetPrivateScanResponse, addr 0x5c3cb3c, size 0x88, virtual false, abstract: false, final false
inline bool TryGetPrivateScanResponse(int32_t  scanSlot, ::by_ref<::StringW>  scanData) ;

/// @brief Method TryGetRandomPopularMap, addr 0x5c3bb2c, size 0x290, virtual false, abstract: false, final false
inline bool TryGetRandomPopularMap(::by_ref<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>  map) ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<WaitForMothership>d__149))]
/// @brief Method WaitForMothership, addr 0x5c3bdbc, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForMothership() ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.Builder.SharedBlocksManager::<WaitForPlayfabSessionToken>d__130))]
/// @brief Method WaitForPlayfabSessionToken, addr 0x5c3a4d4, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForPlayfabSessionToken() ;

constexpr ::System::Action_2<int32_t,bool>* const& __cordl_internal_get_OnFetchPrivateScanComplete() const;

constexpr ::System::Action_2<int32_t,bool>*& __cordl_internal_get_OnFetchPrivateScanComplete() ;

constexpr ::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* const& __cordl_internal_get_OnFoundDefaultSharedBlocksMap() const;

constexpr ::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*& __cordl_internal_get_OnFoundDefaultSharedBlocksMap() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_OnGetPopularMapsComplete() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_OnGetPopularMapsComplete() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnGetTableConfiguration() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnGetTableConfiguration() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_OnGetTitleDataBuildComplete() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_OnGetTitleDataBuildComplete() ;

constexpr ::System::Action_2<int32_t,::StringW>* const& __cordl_internal_get_OnSavePrivateScanFailed() const;

constexpr ::System::Action_2<int32_t,::StringW>*& __cordl_internal_get_OnSavePrivateScanFailed() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnSavePrivateScanSuccess() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnSavePrivateScanSuccess() ;

constexpr int32_t const& __cordl_internal_get_currentGetScanIndex() const;

constexpr int32_t& __cordl_internal_get_currentGetScanIndex() ;

constexpr ::StringW const& __cordl_internal_get_currentSaveScanData() const;

constexpr ::StringW& __cordl_internal_get_currentSaveScanData() ;

constexpr int32_t const& __cordl_internal_get_currentSaveScanIndex() const;

constexpr int32_t& __cordl_internal_get_currentSaveScanIndex() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& __cordl_internal_get_defaultMap() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& __cordl_internal_get_defaultMap() ;

constexpr double_t const& __cordl_internal_get_defaultMapCacheTime() const;

constexpr double_t& __cordl_internal_get_defaultMapCacheTime() ;

constexpr ::StringW const& __cordl_internal_get_devScanDataCache() const;

constexpr ::StringW& __cordl_internal_get_devScanDataCache() ;

constexpr int32_t const& __cordl_internal_get_fetchPlayfabBuildsRetryCount() const;

constexpr int32_t& __cordl_internal_get_fetchPlayfabBuildsRetryCount() ;

constexpr int32_t const& __cordl_internal_get_fetchTableConfigRetryCount() const;

constexpr int32_t& __cordl_internal_get_fetchTableConfigRetryCount() ;

constexpr bool const& __cordl_internal_get_fetchTitleDataBuildComplete() const;

constexpr bool& __cordl_internal_get_fetchTitleDataBuildComplete() ;

constexpr bool const& __cordl_internal_get_fetchTitleDataBuildInProgress() const;

constexpr bool& __cordl_internal_get_fetchTitleDataBuildInProgress() ;

constexpr int32_t const& __cordl_internal_get_fetchTitleDataRetryCount() const;

constexpr int32_t& __cordl_internal_get_fetchTitleDataRetryCount() ;

constexpr bool const& __cordl_internal_get_fetchedTableConfig() const;

constexpr bool& __cordl_internal_get_fetchedTableConfig() ;

constexpr bool const& __cordl_internal_get_getDefaultMapInProgress() const;

constexpr bool& __cordl_internal_get_getDefaultMapInProgress() ;

constexpr bool const& __cordl_internal_get_getMapDataFromIDInProgress() const;

constexpr bool& __cordl_internal_get_getMapDataFromIDInProgress() ;

constexpr int32_t const& __cordl_internal_get_getMapDataFromIDRetryCount() const;

constexpr int32_t& __cordl_internal_get_getMapDataFromIDRetryCount() ;

constexpr bool const& __cordl_internal_get_getScanInProgress() const;

constexpr bool& __cordl_internal_get_getScanInProgress() ;

constexpr bool const& __cordl_internal_get_getTopMapsInProgress() const;

constexpr bool& __cordl_internal_get_getTopMapsInProgress() ;

constexpr int32_t const& __cordl_internal_get_getTopMapsRetryCount() const;

constexpr int32_t& __cordl_internal_get_getTopMapsRetryCount() ;

constexpr bool const& __cordl_internal_get_hasCachedTopMaps() const;

constexpr bool& __cordl_internal_get_hasCachedTopMaps() ;

constexpr bool const& __cordl_internal_get_hasDefaultMap() const;

constexpr bool& __cordl_internal_get_hasDefaultMap() ;

constexpr bool const& __cordl_internal_get_hasPulledDevScan() const;

constexpr bool& __cordl_internal_get_hasPulledDevScan() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_hasPulledPrivateScanMothership() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_hasPulledPrivateScanMothership() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_hasPulledPrivateScanPlayfab() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_hasPulledPrivateScanPlayfab() ;

constexpr bool const& __cordl_internal_get_hasQueriedSaveTime() const;

constexpr bool& __cordl_internal_get_hasQueriedSaveTime() ;

constexpr double_t const& __cordl_internal_get_lastGetTopMapsTime() const;

constexpr double_t& __cordl_internal_get_lastGetTopMapsTime() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* const& __cordl_internal_get_latestPopularMaps() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*& __cordl_internal_get_latestPopularMaps() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* const& __cordl_internal_get_mapResponseCache() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*& __cordl_internal_get_mapResponseCache() ;

constexpr int32_t const& __cordl_internal_get_maxRetriesOnFail() const;

constexpr int32_t& __cordl_internal_get_maxRetriesOnFail() ;

constexpr int32_t const& __cordl_internal_get_postPublishMapRetryCount() const;

constexpr int32_t& __cordl_internal_get_postPublishMapRetryCount() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_privateScanDataCache() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_privateScanDataCache() ;

constexpr int32_t const& __cordl_internal_get_publicSlotIndex() const;

constexpr int32_t& __cordl_internal_get_publicSlotIndex() ;

constexpr bool const& __cordl_internal_get_publishRequestInProgress() const;

constexpr bool& __cordl_internal_get_publishRequestInProgress() ;

constexpr bool const& __cordl_internal_get_saveScanInProgress() const;

constexpr bool& __cordl_internal_get_saveScanInProgress() ;

constexpr ::UnityW<::GlobalNamespace::BuilderTableSerializationConfig> const& __cordl_internal_get_serializationConfig() const;

constexpr ::UnityW<::GlobalNamespace::BuilderTableSerializationConfig>& __cordl_internal_get_serializationConfig() ;

constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig const& __cordl_internal_get_startingMapConfig() const;

constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig& __cordl_internal_get_startingMapConfig() ;

constexpr ::StringW const& __cordl_internal_get_tableConfigResponse() const;

constexpr ::StringW& __cordl_internal_get_tableConfigResponse() ;

constexpr ::StringW const& __cordl_internal_get_titleDataBuildCache() const;

constexpr ::StringW& __cordl_internal_get_titleDataBuildCache() ;

constexpr bool const& __cordl_internal_get_updateMapActiveInProgress() const;

constexpr bool& __cordl_internal_get_updateMapActiveInProgress() ;

constexpr int32_t const& __cordl_internal_get_updateMapActiveRetryCount() const;

constexpr int32_t& __cordl_internal_get_updateMapActiveRetryCount() ;

constexpr bool const& __cordl_internal_get_voteInProgress() const;

constexpr bool& __cordl_internal_get_voteInProgress() ;

constexpr int32_t const& __cordl_internal_get_voteRetryCount() const;

constexpr int32_t& __cordl_internal_get_voteRetryCount() ;

constexpr void __cordl_internal_set_OnFetchPrivateScanComplete(::System::Action_2<int32_t,bool>*  value) ;

constexpr void __cordl_internal_set_OnFoundDefaultSharedBlocksMap(::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value) ;

constexpr void __cordl_internal_set_OnGetPopularMapsComplete(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnGetTableConfiguration(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnGetTitleDataBuildComplete(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSavePrivateScanFailed(::System::Action_2<int32_t,::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSavePrivateScanSuccess(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_currentGetScanIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentSaveScanData(::StringW  value) ;

constexpr void __cordl_internal_set_currentSaveScanIndex(int32_t  value) ;

constexpr void __cordl_internal_set_defaultMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value) ;

constexpr void __cordl_internal_set_defaultMapCacheTime(double_t  value) ;

constexpr void __cordl_internal_set_devScanDataCache(::StringW  value) ;

constexpr void __cordl_internal_set_fetchPlayfabBuildsRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_fetchTableConfigRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_fetchTitleDataBuildComplete(bool  value) ;

constexpr void __cordl_internal_set_fetchTitleDataBuildInProgress(bool  value) ;

constexpr void __cordl_internal_set_fetchTitleDataRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_fetchedTableConfig(bool  value) ;

constexpr void __cordl_internal_set_getDefaultMapInProgress(bool  value) ;

constexpr void __cordl_internal_set_getMapDataFromIDInProgress(bool  value) ;

constexpr void __cordl_internal_set_getMapDataFromIDRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_getScanInProgress(bool  value) ;

constexpr void __cordl_internal_set_getTopMapsInProgress(bool  value) ;

constexpr void __cordl_internal_set_getTopMapsRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_hasCachedTopMaps(bool  value) ;

constexpr void __cordl_internal_set_hasDefaultMap(bool  value) ;

constexpr void __cordl_internal_set_hasPulledDevScan(bool  value) ;

constexpr void __cordl_internal_set_hasPulledPrivateScanMothership(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_hasPulledPrivateScanPlayfab(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_hasQueriedSaveTime(bool  value) ;

constexpr void __cordl_internal_set_lastGetTopMapsTime(double_t  value) ;

constexpr void __cordl_internal_set_latestPopularMaps(::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value) ;

constexpr void __cordl_internal_set_mapResponseCache(::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value) ;

constexpr void __cordl_internal_set_maxRetriesOnFail(int32_t  value) ;

constexpr void __cordl_internal_set_postPublishMapRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_privateScanDataCache(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_publicSlotIndex(int32_t  value) ;

constexpr void __cordl_internal_set_publishRequestInProgress(bool  value) ;

constexpr void __cordl_internal_set_saveScanInProgress(bool  value) ;

constexpr void __cordl_internal_set_serializationConfig(::UnityW<::GlobalNamespace::BuilderTableSerializationConfig>  value) ;

constexpr void __cordl_internal_set_startingMapConfig(::GlobalNamespace::SharedBlocksManager_StartingMapConfig  value) ;

constexpr void __cordl_internal_set_tableConfigResponse(::StringW  value) ;

constexpr void __cordl_internal_set_titleDataBuildCache(::StringW  value) ;

constexpr void __cordl_internal_set_updateMapActiveInProgress(bool  value) ;

constexpr void __cordl_internal_set_updateMapActiveRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_voteInProgress(bool  value) ;

constexpr void __cordl_internal_set_voteRetryCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c3d090, size 0x278, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnFetchPrivateScanComplete, addr 0x5c3686c, size 0xb0, virtual false, abstract: false, final false
inline void add_OnFetchPrivateScanComplete(::System::Action_2<int32_t,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnFoundDefaultSharedBlocksMap, addr 0x5c369cc, size 0xb0, virtual false, abstract: false, final false
inline void add_OnFoundDefaultSharedBlocksMap(::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGetPopularMapsComplete, addr 0x5c36b2c, size 0xb0, virtual false, abstract: false, final false
inline void add_OnGetPopularMapsComplete(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGetTableConfiguration, addr 0x5c362ec, size 0xb0, virtual false, abstract: false, final false
inline void add_OnGetTableConfiguration(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnGetTitleDataBuildComplete, addr 0x5c3644c, size 0xb0, virtual false, abstract: false, final false
inline void add_OnGetTitleDataBuildComplete(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecentMapIdsUpdated, addr 0x5c36c8c, size 0xdc, virtual false, abstract: false, final false
static inline void add_OnRecentMapIdsUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSavePrivateScanFailed, addr 0x5c3670c, size 0xb0, virtual false, abstract: false, final false
inline void add_OnSavePrivateScanFailed(::System::Action_2<int32_t,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSavePrivateScanSuccess, addr 0x5c365ac, size 0xb0, virtual false, abstract: false, final false
inline void add_OnSavePrivateScanSuccess(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSaveTimeUpdated, addr 0x5c36e44, size 0xdc, virtual false, abstract: false, final false
static inline void add_OnSaveTimeUpdated(::System::Action*  value) ;

static inline ::System::Action* getStaticF_OnRecentMapIdsUpdated() ;

static inline ::System::Action* getStaticF_OnSaveTimeUpdated() ;

static inline ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> getStaticF_instance() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_localMapIds() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SharedBlocksManager_LocalPublishInfo>* getStaticF_localPublishData() ;

static inline ::System::Collections::Generic::LinkedList_1<::StringW>* getStaticF_recentUpVotes() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_saveDateKeys() ;

/// @brief Method get_BuildData, addr 0x5c37004, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_BuildData() ;

/// @brief Method get_LatestPopularMaps, addr 0x5c36ffc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* get_LatestPopularMaps() ;

/// [CompilerGenerated]
/// @brief Method remove_OnFetchPrivateScanComplete, addr 0x5c3691c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnFetchPrivateScanComplete(::System::Action_2<int32_t,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnFoundDefaultSharedBlocksMap, addr 0x5c36a7c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnFoundDefaultSharedBlocksMap(::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGetPopularMapsComplete, addr 0x5c36bdc, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnGetPopularMapsComplete(::System::Action_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGetTableConfiguration, addr 0x5c3639c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnGetTableConfiguration(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnGetTitleDataBuildComplete, addr 0x5c364fc, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnGetTitleDataBuildComplete(::System::Action_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecentMapIdsUpdated, addr 0x5c36d68, size 0xdc, virtual false, abstract: false, final false
static inline void remove_OnRecentMapIdsUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSavePrivateScanFailed, addr 0x5c367bc, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnSavePrivateScanFailed(::System::Action_2<int32_t,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSavePrivateScanSuccess, addr 0x5c3665c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnSavePrivateScanSuccess(::System::Action_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSaveTimeUpdated, addr 0x5c36f20, size 0xdc, virtual false, abstract: false, final false
static inline void remove_OnSaveTimeUpdated(::System::Action*  value) ;

static inline void setStaticF_OnRecentMapIdsUpdated(::System::Action*  value) ;

static inline void setStaticF_OnSaveTimeUpdated(::System::Action*  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value) ;

static inline void setStaticF_localMapIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_localPublishData(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::SharedBlocksManager_LocalPublishInfo>*  value) ;

static inline void setStaticF_recentUpVotes(::System::Collections::Generic::LinkedList_1<::StringW>*  value) ;

static inline void setStaticF_saveDateKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager(SharedBlocksManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager(SharedBlocksManager const& ) = delete;

/// @brief Field MAP_ID_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  MAP_ID_LENGTH{static_cast<int32_t>(0x8)};

/// @brief Field MAP_ID_PATTERN offset 0xffffffff size 0x8
static constexpr ::ConstString  MAP_ID_PATTERN{u"^[CFGHKMNPRTWXZ256789]+$"};

/// @brief Field MINIMUM_REFRESH_DELAY offset 0xffffffff size 0x4
static constexpr float_t  MINIMUM_REFRESH_DELAY{static_cast<float_t>(60.0f)};

/// @brief Field NUM_CACHED_MAP_RESULTS offset 0xffffffff size 0x4
static constexpr int32_t  NUM_CACHED_MAP_RESULTS{static_cast<int32_t>(0x5)};

/// @brief Field VOTE_HISTORY_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  VOTE_HISTORY_LENGTH{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4212};

/// [CompilerGenerated]
/// @brief Field OnGetTableConfiguration, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnGetTableConfiguration;

/// [CompilerGenerated]
/// @brief Field OnGetTitleDataBuildComplete, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___OnGetTitleDataBuildComplete;

/// [CompilerGenerated]
/// @brief Field OnSavePrivateScanSuccess, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnSavePrivateScanSuccess;

/// [CompilerGenerated]
/// @brief Field OnSavePrivateScanFailed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<int32_t,::StringW>*  ___OnSavePrivateScanFailed;

/// [CompilerGenerated]
/// @brief Field OnFetchPrivateScanComplete, offset: 0x40, size: 0x8, def value: None
 ::System::Action_2<int32_t,bool>*  ___OnFetchPrivateScanComplete;

/// [CompilerGenerated]
/// @brief Field OnFoundDefaultSharedBlocksMap, offset: 0x48, size: 0x8, def value: None
 ::System::Action_2<bool,::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  ___OnFoundDefaultSharedBlocksMap;

/// [CompilerGenerated]
/// @brief Field OnGetPopularMapsComplete, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___OnGetPopularMapsComplete;

/// [SerializeField]
/// @brief Field serializationConfig, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderTableSerializationConfig>  ___serializationConfig;

/// @brief Field maxRetriesOnFail, offset: 0x60, size: 0x4, def value: None
 int32_t  ___maxRetriesOnFail;

/// @brief Field startingMapConfig, offset: 0x68, size: 0x20, def value: None
 ::GlobalNamespace::SharedBlocksManager_StartingMapConfig  ___startingMapConfig;

/// @brief Field hasQueriedSaveTime, offset: 0x88, size: 0x1, def value: None
 bool  ___hasQueriedSaveTime;

/// @brief Field fetchedTableConfig, offset: 0x89, size: 0x1, def value: None
 bool  ___fetchedTableConfig;

/// @brief Field fetchTableConfigRetryCount, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___fetchTableConfigRetryCount;

/// @brief Field tableConfigResponse, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___tableConfigResponse;

/// @brief Field fetchTitleDataBuildInProgress, offset: 0x98, size: 0x1, def value: None
 bool  ___fetchTitleDataBuildInProgress;

/// @brief Field fetchTitleDataBuildComplete, offset: 0x99, size: 0x1, def value: None
 bool  ___fetchTitleDataBuildComplete;

/// @brief Field fetchTitleDataRetryCount, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___fetchTitleDataRetryCount;

/// @brief Field titleDataBuildCache, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___titleDataBuildCache;

/// @brief Field hasPulledPrivateScanPlayfab, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<bool>  ___hasPulledPrivateScanPlayfab;

/// @brief Field fetchPlayfabBuildsRetryCount, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___fetchPlayfabBuildsRetryCount;

/// @brief Field publicSlotIndex, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___publicSlotIndex;

/// @brief Field privateScanDataCache, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___privateScanDataCache;

/// @brief Field hasPulledPrivateScanMothership, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<bool>  ___hasPulledPrivateScanMothership;

/// @brief Field hasPulledDevScan, offset: 0xc8, size: 0x1, def value: None
 bool  ___hasPulledDevScan;

/// @brief Field devScanDataCache, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___devScanDataCache;

/// @brief Field saveScanInProgress, offset: 0xd8, size: 0x1, def value: None
 bool  ___saveScanInProgress;

/// @brief Field currentSaveScanIndex, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___currentSaveScanIndex;

/// @brief Field currentSaveScanData, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___currentSaveScanData;

/// @brief Field getScanInProgress, offset: 0xe8, size: 0x1, def value: None
 bool  ___getScanInProgress;

/// @brief Field currentGetScanIndex, offset: 0xec, size: 0x4, def value: None
 int32_t  ___currentGetScanIndex;

/// @brief Field voteRetryCount, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___voteRetryCount;

/// @brief Field voteInProgress, offset: 0xf4, size: 0x1, def value: None
 bool  ___voteInProgress;

/// @brief Field publishRequestInProgress, offset: 0xf5, size: 0x1, def value: None
 bool  ___publishRequestInProgress;

/// @brief Field postPublishMapRetryCount, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___postPublishMapRetryCount;

/// @brief Field getMapDataFromIDInProgress, offset: 0xfc, size: 0x1, def value: None
 bool  ___getMapDataFromIDInProgress;

/// @brief Field getMapDataFromIDRetryCount, offset: 0x100, size: 0x4, def value: None
 int32_t  ___getMapDataFromIDRetryCount;

/// @brief Field getTopMapsInProgress, offset: 0x104, size: 0x1, def value: None
 bool  ___getTopMapsInProgress;

/// @brief Field getTopMapsRetryCount, offset: 0x108, size: 0x4, def value: None
 int32_t  ___getTopMapsRetryCount;

/// @brief Field hasCachedTopMaps, offset: 0x10c, size: 0x1, def value: None
 bool  ___hasCachedTopMaps;

/// @brief Field lastGetTopMapsTime, offset: 0x110, size: 0x8, def value: None
 double_t  ___lastGetTopMapsTime;

/// @brief Field updateMapActiveInProgress, offset: 0x118, size: 0x1, def value: None
 bool  ___updateMapActiveInProgress;

/// @brief Field updateMapActiveRetryCount, offset: 0x11c, size: 0x4, def value: None
 int32_t  ___updateMapActiveRetryCount;

/// @brief Field latestPopularMaps, offset: 0x120, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  ___latestPopularMaps;

/// @brief Field mapResponseCache, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  ___mapResponseCache;

/// @brief Field defaultMap, offset: 0x130, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  ___defaultMap;

/// @brief Field hasDefaultMap, offset: 0x138, size: 0x1, def value: None
 bool  ___hasDefaultMap;

/// @brief Field defaultMapCacheTime, offset: 0x140, size: 0x8, def value: None
 double_t  ___defaultMapCacheTime;

/// @brief Field getDefaultMapInProgress, offset: 0x148, size: 0x1, def value: None
 bool  ___getDefaultMapInProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___OnGetTableConfiguration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___OnGetTitleDataBuildComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___OnSavePrivateScanSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___OnSavePrivateScanFailed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___OnFetchPrivateScanComplete) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___OnFoundDefaultSharedBlocksMap) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___OnGetPopularMapsComplete) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___serializationConfig) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___maxRetriesOnFail) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___startingMapConfig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___hasQueriedSaveTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___fetchedTableConfig) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___fetchTableConfigRetryCount) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___tableConfigResponse) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___fetchTitleDataBuildInProgress) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___fetchTitleDataBuildComplete) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___fetchTitleDataRetryCount) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___titleDataBuildCache) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___hasPulledPrivateScanPlayfab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___fetchPlayfabBuildsRetryCount) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___publicSlotIndex) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___privateScanDataCache) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___hasPulledPrivateScanMothership) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___hasPulledDevScan) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___devScanDataCache) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___saveScanInProgress) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___currentSaveScanIndex) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___currentSaveScanData) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___getScanInProgress) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___currentGetScanIndex) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___voteRetryCount) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___voteInProgress) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___publishRequestInProgress) == 0xf5, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___postPublishMapRetryCount) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___getMapDataFromIDInProgress) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___getMapDataFromIDRetryCount) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___getTopMapsInProgress) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___getTopMapsRetryCount) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___hasCachedTopMaps) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___lastGetTopMapsTime) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___updateMapActiveInProgress) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___updateMapActiveRetryCount) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___latestPopularMaps) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___mapResponseCache) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___defaultMap) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___hasDefaultMap) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___defaultMapCacheTime) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager, ___getDefaultMapInProgress) == 0x148, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager) == 0x150, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/<SendPlayfabUserDataRequest>d__145
class CORDL_TYPE SharedBlocksManager__SendPlayfabUserDataRequest_d__145 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field errorCallback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorCallback, put=__cordl_internal_set_errorCallback)) ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::PlayFab::ClientModels::GetUserDataRequest*  request;

/// @brief Field resultCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultCallback, put=__cordl_internal_set_resultCallback)) ::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*  resultCallback;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c3f3cc, size 0x1fc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c3f5c8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c3f5d0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c3f608, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c3f3c8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& __cordl_internal_get_errorCallback() const;

constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& __cordl_internal_get_errorCallback() ;

constexpr ::PlayFab::ClientModels::GetUserDataRequest* const& __cordl_internal_get_request() const;

constexpr ::PlayFab::ClientModels::GetUserDataRequest*& __cordl_internal_get_request() ;

constexpr ::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>* const& __cordl_internal_get_resultCallback() const;

constexpr ::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*& __cordl_internal_get_resultCallback() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_errorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

constexpr void __cordl_internal_set_request(::PlayFab::ClientModels::GetUserDataRequest*  value) ;

constexpr void __cordl_internal_set_resultCallback(::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c3b524, size 0x28, virtual false, abstract: false, final false
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
constexpr SharedBlocksManager__SendPlayfabUserDataRequest_d__145() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__SendPlayfabUserDataRequest_d__145", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager__SendPlayfabUserDataRequest_d__145(SharedBlocksManager__SendPlayfabUserDataRequest_d__145 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__SendPlayfabUserDataRequest_d__145", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager__SendPlayfabUserDataRequest_d__145(SharedBlocksManager__SendPlayfabUserDataRequest_d__145 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4208};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetUserDataRequest*  ___request;

/// @brief Field resultCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::PlayFab::ClientModels::GetUserDataResult*>*  ___resultCallback;

/// @brief Field errorCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::PlayFab::PlayFabError*>*  ___errorCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145, ___request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145, ___resultCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145, ___errorCallback) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager__SendPlayfabUserDataRequest_d__145) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/<RetryAfterWaitTime>d__135
class CORDL_TYPE SharedBlocksManager__RetryAfterWaitTime_d__135 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field function, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_function, put=__cordl_internal_set_function)) ::System::Action*  function;

/// @brief Field waitTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitTime, put=__cordl_internal_set_waitTime)) float_t  waitTime;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c3f2c0, size 0xc0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c3f380, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c3f388, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c3f3c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c3f2bc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::System::Action* const& __cordl_internal_get_function() const;

constexpr ::System::Action*& __cordl_internal_get_function() ;

constexpr float_t const& __cordl_internal_get_waitTime() const;

constexpr float_t& __cordl_internal_get_waitTime() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_function(::System::Action*  value) ;

constexpr void __cordl_internal_set_waitTime(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c3aa08, size 0x28, virtual false, abstract: false, final false
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
constexpr SharedBlocksManager__RetryAfterWaitTime_d__135() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__RetryAfterWaitTime_d__135", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager__RetryAfterWaitTime_d__135(SharedBlocksManager__RetryAfterWaitTime_d__135 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__RetryAfterWaitTime_d__135", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager__RetryAfterWaitTime_d__135(SharedBlocksManager__RetryAfterWaitTime_d__135 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4207};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field waitTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___waitTime;

/// @brief Field function, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___function;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135, ___waitTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135, ___function) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager__RetryAfterWaitTime_d__135) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/<PostVote>d__115
class CORDL_TYPE SharedBlocksManager__PostVote_d__115 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_2<bool,::StringW>*  callback;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c3ebd8, size 0x69c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c3f274, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c3f27c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c3f2b4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c3ebd4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_2<bool,::StringW>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_2<bool,::StringW>*& __cordl_internal_get_callback() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest* const& __cordl_internal_get_data() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_2<bool,::StringW>*  value) ;

constexpr void __cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c38d88, size 0x28, virtual false, abstract: false, final false
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
constexpr SharedBlocksManager__PostVote_d__115() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__PostVote_d__115", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager__PostVote_d__115(SharedBlocksManager__PostVote_d__115 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__PostVote_d__115", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager__PostVote_d__115(SharedBlocksManager__PostVote_d__115 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4206};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest*  ___data;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<bool,::StringW>*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager__PostVote_d__115) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/<PostUpdateMapActive>d__128
class CORDL_TYPE SharedBlocksManager__PostUpdateMapActive_d__128 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<bool>*  callback;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c3e7dc, size 0x3b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c3eb8c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c3eb94, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c3ebcc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c3e7d8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_callback() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest* const& __cordl_internal_get_data() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c3a4a4, size 0x28, virtual false, abstract: false, final false
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
constexpr SharedBlocksManager__PostUpdateMapActive_d__128() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__PostUpdateMapActive_d__128", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager__PostUpdateMapActive_d__128(SharedBlocksManager__PostUpdateMapActive_d__128 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__PostUpdateMapActive_d__128", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager__PostUpdateMapActive_d__128(SharedBlocksManager__PostUpdateMapActive_d__128 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4205};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest*  ___data;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager__PostUpdateMapActive_d__128) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/<PostPublishMapRequest>d__120
class CORDL_TYPE SharedBlocksManager__PostPublishMapRequest_d__120 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*  callback;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c3e0e4, size 0x6ac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c3e790, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c3e798, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c3e7d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c3e0e0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback* const& __cordl_internal_get_callback() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*& __cordl_internal_get_callback() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData* const& __cordl_internal_get_data() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*  value) ;

constexpr void __cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c39834, size 0x28, virtual false, abstract: false, final false
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
constexpr SharedBlocksManager__PostPublishMapRequest_d__120() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__PostPublishMapRequest_d__120", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager__PostPublishMapRequest_d__120(SharedBlocksManager__PostPublishMapRequest_d__120 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__PostPublishMapRequest_d__120", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager__PostPublishMapRequest_d__120(SharedBlocksManager__PostPublishMapRequest_d__120 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4204};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData*  ___data;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager__PostPublishMapRequest_d__120) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/<GetTopMaps>d__125
class CORDL_TYPE SharedBlocksManager__GetTopMaps_d__125 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*  callback;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c3dbf4, size 0x4a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c3e098, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c3e0a0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c3e0d8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c3dbf0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*& __cordl_internal_get_callback() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest* const& __cordl_internal_get_data() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*  value) ;

constexpr void __cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c39cd8, size 0x28, virtual false, abstract: false, final false
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
constexpr SharedBlocksManager__GetTopMaps_d__125() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__GetTopMaps_d__125", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager__GetTopMaps_d__125(SharedBlocksManager__GetTopMaps_d__125 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__GetTopMaps_d__125", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager__GetTopMaps_d__125(SharedBlocksManager__GetTopMaps_d__125 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4203};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest*  ___data;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*>*>*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager__GetTopMaps_d__125) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/<GetMapDataFromID>d__122
class CORDL_TYPE SharedBlocksManager__GetMapDataFromID_d__122 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  callback;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c3d774, size 0x434, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c3dba8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c3dbb0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c3dbe8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c3d770, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback* const& __cordl_internal_get_callback() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*& __cordl_internal_get_callback() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest* const& __cordl_internal_get_data() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  value) ;

constexpr void __cordl_internal_set_data(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c39b30, size 0x28, virtual false, abstract: false, final false
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
constexpr SharedBlocksManager__GetMapDataFromID_d__122() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__GetMapDataFromID_d__122", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager__GetMapDataFromID_d__122(SharedBlocksManager__GetMapDataFromID_d__122 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager__GetMapDataFromID_d__122", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager__GetMapDataFromID_d__122(SharedBlocksManager__GetMapDataFromID_d__122 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4202};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksManager>  _____4__this;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest*  ___data;

/// @brief Field callback, offset: 0x30, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback*  ___callback;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122, ___callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager__GetMapDataFromID_d__122) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/<>c__DisplayClass104_0
class CORDL_TYPE SharedBlocksManager___c__DisplayClass104_0 : public ::System::Object {
public:
// Declarations
/// @brief Field map, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_map, put=__cordl_internal_set_map)) ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0* New_ctor() ;

/// @brief Method <AddMapToResponseCache>b__0, addr 0x5c3d744, size 0x2c, virtual false, abstract: false, final false
inline bool _AddMapToResponseCache_b__0(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  x) ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& __cordl_internal_get_map() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& __cordl_internal_get_map() ;

constexpr void __cordl_internal_set_map(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value) ;

/// @brief Method .ctor, addr 0x5c3799c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager___c__DisplayClass104_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager___c__DisplayClass104_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager___c__DisplayClass104_0(SharedBlocksManager___c__DisplayClass104_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager___c__DisplayClass104_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager___c__DisplayClass104_0(SharedBlocksManager___c__DisplayClass104_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4201};

/// @brief Field map, offset: 0x10, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  ___map;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0, ___map) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager___c__DisplayClass104_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies System.MulticastDelegate
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/BlocksMapRequestCallback
class CORDL_TYPE SharedBlocksManager_BlocksMapRequestCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c3d718, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  response, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c3d738, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c3d704, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  response) ;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c3d5fc, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_BlocksMapRequestCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_BlocksMapRequestCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_BlocksMapRequestCallback(SharedBlocksManager_BlocksMapRequestCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_BlocksMapRequestCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_BlocksMapRequestCallback(SharedBlocksManager_BlocksMapRequestCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4200};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_BlocksMapRequestCallback) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies System.MulticastDelegate
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/PublishMapRequestCallback
class CORDL_TYPE SharedBlocksManager_PublishMapRequestCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5c3d560, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  success, ::StringW  key, ::StringW  mapID, int64_t  responseCode, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5c3d5f0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5c3d54c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(bool  success, ::StringW  key, ::StringW  mapID, int64_t  responseCode) ;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5c396f0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_PublishMapRequestCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_PublishMapRequestCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_PublishMapRequestCallback(SharedBlocksManager_PublishMapRequestCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_PublishMapRequestCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_PublishMapRequestCallback(SharedBlocksManager_PublishMapRequestCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4199};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestCallback) == 0x80, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies GorillaTagScripts.Builder.SharedBlocksManager::SharedBlocksRequestBase
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/UpdateMapActiveRequest
class CORDL_TYPE SharedBlocksManager_UpdateMapActiveRequest : public ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase {
public:
// Declarations
/// @brief Field setActive, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_setActive, put=__cordl_internal_set_setActive)) bool  setActive;

/// @brief Field userdataMetadataKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_userdataMetadataKey, put=__cordl_internal_set_userdataMetadataKey)) ::StringW  userdataMetadataKey;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest* New_ctor() ;

constexpr bool const& __cordl_internal_get_setActive() const;

constexpr bool& __cordl_internal_get_setActive() ;

constexpr ::StringW const& __cordl_internal_get_userdataMetadataKey() const;

constexpr ::StringW& __cordl_internal_get_userdataMetadataKey() ;

constexpr void __cordl_internal_set_setActive(bool  value) ;

constexpr void __cordl_internal_set_userdataMetadataKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c3a400, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_UpdateMapActiveRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_UpdateMapActiveRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_UpdateMapActiveRequest(SharedBlocksManager_UpdateMapActiveRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_UpdateMapActiveRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_UpdateMapActiveRequest(SharedBlocksManager_UpdateMapActiveRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4198};

/// @brief Field userdataMetadataKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___userdataMetadataKey;

/// @brief Field setActive, offset: 0x30, size: 0x1, def value: None
 bool  ___setActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest, ___userdataMetadataKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest, ___setActive) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_UpdateMapActiveRequest) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/SharedBlocksMapMetaData
class CORDL_TYPE SharedBlocksManager_SharedBlocksMapMetaData : public ::System::Object {
public:
// Declarations
/// @brief Field createdTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_createdTime, put=__cordl_internal_set_createdTime)) ::StringW  createdTime;

/// @brief Field isActive, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field mapId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapId, put=__cordl_internal_set_mapId)) ::StringW  mapId;

/// @brief Field mothershipId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipId, put=__cordl_internal_set_mothershipId)) ::StringW  mothershipId;

/// @brief Field nickname, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nickname, put=__cordl_internal_set_nickname)) ::StringW  nickname;

/// @brief Field updatedTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_updatedTime, put=__cordl_internal_set_updatedTime)) ::StringW  updatedTime;

/// @brief Field userDataMetadataKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_userDataMetadataKey, put=__cordl_internal_set_userDataMetadataKey)) ::StringW  userDataMetadataKey;

/// @brief Field voteCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_voteCount, put=__cordl_internal_set_voteCount)) int32_t  voteCount;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_createdTime() const;

constexpr ::StringW& __cordl_internal_get_createdTime() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr ::StringW const& __cordl_internal_get_mapId() const;

constexpr ::StringW& __cordl_internal_get_mapId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipId() const;

constexpr ::StringW& __cordl_internal_get_mothershipId() ;

constexpr ::StringW const& __cordl_internal_get_nickname() const;

constexpr ::StringW& __cordl_internal_get_nickname() ;

constexpr ::StringW const& __cordl_internal_get_updatedTime() const;

constexpr ::StringW& __cordl_internal_get_updatedTime() ;

constexpr ::StringW const& __cordl_internal_get_userDataMetadataKey() const;

constexpr ::StringW& __cordl_internal_get_userDataMetadataKey() ;

constexpr int32_t const& __cordl_internal_get_voteCount() const;

constexpr int32_t& __cordl_internal_get_voteCount() ;

constexpr void __cordl_internal_set_createdTime(::StringW  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_mapId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_nickname(::StringW  value) ;

constexpr void __cordl_internal_set_updatedTime(::StringW  value) ;

constexpr void __cordl_internal_set_userDataMetadataKey(::StringW  value) ;

constexpr void __cordl_internal_set_voteCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c3d544, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_SharedBlocksMapMetaData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_SharedBlocksMapMetaData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_SharedBlocksMapMetaData(SharedBlocksManager_SharedBlocksMapMetaData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_SharedBlocksMapMetaData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_SharedBlocksMapMetaData(SharedBlocksManager_SharedBlocksMapMetaData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4196};

/// @brief Field mapId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___mapId;

/// @brief Field mothershipId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___mothershipId;

/// @brief Field userDataMetadataKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___userDataMetadataKey;

/// @brief Field nickname, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___nickname;

/// @brief Field createdTime, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___createdTime;

/// @brief Field updatedTime, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___updatedTime;

/// @brief Field voteCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___voteCount;

/// @brief Field isActive, offset: 0x44, size: 0x1, def value: None
 bool  ___isActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData, ___mapId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData, ___mothershipId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData, ___userDataMetadataKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData, ___nickname) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData, ___createdTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData, ___updatedTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData, ___voteCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData, ___isActive) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/GetMapIDFromPlayerResponse
class CORDL_TYPE SharedBlocksManager_GetMapIDFromPlayerResponse : public ::System::Object {
public:
// Declarations
/// @brief Field error, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::StringW  error;

/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*  result;

/// @brief Field statusCode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_statusCode, put=__cordl_internal_set_statusCode)) int32_t  statusCode;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_error() const;

constexpr ::StringW& __cordl_internal_get_error() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData* const& __cordl_internal_get_result() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*& __cordl_internal_get_result() ;

constexpr int32_t const& __cordl_internal_get_statusCode() const;

constexpr int32_t& __cordl_internal_get_statusCode() ;

constexpr void __cordl_internal_set_error(::StringW  value) ;

constexpr void __cordl_internal_set_result(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*  value) ;

constexpr void __cordl_internal_set_statusCode(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c3d53c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_GetMapIDFromPlayerResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_GetMapIDFromPlayerResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_GetMapIDFromPlayerResponse(SharedBlocksManager_GetMapIDFromPlayerResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_GetMapIDFromPlayerResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_GetMapIDFromPlayerResponse(SharedBlocksManager_GetMapIDFromPlayerResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4195};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMapMetaData*  ___result;

/// @brief Field statusCode, offset: 0x18, size: 0x4, def value: None
 int32_t  ___statusCode;

/// @brief Field error, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse, ___result) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse, ___statusCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse, ___error) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerResponse) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies GorillaTagScripts.Builder.SharedBlocksManager::SharedBlocksRequestBase
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/GetMapIDFromPlayerRequest
class CORDL_TYPE SharedBlocksManager_GetMapIDFromPlayerRequest : public ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase {
public:
// Declarations
/// @brief Field requestId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestId, put=__cordl_internal_set_requestId)) ::StringW  requestId;

/// @brief Field requestUserDataMetaKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestUserDataMetaKey, put=__cordl_internal_set_requestUserDataMetaKey)) ::StringW  requestUserDataMetaKey;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_requestId() const;

constexpr ::StringW& __cordl_internal_get_requestId() ;

constexpr ::StringW const& __cordl_internal_get_requestUserDataMetaKey() const;

constexpr ::StringW& __cordl_internal_get_requestUserDataMetaKey() ;

constexpr void __cordl_internal_set_requestId(::StringW  value) ;

constexpr void __cordl_internal_set_requestUserDataMetaKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c3d534, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_GetMapIDFromPlayerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_GetMapIDFromPlayerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_GetMapIDFromPlayerRequest(SharedBlocksManager_GetMapIDFromPlayerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_GetMapIDFromPlayerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_GetMapIDFromPlayerRequest(SharedBlocksManager_GetMapIDFromPlayerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4194};

/// @brief Field requestId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___requestId;

/// @brief Field requestUserDataMetaKey, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___requestUserDataMetaKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest, ___requestId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest, ___requestUserDataMetaKey) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapIDFromPlayerRequest) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies GorillaTagScripts.Builder.SharedBlocksManager::SharedBlocksRequestBase
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/GetMapDataFromIDRequest
class CORDL_TYPE SharedBlocksManager_GetMapDataFromIDRequest : public ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase {
public:
// Declarations
/// @brief Field mapId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapId, put=__cordl_internal_set_mapId)) ::StringW  mapId;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_mapId() const;

constexpr ::StringW& __cordl_internal_get_mapId() ;

constexpr void __cordl_internal_set_mapId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c39a8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_GetMapDataFromIDRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_GetMapDataFromIDRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_GetMapDataFromIDRequest(SharedBlocksManager_GetMapDataFromIDRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_GetMapDataFromIDRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_GetMapDataFromIDRequest(SharedBlocksManager_GetMapDataFromIDRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4193};

/// @brief Field mapId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___mapId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest, ___mapId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapDataFromIDRequest) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies GorillaTagScripts.Builder.SharedBlocksManager::SharedBlocksRequestBase
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/GetMapsRequest
class CORDL_TYPE SharedBlocksManager_GetMapsRequest : public ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase {
public:
// Declarations
/// @brief Field ShowInactive, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShowInactive, put=__cordl_internal_set_ShowInactive)) bool  ShowInactive;

/// @brief Field page, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_page, put=__cordl_internal_set_page)) int32_t  page;

/// @brief Field pageSize, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pageSize, put=__cordl_internal_set_pageSize)) int32_t  pageSize;

/// @brief Field sort, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sort, put=__cordl_internal_set_sort)) ::StringW  sort;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest* New_ctor() ;

constexpr bool const& __cordl_internal_get_ShowInactive() const;

constexpr bool& __cordl_internal_get_ShowInactive() ;

constexpr int32_t const& __cordl_internal_get_page() const;

constexpr int32_t& __cordl_internal_get_page() ;

constexpr int32_t const& __cordl_internal_get_pageSize() const;

constexpr int32_t& __cordl_internal_get_pageSize() ;

constexpr ::StringW const& __cordl_internal_get_sort() const;

constexpr ::StringW& __cordl_internal_get_sort() ;

constexpr void __cordl_internal_set_ShowInactive(bool  value) ;

constexpr void __cordl_internal_set_page(int32_t  value) ;

constexpr void __cordl_internal_set_pageSize(int32_t  value) ;

constexpr void __cordl_internal_set_sort(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c39c34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_GetMapsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_GetMapsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_GetMapsRequest(SharedBlocksManager_GetMapsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_GetMapsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_GetMapsRequest(SharedBlocksManager_GetMapsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4192};

/// @brief Field page, offset: 0x28, size: 0x4, def value: None
 int32_t  ___page;

/// @brief Field pageSize, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___pageSize;

/// @brief Field sort, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___sort;

/// @brief Field ShowInactive, offset: 0x38, size: 0x1, def value: None
 bool  ___ShowInactive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest, ___page) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest, ___pageSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest, ___sort) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest, ___ShowInactive) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_GetMapsRequest) == 0x40, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies GorillaTagScripts.Builder.SharedBlocksManager::SharedBlocksRequestBase
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/PublishMapRequestData
class CORDL_TYPE SharedBlocksManager_PublishMapRequestData : public ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase {
public:
// Declarations
/// @brief Field playerNickname, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNickname, put=__cordl_internal_set_playerNickname)) ::StringW  playerNickname;

/// @brief Field userdataMetadataKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_userdataMetadataKey, put=__cordl_internal_set_userdataMetadataKey)) ::StringW  userdataMetadataKey;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_playerNickname() const;

constexpr ::StringW& __cordl_internal_get_playerNickname() ;

constexpr ::StringW const& __cordl_internal_get_userdataMetadataKey() const;

constexpr ::StringW& __cordl_internal_get_userdataMetadataKey() ;

constexpr void __cordl_internal_set_playerNickname(::StringW  value) ;

constexpr void __cordl_internal_set_userdataMetadataKey(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c396e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_PublishMapRequestData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_PublishMapRequestData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_PublishMapRequestData(SharedBlocksManager_PublishMapRequestData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_PublishMapRequestData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_PublishMapRequestData(SharedBlocksManager_PublishMapRequestData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4189};

/// @brief Field userdataMetadataKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___userdataMetadataKey;

/// @brief Field playerNickname, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___playerNickname;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData, ___userdataMetadataKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData, ___playerNickname) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_PublishMapRequestData) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies GorillaTagScripts.Builder.SharedBlocksManager::SharedBlocksRequestBase
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/VoteRequest
class CORDL_TYPE SharedBlocksManager_VoteRequest : public ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase {
public:
// Declarations
/// @brief Field mapId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapId, put=__cordl_internal_set_mapId)) ::StringW  mapId;

/// @brief Field vote, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_vote, put=__cordl_internal_set_vote)) int32_t  vote;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_mapId() const;

constexpr ::StringW& __cordl_internal_get_mapId() ;

constexpr int32_t const& __cordl_internal_get_vote() const;

constexpr int32_t& __cordl_internal_get_vote() ;

constexpr void __cordl_internal_set_mapId(::StringW  value) ;

constexpr void __cordl_internal_set_vote(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c38ce4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_VoteRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_VoteRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_VoteRequest(SharedBlocksManager_VoteRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_VoteRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_VoteRequest(SharedBlocksManager_VoteRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4188};

/// @brief Field mapId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___mapId;

/// @brief Field vote, offset: 0x30, size: 0x4, def value: None
 int32_t  ___vote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest, ___mapId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest, ___vote) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_VoteRequest) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/SharedBlocksRequestBase
class CORDL_TYPE SharedBlocksManager_SharedBlocksRequestBase : public ::System::Object {
public:
// Declarations
/// @brief Field mothershipEnvId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipEnvId, put=__cordl_internal_set_mothershipEnvId)) ::StringW  mothershipEnvId;

/// @brief Field mothershipId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipId, put=__cordl_internal_set_mothershipId)) ::StringW  mothershipId;

/// @brief Field mothershipToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipToken, put=__cordl_internal_set_mothershipToken)) ::StringW  mothershipToken;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_mothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_mothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipId() const;

constexpr ::StringW& __cordl_internal_get_mothershipId() ;

constexpr ::StringW const& __cordl_internal_get_mothershipToken() const;

constexpr ::StringW& __cordl_internal_get_mothershipToken() ;

constexpr void __cordl_internal_set_mothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_mothershipToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c3d52c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_SharedBlocksRequestBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_SharedBlocksRequestBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_SharedBlocksRequestBase(SharedBlocksManager_SharedBlocksRequestBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_SharedBlocksRequestBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_SharedBlocksRequestBase(SharedBlocksManager_SharedBlocksRequestBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4187};

/// @brief Field mothershipId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___mothershipId;

/// @brief Field mothershipToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___mothershipToken;

/// @brief Field mothershipEnvId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___mothershipEnvId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase, ___mothershipId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase, ___mothershipToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase, ___mothershipEnvId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksRequestBase) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// Dependencies System.DateTime, System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.SharedBlocksManager/SharedBlocksMap
class CORDL_TYPE SharedBlocksManager_SharedBlocksMap : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CreateTime, put=set_CreateTime)) ::System::DateTime  CreateTime;

 __declspec(property(get=get_CreatorID, put=set_CreatorID)) ::StringW  CreatorID;

 __declspec(property(get=get_CreatorNickName, put=set_CreatorNickName)) ::StringW  CreatorNickName;

 __declspec(property(get=get_MapData, put=set_MapData)) ::StringW  MapData;

 __declspec(property(get=get_MapID, put=set_MapID)) ::StringW  MapID;

 __declspec(property(get=get_UpdateTime, put=set_UpdateTime)) ::System::DateTime  UpdateTime;

/// @brief Field <CreateTime>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__CreateTime_k__BackingField, put=__cordl_internal_set__CreateTime_k__BackingField)) ::System::DateTime  _CreateTime_k__BackingField;

/// @brief Field <CreatorID>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CreatorID_k__BackingField, put=__cordl_internal_set__CreatorID_k__BackingField)) ::StringW  _CreatorID_k__BackingField;

/// @brief Field <CreatorNickName>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__CreatorNickName_k__BackingField, put=__cordl_internal_set__CreatorNickName_k__BackingField)) ::StringW  _CreatorNickName_k__BackingField;

/// @brief Field <MapData>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__MapData_k__BackingField, put=__cordl_internal_set__MapData_k__BackingField)) ::StringW  _MapData_k__BackingField;

/// @brief Field <MapID>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__MapID_k__BackingField, put=__cordl_internal_set__MapID_k__BackingField)) ::StringW  _MapID_k__BackingField;

/// @brief Field <UpdateTime>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateTime_k__BackingField, put=__cordl_internal_set__UpdateTime_k__BackingField)) ::System::DateTime  _UpdateTime_k__BackingField;

static inline ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get__CreateTime_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__CreateTime_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__CreatorID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CreatorID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__CreatorNickName_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CreatorNickName_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MapData_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MapData_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__MapID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__MapID_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__UpdateTime_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__UpdateTime_k__BackingField() ;

constexpr void __cordl_internal_set__CreateTime_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__CreatorID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__CreatorNickName_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MapData_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__MapID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UpdateTime_k__BackingField(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0x5c3982c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CreateTime, addr 0x5c3d4fc, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_CreateTime() ;

/// [CompilerGenerated]
/// @brief Method get_CreatorID, addr 0x5c3d4dc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CreatorID() ;

/// [CompilerGenerated]
/// @brief Method get_CreatorNickName, addr 0x5c3d4ec, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CreatorNickName() ;

/// [CompilerGenerated]
/// @brief Method get_MapData, addr 0x5c3d51c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MapData() ;

/// [CompilerGenerated]
/// @brief Method get_MapID, addr 0x5c3d4cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_MapID() ;

/// [CompilerGenerated]
/// @brief Method get_UpdateTime, addr 0x5c3d50c, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_UpdateTime() ;

/// [CompilerGenerated]
/// @brief Method set_CreateTime, addr 0x5c3d504, size 0x8, virtual false, abstract: false, final false
inline void set_CreateTime(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_CreatorID, addr 0x5c3d4e4, size 0x8, virtual false, abstract: false, final false
inline void set_CreatorID(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_CreatorNickName, addr 0x5c3d4f4, size 0x8, virtual false, abstract: false, final false
inline void set_CreatorNickName(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MapData, addr 0x5c3d524, size 0x8, virtual false, abstract: false, final false
inline void set_MapData(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_MapID, addr 0x5c3d4d4, size 0x8, virtual false, abstract: false, final false
inline void set_MapID(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_UpdateTime, addr 0x5c3d514, size 0x8, virtual false, abstract: false, final false
inline void set_UpdateTime(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksManager_SharedBlocksMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_SharedBlocksMap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedBlocksManager_SharedBlocksMap(SharedBlocksManager_SharedBlocksMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedBlocksManager_SharedBlocksMap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedBlocksManager_SharedBlocksMap(SharedBlocksManager_SharedBlocksMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4185};

/// [CompilerGenerated]
/// @brief Field <MapID>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____MapID_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CreatorID>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____CreatorID_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CreatorNickName>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____CreatorNickName_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CreateTime>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ____CreateTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UpdateTime>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ____UpdateTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MapData>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____MapData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap, ____MapID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap, ____CreatorID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap, ____CreatorNickName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap, ____CreateTime_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap, ____UpdateTime_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap, ____MapData_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap) == 0x40, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
