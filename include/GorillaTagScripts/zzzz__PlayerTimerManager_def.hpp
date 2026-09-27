#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerTimerManager)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct PlayerTimerManager_PlayerTimerData;
}
namespace GlobalNamespace {
struct PlayerTimerManager_RPC;
}
namespace GorillaTagScripts {
class PlayerTimerBoard;
}
namespace GorillaTagScripts {
class PlayerTimerManager___c__DisplayClass29_0;
}
namespace GorillaTagScripts {
class PlayerTimerManager___c__DisplayClass30_0;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTagScripts {
class PlayerTimerManager;
}
namespace GorillaTagScripts {
class PlayerTimerManager___c__DisplayClass29_0;
}
namespace GorillaTagScripts {
class PlayerTimerManager___c__DisplayClass30_0;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::PlayerTimerManager*);
MARK_REF_T(::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0*);
MARK_REF_T(::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::PlayerTimerManager*, "GorillaTagScripts", "PlayerTimerManager");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0*, "GorillaTagScripts", "PlayerTimerManager/<>c__DisplayClass29_0");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0*, "GorillaTagScripts", "PlayerTimerManager/<>c__DisplayClass30_0");
// Dependencies CallLimiter, Photon.Pun.MonoBehaviourPunCallbacks
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.PlayerTimerManager
class CORDL_TYPE PlayerTimerManager : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
using PlayerTimerData = ::GlobalNamespace::PlayerTimerManager_PlayerTimerData;

using RPC = ::GlobalNamespace::PlayerTimerManager_RPC;

using __c__DisplayClass29_0 = ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0;

using __c__DisplayClass30_0 = ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0;

/// @brief Field OnLocalTimerStarted, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLocalTimerStarted, put=__cordl_internal_set_OnLocalTimerStarted)) ::UnityEngine::Events::UnityEvent*  OnLocalTimerStarted;

/// @brief Field OnTimerStartedForPlayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTimerStartedForPlayer, put=__cordl_internal_set_OnTimerStartedForPlayer)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  OnTimerStartedForPlayer;

/// @brief Field OnTimerStopped, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTimerStopped, put=__cordl_internal_set_OnTimerStopped)) ::UnityEngine::Events::UnityEvent_2<int32_t,int32_t>*  OnTimerStopped;

/// @brief Field areTimersInitialized, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_areTimersInitialized, put=__cordl_internal_set_areTimersInitialized)) bool  areTimersInitialized;

/// @brief Field callLimiters, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiters, put=__cordl_internal_set_callLimiters)) ::ArrayW<::GlobalNamespace::CallLimiter*>  callLimiters;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTagScripts::PlayerTimerManager>  instance;

/// @brief Field joinedRoom, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_joinedRoom, put=__cordl_internal_set_joinedRoom)) bool  joinedRoom;

/// @brief Field limiterPool, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_limiterPool, put=__cordl_internal_set_limiterPool)) ::System::Collections::Generic::List_1<::GlobalNamespace::CallLimiter*>*  limiterPool;

/// @brief Field localPlayerRequestedStart, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerRequestedStart, put=__cordl_internal_set_localPlayerRequestedStart)) bool  localPlayerRequestedStart;

/// @brief Field playerTimerData, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTimerData, put=__cordl_internal_set_playerTimerData)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::PlayerTimerManager_PlayerTimerData>*  playerTimerData;

/// @brief Field requestSendTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_requestSendTime, put=__cordl_internal_set_requestSendTime)) float_t  requestSendTime;

/// @brief Field serializedTimerData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializedTimerData, put=__cordl_internal_set_serializedTimerData)) ::ArrayW<uint8_t>  serializedTimerData;

/// @brief Field timerBoards, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_timerBoards, put=setStaticF_timerBoards)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoard>>*  timerBoards;

/// @brief Field timerPV, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_timerPV, put=__cordl_internal_set_timerPV)) ::UnityW<::Photon::Pun::PhotonView>  timerPV;

/// @brief Field timerToggleLimiters, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_timerToggleLimiters, put=__cordl_internal_set_timerToggleLimiters)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::CallLimiter*>*  timerToggleLimiters;

