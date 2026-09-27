#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/SupportLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupportLogger)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
}
namespace Fusion::Photon::Realtime {
class ErrorInfo;
}
namespace Fusion::Photon::Realtime {
class FriendInfo;
}
namespace Fusion::Photon::Realtime {
class IConnectionCallbacks;
}
namespace Fusion::Photon::Realtime {
class IErrorInfoCallback;
}
namespace Fusion::Photon::Realtime {
class IInRoomCallbacks;
}
namespace Fusion::Photon::Realtime {
class ILobbyCallbacks;
}
namespace Fusion::Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingClient;
}
namespace Fusion::Photon::Realtime {
class Player;
}
namespace Fusion::Photon::Realtime {
class RegionHandler;
}
namespace Fusion::Photon::Realtime {
class RoomInfo;
}
namespace Fusion::Photon::Realtime {
class TypedLobbyInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class SupportLogger;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::SupportLogger*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::SupportLogger*, "Fusion.Photon.Realtime", "SupportLogger");
// [DisallowMultipleComponent]
// [AddComponentMenu("")]
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.SupportLogger
class CORDL_TYPE SupportLogger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Client, put=set_Client)) ::Fusion::Photon::Realtime::LoadBalancingClient*  Client;

/// @brief Field LogTrafficStats, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_LogTrafficStats, put=__cordl_internal_set_LogTrafficStats)) bool  LogTrafficStats;

/// @brief Field client, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Fusion::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Field initialOnApplicationPauseSkipped, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialOnApplicationPauseSkipped, put=__cordl_internal_set_initialOnApplicationPauseSkipped)) bool  initialOnApplicationPauseSkipped;

/// @brief Field pingMax, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pingMax, put=__cordl_internal_set_pingMax)) int32_t  pingMax;

/// @brief Field pingMin, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_pingMin, put=__cordl_internal_set_pingMin)) int32_t  pingMin;

/// @brief Field startStopwatch, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_startStopwatch, put=__cordl_internal_set_startStopwatch)) ::System::Diagnostics::Stopwatch*  startStopwatch;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IConnectionCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IErrorInfoCallback"
constexpr operator  ::Fusion::Photon::Realtime::IErrorInfoCallback*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IInRoomCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

/// @brief Method GetFormattedTimestamp, addr 0x5f665c0, size 0x21c, virtual false, abstract: false, final false
inline ::StringW GetFormattedTimestamp() ;

/// @brief Method LogBasics, addr 0x5f65874, size 0xc2c, virtual false, abstract: false, final false
inline void LogBasics() ;

/// @brief Method LogStats, addr 0x5f66970, size 0x1e8, virtual false, abstract: false, final false
inline void LogStats() ;

static inline ::Fusion::Photon::Realtime::SupportLogger* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x5f664a8, size 0x118, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pause) ;

/// @brief Method OnApplicationQuit, addr 0x5f667dc, size 0x8, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnConnected, addr 0x5f66b58, size 0xd4, virtual true, abstract: false, final true
inline void OnConnected() ;

/// @brief Method OnConnectedToMaster, addr 0x5f66c2c, size 0x58, virtual true, abstract: false, final true
inline void OnConnectedToMaster() ;

/// @brief Method OnCreateRoomFailed, addr 0x5f66ddc, size 0x188, virtual true, abstract: false, final true
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCreatedRoom, addr 0x5f67440, size 0x1cc, virtual true, abstract: false, final true
inline void OnCreatedRoom() ;

/// @brief Method OnCustomAuthenticationFailed, addr 0x5f67bac, size 0x80, virtual true, abstract: false, final true
inline void OnCustomAuthenticationFailed(::StringW  debugMessage) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x5f67af0, size 0xbc, virtual true, abstract: false, final true
inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDestroy, addr 0x5f664a0, size 0x8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisconnected, addr 0x5f67664, size 0xec, virtual true, abstract: false, final true
inline void OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnErrorInfo, addr 0x5f67c84, size 0x2c, virtual true, abstract: false, final true
inline void OnErrorInfo(::Fusion::Photon::Realtime::ErrorInfo*  errorInfo) ;

/// @brief Method OnFriendListUpdate, addr 0x5f66c84, size 0x58, virtual true, abstract: false, final true
inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method OnJoinRandomFailed, addr 0x5f672b8, size 0x188, virtual true, abstract: false, final true
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0x5f67130, size 0x188, virtual true, abstract: false, final true
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedLobby, addr 0x5f66cdc, size 0xa8, virtual true, abstract: false, final true
inline void OnJoinedLobby() ;

/// @brief Method OnJoinedRoom, addr 0x5f66f64, size 0x1cc, virtual true, abstract: false, final true
inline void OnJoinedRoom() ;

/// @brief Method OnLeftLobby, addr 0x5f66d84, size 0x58, virtual true, abstract: false, final true
inline void OnLeftLobby() ;

/// @brief Method OnLeftRoom, addr 0x5f6760c, size 0x58, virtual true, abstract: false, final true
inline void OnLeftRoom() ;

