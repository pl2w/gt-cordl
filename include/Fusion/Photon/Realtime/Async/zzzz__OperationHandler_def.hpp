#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/OperationHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OperationHandler)
namespace Fusion::Photon::Realtime::Async {
class PhotonConnectionCallbacks;
}
namespace Fusion::Photon::Realtime::Async {
class PhotonLobbyCallbacks;
}
namespace Fusion::Photon::Realtime::Async {
class PhotonMatchmakingCallbacks;
}
namespace Fusion::Photon::Realtime {
struct DisconnectCause;
}
namespace Fusion::Photon::Realtime {
class FriendInfo;
}
namespace Fusion::Photon::Realtime {
class IConnectionCallbacks;
}
namespace Fusion::Photon::Realtime {
class ILobbyCallbacks;
}
namespace Fusion::Photon::Realtime {
class IMatchmakingCallbacks;
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
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime::Async {
class OperationHandler;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::Async::OperationHandler*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::Async::OperationHandler*, "Fusion.Photon.Realtime.Async", "OperationHandler");
// Dependencies System.Object
namespace Fusion::Photon::Realtime::Async {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.Async.OperationHandler
class CORDL_TYPE OperationHandler : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  CompletionSource;

/// @brief Field ConnectionCallbacks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionCallbacks, put=__cordl_internal_set_ConnectionCallbacks)) ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*  ConnectionCallbacks;

 __declspec(property(get=get_IsCancellationRequested)) bool  IsCancellationRequested;

/// @brief Field LobbyCallbacks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LobbyCallbacks, put=__cordl_internal_set_LobbyCallbacks)) ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*  LobbyCallbacks;

/// @brief Field MatchmakingCallbacks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchmakingCallbacks, put=__cordl_internal_set_MatchmakingCallbacks)) ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*  MatchmakingCallbacks;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<int16_t>*  Task;

