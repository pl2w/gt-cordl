#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmaking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMatchmaking)
namespace GlobalNamespace {
struct CustomMatchmaking_RoomCreationOptions;
}
namespace GlobalNamespace {
struct CustomMatchmaking_RoomOperationResult;
}
namespace GlobalNamespace {
struct CustomMatchmaking__CreateRoom_d__25;
}
namespace GlobalNamespace {
struct CustomMatchmaking__CreateRoom_d__26;
}
namespace GlobalNamespace {
struct CustomMatchmaking__JoinOpenRoom_d__28;
}
namespace GlobalNamespace {
struct CustomMatchmaking__JoinRoom_d__27;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking_ICustomMatchmakingBehaviour;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class CustomMatchmaking_ICustomMatchmakingBehaviour;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*);
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking*, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking");
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/ICustomMatchmakingBehaviour");
// [ExecuteAlways]
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking
class CORDL_TYPE CustomMatchmaking : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RoomCreationOptions = ::GlobalNamespace::CustomMatchmaking_RoomCreationOptions;

using RoomOperationResult = ::GlobalNamespace::CustomMatchmaking_RoomOperationResult;

using _CreateRoom_d__25 = ::GlobalNamespace::CustomMatchmaking__CreateRoom_d__25;

using _CreateRoom_d__26 = ::GlobalNamespace::CustomMatchmaking__CreateRoom_d__26;

using _JoinOpenRoom_d__28 = ::GlobalNamespace::CustomMatchmaking__JoinOpenRoom_d__28;

using _JoinRoom_d__27 = ::GlobalNamespace::CustomMatchmaking__JoinRoom_d__27;

using ICustomMatchmakingBehaviour = ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour;

/// @brief [DebugMember((Meta.XR.ImmersiveDebugger.DebugColor)1, Category = "Custom Matchmaking", Tweakable = false)]
 __declspec(property(get=get_ConnectedRoomToken)) ::StringW  ConnectedRoomToken;

/// @brief [DebugMember((Meta.XR.ImmersiveDebugger.DebugColor)1, Category = "Custom Matchmaking", Tweakable = false)]
 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsPasswordProtected, put=set_IsPasswordProtected)) bool  IsPasswordProtected;

 __declspec(property(get=get_IsPrivate, put=set_IsPrivate)) bool  IsPrivate;

 __declspec(property(get=get_LobbyName, put=set_LobbyName)) ::StringW  LobbyName;

/// @brief Field MatchmakingBehaviour, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MatchmakingBehaviour, put=__cordl_internal_set_MatchmakingBehaviour)) ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*  MatchmakingBehaviour;

 __declspec(property(get=get_MaxPlayersPerRoom, put=set_MaxPlayersPerRoom)) int32_t  MaxPlayersPerRoom;

 __declspec(property(get=get_SupportsRoomPassword)) bool  SupportsRoomPassword;

/// @brief Field isPasswordProtected, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPasswordProtected, put=__cordl_internal_set_isPasswordProtected)) bool  isPasswordProtected;

/// @brief Field isPrivate, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPrivate, put=__cordl_internal_set_isPrivate)) bool  isPrivate;

/// @brief Field lobbyName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyName, put=__cordl_internal_set_lobbyName)) ::StringW  lobbyName;

/// @brief Field maxPlayersPerRoom, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPlayersPerRoom, put=__cordl_internal_set_maxPlayersPerRoom)) int32_t  maxPlayersPerRoom;

/// @brief Field onRoomCreationFinished, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRoomCreationFinished, put=__cordl_internal_set_onRoomCreationFinished)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  onRoomCreationFinished;

/// @brief Field onRoomJoinFinished, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRoomJoinFinished, put=__cordl_internal_set_onRoomJoinFinished)) ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  onRoomJoinFinished;