/// @brief Method Awake, addr 0x5bd13c8, size 0x39c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearOldPlayerData, addr 0x5bd2700, size 0x470, virtual false, abstract: false, final false
inline void ClearOldPlayerData() ;

/// @brief Method CreateLimiterFromPool, addr 0x5bd1764, size 0xdc, virtual false, abstract: false, final false
inline ::GlobalNamespace::CallLimiter* CreateLimiterFromPool() ;

/// @brief Method DeserializeTimerState, addr 0x5bd1dc0, size 0x52c, virtual false, abstract: false, final false
inline void DeserializeTimerState(int32_t  numBytes, ::ArrayW<uint8_t>  bytes) ;

/// @brief Method GetLastDurationForPlayer, addr 0x5bd11f8, size 0x98, virtual false, abstract: false, final false
inline float_t GetLastDurationForPlayer(int32_t  actorNumber) ;

/// @brief Method GetTimeForPlayer, addr 0x5bcaa48, size 0xdc, virtual false, abstract: false, final false
inline float_t GetTimeForPlayer(int32_t  actorNumber) ;

/// [PunRPC]
/// @brief Method InitTimersMasterRPC, addr 0x5bd1c64, size 0x100, virtual false, abstract: false, final false
inline void InitTimersMasterRPC(int32_t  numBytes, ::ArrayW<uint8_t>  bytes, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method IsLocalTimerStarted, addr 0x5bc9a4c, size 0xc4, virtual false, abstract: false, final false
inline bool IsLocalTimerStarted() ;

static inline ::GorillaTagScripts::PlayerTimerManager* New_ctor() ;

/// @brief Method OnJoinedRoom, addr 0x5bd3720, size 0x1f4, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x5bd3914, size 0x1b8, virtual true, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnMasterClientSwitched, addr 0x5bd331c, size 0x184, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5bd34a0, size 0x198, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5bd3638, size 0xe8, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnToggleTimerForPlayer, addr 0x5bd3154, size 0x1c8, virtual false, abstract: false, final false
inline void OnToggleTimerForPlayer(bool  startTimer, ::Photon::Realtime::Player*  player, int32_t  toggleTime) ;

/// @brief Method RegisterTimerBoard, addr 0x5bcfbf8, size 0x13c, virtual false, abstract: false, final false
inline void RegisterTimerBoard(::GorillaTagScripts::PlayerTimerBoard*  board) ;

/// @brief Method RequestTimerToggle, addr 0x5bca030, size 0x108, virtual false, abstract: false, final false
inline void RequestTimerToggle(bool  startTimer) ;

/// [PunRPC]
/// @brief Method RequestTimerToggleRPC, addr 0x5bd2b80, size 0x3c0, virtual false, abstract: false, final false
inline void RequestTimerToggleRPC(bool  startTimer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReturnCallLimiterToPool, addr 0x5bd1840, size 0xcc, virtual false, abstract: false, final false
inline void ReturnCallLimiterToPool(::GlobalNamespace::CallLimiter*  limiter) ;

/// @brief Method SerializeTimerState, addr 0x5bd2444, size 0x2bc, virtual false, abstract: false, final false
inline int32_t SerializeTimerState() ;

/// [PunRPC]
/// @brief Method TimerToggledMasterRPC, addr 0x5bd2f40, size 0x214, virtual false, abstract: false, final false
inline void TimerToggledMasterRPC(bool  startTimer, int32_t  toggleTimeStamp, ::Photon::Realtime::Player*  player, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method UnregisterTimerBoard, addr 0x5bcfe6c, size 0x80, virtual false, abstract: false, final false
inline void UnregisterTimerBoard(::GorillaTagScripts::PlayerTimerBoard*  board) ;

/// @brief Method UpdateAllTimerBoards, addr 0x5bd22ec, size 0x158, virtual false, abstract: false, final false
inline void UpdateAllTimerBoards() ;

/// @brief Method UpdateTimerBoard, addr 0x5bd190c, size 0x358, virtual false, abstract: false, final false
inline void UpdateTimerBoard(::GorillaTagScripts::PlayerTimerBoard*  board) ;

/// @brief Method ValidateCallLimits, addr 0x5bd1d64, size 0x5c, virtual false, abstract: false, final false
inline bool ValidateCallLimits(::GlobalNamespace::PlayerTimerManager_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnLocalTimerStarted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnLocalTimerStarted() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_OnTimerStartedForPlayer() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_OnTimerStartedForPlayer() ;

constexpr ::UnityEngine::Events::UnityEvent_2<int32_t,int32_t>* const& __cordl_internal_get_OnTimerStopped() const;

constexpr ::UnityEngine::Events::UnityEvent_2<int32_t,int32_t>*& __cordl_internal_get_OnTimerStopped() ;

constexpr bool const& __cordl_internal_get_areTimersInitialized() const;

constexpr bool& __cordl_internal_get_areTimersInitialized() ;

constexpr ::ArrayW<::GlobalNamespace::CallLimiter*> const& __cordl_internal_get_callLimiters() const;

constexpr ::ArrayW<::GlobalNamespace::CallLimiter*>& __cordl_internal_get_callLimiters() ;

constexpr bool const& __cordl_internal_get_joinedRoom() const;

constexpr bool& __cordl_internal_get_joinedRoom() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CallLimiter*>* const& __cordl_internal_get_limiterPool() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CallLimiter*>*& __cordl_internal_get_limiterPool() ;

constexpr bool const& __cordl_internal_get_localPlayerRequestedStart() const;

constexpr bool& __cordl_internal_get_localPlayerRequestedStart() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::PlayerTimerManager_PlayerTimerData>* const& __cordl_internal_get_playerTimerData() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::PlayerTimerManager_PlayerTimerData>*& __cordl_internal_get_playerTimerData() ;

constexpr float_t const& __cordl_internal_get_requestSendTime() const;

constexpr float_t& __cordl_internal_get_requestSendTime() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_serializedTimerData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_serializedTimerData() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_timerPV() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_timerPV() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::CallLimiter*>* const& __cordl_internal_get_timerToggleLimiters() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::CallLimiter*>*& __cordl_internal_get_timerToggleLimiters() ;

constexpr void __cordl_internal_set_OnLocalTimerStarted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnTimerStartedForPlayer(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnTimerStopped(::UnityEngine::Events::UnityEvent_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_areTimersInitialized(bool  value) ;

constexpr void __cordl_internal_set_callLimiters(::ArrayW<::GlobalNamespace::CallLimiter*>  value) ;

constexpr void __cordl_internal_set_joinedRoom(bool  value) ;

constexpr void __cordl_internal_set_limiterPool(::System::Collections::Generic::List_1<::GlobalNamespace::CallLimiter*>*  value) ;

constexpr void __cordl_internal_set_localPlayerRequestedStart(bool  value) ;

constexpr void __cordl_internal_set_playerTimerData(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::PlayerTimerManager_PlayerTimerData>*  value) ;

constexpr void __cordl_internal_set_requestSendTime(float_t  value) ;

constexpr void __cordl_internal_set_serializedTimerData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_timerPV(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_timerToggleLimiters(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::CallLimiter*>*  value) ;

/// @brief Method .ctor, addr 0x5bd3acc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::PlayerTimerManager> getStaticF_instance() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoard>>* getStaticF_timerBoards() ;

static inline void setStaticF_instance(::UnityW<::GorillaTagScripts::PlayerTimerManager>  value) ;

static inline void setStaticF_timerBoards(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::PlayerTimerBoard>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTimerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTimerManager(PlayerTimerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTimerManager(PlayerTimerManager const& ) = delete;

/// @brief Field MAX_DURATION_SECONDS offset 0xffffffff size 0x4
static constexpr float_t  MAX_DURATION_SECONDS{static_cast<float_t>(3599.99f)};

/// @brief Field MAX_TIMER_INIT_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_TIMER_INIT_BYTES{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4009};

/// @brief Field timerPV, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___timerPV;

/// @brief Field OnLocalTimerStarted, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnLocalTimerStarted;

/// @brief Field OnTimerStartedForPlayer, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___OnTimerStartedForPlayer;

/// @brief Field OnTimerStopped, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<int32_t,int32_t>*  ___OnTimerStopped;

/// @brief Field requestSendTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___requestSendTime;

/// @brief Field localPlayerRequestedStart, offset: 0x4c, size: 0x1, def value: None
 bool  ___localPlayerRequestedStart;

/// @brief Field callLimiters, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CallLimiter*>  ___callLimiters;

/// @brief Field timerToggleLimiters, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::CallLimiter*>*  ___timerToggleLimiters;

/// @brief Field limiterPool, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CallLimiter*>*  ___limiterPool;

/// @brief Field areTimersInitialized, offset: 0x68, size: 0x1, def value: None
 bool  ___areTimersInitialized;

/// @brief Field playerTimerData, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::PlayerTimerManager_PlayerTimerData>*  ___playerTimerData;

/// @brief Field serializedTimerData, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___serializedTimerData;

/// @brief Field joinedRoom, offset: 0x80, size: 0x1, def value: None
 bool  ___joinedRoom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___timerPV) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___OnLocalTimerStarted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___OnTimerStartedForPlayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___OnTimerStopped) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___requestSendTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___localPlayerRequestedStart) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___callLimiters) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___timerToggleLimiters) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___limiterPool) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___areTimersInitialized) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___playerTimerData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___serializedTimerData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager, ___joinedRoom) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::PlayerTimerManager) == 0x88, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.PlayerTimerManager/<>c__DisplayClass30_0
