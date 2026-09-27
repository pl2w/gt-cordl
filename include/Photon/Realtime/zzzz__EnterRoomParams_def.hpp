#pragma once
// IWYU pragma private; include "Photon/Realtime/EnterRoomParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__JoinMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnterRoomParams)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace Photon::Realtime {
class TypedLobby;
}
// Forward declare root types
namespace Photon::Realtime {
class EnterRoomParams;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::EnterRoomParams*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::EnterRoomParams*, "Photon.Realtime", "EnterRoomParams");
// Dependencies Photon.Realtime.JoinMode, System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.EnterRoomParams
class CORDL_TYPE EnterRoomParams : public ::System::Object {
public:
// Declarations
/// @brief Field ExpectedUsers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExpectedUsers, put=__cordl_internal_set_ExpectedUsers)) ::ArrayW<::StringW>  ExpectedUsers;

/// @brief Field JoinMode, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_JoinMode, put=__cordl_internal_set_JoinMode)) ::Photon::Realtime::JoinMode  JoinMode;

/// @brief Field Lobby, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Lobby, put=__cordl_internal_set_Lobby)) ::Photon::Realtime::TypedLobby*  Lobby;

/// @brief Field OnGameServer, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_OnGameServer, put=__cordl_internal_set_OnGameServer)) bool  OnGameServer;

/// @brief Field PlayerProperties, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerProperties, put=__cordl_internal_set_PlayerProperties)) ::ExitGames::Client::Photon::Hashtable*  PlayerProperties;

/// @brief Field RoomName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomName, put=__cordl_internal_set_RoomName)) ::StringW  RoomName;

/// @brief Field RoomOptions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomOptions, put=__cordl_internal_set_RoomOptions)) ::Photon::Realtime::RoomOptions*  RoomOptions;

static inline ::Photon::Realtime::EnterRoomParams* New_ctor() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_ExpectedUsers() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_ExpectedUsers() ;

constexpr ::Photon::Realtime::JoinMode const& __cordl_internal_get_JoinMode() const;

constexpr ::Photon::Realtime::JoinMode& __cordl_internal_get_JoinMode() ;

constexpr ::Photon::Realtime::TypedLobby* const& __cordl_internal_get_Lobby() const;

constexpr ::Photon::Realtime::TypedLobby*& __cordl_internal_get_Lobby() ;

constexpr bool const& __cordl_internal_get_OnGameServer() const;

constexpr bool& __cordl_internal_get_OnGameServer() ;

constexpr ::ExitGames::Client::Photon::Hashtable* const& __cordl_internal_get_PlayerProperties() const;

constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_PlayerProperties() ;

constexpr ::StringW const& __cordl_internal_get_RoomName() const;

constexpr ::StringW& __cordl_internal_get_RoomName() ;

constexpr ::Photon::Realtime::RoomOptions* const& __cordl_internal_get_RoomOptions() const;

constexpr ::Photon::Realtime::RoomOptions*& __cordl_internal_get_RoomOptions() ;

constexpr void __cordl_internal_set_ExpectedUsers(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_JoinMode(::Photon::Realtime::JoinMode  value) ;

constexpr void __cordl_internal_set_Lobby(::Photon::Realtime::TypedLobby*  value) ;

constexpr void __cordl_internal_set_OnGameServer(bool  value) ;

constexpr void __cordl_internal_set_PlayerProperties(::ExitGames::Client::Photon::Hashtable*  value) ;

constexpr void __cordl_internal_set_RoomName(::StringW  value) ;

constexpr void __cordl_internal_set_RoomOptions(::Photon::Realtime::RoomOptions*  value) ;

/// @brief Method .ctor, addr 0xa6fcce0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnterRoomParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnterRoomParams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnterRoomParams(EnterRoomParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnterRoomParams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnterRoomParams(EnterRoomParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29870};

/// @brief Field RoomName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___RoomName;

/// @brief Field RoomOptions, offset: 0x18, size: 0x8, def value: None
 ::Photon::Realtime::RoomOptions*  ___RoomOptions;

/// @brief Field Lobby, offset: 0x20, size: 0x8, def value: None
 ::Photon::Realtime::TypedLobby*  ___Lobby;

/// @brief Field PlayerProperties, offset: 0x28, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Hashtable*  ___PlayerProperties;

/// @brief Field OnGameServer, offset: 0x30, size: 0x1, def value: None
 bool  ___OnGameServer;

/// @brief Field JoinMode, offset: 0x31, size: 0x1, def value: None
 ::Photon::Realtime::JoinMode  ___JoinMode;

/// @brief Field ExpectedUsers, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___ExpectedUsers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___RoomOptions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___Lobby) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___PlayerProperties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___OnGameServer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___JoinMode) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::EnterRoomParams, ___ExpectedUsers) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::EnterRoomParams) == 0x40, "Size mismatch!");

} // namespace end def Photon::Realtime