/// @brief Field onRoomLeaveFinished, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRoomLeaveFinished, put=__cordl_internal_set_onRoomLeaveFinished)) ::UnityEngine::Events::UnityEvent*  onRoomLeaveFinished;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::<CreateRoom>d__25))]
/// [DebugMember((Meta.XR.ImmersiveDebugger.DebugColor)1, Category = "Custom Matchmaking")]
/// @brief Method CreateRoom, addr 0x9f6a980, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* CreateRoom() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::<CreateRoom>d__26))]
/// @brief Method CreateRoom, addr 0x9f6aa88, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* CreateRoom(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions  options) ;

/// @brief Method GenerateRoomPassword, addr 0x9f6b038, size 0x1c, virtual true, abstract: false, final false
inline ::StringW GenerateRoomPassword() ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::<JoinOpenRoom>d__28))]
/// @brief Method JoinOpenRoom, addr 0x9f6acec, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* JoinOpenRoom(::StringW  roomLobby) ;

/// [AsyncStateMachine(typeof(Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking::<JoinRoom>d__27))]
/// @brief Method JoinRoom, addr 0x9f6abb4, size 0x138, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* JoinRoom(::StringW  roomToken, ::StringW  roomPassword) ;

/// @brief Method LeaveRoom, addr 0x9f6ae0c, size 0xc0, virtual false, abstract: false, final false
inline void LeaveRoom() ;

static inline ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking* New_ctor() ;

/// @brief Method OnEnable, addr 0x9f6a8a4, size 0xdc, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour* const& __cordl_internal_get_MatchmakingBehaviour() const;

constexpr ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*& __cordl_internal_get_MatchmakingBehaviour() ;

constexpr bool const& __cordl_internal_get_isPasswordProtected() const;

constexpr bool& __cordl_internal_get_isPasswordProtected() ;

constexpr bool const& __cordl_internal_get_isPrivate() const;

constexpr bool& __cordl_internal_get_isPrivate() ;

constexpr ::StringW const& __cordl_internal_get_lobbyName() const;

constexpr ::StringW& __cordl_internal_get_lobbyName() ;

constexpr int32_t const& __cordl_internal_get_maxPlayersPerRoom() const;

constexpr int32_t& __cordl_internal_get_maxPlayersPerRoom() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* const& __cordl_internal_get_onRoomCreationFinished() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*& __cordl_internal_get_onRoomCreationFinished() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* const& __cordl_internal_get_onRoomJoinFinished() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*& __cordl_internal_get_onRoomJoinFinished() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onRoomLeaveFinished() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRoomLeaveFinished() ;

constexpr void __cordl_internal_set_MatchmakingBehaviour(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*  value) ;

constexpr void __cordl_internal_set_isPasswordProtected(bool  value) ;

constexpr void __cordl_internal_set_isPrivate(bool  value) ;

constexpr void __cordl_internal_set_lobbyName(::StringW  value) ;

constexpr void __cordl_internal_set_maxPlayersPerRoom(int32_t  value) ;

constexpr void __cordl_internal_set_onRoomCreationFinished(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  value) ;

constexpr void __cordl_internal_set_onRoomJoinFinished(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  value) ;

