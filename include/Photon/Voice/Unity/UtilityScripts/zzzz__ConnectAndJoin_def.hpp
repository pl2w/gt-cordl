#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/UtilityScripts/ConnectAndJoin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectAndJoin)
namespace Photon::Realtime {
struct DisconnectCause;
}
namespace Photon::Realtime {
class EnterRoomParams;
}
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IConnectionCallbacks;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Photon::Realtime {
class RegionHandler;
}
namespace Photon::Voice::Unity {
class VoiceConnection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice::Unity::UtilityScripts {
class ConnectAndJoin;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin*, "Photon.Voice.Unity.UtilityScripts", "ConnectAndJoin");
// [RequireComponent(typeof(Photon.Voice.Unity.VoiceConnection))]
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Voice::Unity::UtilityScripts {
// Is value type: false
// CS Name: Photon.Voice.Unity.UtilityScripts.ConnectAndJoin
class CORDL_TYPE ConnectAndJoin : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsConnected)) bool  IsConnected;

/// @brief Field RandomRoom, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_RandomRoom, put=__cordl_internal_set_RandomRoom)) bool  RandomRoom;

/// @brief Field RoomName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomName, put=__cordl_internal_set_RoomName)) ::StringW  RoomName;

/// @brief Field autoConnect, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoConnect, put=__cordl_internal_set_autoConnect)) bool  autoConnect;

/// @brief Field autoTransmit, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoTransmit, put=__cordl_internal_set_autoTransmit)) bool  autoTransmit;

/// @brief Field enterRoomParams, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterRoomParams, put=__cordl_internal_set_enterRoomParams)) ::Photon::Realtime::EnterRoomParams*  enterRoomParams;

/// @brief Field publishUserId, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_publishUserId, put=__cordl_internal_set_publishUserId)) bool  publishUserId;

/// @brief Field voiceConnection, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceConnection, put=__cordl_internal_set_voiceConnection)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  voiceConnection;

/// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
constexpr operator  ::Photon::Realtime::IConnectionCallbacks*() noexcept;

/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr operator  ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

/// @brief Method Awake, addr 0xa788490, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ConnectNow, addr 0xa788530, size 0x1c, virtual false, abstract: false, final false
inline void ConnectNow() ;

static inline ::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin* New_ctor() ;

/// @brief Method OnConnected, addr 0xa788a78, size 0x4, virtual true, abstract: false, final true
inline void OnConnected() ;

/// @brief Method OnConnectedToMaster, addr 0xa788a7c, size 0xe4, virtual true, abstract: false, final true
inline void OnConnectedToMaster() ;

/// @brief Method OnCreateRoomFailed, addr 0xa788580, size 0x13c, virtual true, abstract: false, final true
inline void OnCreateRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnCreatedRoom, addr 0xa78857c, size 0x4, virtual true, abstract: false, final true
inline void OnCreatedRoom() ;

/// @brief Method OnCustomAuthenticationFailed, addr 0xa788c7c, size 0x4, virtual true, abstract: false, final true
inline void OnCustomAuthenticationFailed(::StringW  debugMessage) ;

/// @brief Method OnCustomAuthenticationResponse, addr 0xa788c78, size 0x4, virtual true, abstract: false, final true
inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method OnDisable, addr 0xa78854c, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDisconnected, addr 0xa788b60, size 0x114, virtual true, abstract: false, final true
inline void OnDisconnected(::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnEnable, addr 0xa7884e8, size 0x48, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFriendListUpdate, addr 0xa7886bc, size 0x4, virtual true, abstract: false, final true
inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList) ;

/// @brief Method OnJoinRandomFailed, addr 0xa7887b4, size 0x13c, virtual true, abstract: false, final true
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinRoomFailed, addr 0xa7888f0, size 0x180, virtual true, abstract: false, final true
inline void OnJoinRoomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedRoom, addr 0xa7886c0, size 0xf4, virtual true, abstract: false, final true
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0xa788a70, size 0x4, virtual true, abstract: false, final true
inline void OnLeftRoom() ;

/// @brief Method OnPreLeavingRoom, addr 0xa788a74, size 0x4, virtual true, abstract: false, final true
inline void OnPreLeavingRoom() ;

/// @brief Method OnRegionListReceived, addr 0xa788c74, size 0x4, virtual true, abstract: false, final true
inline void OnRegionListReceived(::Photon::Realtime::RegionHandler*  regionHandler) ;

constexpr bool const& __cordl_internal_get_RandomRoom() const;

constexpr bool& __cordl_internal_get_RandomRoom() ;

constexpr ::StringW const& __cordl_internal_get_RoomName() const;

constexpr ::StringW& __cordl_internal_get_RoomName() ;

constexpr bool const& __cordl_internal_get_autoConnect() const;

constexpr bool& __cordl_internal_get_autoConnect() ;

constexpr bool const& __cordl_internal_get_autoTransmit() const;

constexpr bool& __cordl_internal_get_autoTransmit() ;

constexpr ::Photon::Realtime::EnterRoomParams* const& __cordl_internal_get_enterRoomParams() const;

constexpr ::Photon::Realtime::EnterRoomParams*& __cordl_internal_get_enterRoomParams() ;

constexpr bool const& __cordl_internal_get_publishUserId() const;

constexpr bool& __cordl_internal_get_publishUserId() ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get_voiceConnection() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get_voiceConnection() ;

constexpr void __cordl_internal_set_RandomRoom(bool  value) ;

constexpr void __cordl_internal_set_RoomName(::StringW  value) ;

constexpr void __cordl_internal_set_autoConnect(bool  value) ;

constexpr void __cordl_internal_set_autoTransmit(bool  value) ;

constexpr void __cordl_internal_set_enterRoomParams(::Photon::Realtime::EnterRoomParams*  value) ;

constexpr void __cordl_internal_set_publishUserId(bool  value) ;

constexpr void __cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

/// @brief Method .ctor, addr 0xa788c80, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsConnected, addr 0xa788468, size 0x28, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
constexpr ::Photon::Realtime::IConnectionCallbacks* i___Photon__Realtime__IConnectionCallbacks() noexcept;

/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectAndJoin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectAndJoin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectAndJoin(ConnectAndJoin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectAndJoin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectAndJoin(ConnectAndJoin const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28895};

/// @brief Field voiceConnection, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  ___voiceConnection;

/// @brief Field RandomRoom, offset: 0x28, size: 0x1, def value: None
 bool  ___RandomRoom;

/// [SerializeField]
/// @brief Field autoConnect, offset: 0x29, size: 0x1, def value: None
 bool  ___autoConnect;

/// [SerializeField]
/// @brief Field autoTransmit, offset: 0x2a, size: 0x1, def value: None
 bool  ___autoTransmit;

/// [SerializeField]
/// @brief Field publishUserId, offset: 0x2b, size: 0x1, def value: None
 bool  ___publishUserId;

/// @brief Field RoomName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___RoomName;

/// @brief Field enterRoomParams, offset: 0x38, size: 0x8, def value: None
 ::Photon::Realtime::EnterRoomParams*  ___enterRoomParams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin, ___voiceConnection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin, ___RandomRoom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin, ___autoConnect) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin, ___autoTransmit) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin, ___publishUserId) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin, ___RoomName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin, ___enterRoomParams) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::UtilityScripts::ConnectAndJoin) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice::Unity::UtilityScripts
