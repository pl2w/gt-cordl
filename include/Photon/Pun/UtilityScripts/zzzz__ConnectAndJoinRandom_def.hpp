#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/ConnectAndJoinRandom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectAndJoinRandom)
namespace Photon::Realtime {
struct DisconnectCause;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class ConnectAndJoinRandom;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom*, "Photon.Pun.UtilityScripts", "ConnectAndJoinRandom");
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.ConnectAndJoinRandom
class CORDL_TYPE ConnectAndJoinRandom : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
/// @brief Field AutoConnect, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoConnect, put=__cordl_internal_set_AutoConnect)) bool  AutoConnect;

/// @brief Field MaxPlayers, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_MaxPlayers, put=__cordl_internal_set_MaxPlayers)) uint8_t  MaxPlayers;

/// @brief Field Version, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) uint8_t  Version;

/// @brief Field playerTTL, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerTTL, put=__cordl_internal_set_playerTTL)) int32_t  playerTTL;

/// @brief Method ConnectNow, addr 0xa739668, size 0x100, virtual false, abstract: false, final false
inline void ConnectNow() ;

static inline ::Photon::Pun::UtilityScripts::ConnectAndJoinRandom* New_ctor() ;

/// @brief Method OnConnectedToMaster, addr 0xa739768, size 0xd0, virtual true, abstract: false, final false
inline void OnConnectedToMaster() ;

/// @brief Method OnDisconnected, addr 0xa739a50, size 0xec, virtual true, abstract: false, final false
inline void OnDisconnected(::Photon::Realtime::DisconnectCause  cause) ;

/// @brief Method OnJoinRandomFailed, addr 0xa739908, size 0x148, virtual true, abstract: false, final false
inline void OnJoinRandomFailed(int16_t  returnCode, ::StringW  message) ;

/// @brief Method OnJoinedLobby, addr 0xa739838, size 0xd0, virtual true, abstract: false, final false
inline void OnJoinedLobby() ;

/// @brief Method OnJoinedRoom, addr 0xa739b3c, size 0xc8, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method Start, addr 0xa739658, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_AutoConnect() const;

constexpr bool& __cordl_internal_get_AutoConnect() ;

constexpr uint8_t const& __cordl_internal_get_MaxPlayers() const;

constexpr uint8_t& __cordl_internal_get_MaxPlayers() ;

constexpr uint8_t const& __cordl_internal_get_Version() const;

constexpr uint8_t& __cordl_internal_get_Version() ;

constexpr int32_t const& __cordl_internal_get_playerTTL() const;

constexpr int32_t& __cordl_internal_get_playerTTL() ;

constexpr void __cordl_internal_set_AutoConnect(bool  value) ;

constexpr void __cordl_internal_set_MaxPlayers(uint8_t  value) ;

constexpr void __cordl_internal_set_Version(uint8_t  value) ;

constexpr void __cordl_internal_set_playerTTL(int32_t  value) ;

/// @brief Method .ctor, addr 0xa739c04, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectAndJoinRandom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectAndJoinRandom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectAndJoinRandom(ConnectAndJoinRandom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectAndJoinRandom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectAndJoinRandom(ConnectAndJoinRandom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31223};

/// @brief Field AutoConnect, offset: 0x28, size: 0x1, def value: None
 bool  ___AutoConnect;

/// @brief Field Version, offset: 0x29, size: 0x1, def value: None
 uint8_t  ___Version;

/// [Tooltip("The max number of players allowed in room. Once full, a new room will be created by the next connection attemping to join.")]
/// @brief Field MaxPlayers, offset: 0x2a, size: 0x1, def value: None
 uint8_t  ___MaxPlayers;

/// @brief Field playerTTL, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___playerTTL;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom, ___AutoConnect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom, ___Version) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom, ___MaxPlayers) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom, ___playerTTL) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::ConnectAndJoinRandom) == 0x30, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