 __declspec(property(get=get_Token)) ::System::Threading::CancellationToken  Token;

/// @brief Field _cancellation, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellation, put=__cordl_internal_set__cancellation)) ::System::Threading::CancellationTokenSource*  _cancellation;

/// @brief Field _result, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  _result;

/// @brief Field _throwOnErrors, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__throwOnErrors, put=__cordl_internal_set__throwOnErrors)) bool  _throwOnErrors;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IConnectionCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr operator  ::Fusion::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

/// @brief Method Cancel, addr 0x5f6b290, size 0x7c, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method Expire, addr 0x5f6b218, size 0x78, virtual false, abstract: false, final false
inline void Expire() ;

static inline ::Fusion::Photon::Realtime::Async::OperationHandler* New_ctor(bool  throwOnErrors, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// @brief Method OnConnected, addr 0x5f6b30c, size 0x2c, virtual true, abstract: false, final true
inline void OnConnected() ;

/// @brief Method OnConnectedToMaster, addr 0x5f6b338, size 0x30, virtual true, abstract: false, final true
inline void OnConnectedToMaster() ;

/// @brief Method OnCreateRoomFailed, addr 0x5f6b50c, size 0xfc, virtual true, abstract: false, final true
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCreatedRoom, addr 0x5f6b4e0, size 0x2c, virtual true, abstract: false, final true
inline void OnCreatedRoom() ;

/// @brief Method OnCustomAuthenticationFailed, addr 0x5f6b368, size 0x90, virtual true, abstract: false, final true
inline void OnCustomAuthenticationFailed(::StringW  debugMessage) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0x5f6b3f8, size 0x2c, virtual true, abstract: false, final true
inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDisconnected, addr 0x5f6b424, size 0x90, virtual true, abstract: false, final true
inline void OnDisconnected(::Fusion::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnFriendListUpdate, addr 0x5f6b608, size 0x2c, virtual true, abstract: false, final true
inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method OnJoinRandomFailed, addr 0x5f6b664, size 0xfc, virtual true, abstract: false, final true
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0x5f6b760, size 0xfc, virtual true, abstract: false, final true
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedLobby, addr 0x5f6b88c, size 0x30, virtual true, abstract: false, final true
inline void OnJoinedLobby() ;

/// @brief Method OnJoinedRoom, addr 0x5f6b634, size 0x30, virtual true, abstract: false, final true
inline void OnJoinedRoom() ;

/// @brief Method OnLeftLobby, addr 0x5f6b8bc, size 0x4, virtual true, abstract: false, final true
inline void OnLeftLobby() ;

/// @brief Method OnLeftRoom, addr 0x5f6b85c, size 0x30, virtual true, abstract: false, final true
inline void OnLeftRoom() ;

/// @brief Method OnLobbyStatisticsUpdate, addr 0x5f6b8c4, size 0x4, virtual true, abstract: false, final true
inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics) ;

/// @brief Method OnRegionListReceived, addr 0x5f6b4b4, size 0x2c, virtual true, abstract: false, final true
inline void OnRegionListReceived(::Fusion::Photon::Realtime::RegionHandler*  regionHandler) ;

/// @brief Method OnRoomListUpdate, addr 0x5f6b8c0, size 0x4, virtual true, abstract: false, final true
inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList) ;

/// @brief Method SetException, addr 0x5f6b17c, size 0x9c, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  e) ;

/// @brief Method SetResult, addr 0x5f6adf8, size 0x9c, virtual false, abstract: false, final false
inline void SetResult(int16_t  result) ;

constexpr ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks* const& __cordl_internal_get_ConnectionCallbacks() const;

constexpr ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*& __cordl_internal_get_ConnectionCallbacks() ;

constexpr ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks* const& __cordl_internal_get_LobbyCallbacks() const;

constexpr ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*& __cordl_internal_get_LobbyCallbacks() ;

constexpr ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks* const& __cordl_internal_get_MatchmakingCallbacks() const;

constexpr ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*& __cordl_internal_get_MatchmakingCallbacks() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellation() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellation() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>* const& __cordl_internal_get__result() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*& __cordl_internal_get__result() ;

constexpr bool const& __cordl_internal_get__throwOnErrors() const;

constexpr bool& __cordl_internal_get__throwOnErrors() ;

constexpr void __cordl_internal_set_ConnectionCallbacks(::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*  value) ;

constexpr void __cordl_internal_set_LobbyCallbacks(::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*  value) ;

constexpr void __cordl_internal_set_MatchmakingCallbacks(::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*  value) ;

constexpr void __cordl_internal_set__cancellation(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__result(::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  value) ;

constexpr void __cordl_internal_set__throwOnErrors(bool  value) ;

/// @brief Method .ctor, addr 0x5f6a69c, size 0x2e8, virtual false, abstract: false, final false
inline void _ctor(bool  throwOnErrors, ::System::Threading::CancellationToken  externalCancellationToken) ;

/// @brief Method get_CompletionSource, addr 0x5f6b15c, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>* get_CompletionSource() ;

/// @brief Method get_IsCancellationRequested, addr 0x5f6b164, size 0x18, virtual false, abstract: false, final false
inline bool get_IsCancellationRequested() ;

/// @brief Method get_Task, addr 0x5f69ac0, size 0x48, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int16_t>* get_Task() ;

/// @brief Method get_Token, addr 0x5f6a984, size 0x18, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken get_Token() ;

/// @brief Convert to "::Fusion::Photon::Realtime::IConnectionCallbacks"
constexpr ::Fusion::Photon::Realtime::IConnectionCallbacks* i___Fusion__Photon__Realtime__IConnectionCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept;

/// @brief Convert to "::Fusion::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Fusion::Photon::Realtime::IMatchmakingCallbacks* i___Fusion__Photon__Realtime__IMatchmakingCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OperationHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OperationHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OperationHandler(OperationHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OperationHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OperationHandler(OperationHandler const& ) = delete;

/// @brief Field OPERATION_TIMEOUT_SEC offset 0xffffffff size 0x4
static constexpr float_t  OPERATION_TIMEOUT_SEC{static_cast<float_t>(30.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28132};

/// @brief Field ConnectionCallbacks, offset: 0x10, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Async::PhotonConnectionCallbacks*  ___ConnectionCallbacks;

/// @brief Field MatchmakingCallbacks, offset: 0x18, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Async::PhotonMatchmakingCallbacks*  ___MatchmakingCallbacks;

/// @brief Field LobbyCallbacks, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*  ___LobbyCallbacks;

/// @brief Field _throwOnErrors, offset: 0x28, size: 0x1, def value: None
 bool  ____throwOnErrors;

/// @brief Field _result, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<int16_t>*  ____result;

/// @brief Field _cancellation, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cancellation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::Async::OperationHandler, ___ConnectionCallbacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::OperationHandler, ___MatchmakingCallbacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::OperationHandler, ___LobbyCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::OperationHandler, ____throwOnErrors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::OperationHandler, ____result) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::Async::OperationHandler, ____cancellation) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::Async::OperationHandler) == 0x40, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime::Async
