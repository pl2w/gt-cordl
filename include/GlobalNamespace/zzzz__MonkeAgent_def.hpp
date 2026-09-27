#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeAgent)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion {
class NetworkRunner;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class MonkeAgent_RPCCallTracker;
}
namespace GlobalNamespace {
class MonkeAgent__QuitDelay_d__66;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
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
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeAgent;
}
namespace GlobalNamespace {
class MonkeAgent_RPCCallTracker;
}
namespace GlobalNamespace {
class MonkeAgent__QuitDelay_d__66;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeAgent*);
MARK_REF_T(::GlobalNamespace::MonkeAgent_RPCCallTracker*);
MARK_REF_T(::GlobalNamespace::MonkeAgent__QuitDelay_d__66*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeAgent*, "", "MonkeAgent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeAgent_RPCCallTracker*, "", "MonkeAgent/RPCCallTracker");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeAgent__QuitDelay_d__66*, "", "MonkeAgent/<QuitDelay>d__66");
// Dependencies NetPlayer, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeAgent
class CORDL_TYPE MonkeAgent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RPCCallTracker = ::GlobalNamespace::MonkeAgent_RPCCallTracker;

using _QuitDelay_d__66 = ::GlobalNamespace::MonkeAgent__QuitDelay_d__66;

/// @brief Field _sendReport, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__sendReport, put=__cordl_internal_set__sendReport)) bool  _sendReport;

/// @brief Field _suspiciousPlayerId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__suspiciousPlayerId, put=__cordl_internal_set__suspiciousPlayerId)) ::StringW  _suspiciousPlayerId;

/// @brief Field _suspiciousPlayerName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__suspiciousPlayerName, put=__cordl_internal_set__suspiciousPlayerName)) ::StringW  _suspiciousPlayerName;

/// @brief Field _suspiciousReason, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__suspiciousReason, put=__cordl_internal_set__suspiciousReason)) ::StringW  _suspiciousReason;

/// @brief Field cachedPlayerList, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedPlayerList, put=__cordl_internal_set_cachedPlayerList)) ::ArrayW<::GlobalNamespace::NetPlayer*>  cachedPlayerList;

/// @brief Field calls, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_calls, put=__cordl_internal_set_calls)) int32_t  calls;

/// @brief Field currentMasterClient, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMasterClient, put=__cordl_internal_set_currentMasterClient)) ::GlobalNamespace::NetPlayer*  currentMasterClient;

/// @brief Field hashTable, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hashTable, put=__cordl_internal_set_hashTable)) ::ExitGames::Client::Photon::Hashtable*  hashTable;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::MonkeAgent>  instance;

/// @brief Field lastCheck, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCheck, put=__cordl_internal_set_lastCheck)) float_t  lastCheck;

/// @brief Field lastReportChecked, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastReportChecked, put=__cordl_internal_set_lastReportChecked)) float_t  lastReportChecked;

/// @brief Field lastServerTimestamp, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastServerTimestamp, put=__cordl_internal_set_lastServerTimestamp)) int32_t  lastServerTimestamp;

/// @brief Field logErrorCount, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_logErrorCount, put=__cordl_internal_set_logErrorCount)) int32_t  logErrorCount;

/// @brief Field logErrorMax, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_logErrorMax, put=__cordl_internal_set_logErrorMax)) int32_t  logErrorMax;

/// @brief Field lowestActorNumber, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowestActorNumber, put=__cordl_internal_set_lowestActorNumber)) int32_t  lowestActorNumber;

/// @brief Field outObj, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_outObj, put=__cordl_internal_set_outObj)) ::System::Object*  outObj;

/// @brief Field playerID, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerID, put=__cordl_internal_set_playerID)) ::StringW  playerID;

/// @brief Field playerNick, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNick, put=__cordl_internal_set_playerNick)) ::StringW  playerNick;

/// @brief Field reportCheckCooldown, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_reportCheckCooldown, put=__cordl_internal_set_reportCheckCooldown)) float_t  reportCheckCooldown;

/// @brief Field reportedPlayers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportedPlayers, put=__cordl_internal_set_reportedPlayers)) ::System::Collections::Generic::List_1<::StringW>*  reportedPlayers;

/// @brief Field roomSize, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_roomSize, put=__cordl_internal_set_roomSize)) uint8_t  roomSize;

/// @brief Field rpcCallLimit, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rpcCallLimit, put=__cordl_internal_set_rpcCallLimit)) int32_t  rpcCallLimit;

/// @brief Field rpcErrorMax, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_rpcErrorMax, put=__cordl_internal_set_rpcErrorMax)) int32_t  rpcErrorMax;

 __declspec(property(get=get_runner)) ::UnityW<::Fusion::NetworkRunner>  runner;

 __declspec(property(get=get_sendReport, put=set_sendReport)) bool  sendReport;

/// @brief Field stringIndex, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_stringIndex, put=__cordl_internal_set_stringIndex)) int32_t  stringIndex;

 __declspec(property(get=get_suspiciousPlayerId, put=set_suspiciousPlayerId)) ::StringW  suspiciousPlayerId;

 __declspec(property(get=get_suspiciousPlayerName, put=set_suspiciousPlayerName)) ::StringW  suspiciousPlayerName;

 __declspec(property(get=get_suspiciousReason, put=set_suspiciousReason)) ::StringW  suspiciousReason;

/// @brief Field targetActors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_targetActors, put=setStaticF_targetActors)) ::ArrayW<int32_t>  targetActors;

/// @brief Field tempPlayer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempPlayer, put=__cordl_internal_set_tempPlayer)) ::GlobalNamespace::NetPlayer*  tempPlayer;

/// @brief Field testAssault, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_testAssault, put=__cordl_internal_set_testAssault)) bool  testAssault;

/// @brief Field userDecayTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_userDecayTime, put=__cordl_internal_set_userDecayTime)) float_t  userDecayTime;

/// @brief Field userRPCCalls, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_userRPCCalls, put=__cordl_internal_set_userRPCCalls)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MonkeAgent_RPCCallTracker*>*>*  userRPCCalls;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method CheckReports, addr 0x596957c, size 0x534, virtual false, abstract: false, final false
inline void CheckReports() ;

/// @brief Method CloseInvalidRoom, addr 0x596acc8, size 0xcc, virtual false, abstract: false, final false
inline void CloseInvalidRoom() ;

/// @brief Method DispatchReport, addr 0x596a500, size 0x594, virtual false, abstract: false, final false
inline void DispatchReport() ;

/// @brief Method GetRPCCallTracker, addr 0x596b38c, size 0x1cc, virtual false, abstract: false, final false
inline ::GlobalNamespace::MonkeAgent_RPCCallTracker* GetRPCCallTracker(::StringW  userID, ::StringW  rpcFunction) ;

/// @brief Method IncrementRPCCall, addr 0x596b088, size 0xac, virtual false, abstract: false, final false
static inline void IncrementRPCCall(::Photon::Pun::PhotonMessageInfo  info, /* [CallerMemberName] */ ::StringW  callingMethod) ;

/// @brief Method IncrementRPCCall, addr 0x596b134, size 0x9c, virtual false, abstract: false, final false
static inline void IncrementRPCCall(::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped, /* [CallerMemberName] */ ::StringW  callingMethod) ;

/// @brief Method IncrementRPCCallLocal, addr 0x596b1d0, size 0x144, virtual false, abstract: false, final false
inline void IncrementRPCCallLocal(::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped, ::StringW  rpcFunction) ;

/// @brief Method IncrementRPCTracker, addr 0x596a454, size 0x60, virtual false, abstract: false, final false
inline bool IncrementRPCTracker(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetPlayer*>  sender, /* [IsReadOnly] */ ::by_ref<::StringW>  rpcFunction, /* [IsReadOnly] */ ::by_ref<int32_t>  callLimit) ;

/// @brief Method IncrementRPCTracker, addr 0x596b360, size 0x2c, virtual false, abstract: false, final false
inline bool IncrementRPCTracker(/* [IsReadOnly] */ ::by_ref<::Photon::Realtime::Player*>  sender, /* [IsReadOnly] */ ::by_ref<::StringW>  rpcFunction, /* [IsReadOnly] */ ::by_ref<int32_t>  callLimit) ;

/// @brief Method IncrementRPCTracker, addr 0x596b314, size 0x4c, virtual false, abstract: false, final false
inline bool IncrementRPCTracker(/* [IsReadOnly] */ ::by_ref<::StringW>  userId, /* [IsReadOnly] */ ::by_ref<::StringW>  rpcFunction, /* [IsReadOnly] */ ::by_ref<int32_t>  callLimit) ;

/// @brief Method LogErrorCount, addr 0x596a168, size 0x2ec, virtual false, abstract: false, final false
inline void LogErrorCount(::StringW  logString, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method LowestActorNumber, addr 0x596ad94, size 0x108, virtual false, abstract: false, final false
inline int32_t LowestActorNumber() ;

static inline ::GlobalNamespace::MonkeAgent* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x5969e0c, size 0xc4, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  paused) ;

/// @brief Method OnDisable, addr 0x596956c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5969560, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerEnteredRoom, addr 0x596ae9c, size 0xa8, virtual false, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x596af44, size 0x144, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// [IteratorStateMachine(typeof(MonkeAgent::<QuitDelay>d__66))]
/// @brief Method QuitDelay, addr 0x596ab7c, size 0x58, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* QuitDelay(float_t  time) ;

/// @brief Method RefreshRPCs, addr 0x5969ed0, size 0x298, virtual false, abstract: false, final false
inline void RefreshRPCs() ;

/// @brief Method SendReport, addr 0x596a4b4, size 0x4c, virtual false, abstract: false, final false
inline void SendReport(::StringW  susReason, ::StringW  susId, ::StringW  susNick) ;

/// @brief Method SetToRoomCreatorIfHere, addr 0x596abd4, size 0xf4, virtual false, abstract: false, final false
inline void SetToRoomCreatorIfHere() ;

/// @brief Method ShouldDisconnectFromRoom, addr 0x596aa94, size 0xe8, virtual false, abstract: false, final false
inline bool ShouldDisconnectFromRoom() ;

/// @brief Method SliceUpdate, addr 0x5969578, size 0x4, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5969ab0, size 0x35c, virtual false, abstract: false, final false
inline void Start() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__49_0, addr 0x596b750, size 0xa8, virtual false, abstract: false, final false
inline void _Start_b__49_0() ;

constexpr bool const& __cordl_internal_get__sendReport() const;

constexpr bool& __cordl_internal_get__sendReport() ;

constexpr ::StringW const& __cordl_internal_get__suspiciousPlayerId() const;

constexpr ::StringW& __cordl_internal_get__suspiciousPlayerId() ;

constexpr ::StringW const& __cordl_internal_get__suspiciousPlayerName() const;

constexpr ::StringW& __cordl_internal_get__suspiciousPlayerName() ;

constexpr ::StringW const& __cordl_internal_get__suspiciousReason() const;

constexpr ::StringW& __cordl_internal_get__suspiciousReason() ;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& __cordl_internal_get_cachedPlayerList() const;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& __cordl_internal_get_cachedPlayerList() ;

constexpr int32_t const& __cordl_internal_get_calls() const;

constexpr int32_t& __cordl_internal_get_calls() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_currentMasterClient() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_currentMasterClient() ;

constexpr ::ExitGames::Client::Photon::Hashtable* const& __cordl_internal_get_hashTable() const;

constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_hashTable() ;

constexpr float_t const& __cordl_internal_get_lastCheck() const;

constexpr float_t& __cordl_internal_get_lastCheck() ;

constexpr float_t const& __cordl_internal_get_lastReportChecked() const;

constexpr float_t& __cordl_internal_get_lastReportChecked() ;

constexpr int32_t const& __cordl_internal_get_lastServerTimestamp() const;

constexpr int32_t& __cordl_internal_get_lastServerTimestamp() ;

constexpr int32_t const& __cordl_internal_get_logErrorCount() const;

constexpr int32_t& __cordl_internal_get_logErrorCount() ;

constexpr int32_t const& __cordl_internal_get_logErrorMax() const;

constexpr int32_t& __cordl_internal_get_logErrorMax() ;

constexpr int32_t const& __cordl_internal_get_lowestActorNumber() const;

constexpr int32_t& __cordl_internal_get_lowestActorNumber() ;

constexpr ::System::Object* const& __cordl_internal_get_outObj() const;

constexpr ::System::Object*& __cordl_internal_get_outObj() ;

constexpr ::StringW const& __cordl_internal_get_playerID() const;

constexpr ::StringW& __cordl_internal_get_playerID() ;

constexpr ::StringW const& __cordl_internal_get_playerNick() const;

constexpr ::StringW& __cordl_internal_get_playerNick() ;

constexpr float_t const& __cordl_internal_get_reportCheckCooldown() const;

constexpr float_t& __cordl_internal_get_reportCheckCooldown() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_reportedPlayers() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_reportedPlayers() ;

constexpr uint8_t const& __cordl_internal_get_roomSize() const;

constexpr uint8_t& __cordl_internal_get_roomSize() ;

constexpr int32_t const& __cordl_internal_get_rpcCallLimit() const;

constexpr int32_t& __cordl_internal_get_rpcCallLimit() ;

constexpr int32_t const& __cordl_internal_get_rpcErrorMax() const;

constexpr int32_t& __cordl_internal_get_rpcErrorMax() ;

constexpr int32_t const& __cordl_internal_get_stringIndex() const;

constexpr int32_t& __cordl_internal_get_stringIndex() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_tempPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_tempPlayer() ;

constexpr bool const& __cordl_internal_get_testAssault() const;

constexpr bool& __cordl_internal_get_testAssault() ;

constexpr float_t const& __cordl_internal_get_userDecayTime() const;

constexpr float_t& __cordl_internal_get_userDecayTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MonkeAgent_RPCCallTracker*>*>* const& __cordl_internal_get_userRPCCalls() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MonkeAgent_RPCCallTracker*>*>*& __cordl_internal_get_userRPCCalls() ;

constexpr void __cordl_internal_set__sendReport(bool  value) ;

constexpr void __cordl_internal_set__suspiciousPlayerId(::StringW  value) ;

constexpr void __cordl_internal_set__suspiciousPlayerName(::StringW  value) ;

constexpr void __cordl_internal_set__suspiciousReason(::StringW  value) ;

constexpr void __cordl_internal_set_cachedPlayerList(::ArrayW<::GlobalNamespace::NetPlayer*>  value) ;

constexpr void __cordl_internal_set_calls(int32_t  value) ;

constexpr void __cordl_internal_set_currentMasterClient(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_hashTable(::ExitGames::Client::Photon::Hashtable*  value) ;

constexpr void __cordl_internal_set_lastCheck(float_t  value) ;

constexpr void __cordl_internal_set_lastReportChecked(float_t  value) ;

constexpr void __cordl_internal_set_lastServerTimestamp(int32_t  value) ;

constexpr void __cordl_internal_set_logErrorCount(int32_t  value) ;

constexpr void __cordl_internal_set_logErrorMax(int32_t  value) ;

constexpr void __cordl_internal_set_lowestActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_outObj(::System::Object*  value) ;

constexpr void __cordl_internal_set_playerID(::StringW  value) ;

constexpr void __cordl_internal_set_playerNick(::StringW  value) ;

constexpr void __cordl_internal_set_reportCheckCooldown(float_t  value) ;

constexpr void __cordl_internal_set_reportedPlayers(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_roomSize(uint8_t  value) ;

constexpr void __cordl_internal_set_rpcCallLimit(int32_t  value) ;

constexpr void __cordl_internal_set_rpcErrorMax(int32_t  value) ;

constexpr void __cordl_internal_set_stringIndex(int32_t  value) ;

constexpr void __cordl_internal_set_tempPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_testAssault(bool  value) ;

constexpr void __cordl_internal_set_userDecayTime(float_t  value) ;

constexpr void __cordl_internal_set_userRPCCalls(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MonkeAgent_RPCCallTracker*>*>*  value) ;

/// @brief Method .ctor, addr 0x596b588, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MonkeAgent> getStaticF_instance() ;

static inline ::ArrayW<int32_t> getStaticF_targetActors() ;

/// @brief Method get_runner, addr 0x596930c, size 0xa8, virtual false, abstract: false, final false
inline ::UnityW<::Fusion::NetworkRunner> get_runner() ;

/// @brief Method get_sendReport, addr 0x59693b4, size 0x8, virtual false, abstract: false, final false
inline bool get_sendReport() ;

/// @brief Method get_suspiciousPlayerId, addr 0x59693d4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_suspiciousPlayerId() ;

/// @brief Method get_suspiciousPlayerName, addr 0x5969458, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_suspiciousPlayerName() ;

/// @brief Method get_suspiciousReason, addr 0x59694dc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_suspiciousReason() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::MonkeAgent>  value) ;

static inline void setStaticF_targetActors(::ArrayW<int32_t>  value) ;

/// @brief Method set_sendReport, addr 0x59693bc, size 0x18, virtual false, abstract: false, final false
inline void set_sendReport(bool  value) ;

/// @brief Method set_suspiciousPlayerId, addr 0x59693dc, size 0x7c, virtual false, abstract: false, final false
inline void set_suspiciousPlayerId(::StringW  value) ;

/// @brief Method set_suspiciousPlayerName, addr 0x5969460, size 0x7c, virtual false, abstract: false, final false
inline void set_suspiciousPlayerName(::StringW  value) ;

/// @brief Method set_suspiciousReason, addr 0x59694e4, size 0x7c, virtual false, abstract: false, final false
inline void set_suspiciousReason(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeAgent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeAgent(MonkeAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeAgent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeAgent(MonkeAgent const& ) = delete;

/// @brief Field InvalidRPC offset 0xffffffff size 0x8
static constexpr ::ConstString  InvalidRPC{u"invalid RPC stuff"};

/// @brief Field ReportAssault offset 0xffffffff size 0x1
static constexpr uint8_t  ReportAssault{static_cast<uint8_t>(0x8u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2386};

/// @brief Field _sendReport, offset: 0x20, size: 0x1, def value: None
 bool  ____sendReport;

/// @brief Field _suspiciousPlayerId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____suspiciousPlayerId;

/// @brief Field _suspiciousPlayerName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____suspiciousPlayerName;

/// @brief Field _suspiciousReason, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____suspiciousReason;

/// @brief Field reportedPlayers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___reportedPlayers;

/// @brief Field roomSize, offset: 0x48, size: 0x1, def value: None
 uint8_t  ___roomSize;

/// @brief Field lastCheck, offset: 0x4c, size: 0x4, def value: None
 float_t  ___lastCheck;

/// @brief Field userDecayTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___userDecayTime;

/// @brief Field currentMasterClient, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___currentMasterClient;

/// @brief Field testAssault, offset: 0x60, size: 0x1, def value: None
 bool  ___testAssault;

/// @brief Field lowestActorNumber, offset: 0x64, size: 0x4, def value: None
 int32_t  ___lowestActorNumber;

/// @brief Field calls, offset: 0x68, size: 0x4, def value: None
 int32_t  ___calls;

/// @brief Field rpcCallLimit, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___rpcCallLimit;

/// @brief Field logErrorMax, offset: 0x70, size: 0x4, def value: None
 int32_t  ___logErrorMax;

/// @brief Field rpcErrorMax, offset: 0x74, size: 0x4, def value: None
 int32_t  ___rpcErrorMax;

/// @brief Field outObj, offset: 0x78, size: 0x8, def value: None
 ::System::Object*  ___outObj;

/// @brief Field tempPlayer, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___tempPlayer;

/// @brief Field logErrorCount, offset: 0x88, size: 0x4, def value: None
 int32_t  ___logErrorCount;

/// @brief Field stringIndex, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___stringIndex;

/// @brief Field playerID, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___playerID;

/// @brief Field playerNick, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___playerNick;

/// @brief Field lastServerTimestamp, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___lastServerTimestamp;

/// @brief Field cachedPlayerList, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetPlayer*>  ___cachedPlayerList;

/// @brief Field lastReportChecked, offset: 0xb0, size: 0x4, def value: None
 float_t  ___lastReportChecked;

/// @brief Field reportCheckCooldown, offset: 0xb4, size: 0x4, def value: None
 float_t  ___reportCheckCooldown;

/// @brief Field userRPCCalls, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MonkeAgent_RPCCallTracker*>*>*  ___userRPCCalls;

/// @brief Field hashTable, offset: 0xc0, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Hashtable*  ___hashTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeAgent, ____sendReport) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ____suspiciousPlayerId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ____suspiciousPlayerName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ____suspiciousReason) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___reportedPlayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___roomSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___lastCheck) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___userDecayTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___currentMasterClient) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___testAssault) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___lowestActorNumber) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___calls) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___rpcCallLimit) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___logErrorMax) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___rpcErrorMax) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___outObj) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___tempPlayer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___logErrorCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___stringIndex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___playerID) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___playerNick) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___lastServerTimestamp) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___cachedPlayerList) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___lastReportChecked) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___reportCheckCooldown) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___userRPCCalls) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent, ___hashTable) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeAgent) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeAgent/<QuitDelay>d__66
class CORDL_TYPE MonkeAgent__QuitDelay_d__66 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x596b7fc, size 0xe4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::MonkeAgent__QuitDelay_d__66* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x596b8e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x596b8e8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x596b920, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x596b7f8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x596b560, size 0x28, virtual false, abstract: false, final false
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
constexpr MonkeAgent__QuitDelay_d__66() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeAgent__QuitDelay_d__66", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeAgent__QuitDelay_d__66(MonkeAgent__QuitDelay_d__66 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeAgent__QuitDelay_d__66", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeAgent__QuitDelay_d__66(MonkeAgent__QuitDelay_d__66 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2385};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeAgent__QuitDelay_d__66, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent__QuitDelay_d__66, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeAgent__QuitDelay_d__66) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeAgent/RPCCallTracker
class CORDL_TYPE MonkeAgent_RPCCallTracker : public ::System::Object {
public:
// Declarations
/// @brief Field RPCCalls, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_RPCCalls, put=__cordl_internal_set_RPCCalls)) int32_t  RPCCalls;

/// @brief Field RPCCallsMax, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_RPCCallsMax, put=__cordl_internal_set_RPCCallsMax)) int32_t  RPCCallsMax;

static inline ::GlobalNamespace::MonkeAgent_RPCCallTracker* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_RPCCalls() const;

constexpr int32_t& __cordl_internal_get_RPCCalls() ;

constexpr int32_t const& __cordl_internal_get_RPCCallsMax() const;

constexpr int32_t& __cordl_internal_get_RPCCallsMax() ;

constexpr void __cordl_internal_set_RPCCalls(int32_t  value) ;

constexpr void __cordl_internal_set_RPCCallsMax(int32_t  value) ;

/// @brief Method .ctor, addr 0x596b558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeAgent_RPCCallTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeAgent_RPCCallTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeAgent_RPCCallTracker(MonkeAgent_RPCCallTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeAgent_RPCCallTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeAgent_RPCCallTracker(MonkeAgent_RPCCallTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2384};

/// @brief Field RPCCalls, offset: 0x10, size: 0x4, def value: None
 int32_t  ___RPCCalls;

/// @brief Field RPCCallsMax, offset: 0x14, size: 0x4, def value: None
 int32_t  ___RPCCallsMax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeAgent_RPCCallTracker, ___RPCCalls) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeAgent_RPCCallTracker, ___RPCCallsMax) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeAgent_RPCCallTracker) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