/// @brief Method OnLobbyStatisticsUpdate, addr 0x5f67c2c, size 0x58, virtual true, abstract: false, final true
inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics) ;

/// @brief Method OnMasterClientSwitched, addr 0x5f67a48, size 0xa8, virtual true, abstract: false, final true
inline void OnMasterClientSwitched(::Fusion::Photon::Realtime::Player*  newMasterClient) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5f67848, size 0xa8, virtual true, abstract: false, final true
inline void OnPlayerEnteredRoom(::Fusion::Photon::Realtime::Player*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5f678f0, size 0xa8, virtual true, abstract: false, final true
inline void OnPlayerLeftRoom(::Fusion::Photon::Realtime::Player*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0x5f679f0, size 0x58, virtual true, abstract: false, final true
inline void OnPlayerPropertiesUpdate(::Fusion::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method OnRegionListReceived, addr 0x5f67750, size 0x58, virtual true, abstract: false, final true
inline void OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler) ;

/// @brief Method OnRoomListUpdate, addr 0x5f677a8, size 0xa0, virtual true, abstract: false, final true
inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList) ;

/// @brief Method OnRoomPropertiesUpdate, addr 0x5f67998, size 0x58, virtual true, abstract: false, final true
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method Start, addr 0x5f657e4, size 0x90, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartLogStats, addr 0x5f667e4, size 0x54, virtual false, abstract: false, final false
inline void StartLogStats() ;

/// @brief Method StartTrackValues, addr 0x5f66884, size 0x54, virtual false, abstract: false, final false
inline void StartTrackValues() ;

/// @brief Method StopLogStats, addr 0x5f66838, size 0x4c, virtual false, abstract: false, final false
inline void StopLogStats() ;

/// @brief Method StopTrackValues, addr 0x5f668d8, size 0x4c, virtual false, abstract: false, final false
inline void StopTrackValues() ;

/// @brief Method TrackValues, addr 0x5f66924, size 0x4c, virtual false, abstract: false, final false
inline void TrackValues() ;

constexpr bool const& __cordl_internal_get_LogTrafficStats() const;

constexpr bool& __cordl_internal_get_LogTrafficStats() ;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr bool const& __cordl_internal_get_initialOnApplicationPauseSkipped() const;

constexpr bool& __cordl_internal_get_initialOnApplicationPauseSkipped() ;

constexpr int32_t const& __cordl_internal_get_pingMax() const;

constexpr int32_t& __cordl_internal_get_pingMax() ;

constexpr int32_t const& __cordl_internal_get_pingMin() const;

constexpr int32_t& __cordl_internal_get_pingMin() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_startStopwatch() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_startStopwatch() ;

constexpr void __cordl_internal_set_LogTrafficStats(bool  value) ;

constexpr void __cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

constexpr void __cordl_internal_set_initialOnApplicationPauseSkipped(bool  value) ;

constexpr void __cordl_internal_set_pingMax(int32_t  value) ;

constexpr void __cordl_internal_set_pingMin(int32_t  value) ;

constexpr void __cordl_internal_set_startStopwatch(::System::Diagnostics::Stopwatch*  value) ;

/// @brief Method .ctor, addr 0x5f67cb0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Client, addr 0x5f65774, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::Photon::Realtime::LoadBalancingClient* get_Client() ;

/// @brief Convert to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr ::Fusion::Photon::Realtime::IConnectionCallbacks* i___Fusion__Photon__Realtime__IConnectionCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::IErrorInfoCallback"
constexpr ::Fusion::Photon::Realtime::IErrorInfoCallback* i___Fusion__Photon__Realtime__IErrorInfoCallback() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::IInRoomCallbacks"
constexpr ::Fusion::Photon::Realtime::IInRoomCallbacks* i___Fusion__Photon__Realtime__IInRoomCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Fusion::Photon::Realtime::IMatchmakingCallbacks* i___Fusion__Photon__Realtime__IMatchmakingCallbacks() noexcept;

/// @brief Method set_Client, addr 0x5f6577c, size 0x68, virtual false, abstract: false, final false
inline void set_Client(::Fusion::Photon::Realtime::LoadBalancingClient*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SupportLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SupportLogger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportLogger(SupportLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportLogger(SupportLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28108};

/// @brief Field LogTrafficStats, offset: 0x20, size: 0x1, def value: None
 bool  ___LogTrafficStats;

/// @brief Field client, offset: 0x28, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::LoadBalancingClient*  ___client;

/// @brief Field startStopwatch, offset: 0x30, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ___startStopwatch;

/// @brief Field initialOnApplicationPauseSkipped, offset: 0x38, size: 0x1, def value: None
 bool  ___initialOnApplicationPauseSkipped;

/// @brief Field pingMax, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___pingMax;

/// @brief Field pingMin, offset: 0x40, size: 0x4, def value: None
 int32_t  ___pingMin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::SupportLogger, ___LogTrafficStats) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SupportLogger, ___client) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SupportLogger, ___startStopwatch) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SupportLogger, ___initialOnApplicationPauseSkipped) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SupportLogger, ___pingMax) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::SupportLogger, ___pingMin) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::SupportLogger) == 0x48, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
