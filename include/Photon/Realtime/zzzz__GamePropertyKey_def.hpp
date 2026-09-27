#pragma once
// IWYU pragma private; include "Photon/Realtime/GamePropertyKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GamePropertyKey)
// Forward declare root types
namespace Photon::Realtime {
class GamePropertyKey;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::GamePropertyKey*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::GamePropertyKey*, "Photon.Realtime", "GamePropertyKey");
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.GamePropertyKey
class CORDL_TYPE GamePropertyKey : public ::System::Object {
public:
// Declarations
static inline ::Photon::Realtime::GamePropertyKey* New_ctor() ;

/// @brief Method .ctor, addr 0xa7095b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamePropertyKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamePropertyKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GamePropertyKey(GamePropertyKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamePropertyKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamePropertyKey(GamePropertyKey const& ) = delete;

/// @brief Field CleanupCacheOnLeave offset 0xffffffff size 0x1
static constexpr uint8_t  CleanupCacheOnLeave{static_cast<uint8_t>(0xf9u)};

/// @brief Field EmptyRoomTtl offset 0xffffffff size 0x1
static constexpr uint8_t  EmptyRoomTtl{static_cast<uint8_t>(0xf5u)};

/// @brief Field ExpectedUsers offset 0xffffffff size 0x1
static constexpr uint8_t  ExpectedUsers{static_cast<uint8_t>(0xf7u)};

/// @brief Field IsOpen offset 0xffffffff size 0x1
static constexpr uint8_t  IsOpen{static_cast<uint8_t>(0xfdu)};

/// @brief Field IsVisible offset 0xffffffff size 0x1
static constexpr uint8_t  IsVisible{static_cast<uint8_t>(0xfeu)};

/// @brief Field MasterClientId offset 0xffffffff size 0x1
static constexpr uint8_t  MasterClientId{static_cast<uint8_t>(0xf8u)};

/// @brief Field MaxPlayers offset 0xffffffff size 0x1
static constexpr uint8_t  MaxPlayers{static_cast<uint8_t>(0xffu)};

/// @brief Field PlayerCount offset 0xffffffff size 0x1
static constexpr uint8_t  PlayerCount{static_cast<uint8_t>(0xfcu)};

/// @brief Field PlayerTtl offset 0xffffffff size 0x1
static constexpr uint8_t  PlayerTtl{static_cast<uint8_t>(0xf6u)};

/// @brief Field PropsListedInLobby offset 0xffffffff size 0x1
static constexpr uint8_t  PropsListedInLobby{static_cast<uint8_t>(0xfau)};

/// @brief Field Removed offset 0xffffffff size 0x1
static constexpr uint8_t  Removed{static_cast<uint8_t>(0xfbu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29873};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Realtime::GamePropertyKey) == 0x10, "Size mismatch!");

} // namespace end def Photon::Realtime
