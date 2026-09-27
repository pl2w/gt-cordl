#pragma once
// IWYU pragma private; include "Photon/Realtime/OperationCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OperationCode)
// Forward declare root types
namespace Photon::Realtime {
class OperationCode;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::OperationCode*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::OperationCode*, "Photon.Realtime", "OperationCode");
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.OperationCode
class CORDL_TYPE OperationCode : public ::System::Object {
public:
// Declarations
static inline ::Photon::Realtime::OperationCode* New_ctor() ;

/// @brief Method .ctor, addr 0xa7095cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OperationCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OperationCode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OperationCode(OperationCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OperationCode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OperationCode(OperationCode const& ) = delete;

/// @brief Field Authenticate offset 0xffffffff size 0x1
static constexpr uint8_t  Authenticate{static_cast<uint8_t>(0xe6u)};

/// @brief Field AuthenticateOnce offset 0xffffffff size 0x1
static constexpr uint8_t  AuthenticateOnce{static_cast<uint8_t>(0xe7u)};

/// @brief Field ChangeGroups offset 0xffffffff size 0x1
static constexpr uint8_t  ChangeGroups{static_cast<uint8_t>(0xf8u)};

/// @brief Field CreateGame offset 0xffffffff size 0x1
static constexpr uint8_t  CreateGame{static_cast<uint8_t>(0xe3u)};

/// @brief Field ExchangeKeysForEncryption offset 0xffffffff size 0x1
static constexpr uint8_t  ExchangeKeysForEncryption{static_cast<uint8_t>(0xfau)};

/// @brief Field FindFriends offset 0xffffffff size 0x1
static constexpr uint8_t  FindFriends{static_cast<uint8_t>(0xdeu)};

/// @brief Field FindFriendsUpdate offset 0xffffffff size 0x1
static constexpr uint8_t  FindFriendsUpdate{static_cast<uint8_t>(0xdfu)};

/// @brief Field GetGameList offset 0xffffffff size 0x1
static constexpr uint8_t  GetGameList{static_cast<uint8_t>(0xd9u)};

/// @brief Field GetLobbyStats offset 0xffffffff size 0x1
static constexpr uint8_t  GetLobbyStats{static_cast<uint8_t>(0xddu)};

/// @brief Field GetProperties offset 0xffffffff size 0x1
static constexpr uint8_t  GetProperties{static_cast<uint8_t>(0xfbu)};

/// @brief Field GetRegions offset 0xffffffff size 0x1
static constexpr uint8_t  GetRegions{static_cast<uint8_t>(0xdcu)};

/// @brief Field Join offset 0xffffffff size 0x1
static constexpr uint8_t  Join{static_cast<uint8_t>(0xffu)};

/// @brief Field JoinGame offset 0xffffffff size 0x1
static constexpr uint8_t  JoinGame{static_cast<uint8_t>(0xe2u)};

/// @brief Field JoinLobby offset 0xffffffff size 0x1
static constexpr uint8_t  JoinLobby{static_cast<uint8_t>(0xe5u)};

/// @brief Field JoinRandomGame offset 0xffffffff size 0x1
static constexpr uint8_t  JoinRandomGame{static_cast<uint8_t>(0xe1u)};

/// @brief Field Leave offset 0xffffffff size 0x1
static constexpr uint8_t  Leave{static_cast<uint8_t>(0xfeu)};

/// @brief Field LeaveLobby offset 0xffffffff size 0x1
static constexpr uint8_t  LeaveLobby{static_cast<uint8_t>(0xe4u)};

/// @brief Field RaiseEvent offset 0xffffffff size 0x1
static constexpr uint8_t  RaiseEvent{static_cast<uint8_t>(0xfdu)};

/// @brief Field ServerSettings offset 0xffffffff size 0x1
static constexpr uint8_t  ServerSettings{static_cast<uint8_t>(0xdau)};

/// @brief Field SetProperties offset 0xffffffff size 0x1
static constexpr uint8_t  SetProperties{static_cast<uint8_t>(0xfcu)};

/// @brief Field WebRpc offset 0xffffffff size 0x1
static constexpr uint8_t  WebRpc{static_cast<uint8_t>(0xdbu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29876};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Realtime::OperationCode) == 0x10, "Size mismatch!");

} // namespace end def Photon::Realtime
