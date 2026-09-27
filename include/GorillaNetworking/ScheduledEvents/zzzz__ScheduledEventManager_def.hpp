#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventManager_StartKind_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhase_def.hpp"
#include "GorillaNetworking/zzzz__PhotonTimestamp_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledEventManager)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct ScheduledEventManager_StartKind;
}
namespace GlobalNamespace {
struct ScheduledEventManager__FetchReferenceDate_d__69;
}
namespace GlobalNamespace {
struct ScheduledEventManager__Start_d__55;
}
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventControlledObject;
}
namespace GorillaNetworking::ScheduledEvents {
struct ScheduledEventInfo;
}
namespace GorillaNetworking::ScheduledEvents {
struct ScheduledEventPhase;
}
namespace GorillaNetworking {
struct PhotonTimestamp;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class Player;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
struct DateTime;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GorillaNetworking::ScheduledEvents {
class ScheduledEventManager;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::ScheduledEvents::ScheduledEventManager*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::ScheduledEvents::ScheduledEventManager*, "GorillaNetworking.ScheduledEvents", "ScheduledEventManager");
// [RequireComponent(typeof(Photon.Pun.PhotonView))]
// Dependencies GorillaNetworking.PhotonTimestamp, GorillaNetworking.ScheduledEvents.ScheduledEventManager::StartKind, GorillaNetworking.ScheduledEvents.ScheduledEventPhase, System.DateTime, System.TimeSpan, UnityEngine.MonoBehaviour
namespace GorillaNetworking::ScheduledEvents {
// Is value type: false
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventManager
class CORDL_TYPE ScheduledEventManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using StartKind = ::GlobalNamespace::ScheduledEventManager_StartKind;

using _FetchReferenceDate_d__69 = ::GlobalNamespace::ScheduledEventManager__FetchReferenceDate_d__69;

using _Start_d__55 = ::GlobalNamespace::ScheduledEventManager__Start_d__55;

 __declspec(property(get=get_CurrentPhase)) ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  CurrentPhase;

 __declspec(property(get=get_DataReady)) bool  DataReady;

 __declspec(property(get=get_EventSubphase)) int32_t  EventSubphase;

 __declspec(property(get=get_EventSubphaseStartTime, put=set_EventSubphaseStartTime)) ::System::DateTime  EventSubphaseStartTime;

 __declspec(property(get=get_GracePeriod)) ::System::TimeSpan  GracePeriod;

 __declspec(property(get=get_HasEvent)) bool  HasEvent;

 __declspec(property(get=get_IsResolved)) bool  IsResolved;

/// @brief Field OnChanged, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnChanged, put=__cordl_internal_set_OnChanged)) ::System::Action*  OnChanged;

/// @brief Field OnPhaseChanged, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPhaseChanged, put=__cordl_internal_set_OnPhaseChanged)) ::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*  OnPhaseChanged;

/// @brief Field OnSubphaseChanged, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSubphaseChanged, put=__cordl_internal_set_OnSubphaseChanged)) ::System::Action_1<int32_t>*  OnSubphaseChanged;

 __declspec(property(get=get_PreviousEventSubphaseStartTime, put=set_PreviousEventSubphaseStartTime)) ::System::DateTime  PreviousEventSubphaseStartTime;