class CORDL_TYPE PlayerTimerManager___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field actorNum, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorNum, put=__cordl_internal_set_actorNum)) int32_t  actorNum;

static inline ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <ClearOldPlayerData>b__0, addr 0x5bd3b88, size 0x20, virtual false, abstract: false, final false
inline bool _ClearOldPlayerData_b__0(::Photon::Realtime::Player*  x) ;

constexpr int32_t const& __cordl_internal_get_actorNum() const;

constexpr int32_t& __cordl_internal_get_actorNum() ;

constexpr void __cordl_internal_set_actorNum(int32_t  value) ;

/// @brief Method .ctor, addr 0x5bd2b78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTimerManager___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerManager___c__DisplayClass30_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTimerManager___c__DisplayClass30_0(PlayerTimerManager___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerManager___c__DisplayClass30_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTimerManager___c__DisplayClass30_0(PlayerTimerManager___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4008};

/// @brief Field actorNum, offset: 0x10, size: 0x4, def value: None
 int32_t  ___actorNum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0, ___actorNum) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::PlayerTimerManager___c__DisplayClass30_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.PlayerTimerManager/<>c__DisplayClass29_0
class CORDL_TYPE PlayerTimerManager___c__DisplayClass29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field actorNum, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorNum, put=__cordl_internal_set_actorNum)) int32_t  actorNum;

static inline ::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0* New_ctor() ;

/// @brief Method <DeserializeTimerState>b__0, addr 0x5bd3b68, size 0x20, virtual false, abstract: false, final false
inline bool _DeserializeTimerState_b__0(::Photon::Realtime::Player*  x) ;

constexpr int32_t const& __cordl_internal_get_actorNum() const;

constexpr int32_t& __cordl_internal_get_actorNum() ;

constexpr void __cordl_internal_set_actorNum(int32_t  value) ;

/// @brief Method .ctor, addr 0x5bd2b70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTimerManager___c__DisplayClass29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerManager___c__DisplayClass29_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTimerManager___c__DisplayClass29_0(PlayerTimerManager___c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerManager___c__DisplayClass29_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTimerManager___c__DisplayClass29_0(PlayerTimerManager___c__DisplayClass29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4007};

/// @brief Field actorNum, offset: 0x10, size: 0x4, def value: None
 int32_t  ___actorNum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0, ___actorNum) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::PlayerTimerManager___c__DisplayClass29_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaTagScripts
