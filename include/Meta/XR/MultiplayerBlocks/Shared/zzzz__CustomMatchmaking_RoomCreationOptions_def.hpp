#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/CustomMatchmaking_RoomCreationOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMatchmaking_RoomCreationOptions)
// Forward declare root types
namespace GlobalNamespace {
struct CustomMatchmaking_RoomCreationOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions, "Meta.XR.MultiplayerBlocks.Shared", "CustomMatchmaking/RoomCreationOptions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking/RoomCreationOptions
struct CORDL_TYPE CustomMatchmaking_RoomCreationOptions {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CustomMatchmaking_RoomCreationOptions() ;

// Ctor Parameters [CppParam { name: "RoomPassword", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxPlayersPerRoom", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsPrivate", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "LobbyName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CustomMatchmaking_RoomCreationOptions(::StringW  RoomPassword, int32_t  MaxPlayersPerRoom, bool  IsPrivate, ::StringW  LobbyName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field RoomPassword, offset: 0x0, size: 0x8, def value: None
 ::StringW  RoomPassword;

/// @brief Field MaxPlayersPerRoom, offset: 0x8, size: 0x4, def value: None
 int32_t  MaxPlayersPerRoom;

/// @brief Field IsPrivate, offset: 0xc, size: 0x1, def value: None
 bool  IsPrivate;

/// @brief Field LobbyName, offset: 0x10, size: 0x8, def value: None
 ::StringW  LobbyName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions, RoomPassword) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions, MaxPlayersPerRoom) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions, IsPrivate) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions, LobbyName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMatchmaking_RoomCreationOptions) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
