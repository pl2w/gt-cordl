#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_Events.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomSystem_Events)
// Forward declare root types
namespace GlobalNamespace {
struct RoomSystem_Events;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RoomSystem_Events);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystem_Events, "", "RoomSystem/Events");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomSystem/Events
#pragma pack(push, 0)
struct CORDL_TYPE RoomSystem_Events {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RoomSystem_Events() ;

/// @brief Field ELEVATOR_JOIN offset 0xffffffff size 0x1
static constexpr uint8_t  ELEVATOR_JOIN{static_cast<uint8_t>(0xau)};

/// @brief Field GENERAL_FX offset 0xffffffff size 0x1
static constexpr uint8_t  GENERAL_FX{static_cast<uint8_t>(0xeu)};

/// @brief Field IMPACT offset 0xffffffff size 0x1
static constexpr uint8_t  IMPACT{static_cast<uint8_t>(0x1u)};

/// @brief Field LAVA_SYNC offset 0xffffffff size 0x1
static constexpr uint8_t  LAVA_SYNC{static_cast<uint8_t>(0xcu)};

/// @brief Field MONKE_BIZ_STATION__POINTS_REDEEMED offset 0xffffffff size 0x1
static constexpr uint8_t  MONKE_BIZ_STATION__POINTS_REDEEMED{static_cast<uint8_t>(0xdu)};

/// @brief Field NEARBY_JOIN offset 0xffffffff size 0x1
static constexpr uint8_t  NEARBY_JOIN{static_cast<uint8_t>(0x4u)};

/// @brief Field PARTY_JOIN offset 0xffffffff size 0x1
static constexpr uint8_t  PARTY_JOIN{static_cast<uint8_t>(0x7u)};

/// @brief Field PLAYER_EFFECT offset 0xffffffff size 0x1
static constexpr uint8_t  PLAYER_EFFECT{static_cast<uint8_t>(0x6u)};

/// @brief Field PLAYER_HIT offset 0xffffffff size 0x1
static constexpr uint8_t  PLAYER_HIT{static_cast<uint8_t>(0x9u)};

/// @brief Field PLAYER_LAUNCHED offset 0xffffffff size 0x1
static constexpr uint8_t  PLAYER_LAUNCHED{static_cast<uint8_t>(0x8u)};

/// @brief Field PLAYER_TOUCHED offset 0xffffffff size 0x1
static constexpr uint8_t  PLAYER_TOUCHED{static_cast<uint8_t>(0x5u)};

/// @brief Field PROJECTILE offset 0xffffffff size 0x1
static constexpr uint8_t  PROJECTILE{static_cast<uint8_t>(0x0u)};

/// @brief Field RPC offset 0xffffffff size 0x1
static constexpr uint8_t  RPC{static_cast<uint8_t>(0xffu)};

/// @brief Field SHUTTLE_JOIN offset 0xffffffff size 0x1
static constexpr uint8_t  SHUTTLE_JOIN{static_cast<uint8_t>(0xbu)};

/// @brief Field SOUND_EFFECT offset 0xffffffff size 0x1
static constexpr uint8_t  SOUND_EFFECT{static_cast<uint8_t>(0x3u)};

/// @brief Field STATUS_EFFECT offset 0xffffffff size 0x1
static constexpr uint8_t  STATUS_EFFECT{static_cast<uint8_t>(0x2u)};

/// @brief Field VOX_CONTINUE_CHUNK offset 0xffffffff size 0x1
static constexpr uint8_t  VOX_CONTINUE_CHUNK{static_cast<uint8_t>(0x68u)};

/// @brief Field VOX_MINE offset 0xffffffff size 0x1
static constexpr uint8_t  VOX_MINE{static_cast<uint8_t>(0x6au)};

/// @brief Field VOX_REQ_MINE offset 0xffffffff size 0x1
static constexpr uint8_t  VOX_REQ_MINE{static_cast<uint8_t>(0x66u)};

/// @brief Field VOX_REQ_OPERATION offset 0xffffffff size 0x1
static constexpr uint8_t  VOX_REQ_OPERATION{static_cast<uint8_t>(0x65u)};

/// @brief Field VOX_REQ_WORLD offset 0xffffffff size 0x1
static constexpr uint8_t  VOX_REQ_WORLD{static_cast<uint8_t>(0x64u)};

/// @brief Field VOX_SET_DENSITY offset 0xffffffff size 0x1
static constexpr uint8_t  VOX_SET_DENSITY{static_cast<uint8_t>(0x69u)};

/// @brief Field VOX_START_CHUNK offset 0xffffffff size 0x1
static constexpr uint8_t  VOX_START_CHUNK{static_cast<uint8_t>(0x67u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3392};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RoomSystem_Events) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
