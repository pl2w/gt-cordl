#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionController)
namespace GlobalNamespace {
class ProgressionController_GetQuestStatusResponse;
}
namespace GlobalNamespace {
class ProgressionController_GetQuestsStatusRequest;
}
namespace GlobalNamespace {
class ProgressionController_SetQuestCompleteRequest;
}
namespace GlobalNamespace {
class ProgressionController_SetQuestCompleteResponse;
}
namespace GlobalNamespace {
class ProgressionController_UserQuestsStatus;
}
namespace GlobalNamespace {
class ProgressionController__DoFetchStatus_d__39;
}
namespace GlobalNamespace {
class ProgressionController__DoSendQuestComplete_d__46;
}
namespace GlobalNamespace {
struct ProgressionController__ReportProgress_d__71;
}
namespace GlobalNamespace {
struct ProgressionController__RequestProgressRedemption_d__66;
}
namespace GlobalNamespace {
struct ProgressionController__RequestStatus_d__36;
}
namespace GlobalNamespace {
struct ProgressionController__WaitForSessionToken_d__37;
}
namespace GlobalNamespace {
class RotatingQuestsManager;
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
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressionController;
}
namespace GlobalNamespace {
class ProgressionController_GetQuestStatusResponse;
}
namespace GlobalNamespace {
class ProgressionController_GetQuestsStatusRequest;
}
namespace GlobalNamespace {
class ProgressionController_SetQuestCompleteRequest;
}
namespace GlobalNamespace {
class ProgressionController_SetQuestCompleteResponse;
}
namespace GlobalNamespace {
class ProgressionController_UserQuestsStatus;
}
namespace GlobalNamespace {
class ProgressionController__DoFetchStatus_d__39;
}
namespace GlobalNamespace {
class ProgressionController__DoSendQuestComplete_d__46;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProgressionController*);
MARK_REF_T(::GlobalNamespace::ProgressionController_GetQuestStatusResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*);
MARK_REF_T(::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*);
MARK_REF_T(::GlobalNamespace::ProgressionController_UserQuestsStatus*);
MARK_REF_T(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*);
MARK_REF_T(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionController*, "", "ProgressionController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionController_GetQuestStatusResponse*, "", "ProgressionController/GetQuestStatusResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*, "", "ProgressionController/GetQuestsStatusRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*, "", "ProgressionController/SetQuestCompleteRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*, "", "ProgressionController/SetQuestCompleteResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionController_UserQuestsStatus*, "", "ProgressionController/UserQuestsStatus");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39*, "", "ProgressionController/<DoFetchStatus>d__39");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46*, "", "ProgressionController/<DoSendQuestComplete>d__46");
// Dependencies System.ValueTuple`3<T1, T2, T3>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionController
class CORDL_TYPE ProgressionController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GetQuestStatusResponse = ::GlobalNamespace::ProgressionController_GetQuestStatusResponse;

using GetQuestsStatusRequest = ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest;

using SetQuestCompleteRequest = ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest;

using SetQuestCompleteResponse = ::GlobalNamespace::ProgressionController_SetQuestCompleteResponse;

using UserQuestsStatus = ::GlobalNamespace::ProgressionController_UserQuestsStatus;

using _DoFetchStatus_d__39 = ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39;

using _DoSendQuestComplete_d__46 = ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46;

using _ReportProgress_d__71 = ::GlobalNamespace::ProgressionController__ReportProgress_d__71;

using _RequestProgressRedemption_d__66 = ::GlobalNamespace::ProgressionController__RequestProgressRedemption_d__66;

using _RequestStatus_d__36 = ::GlobalNamespace::ProgressionController__RequestStatus_d__36;

using _WaitForSessionToken_d__37 = ::GlobalNamespace::ProgressionController__WaitForSessionToken_d__37;

/// @brief Field OnProgressEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnProgressEvent, put=setStaticF_OnProgressEvent)) ::System::Action*  OnProgressEvent;

/// @brief Field OnQuestSelectionChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnQuestSelectionChanged, put=setStaticF_OnQuestSelectionChanged)) ::System::Action*  OnQuestSelectionChanged;

/// @brief Field <WeeklyCap>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeeklyCap_k__BackingField, put=setStaticF__WeeklyCap_k__BackingField)) int32_t  _WeeklyCap_k__BackingField;

/// @brief Field _currentlyProcessingQuest, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentlyProcessingQuest, put=__cordl_internal_set__currentlyProcessingQuest)) int32_t  _currentlyProcessingQuest;

/// @brief Field _fetchStatusRetryCount, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__fetchStatusRetryCount, put=__cordl_internal_set__fetchStatusRetryCount)) int32_t  _fetchStatusRetryCount;

/// @brief Field _gInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gInstance, put=setStaticF__gInstance)) ::UnityW<::GlobalNamespace::ProgressionController>  _gInstance;

/// @brief Field _isFetchingStatus, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFetchingStatus, put=__cordl_internal_set__isFetchingStatus)) bool  _isFetchingStatus;

/// @brief Field _isSendingQuestComplete, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSendingQuestComplete, put=__cordl_internal_set__isSendingQuestComplete)) bool  _isSendingQuestComplete;

/// @brief Field _lastProgressReport, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get__lastProgressReport, put=__cordl_internal_set__lastProgressReport)) ::System::ValueTuple_3<int32_t,int32_t,int32_t>  _lastProgressReport;

/// @brief Field _maxRetriesOnFail, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxRetriesOnFail, put=__cordl_internal_set__maxRetriesOnFail)) int32_t  _maxRetriesOnFail;

/// @brief Field _progressReportPending, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__progressReportPending, put=__cordl_internal_set__progressReportPending)) bool  _progressReportPending;

/// @brief Field _questManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__questManager, put=__cordl_internal_set__questManager)) ::UnityW<::GlobalNamespace::RotatingQuestsManager>  _questManager;

/// @brief Field _queuedDailyCompletedQuests, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__queuedDailyCompletedQuests, put=__cordl_internal_set__queuedDailyCompletedQuests)) ::System::Collections::Generic::List_1<int32_t>*  _queuedDailyCompletedQuests;

/// @brief Field _queuedWeeklyCompletedQuests, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__queuedWeeklyCompletedQuests, put=__cordl_internal_set__queuedWeeklyCompletedQuests)) ::System::Collections::Generic::List_1<int32_t>*  _queuedWeeklyCompletedQuests;

/// @brief Field _sendQuestCompleteRetryCount, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__sendQuestCompleteRetryCount, put=__cordl_internal_set__sendQuestCompleteRetryCount)) int32_t  _sendQuestCompleteRetryCount;

/// @brief Field _statusReceived, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__statusReceived, put=__cordl_internal_set__statusReceived)) bool  _statusReceived;

/// @brief Field totalPointsRaw, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalPointsRaw, put=__cordl_internal_set_totalPointsRaw)) int32_t  totalPointsRaw;

/// @brief Field unclaimedPoints, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_unclaimedPoints, put=__cordl_internal_set_unclaimedPoints)) int32_t  unclaimedPoints;

/// @brief Field weeklyPoints, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_weeklyPoints, put=__cordl_internal_set_weeklyPoints)) int32_t  weeklyPoints;

/// @brief Method AddPoints, addr 0x562a294, size 0x124, virtual false, abstract: false, final false
inline void AddPoints(int32_t  points) ;

/// @brief Method AreCompletedQuestsQueued, addr 0x562a0a8, size 0x6c, virtual false, abstract: false, final false
inline bool AreCompletedQuestsQueued() ;

/// @brief Method Awake, addr 0x56290c4, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearQuestQueue, addr 0x562a114, size 0x70, virtual false, abstract: false, final false
inline void ClearQuestQueue() ;

/// [IteratorStateMachine(typeof(ProgressionController::<DoFetchStatus>d__39))]
/// @brief Method DoFetchStatus, addr 0x562950c, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoFetchStatus(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*  callback) ;

/// [IteratorStateMachine(typeof(ProgressionController::<DoSendQuestComplete>d__46))]
/// @brief Method DoSendQuestComplete, addr 0x5629b7c, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoSendQuestComplete(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*  data, ::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*  callback) ;

/// @brief Method FetchStatus, addr 0x56293b0, size 0x154, virtual false, abstract: false, final false
inline void FetchStatus() ;

/// @brief Method GetProgress, addr 0x5628fac, size 0x70, virtual false, abstract: false, final false
inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> GetProgress() ;

/// @brief Method GetProgressionData, addr 0x5624f6c, size 0x68, virtual false, abstract: false, final false
static inline ::System::ValueTuple_3<int32_t,int32_t,int32_t> GetProgressionData() ;

/// @brief Method LoadCompletedQuestQueue, addr 0x5628b6c, size 0x31c, virtual false, abstract: false, final false
inline void LoadCompletedQuestQueue() ;

static inline ::GlobalNamespace::ProgressionController* New_ctor() ;

/// @brief Method OnFetchStatusResponse, addr 0x56295d0, size 0xcc, virtual false, abstract: false, final false
inline void OnFetchStatusResponse(/* [CanBeNull] */ ::GlobalNamespace::ProgressionController_GetQuestStatusResponse*  response) ;

/// @brief Method OnProgressRedeemed, addr 0x562a23c, size 0x58, virtual false, abstract: false, final false
inline void OnProgressRedeemed() ;

/// @brief Method OnQuestComplete, addr 0x5628f00, size 0x4, virtual false, abstract: false, final false
inline void OnQuestComplete(int32_t  questId, bool  isDaily) ;

/// @brief Method OnQuestProgressChanged, addr 0x5628adc, size 0x4, virtual false, abstract: false, final false
inline void OnQuestProgressChanged(bool  initialLoad) ;

/// @brief Method OnSendQuestCompleteSuccess, addr 0x5629c40, size 0x6c, virtual false, abstract: false, final false
inline void OnSendQuestCompleteSuccess(/* [CanBeNull] */ ::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*  response) ;

/// @brief Method ProcessQuestSubmittedFail, addr 0x562a230, size 0xc, virtual false, abstract: false, final false
inline void ProcessQuestSubmittedFail() ;

/// @brief Method ProcessQuestSubmittedSuccess, addr 0x562a184, size 0xac, virtual false, abstract: false, final false
inline void ProcessQuestSubmittedSuccess() ;

/// @brief Method QueueQuestCompletion, addr 0x5629cc4, size 0xc8, virtual false, abstract: false, final false
inline void QueueQuestCompletion(int32_t  questId, bool  isDaily) ;

/// @brief Method RedeemProgress, addr 0x5625aa8, size 0xb0, virtual false, abstract: false, final false
static inline void RedeemProgress() ;

/// [AsyncStateMachine(typeof(ProgressionController::<ReportProgress>d__71))]
/// @brief Method ReportProgress, addr 0x562901c, size 0xa8, virtual false, abstract: false, final false
inline void ReportProgress() ;

/// @brief Method ReportQuestChanged, addr 0x5628a7c, size 0x60, virtual false, abstract: false, final false
static inline void ReportQuestChanged(bool  initialLoad) ;

/// @brief Method ReportQuestComplete, addr 0x5628e88, size 0x78, virtual false, abstract: false, final false
static inline void ReportQuestComplete(int32_t  questId, bool  isDaily) ;

/// @brief Method ReportQuestSelectionChanged, addr 0x5628ae0, size 0x8c, virtual false, abstract: false, final false
static inline void ReportQuestSelectionChanged() ;

/// @brief Method ReportScoreChange, addr 0x562a3b8, size 0x1d4, virtual false, abstract: false, final false
inline void ReportScoreChange() ;

/// [AsyncStateMachine(typeof(ProgressionController::<RequestProgressRedemption>d__66))]
/// @brief Method RequestProgressRedemption, addr 0x5628f04, size 0xa8, virtual false, abstract: false, final false
inline void RequestProgressRedemption(::System::Action*  onComplete) ;

/// @brief Method RequestProgressUpdate, addr 0x5624704, size 0x68, virtual false, abstract: false, final false
static inline void RequestProgressUpdate() ;

/// [AsyncStateMachine(typeof(ProgressionController::<RequestStatus>d__36))]
/// @brief Method RequestStatus, addr 0x5629244, size 0xa8, virtual false, abstract: false, final false
inline void RequestStatus() ;

/// @brief Method SaveCompletedQuestQueue, addr 0x5629d8c, size 0x250, virtual false, abstract: false, final false
inline void SaveCompletedQuestQueue() ;

/// @brief Method SendQuestCompleted, addr 0x56299b0, size 0x18, virtual false, abstract: false, final false
inline void SendQuestCompleted(int32_t  questId) ;

/// @brief Method SetProgressionValues, addr 0x5629938, size 0x78, virtual false, abstract: false, final false
inline void SetProgressionValues(int32_t  weekly, int32_t  unclaimed, int32_t  totalRaw) ;

/// @brief Method StartSendQuestComplete, addr 0x56299c8, size 0x1ac, virtual false, abstract: false, final false
inline void StartSendQuestComplete(int32_t  questId) ;

/// @brief Method SubmitNextQuestInQueue, addr 0x5629fdc, size 0xcc, virtual false, abstract: false, final false
inline void SubmitNextQuestInQueue() ;

/// @brief Method UpdateProgressionValues, addr 0x5629cac, size 0x18, virtual false, abstract: false, final false
inline void UpdateProgressionValues(int32_t  weekly, int32_t  totalRaw) ;

/// [AsyncStateMachine(typeof(ProgressionController::<WaitForSessionToken>d__37))]
/// @brief Method WaitForSessionToken, addr 0x56292ec, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForSessionToken() ;

/// [CompilerGenerated]
/// @brief Method <RequestStatus>g__ShouldFetchStatus|36_0, addr 0x562a694, size 0x20, virtual false, abstract: false, final false
inline bool _RequestStatus_g__ShouldFetchStatus_36_0() ;

constexpr int32_t const& __cordl_internal_get__currentlyProcessingQuest() const;

constexpr int32_t& __cordl_internal_get__currentlyProcessingQuest() ;

constexpr int32_t const& __cordl_internal_get__fetchStatusRetryCount() const;

constexpr int32_t& __cordl_internal_get__fetchStatusRetryCount() ;

constexpr bool const& __cordl_internal_get__isFetchingStatus() const;

constexpr bool& __cordl_internal_get__isFetchingStatus() ;

constexpr bool const& __cordl_internal_get__isSendingQuestComplete() const;

constexpr bool& __cordl_internal_get__isSendingQuestComplete() ;

constexpr ::System::ValueTuple_3<int32_t,int32_t,int32_t> const& __cordl_internal_get__lastProgressReport() const;

constexpr ::System::ValueTuple_3<int32_t,int32_t,int32_t>& __cordl_internal_get__lastProgressReport() ;

constexpr int32_t const& __cordl_internal_get__maxRetriesOnFail() const;

constexpr int32_t& __cordl_internal_get__maxRetriesOnFail() ;

constexpr bool const& __cordl_internal_get__progressReportPending() const;

constexpr bool& __cordl_internal_get__progressReportPending() ;

constexpr ::UnityW<::GlobalNamespace::RotatingQuestsManager> const& __cordl_internal_get__questManager() const;

constexpr ::UnityW<::GlobalNamespace::RotatingQuestsManager>& __cordl_internal_get__questManager() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__queuedDailyCompletedQuests() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__queuedDailyCompletedQuests() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__queuedWeeklyCompletedQuests() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__queuedWeeklyCompletedQuests() ;

constexpr int32_t const& __cordl_internal_get__sendQuestCompleteRetryCount() const;

constexpr int32_t& __cordl_internal_get__sendQuestCompleteRetryCount() ;

constexpr bool const& __cordl_internal_get__statusReceived() const;

constexpr bool& __cordl_internal_get__statusReceived() ;

constexpr int32_t const& __cordl_internal_get_totalPointsRaw() const;

constexpr int32_t& __cordl_internal_get_totalPointsRaw() ;

constexpr int32_t const& __cordl_internal_get_unclaimedPoints() const;

constexpr int32_t& __cordl_internal_get_unclaimedPoints() ;

constexpr int32_t const& __cordl_internal_get_weeklyPoints() const;

constexpr int32_t& __cordl_internal_get_weeklyPoints() ;

constexpr void __cordl_internal_set__currentlyProcessingQuest(int32_t  value) ;

constexpr void __cordl_internal_set__fetchStatusRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set__isFetchingStatus(bool  value) ;

constexpr void __cordl_internal_set__isSendingQuestComplete(bool  value) ;

constexpr void __cordl_internal_set__lastProgressReport(::System::ValueTuple_3<int32_t,int32_t,int32_t>  value) ;

constexpr void __cordl_internal_set__maxRetriesOnFail(int32_t  value) ;

constexpr void __cordl_internal_set__progressReportPending(bool  value) ;

constexpr void __cordl_internal_set__questManager(::UnityW<::GlobalNamespace::RotatingQuestsManager>  value) ;

constexpr void __cordl_internal_set__queuedDailyCompletedQuests(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__queuedWeeklyCompletedQuests(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__sendQuestCompleteRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set__statusReceived(bool  value) ;

constexpr void __cordl_internal_set_totalPointsRaw(int32_t  value) ;

constexpr void __cordl_internal_set_unclaimedPoints(int32_t  value) ;

constexpr void __cordl_internal_set_weeklyPoints(int32_t  value) ;

/// @brief Method .ctor, addr 0x562a58c, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnProgressEvent, addr 0x5624628, size 0xdc, virtual false, abstract: false, final false
static inline void add_OnProgressEvent(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnQuestSelectionChanged, addr 0x562454c, size 0xdc, virtual false, abstract: false, final false
static inline void add_OnQuestSelectionChanged(::System::Action*  value) ;

static inline ::System::Action* getStaticF_OnProgressEvent() ;

static inline ::System::Action* getStaticF_OnQuestSelectionChanged() ;

static inline int32_t getStaticF__WeeklyCap_k__BackingField() ;

static inline ::UnityW<::GlobalNamespace::ProgressionController> getStaticF__gInstance() ;

/// @brief Method get_TotalPoints, addr 0x5628a14, size 0x68, virtual false, abstract: false, final false
static inline int32_t get_TotalPoints() ;

/// [CompilerGenerated]
/// @brief Method get_WeeklyCap, addr 0x5628960, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_WeeklyCap() ;

/// [CompilerGenerated]
/// @brief Method remove_OnProgressEvent, addr 0x5624af0, size 0xdc, virtual false, abstract: false, final false
static inline void remove_OnProgressEvent(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnQuestSelectionChanged, addr 0x5624a14, size 0xdc, virtual false, abstract: false, final false
static inline void remove_OnQuestSelectionChanged(::System::Action*  value) ;

static inline void setStaticF_OnProgressEvent(::System::Action*  value) ;

static inline void setStaticF_OnQuestSelectionChanged(::System::Action*  value) ;

static inline void setStaticF__WeeklyCap_k__BackingField(int32_t  value) ;

static inline void setStaticF__gInstance(::UnityW<::GlobalNamespace::ProgressionController>  value) ;

/// [CompilerGenerated]
/// @brief Method set_WeeklyCap, addr 0x56289b8, size 0x5c, virtual false, abstract: false, final false
static inline void set_WeeklyCap(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionController(ProgressionController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionController(ProgressionController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{609};

/// @brief Field kQueuedDailyQuestIDKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kQueuedDailyQuestIDKey{u"Queued_Quest_Daily_ID_Key"};

/// @brief Field kQueuedDailyQuestSaveCountKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kQueuedDailyQuestSaveCountKey{u"Queued_Quest_Daily_SaveCount_Key"};

/// @brief Field kQueuedDailyQuestSetIDKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kQueuedDailyQuestSetIDKey{u"Queued_Quest_Daily_SetID_Key"};

/// @brief Field kQueuedWeeklyQuestIDKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kQueuedWeeklyQuestIDKey{u"Queued_Quest_Weekly_ID_Key"};

/// @brief Field kQueuedWeeklyQuestSaveCountKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kQueuedWeeklyQuestSaveCountKey{u"Queued_Quest_Weekly_SaveCount_Key"};

/// @brief Field kQueuedWeeklyQuestSetIDKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kQueuedWeeklyQuestSetIDKey{u"Queued_Quest_Weekly_SetID_Key"};

/// @brief Field kUnclaimedPointKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kUnclaimedPointKey{u"Claimed_Points_Key"};

/// [SerializeField]
/// @brief Field _questManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RotatingQuestsManager>  ____questManager;

/// @brief Field weeklyPoints, offset: 0x28, size: 0x4, def value: None
 int32_t  ___weeklyPoints;

/// @brief Field totalPointsRaw, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___totalPointsRaw;

/// @brief Field unclaimedPoints, offset: 0x30, size: 0x4, def value: None
 int32_t  ___unclaimedPoints;

/// @brief Field _progressReportPending, offset: 0x34, size: 0x1, def value: None
 bool  ____progressReportPending;

/// [TupleElementNames(new[] { "weeklyPoints", "unclaimedPoints", "totalPointsRaw" })]
/// @brief Field _lastProgressReport, offset: 0x38, size: 0x18, def value: None
 ::System::ValueTuple_3<int32_t,int32_t,int32_t>  ____lastProgressReport;

/// @brief Field _isFetchingStatus, offset: 0x50, size: 0x1, def value: None
 bool  ____isFetchingStatus;

/// @brief Field _statusReceived, offset: 0x51, size: 0x1, def value: None
 bool  ____statusReceived;

/// @brief Field _isSendingQuestComplete, offset: 0x52, size: 0x1, def value: None
 bool  ____isSendingQuestComplete;

/// @brief Field _fetchStatusRetryCount, offset: 0x54, size: 0x4, def value: None
 int32_t  ____fetchStatusRetryCount;

/// @brief Field _sendQuestCompleteRetryCount, offset: 0x58, size: 0x4, def value: None
 int32_t  ____sendQuestCompleteRetryCount;

/// @brief Field _maxRetriesOnFail, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____maxRetriesOnFail;

/// @brief Field _queuedDailyCompletedQuests, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____queuedDailyCompletedQuests;

/// @brief Field _queuedWeeklyCompletedQuests, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____queuedWeeklyCompletedQuests;

/// @brief Field _currentlyProcessingQuest, offset: 0x70, size: 0x4, def value: None
 int32_t  ____currentlyProcessingQuest;

/// @brief Size padding 0x70 - 0x78 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionController, ____questManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ___weeklyPoints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ___totalPointsRaw) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ___unclaimedPoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____progressReportPending) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____lastProgressReport) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____isFetchingStatus) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____statusReceived) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____isSendingQuestComplete) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____fetchStatusRetryCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____sendQuestCompleteRetryCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____maxRetriesOnFail) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____queuedDailyCompletedQuests) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____queuedWeeklyCompletedQuests) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController, ____currentlyProcessingQuest) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionController) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionController/<DoSendQuestComplete>d__46
class CORDL_TYPE ProgressionController__DoSendQuestComplete_d__46 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionController>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x562ab78, size 0x520, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x562b098, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x562b0a0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x562b0d8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x562ab74, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionController>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5629c18, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionController__DoSendQuestComplete_d__46() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController__DoSendQuestComplete_d__46", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionController__DoSendQuestComplete_d__46(ProgressionController__DoSendQuestComplete_d__46 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController__DoSendQuestComplete_d__46", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionController__DoSendQuestComplete_d__46(ProgressionController__DoSendQuestComplete_d__46 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{604};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionController_SetQuestCompleteResponse*>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionController>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionController__DoSendQuestComplete_d__46) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionController/<DoFetchStatus>d__39
class CORDL_TYPE ProgressionController__DoFetchStatus_d__39 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ProgressionController>  __4__this;

/// @brief Field <request>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*  callback;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*  data;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x562a6d0, size 0x45c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ProgressionController__DoFetchStatus_d__39* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x562ab2c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x562ab34, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x562ab6c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x562a6cc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ProgressionController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ProgressionController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*& __cordl_internal_get_callback() ;

constexpr ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest* const& __cordl_internal_get_data() const;

constexpr ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ProgressionController>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*  value) ;

constexpr void __cordl_internal_set_data(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56295a8, size 0x28, virtual false, abstract: false, final false
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
constexpr ProgressionController__DoFetchStatus_d__39() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController__DoFetchStatus_d__39", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionController__DoFetchStatus_d__39(ProgressionController__DoFetchStatus_d__39 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController__DoFetchStatus_d__39", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionController__DoFetchStatus_d__39(ProgressionController__DoFetchStatus_d__39 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{603};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest*  ___data;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::ProgressionController_GetQuestStatusResponse*>*  ___callback;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProgressionController>  _____4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x40, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39, ___data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39, ____request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39, ____retry_5__3) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionController__DoFetchStatus_d__39) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionController/SetQuestCompleteResponse
class CORDL_TYPE ProgressionController_SetQuestCompleteResponse : public ::System::Object {
public:
// Declarations
/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::GlobalNamespace::ProgressionController_UserQuestsStatus*  result;

static inline ::GlobalNamespace::ProgressionController_SetQuestCompleteResponse* New_ctor() ;

constexpr ::GlobalNamespace::ProgressionController_UserQuestsStatus* const& __cordl_internal_get_result() const;

constexpr ::GlobalNamespace::ProgressionController_UserQuestsStatus*& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set_result(::GlobalNamespace::ProgressionController_UserQuestsStatus*  value) ;

/// @brief Method .ctor, addr 0x562a6c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionController_SetQuestCompleteResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_SetQuestCompleteResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionController_SetQuestCompleteResponse(ProgressionController_SetQuestCompleteResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_SetQuestCompleteResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionController_SetQuestCompleteResponse(ProgressionController_SetQuestCompleteResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{602};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionController_UserQuestsStatus*  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionController_SetQuestCompleteResponse, ___result) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionController_SetQuestCompleteResponse) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionController/SetQuestCompleteRequest
class CORDL_TYPE ProgressionController_SetQuestCompleteRequest : public ::System::Object {
public:
// Declarations
/// @brief Field ClientVersion, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClientVersion, put=__cordl_internal_set_ClientVersion)) ::StringW  ClientVersion;

/// @brief Field MothershipId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

/// @brief Field MothershipToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipToken, put=__cordl_internal_set_MothershipToken)) ::StringW  MothershipToken;

/// @brief Field PlayFabId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field PlayFabTicket, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabTicket, put=__cordl_internal_set_PlayFabTicket)) ::StringW  PlayFabTicket;

/// @brief Field QuestId, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_QuestId, put=__cordl_internal_set_QuestId)) int32_t  QuestId;

static inline ::GlobalNamespace::ProgressionController_SetQuestCompleteRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ClientVersion() const;

constexpr ::StringW& __cordl_internal_get_ClientVersion() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipToken() const;

constexpr ::StringW& __cordl_internal_get_MothershipToken() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabTicket() const;

constexpr ::StringW& __cordl_internal_get_PlayFabTicket() ;

constexpr int32_t const& __cordl_internal_get_QuestId() const;

constexpr int32_t& __cordl_internal_get_QuestId() ;

constexpr void __cordl_internal_set_ClientVersion(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipToken(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabTicket(::StringW  value) ;

constexpr void __cordl_internal_set_QuestId(int32_t  value) ;

/// @brief Method .ctor, addr 0x5629b74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionController_SetQuestCompleteRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_SetQuestCompleteRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionController_SetQuestCompleteRequest(ProgressionController_SetQuestCompleteRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_SetQuestCompleteRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionController_SetQuestCompleteRequest(ProgressionController_SetQuestCompleteRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{601};

/// @brief Field PlayFabId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field PlayFabTicket, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabTicket;

/// @brief Field MothershipId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MothershipId;

/// @brief Field MothershipToken, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___MothershipToken;

/// @brief Field QuestId, offset: 0x30, size: 0x4, def value: None
 int32_t  ___QuestId;

/// @brief Field ClientVersion, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___ClientVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest, ___PlayFabId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest, ___PlayFabTicket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest, ___MothershipId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest, ___MothershipToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest, ___QuestId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest, ___ClientVersion) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionController_SetQuestCompleteRequest) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionController/UserQuestsStatus
class CORDL_TYPE ProgressionController_UserQuestsStatus : public ::System::Object {
public:
// Declarations
/// @brief Field dailyPoints, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dailyPoints, put=__cordl_internal_set_dailyPoints)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  dailyPoints;

/// @brief Field userPointsTotal, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_userPointsTotal, put=__cordl_internal_set_userPointsTotal)) int32_t  userPointsTotal;

/// @brief Field weeklyPoints, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_weeklyPoints, put=__cordl_internal_set_weeklyPoints)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  weeklyPoints;

/// @brief Method GetWeeklyPoints, addr 0x562969c, size 0x29c, virtual false, abstract: false, final false
inline int32_t GetWeeklyPoints() ;

static inline ::GlobalNamespace::ProgressionController_UserQuestsStatus* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_dailyPoints() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_dailyPoints() ;

constexpr int32_t const& __cordl_internal_get_userPointsTotal() const;

constexpr int32_t& __cordl_internal_get_userPointsTotal() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_weeklyPoints() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_weeklyPoints() ;

constexpr void __cordl_internal_set_dailyPoints(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_userPointsTotal(int32_t  value) ;

constexpr void __cordl_internal_set_weeklyPoints(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x562a6bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionController_UserQuestsStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_UserQuestsStatus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionController_UserQuestsStatus(ProgressionController_UserQuestsStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_UserQuestsStatus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionController_UserQuestsStatus(ProgressionController_UserQuestsStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{600};

/// @brief Field dailyPoints, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___dailyPoints;

/// @brief Field weeklyPoints, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___weeklyPoints;

/// @brief Field userPointsTotal, offset: 0x20, size: 0x4, def value: None
 int32_t  ___userPointsTotal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionController_UserQuestsStatus, ___dailyPoints) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_UserQuestsStatus, ___weeklyPoints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_UserQuestsStatus, ___userPointsTotal) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionController_UserQuestsStatus) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionController/GetQuestStatusResponse
class CORDL_TYPE ProgressionController_GetQuestStatusResponse : public ::System::Object {
public:
// Declarations
/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::GlobalNamespace::ProgressionController_UserQuestsStatus*  result;

static inline ::GlobalNamespace::ProgressionController_GetQuestStatusResponse* New_ctor() ;

constexpr ::GlobalNamespace::ProgressionController_UserQuestsStatus* const& __cordl_internal_get_result() const;

constexpr ::GlobalNamespace::ProgressionController_UserQuestsStatus*& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set_result(::GlobalNamespace::ProgressionController_UserQuestsStatus*  value) ;

/// @brief Method .ctor, addr 0x562a6b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionController_GetQuestStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_GetQuestStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionController_GetQuestStatusResponse(ProgressionController_GetQuestStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_GetQuestStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionController_GetQuestStatusResponse(ProgressionController_GetQuestStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{599};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ProgressionController_UserQuestsStatus*  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionController_GetQuestStatusResponse, ___result) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionController_GetQuestStatusResponse) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressionController/GetQuestsStatusRequest
class CORDL_TYPE ProgressionController_GetQuestsStatusRequest : public ::System::Object {
public:
// Declarations
/// @brief Field MothershipId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

/// @brief Field MothershipToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipToken, put=__cordl_internal_set_MothershipToken)) ::StringW  MothershipToken;

/// @brief Field PlayFabId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field PlayFabTicket, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabTicket, put=__cordl_internal_set_PlayFabTicket)) ::StringW  PlayFabTicket;

static inline ::GlobalNamespace::ProgressionController_GetQuestsStatusRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipToken() const;

constexpr ::StringW& __cordl_internal_get_MothershipToken() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabTicket() const;

constexpr ::StringW& __cordl_internal_get_PlayFabTicket() ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipToken(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_PlayFabTicket(::StringW  value) ;

/// @brief Method .ctor, addr 0x5629504, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionController_GetQuestsStatusRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_GetQuestsStatusRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionController_GetQuestsStatusRequest(ProgressionController_GetQuestsStatusRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionController_GetQuestsStatusRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionController_GetQuestsStatusRequest(ProgressionController_GetQuestsStatusRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{598};

/// @brief Field PlayFabId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field PlayFabTicket, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PlayFabTicket;

/// @brief Field MothershipId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MothershipId;

/// @brief Field MothershipToken, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___MothershipToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest, ___PlayFabId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest, ___PlayFabTicket) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest, ___MothershipId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest, ___MothershipToken) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionController_GetQuestsStatusRequest) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