 __declspec(property(get=get_SecondsUntilEventStart)) double_t  SecondsUntilEventStart;

/// @brief Field <EventSubphaseStartTime>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__EventSubphaseStartTime_k__BackingField, put=__cordl_internal_set__EventSubphaseStartTime_k__BackingField)) ::System::DateTime  _EventSubphaseStartTime_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>  _Instance_k__BackingField;

/// @brief Field <PreviousEventSubphaseStartTime>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__PreviousEventSubphaseStartTime_k__BackingField, put=__cordl_internal_set__PreviousEventSubphaseStartTime_k__BackingField)) ::System::DateTime  _PreviousEventSubphaseStartTime_k__BackingField;

/// @brief Field currentPhase, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPhase, put=__cordl_internal_set_currentPhase)) ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  currentPhase;

/// @brief Field eventSubphase, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_eventSubphase, put=__cordl_internal_set_eventSubphase)) int32_t  eventSubphase;

/// @brief Field fetchInFlight, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_fetchInFlight, put=__cordl_internal_set_fetchInFlight)) bool  fetchInFlight;

/// @brief Field forceEventTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_forceEventTime, put=__cordl_internal_set_forceEventTime)) ::StringW  forceEventTime;

/// @brief Field gracePeriodDuration, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gracePeriodDuration, put=__cordl_internal_set_gracePeriodDuration)) ::System::TimeSpan  gracePeriodDuration;

/// @brief Field graceTitleDataKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_graceTitleDataKey, put=__cordl_internal_set_graceTitleDataKey)) ::StringW  graceTitleDataKey;

/// @brief Field lastKnownState, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastKnownState, put=__cordl_internal_set_lastKnownState)) ::StringW  lastKnownState;

/// @brief Field registered, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_registered, put=__cordl_internal_set_registered)) ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject>>*  registered;

/// @brief Field scheduledStart, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_scheduledStart, put=__cordl_internal_set_scheduledStart)) ::GorillaNetworking::PhotonTimestamp  scheduledStart;

/// @brief Field scheduledStartKnown, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_scheduledStartKnown, put=__cordl_internal_set_scheduledStartKnown)) bool  scheduledStartKnown;

/// @brief Field scheduledStartUtc, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_scheduledStartUtc, put=__cordl_internal_set_scheduledStartUtc)) ::System::DateTime  scheduledStartUtc;

/// @brief Field showEndedInRoom, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEndedInRoom, put=__cordl_internal_set_showEndedInRoom)) bool  showEndedInRoom;

/// @brief Field startKind, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_startKind, put=__cordl_internal_set_startKind)) ::GlobalNamespace::ScheduledEventManager_StartKind  startKind;

/// @brief Field titleDataKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::StringW  titleDataKey;

/// @brief Field useForcedEventTime, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useForcedEventTime, put=__cordl_internal_set_useForcedEventTime)) bool  useForcedEventTime;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Photon::Realtime::IInRoomCallbacks*() noexcept;

/// @brief Method ApplyForcedEventTime, addr 0x5ca0268, size 0x1c0, virtual false, abstract: false, final false
inline void ApplyForcedEventTime() ;

/// @brief Method ApplyPhaseTo, addr 0x5c9f8ec, size 0x110, virtual false, abstract: false, final false
inline void ApplyPhaseTo(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*  obj) ;

/// @brief Method ApplyPhaseToAll, addr 0x5c9f9fc, size 0x12c, virtual false, abstract: false, final false
inline void ApplyPhaseToAll() ;

/// @brief Method Awake, addr 0x5c9f0d0, size 0x158, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ComputeOfflinePhase, addr 0x5c9ff9c, size 0x118, virtual false, abstract: false, final false
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase ComputeOfflinePhase() ;

/// @brief Method ComputePhase, addr 0x5c9fcec, size 0x1ac, virtual false, abstract: false, final false
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase ComputePhase() ;

/// @brief Method ComputeStartTime, addr 0x5ca0a08, size 0x1f0, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GorillaNetworking::PhotonTimestamp> ComputeStartTime() ;

/// @brief Method DebugStartCountdown, addr 0x5ca0d98, size 0x124, virtual false, abstract: false, final false
inline void DebugStartCountdown() ;

/// [AsyncStateMachine(typeof(GorillaNetworking.ScheduledEvents.ScheduledEventManager::<FetchReferenceDate>d__69))]
/// @brief Method FetchReferenceDate, addr 0x5ca0190, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FetchReferenceDate() ;

/// @brief Method GetCurrent, addr 0x5ca00b4, size 0xa0, virtual false, abstract: false, final false
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventInfo GetCurrent(::System::DateTime  serverNow) ;

/// @brief Method MaintainRoomStateAsMaster, addr 0x5c9fb28, size 0x1c4, virtual false, abstract: false, final false
inline void MaintainRoomStateAsMaster() ;

static inline ::GorillaNetworking::ScheduledEvents::ScheduledEventManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c9f2d0, size 0x398, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5c9f718, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c9f668, size 0xb0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGraceTitleData, addr 0x5ca0620, size 0xf8, virtual false, abstract: false, final false
inline void OnGraceTitleData(::StringW  raw) ;

/// @brief Method OnGraceTitleDataError, addr 0x5ca0718, size 0xcc, virtual false, abstract: false, final false
inline void OnGraceTitleDataError(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnMultiplayerStarted, addr 0x5ca07e4, size 0x13c, virtual false, abstract: false, final false
inline void OnMultiplayerStarted() ;

/// @brief Method OnReturnedToSinglePlayer, addr 0x5ca0c54, size 0x34, virtual false, abstract: false, final false
inline void OnReturnedToSinglePlayer() ;

/// @brief Method OnServerTimeUpdated, addr 0x5ca0154, size 0x3c, virtual false, abstract: false, final false
inline void OnServerTimeUpdated() ;

/// @brief Method OnShowEnded, addr 0x5ca0c88, size 0x110, virtual false, abstract: false, final false
inline void OnShowEnded() ;

/// @brief Method OnTitleData, addr 0x5ca0428, size 0x164, virtual false, abstract: false, final false
inline void OnTitleData(::StringW  raw) ;

/// @brief Method OnTitleDataError, addr 0x5ca058c, size 0x94, virtual false, abstract: false, final false
inline void OnTitleDataError(::PlayFab::PlayFabError*  error) ;

/// @brief Method Photon.Pun.IPunObservable.OnPhotonSerializeView, addr 0x5ca1070, size 0x1bc, virtual true, abstract: false, final true
inline void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched, addr 0x5ca1060, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom, addr 0x5ca1064, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom, addr 0x5ca1068, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate, addr 0x5ca106c, size 0x4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate, addr 0x5ca0ebc, size 0x1a4, virtual true, abstract: false, final true
inline void Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method ReadRoomState, addr 0x5ca0920, size 0xe8, virtual false, abstract: false, final false
inline ::StringW ReadRoomState() ;

/// @brief Method RefreshPhase, addr 0x5c9f728, size 0x1c4, virtual false, abstract: false, final false
inline void RefreshPhase() ;

/// @brief Method Register, addr 0x5c9eaf8, size 0xb4, virtual false, abstract: false, final false
inline void Register(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*  obj) ;

/// @brief Method SetEventSubphase, addr 0x5c9efe8, size 0xe8, virtual false, abstract: false, final false
inline void SetEventSubphase(int32_t  subphase) ;

/// @brief Method SetRoomState, addr 0x5c9fe98, size 0x104, virtual false, abstract: false, final false
inline void SetRoomState(::StringW  state) ;

/// @brief Method SetStartState, addr 0x5ca0bf8, size 0x5c, virtual false, abstract: false, final false
inline void SetStartState(::GlobalNamespace::ScheduledEventManager_StartKind  kind, ::GorillaNetworking::PhotonTimestamp  ts) ;

/// @brief Method SliceUpdate, addr 0x5c9f724, size 0x4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// [AsyncStateMachine(typeof(GorillaNetworking.ScheduledEvents.ScheduledEventManager::<Start>d__55))]
/// @brief Method Start, addr 0x5c9f228, size 0xa8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Unregister, addr 0x5c9ec90, size 0x58, virtual false, abstract: false, final false
inline void Unregister(::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*  obj) ;

constexpr ::System::Action* const& __cordl_internal_get_OnChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnChanged() ;

constexpr ::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>* const& __cordl_internal_get_OnPhaseChanged() const;

constexpr ::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*& __cordl_internal_get_OnPhaseChanged() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnSubphaseChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnSubphaseChanged() ;

constexpr ::System::DateTime const& __cordl_internal_get__EventSubphaseStartTime_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__EventSubphaseStartTime_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__PreviousEventSubphaseStartTime_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__PreviousEventSubphaseStartTime_k__BackingField() ;

constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase const& __cordl_internal_get_currentPhase() const;

constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase& __cordl_internal_get_currentPhase() ;

constexpr int32_t const& __cordl_internal_get_eventSubphase() const;

constexpr int32_t& __cordl_internal_get_eventSubphase() ;

constexpr bool const& __cordl_internal_get_fetchInFlight() const;

constexpr bool& __cordl_internal_get_fetchInFlight() ;

constexpr ::StringW const& __cordl_internal_get_forceEventTime() const;

constexpr ::StringW& __cordl_internal_get_forceEventTime() ;

constexpr ::System::TimeSpan const& __cordl_internal_get_gracePeriodDuration() const;

constexpr ::System::TimeSpan& __cordl_internal_get_gracePeriodDuration() ;

constexpr ::StringW const& __cordl_internal_get_graceTitleDataKey() const;

constexpr ::StringW& __cordl_internal_get_graceTitleDataKey() ;

constexpr ::StringW const& __cordl_internal_get_lastKnownState() const;

constexpr ::StringW& __cordl_internal_get_lastKnownState() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject>>* const& __cordl_internal_get_registered() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject>>*& __cordl_internal_get_registered() ;

constexpr ::GorillaNetworking::PhotonTimestamp const& __cordl_internal_get_scheduledStart() const;

constexpr ::GorillaNetworking::PhotonTimestamp& __cordl_internal_get_scheduledStart() ;

constexpr bool const& __cordl_internal_get_scheduledStartKnown() const;

constexpr bool& __cordl_internal_get_scheduledStartKnown() ;

constexpr ::System::DateTime const& __cordl_internal_get_scheduledStartUtc() const;

constexpr ::System::DateTime& __cordl_internal_get_scheduledStartUtc() ;

constexpr bool const& __cordl_internal_get_showEndedInRoom() const;

constexpr bool& __cordl_internal_get_showEndedInRoom() ;

constexpr ::GlobalNamespace::ScheduledEventManager_StartKind const& __cordl_internal_get_startKind() const;

constexpr ::GlobalNamespace::ScheduledEventManager_StartKind& __cordl_internal_get_startKind() ;

constexpr ::StringW const& __cordl_internal_get_titleDataKey() const;

constexpr ::StringW& __cordl_internal_get_titleDataKey() ;

constexpr bool const& __cordl_internal_get_useForcedEventTime() const;

constexpr bool& __cordl_internal_get_useForcedEventTime() ;

constexpr void __cordl_internal_set_OnChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnPhaseChanged(::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*  value) ;

constexpr void __cordl_internal_set_OnSubphaseChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__EventSubphaseStartTime_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__PreviousEventSubphaseStartTime_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set_currentPhase(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  value) ;

constexpr void __cordl_internal_set_eventSubphase(int32_t  value) ;

constexpr void __cordl_internal_set_fetchInFlight(bool  value) ;

constexpr void __cordl_internal_set_forceEventTime(::StringW  value) ;

constexpr void __cordl_internal_set_gracePeriodDuration(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_graceTitleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_lastKnownState(::StringW  value) ;

constexpr void __cordl_internal_set_registered(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject>>*  value) ;

constexpr void __cordl_internal_set_scheduledStart(::GorillaNetworking::PhotonTimestamp  value) ;

constexpr void __cordl_internal_set_scheduledStartKnown(bool  value) ;

constexpr void __cordl_internal_set_scheduledStartUtc(::System::DateTime  value) ;

constexpr void __cordl_internal_set_showEndedInRoom(bool  value) ;

constexpr void __cordl_internal_set_startKind(::GlobalNamespace::ScheduledEventManager_StartKind  value) ;

constexpr void __cordl_internal_set_titleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set_useForcedEventTime(bool  value) ;

/// @brief Method .ctor, addr 0x5ca122c, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnChanged, addr 0x5c9eeb0, size 0x9c, virtual false, abstract: false, final false
inline void add_OnChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPhaseChanged, addr 0x5c9e270, size 0xb0, virtual false, abstract: false, final false
inline void add_OnPhaseChanged(::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSubphaseChanged, addr 0x5c9e320, size 0xb0, virtual false, abstract: false, final false
inline void add_OnSubphaseChanged(::System::Action_1<int32_t>*  value) ;

static inline ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager> getStaticF__Instance_k__BackingField() ;

/// @brief Method get_CurrentPhase, addr 0x5c9ee80, size 0x8, virtual false, abstract: false, final false
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase get_CurrentPhase() ;

/// @brief Method get_DataReady, addr 0x5c9edec, size 0x10, virtual false, abstract: false, final false
inline bool get_DataReady() ;

/// @brief Method get_EventSubphase, addr 0x5c9ee88, size 0x8, virtual false, abstract: false, final false
inline int32_t get_EventSubphase() ;

/// [CompilerGenerated]
/// @brief Method get_EventSubphaseStartTime, addr 0x5c9eea0, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_EventSubphaseStartTime() ;

/// @brief Method get_GracePeriod, addr 0x5c9ede4, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_GracePeriod() ;

/// @brief Method get_HasEvent, addr 0x5c9ee0c, size 0x10, virtual false, abstract: false, final false
inline bool get_HasEvent() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5c9ed44, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager> get_Instance() ;

/// @brief Method get_IsResolved, addr 0x5c9edfc, size 0x10, virtual false, abstract: false, final false
inline bool get_IsResolved() ;

/// [CompilerGenerated]
/// @brief Method get_PreviousEventSubphaseStartTime, addr 0x5c9ee90, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_PreviousEventSubphaseStartTime() ;

/// @brief Method get_SecondsUntilEventStart, addr 0x5c9ee1c, size 0x64, virtual false, abstract: false, final false
inline double_t get_SecondsUntilEventStart() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnChanged, addr 0x5c9ef4c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPhaseChanged, addr 0x5c9e5d8, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnPhaseChanged(::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSubphaseChanged, addr 0x5c9e688, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnSubphaseChanged(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_EventSubphaseStartTime, addr 0x5c9eea8, size 0x8, virtual false, abstract: false, final false
inline void set_EventSubphaseStartTime(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5c9ed8c, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GorillaNetworking::ScheduledEvents::ScheduledEventManager*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PreviousEventSubphaseStartTime, addr 0x5c9ee98, size 0x8, virtual false, abstract: false, final false
inline void set_PreviousEventSubphaseStartTime(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScheduledEventManager(ScheduledEventManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScheduledEventManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScheduledEventManager(ScheduledEventManager const& ) = delete;

/// @brief Field SCHEDULED_EVENT_MAX_DELAY_MINUTES offset 0xffffffff size 0x4
static constexpr int32_t  SCHEDULED_EVENT_MAX_DELAY_MINUTES{static_cast<int32_t>(0x5)};

/// @brief Field SCHEDULED_EVENT_SEEN_COOLDOWN_HOURS offset 0xffffffff size 0x4
static constexpr int32_t  SCHEDULED_EVENT_SEEN_COOLDOWN_HOURS{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4408};

/// [Header("Schedule")]
/// [SerializeField]
/// [Tooltip("PlayFab Title Data key whose value parses as a DateTime (date + time of day). Empty = no event configured.")]
/// @brief Field titleDataKey, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___titleDataKey;

/// [SerializeField]
/// [Tooltip("PlayFab Title Data key whose value parses as an ElapsedTime (e.g. \"00:10:00\").")]
/// @brief Field graceTitleDataKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___graceTitleDataKey;

/// [SerializeField]
/// [Tooltip("If true, ignore titleDataKey and use forceEventTime instead. For local testing without editing PlayFab Title Data.")]
/// @brief Field useForcedEventTime, offset: 0x30, size: 0x1, def value: None
 bool  ___useForcedEventTime;

/// [SerializeField]
/// [Tooltip("Event start time in LOCAL time (parsed via DateTime.Parse). Only used when useForcedEventTime is true. Example: 2026-04-21 14:30:00")]
/// @brief Field forceEventTime, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___forceEventTime;

/// @brief Field scheduledStartUtc, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ___scheduledStartUtc;

/// @brief Field gracePeriodDuration, offset: 0x48, size: 0x8, def value: None
 ::System::TimeSpan  ___gracePeriodDuration;

/// @brief Field scheduledStartKnown, offset: 0x50, size: 0x1, def value: None
 bool  ___scheduledStartKnown;

/// @brief Field fetchInFlight, offset: 0x51, size: 0x1, def value: None
 bool  ___fetchInFlight;

/// @brief Field startKind, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::ScheduledEventManager_StartKind  ___startKind;

/// @brief Field scheduledStart, offset: 0x58, size: 0x8, def value: None
 ::GorillaNetworking::PhotonTimestamp  ___scheduledStart;

/// @brief Field lastKnownState, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___lastKnownState;

/// @brief Field showEndedInRoom, offset: 0x68, size: 0x1, def value: None
 bool  ___showEndedInRoom;

/// @brief Field currentPhase, offset: 0x6c, size: 0x4, def value: None
 ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  ___currentPhase;

/// @brief Field eventSubphase, offset: 0x70, size: 0x4, def value: None
 int32_t  ___eventSubphase;

/// @brief Field registered, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject>>*  ___registered;

/// [CompilerGenerated]
/// @brief Field <PreviousEventSubphaseStartTime>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::DateTime  ____PreviousEventSubphaseStartTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EventSubphaseStartTime>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::DateTime  ____EventSubphaseStartTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnChanged, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___OnChanged;

/// [CompilerGenerated]
/// @brief Field OnPhaseChanged, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>*  ___OnPhaseChanged;

/// [CompilerGenerated]
/// @brief Field OnSubphaseChanged, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnSubphaseChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___titleDataKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___graceTitleDataKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___useForcedEventTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___forceEventTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___scheduledStartUtc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___gracePeriodDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___scheduledStartKnown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___fetchInFlight) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___startKind) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___scheduledStart) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___lastKnownState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___showEndedInRoom) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___currentPhase) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___eventSubphase) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___registered) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ____PreviousEventSubphaseStartTime_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ____EventSubphaseStartTime_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___OnChanged) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___OnPhaseChanged) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager, ___OnSubphaseChanged) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::ScheduledEvents::ScheduledEventManager) == 0xa8, "Size mismatch!");

} // namespace end def GorillaNetworking::ScheduledEvents
