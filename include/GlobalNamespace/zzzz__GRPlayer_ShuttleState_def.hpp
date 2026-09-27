#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_ShuttleState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRPlayer_ShuttleState)
// Forward declare root types
namespace GlobalNamespace {
struct GRPlayer_ShuttleState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRPlayer_ShuttleState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer_ShuttleState, "", "GRPlayer/ShuttleState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRPlayer/ShuttleState
struct CORDL_TYPE GRPlayer_ShuttleState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRPlayer_ShuttleState_Unwrapped
enum struct __GRPlayer_ShuttleState_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Moving = static_cast<int32_t>(0x1),
__E_WaitForLeaveRoom = static_cast<int32_t>(0x2),
__E_JoinRoom = static_cast<int32_t>(0x3),
__E_WaitForLeadPlayer = static_cast<int32_t>(0x4),
__E_Teleport = static_cast<int32_t>(0x5),
__E_TeleportToMyShuttleSafety = static_cast<int32_t>(0x6),
__E_PostTeleport = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRPlayer_ShuttleState_Unwrapped () const noexcept {
return static_cast<__GRPlayer_ShuttleState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRPlayer_ShuttleState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRPlayer_ShuttleState(int32_t  value__) noexcept;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::GRPlayer_ShuttleState const Idle;

/// @brief Field JoinRoom value: I32(3)
static ::GlobalNamespace::GRPlayer_ShuttleState const JoinRoom;

/// @brief Field Moving value: I32(1)
static ::GlobalNamespace::GRPlayer_ShuttleState const Moving;

/// @brief Field PostTeleport value: I32(7)
static ::GlobalNamespace::GRPlayer_ShuttleState const PostTeleport;

/// @brief Field Teleport value: I32(5)
static ::GlobalNamespace::GRPlayer_ShuttleState const Teleport;

/// @brief Field TeleportToMyShuttleSafety value: I32(6)
static ::GlobalNamespace::GRPlayer_ShuttleState const TeleportToMyShuttleSafety;

/// @brief Field WaitForLeadPlayer value: I32(4)
static ::GlobalNamespace::GRPlayer_ShuttleState const WaitForLeadPlayer;

/// @brief Field WaitForLeaveRoom value: I32(2)
static ::GlobalNamespace::GRPlayer_ShuttleState const WaitForLeaveRoom;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2003};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer_ShuttleState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer_ShuttleState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