constexpr void __cordl_internal_set_onRoomLeaveFinished(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9f6b104, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ConnectedRoomToken, addr 0x9f6af7c, size 0xbc, virtual false, abstract: false, final false
inline ::StringW get_ConnectedRoomToken() ;

/// @brief Method get_IsConnected, addr 0x9f6aecc, size 0xb0, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsPasswordProtected, addr 0x9f6a894, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPasswordProtected() ;

/// @brief Method get_IsPrivate, addr 0x9f6a874, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPrivate() ;

/// @brief Method get_LobbyName, addr 0x9f6a864, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LobbyName() ;

/// @brief Method get_MaxPlayersPerRoom, addr 0x9f6a884, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxPlayersPerRoom() ;

/// @brief Method get_SupportsRoomPassword, addr 0x9f6b054, size 0xb0, virtual false, abstract: false, final false
inline bool get_SupportsRoomPassword() ;

/// @brief Method set_IsPasswordProtected, addr 0x9f6a89c, size 0x8, virtual false, abstract: false, final false
inline void set_IsPasswordProtected(bool  value) ;

/// @brief Method set_IsPrivate, addr 0x9f6a87c, size 0x8, virtual false, abstract: false, final false
inline void set_IsPrivate(bool  value) ;

/// @brief Method set_LobbyName, addr 0x9f6a86c, size 0x8, virtual false, abstract: false, final false
inline void set_LobbyName(::StringW  value) ;

/// @brief Method set_MaxPlayersPerRoom, addr 0x9f6a88c, size 0x8, virtual false, abstract: false, final false
inline void set_MaxPlayersPerRoom(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMatchmaking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMatchmaking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMatchmaking(CustomMatchmaking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMatchmaking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMatchmaking(CustomMatchmaking const& ) = delete;

/// @brief Field DebugCategory offset 0xffffffff size 0x8
static constexpr ::ConstString  DebugCategory{u"Custom Matchmaking"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30628};

/// [HideInInspector]
/// [Tooltip("Event called when a CreateRoom operation finished")]
/// @brief Field onRoomCreationFinished, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  ___onRoomCreationFinished;

/// [HideInInspector]
/// [Tooltip("Event called when a JoinRoom operation finished")]
/// @brief Field onRoomJoinFinished, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>*  ___onRoomJoinFinished;

/// [HideInInspector]
/// [Tooltip("Event called when a LeaveRoom operation finished")]
/// @brief Field onRoomLeaveFinished, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onRoomLeaveFinished;

/// [SerializeField]
/// [HideInInspector]
/// [Tooltip("Name of the game lobby the created room belongs to.")]
/// @brief Field lobbyName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___lobbyName;

/// [SerializeField]
/// [HideInInspector]
/// [Tooltip("Indicates whether this game room is private.")]
/// @brief Field isPrivate, offset: 0x40, size: 0x1, def value: None
 bool  ___isPrivate;

/// [SerializeField]
/// [HideInInspector]
/// [Tooltip("The maximum number of players allowed in this game room.")]
/// @brief Field maxPlayersPerRoom, offset: 0x44, size: 0x4, def value: None
 int32_t  ___maxPlayersPerRoom;

/// [SerializeField]
/// [HideInInspector]
/// [Tooltip("Indicates whether a password should be required for other players to be able to join this game room.")]
/// @brief Field isPasswordProtected, offset: 0x48, size: 0x1, def value: None
 bool  ___isPasswordProtected;

/// @brief Field MatchmakingBehaviour, offset: 0x50, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking_ICustomMatchmakingBehaviour*  ___MatchmakingBehaviour;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___onRoomCreationFinished) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___onRoomJoinFinished) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___onRoomLeaveFinished) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___lobbyName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___isPrivate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___maxPlayersPerRoom) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___isPasswordProtected) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking, ___MatchmakingBehaviour) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::CustomMatchmaking) == 0x58, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared
// Dependencies 
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/ICustomMatchmakingBehaviour
class CORDL_TYPE CustomMatchmaking_ICustomMatchmakingBehaviour {
public:
// Declarations
 __declspec(property(get=get_ConnectedRoomToken)) ::StringW  ConnectedRoomToken;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_SupportsRoomPassword)) bool  SupportsRoomPassword;

/// @brief Method CreateRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* CreateRoom(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions  options) ;

/// @brief Method JoinOpenRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* JoinOpenRoom(::StringW  lobbyName) ;

/// @brief Method JoinRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::CustomMatchmaking_RoomOperationResult>* JoinRoom(::StringW  roomToken, ::StringW  roomPassword) ;

/// @brief Method LeaveRoom, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void LeaveRoom() ;

/// @brief Method get_ConnectedRoomToken, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_ConnectedRoomToken() ;

/// @brief Method get_IsConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsConnected() ;

/// @brief Method get_SupportsRoomPassword, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_SupportsRoomPassword() ;

// Ctor Parameters [CppParam { name: "", ty: "CustomMatchmaking_ICustomMatchmakingBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMatchmaking_ICustomMatchmakingBehaviour(CustomMatchmaking_ICustomMatchmakingBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30621};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR::MultiplayerBlocks::Shared
