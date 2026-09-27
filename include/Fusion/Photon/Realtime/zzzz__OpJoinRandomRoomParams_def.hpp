#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/OpJoinRandomRoomParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__MatchmakingMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpJoinRandomRoomParams)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion::Photon::Realtime {
class TypedLobby;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class OpJoinRandomRoomParams;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*, "Fusion.Photon.Realtime", "OpJoinRandomRoomParams");
// Dependencies Fusion.Photon.Realtime.MatchmakingMode, System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.OpJoinRandomRoomParams
class CORDL_TYPE OpJoinRandomRoomParams : public ::System::Object {
public:
// Declarations
/// @brief Field ExpectedCustomRoomProperties, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExpectedCustomRoomProperties, put=__cordl_internal_set_ExpectedCustomRoomProperties)) ::ExitGames::Client::Photon::Hashtable*  ExpectedCustomRoomProperties;

/// @brief Field ExpectedMaxPlayers, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExpectedMaxPlayers, put=__cordl_internal_set_ExpectedMaxPlayers)) int32_t  ExpectedMaxPlayers;

/// @brief Field ExpectedUsers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExpectedUsers, put=__cordl_internal_set_ExpectedUsers)) ::ArrayW<::StringW>  ExpectedUsers;

/// @brief Field MatchingType, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_MatchingType, put=__cordl_internal_set_MatchingType)) ::Fusion::Photon::Realtime::MatchmakingMode  MatchingType;

/// @brief Field SqlLobbyFilter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SqlLobbyFilter, put=__cordl_internal_set_SqlLobbyFilter)) ::StringW  SqlLobbyFilter;

/// @brief Field Ticket, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ticket, put=__cordl_internal_set_Ticket)) ::System::Object*  Ticket;

/// @brief Field TypedLobby, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TypedLobby, put=__cordl_internal_set_TypedLobby)) ::Fusion::Photon::Realtime::TypedLobby*  TypedLobby;

static inline ::Fusion::Photon::Realtime::OpJoinRandomRoomParams* New_ctor() ;

constexpr ::ExitGames::Client::Photon::Hashtable* const& __cordl_internal_get_ExpectedCustomRoomProperties() const;

constexpr ::ExitGames::Client::Photon::Hashtable*& __cordl_internal_get_ExpectedCustomRoomProperties() ;

constexpr int32_t const& __cordl_internal_get_ExpectedMaxPlayers() const;

constexpr int32_t& __cordl_internal_get_ExpectedMaxPlayers() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_ExpectedUsers() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_ExpectedUsers() ;

constexpr ::Fusion::Photon::Realtime::MatchmakingMode const& __cordl_internal_get_MatchingType() const;

constexpr ::Fusion::Photon::Realtime::MatchmakingMode& __cordl_internal_get_MatchingType() ;

constexpr ::StringW const& __cordl_internal_get_SqlLobbyFilter() const;

constexpr ::StringW& __cordl_internal_get_SqlLobbyFilter() ;

constexpr ::System::Object* const& __cordl_internal_get_Ticket() const;

constexpr ::System::Object*& __cordl_internal_get_Ticket() ;

constexpr ::Fusion::Photon::Realtime::TypedLobby* const& __cordl_internal_get_TypedLobby() const;

constexpr ::Fusion::Photon::Realtime::TypedLobby*& __cordl_internal_get_TypedLobby() ;

constexpr void __cordl_internal_set_ExpectedCustomRoomProperties(::ExitGames::Client::Photon::Hashtable*  value) ;

constexpr void __cordl_internal_set_ExpectedMaxPlayers(int32_t  value) ;

constexpr void __cordl_internal_set_ExpectedUsers(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_MatchingType(::Fusion::Photon::Realtime::MatchmakingMode  value) ;

constexpr void __cordl_internal_set_SqlLobbyFilter(::StringW  value) ;

constexpr void __cordl_internal_set_Ticket(::System::Object*  value) ;

constexpr void __cordl_internal_set_TypedLobby(::Fusion::Photon::Realtime::TypedLobby*  value) ;

/// @brief Method .ctor, addr 0x5f5dbc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpJoinRandomRoomParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpJoinRandomRoomParams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpJoinRandomRoomParams(OpJoinRandomRoomParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpJoinRandomRoomParams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpJoinRandomRoomParams(OpJoinRandomRoomParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28072};

/// @brief Field ExpectedCustomRoomProperties, offset: 0x10, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Hashtable*  ___ExpectedCustomRoomProperties;

/// @brief Field ExpectedMaxPlayers, offset: 0x18, size: 0x4, def value: None
 int32_t  ___ExpectedMaxPlayers;

/// @brief Field MatchingType, offset: 0x1c, size: 0x1, def value: None
 ::Fusion::Photon::Realtime::MatchmakingMode  ___MatchingType;

/// @brief Field TypedLobby, offset: 0x20, size: 0x8, def value: None
 ::Fusion::Photon::Realtime::TypedLobby*  ___TypedLobby;

/// @brief Field SqlLobbyFilter, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___SqlLobbyFilter;

/// @brief Field ExpectedUsers, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___ExpectedUsers;

/// @brief Field Ticket, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___Ticket;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::OpJoinRandomRoomParams, ___ExpectedCustomRoomProperties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::OpJoinRandomRoomParams, ___ExpectedMaxPlayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::OpJoinRandomRoomParams, ___MatchingType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::OpJoinRandomRoomParams, ___TypedLobby) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::OpJoinRandomRoomParams, ___SqlLobbyFilter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::OpJoinRandomRoomParams, ___ExpectedUsers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::OpJoinRandomRoomParams, ___Ticket) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::OpJoinRandomRoomParams) == 0x40, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
