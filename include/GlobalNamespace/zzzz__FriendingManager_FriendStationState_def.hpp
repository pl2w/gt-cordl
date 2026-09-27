#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendingManager_FriendStationState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendingManager_FriendStationState)
// Forward declare root types
namespace GlobalNamespace {
struct FriendingManager_FriendStationState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendingManager_FriendStationState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendingManager_FriendStationState, "", "FriendingManager/FriendStationState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendingManager/FriendStationState
struct CORDL_TYPE FriendingManager_FriendStationState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FriendingManager_FriendStationState_Unwrapped
enum struct __FriendingManager_FriendStationState_Unwrapped : int32_t {
__E_NotInRoom = static_cast<int32_t>(0x0),
__E_WaitingForPlayers = static_cast<int32_t>(0x1),
__E_WaitingOnFriendStatusBoth = static_cast<int32_t>(0x2),
__E_WaitingOnFriendStatusPlayerA = static_cast<int32_t>(0x3),
__E_WaitingOnFriendStatusPlayerB = static_cast<int32_t>(0x4),
__E_WaitingOnButtonBoth = static_cast<int32_t>(0x5),
__E_WaitingOnButtonPlayerA = static_cast<int32_t>(0x6),
__E_WaitingOnButtonPlayerB = static_cast<int32_t>(0x7),
__E_ButtonConfirmationTimer0 = static_cast<int32_t>(0x8),
__E_ButtonConfirmationTimer1 = static_cast<int32_t>(0x9),
__E_ButtonConfirmationTimer2 = static_cast<int32_t>(0xa),
__E_ButtonConfirmationTimer3 = static_cast<int32_t>(0xb),
__E_ButtonConfirmationTimer4 = static_cast<int32_t>(0xc),
__E_WaitingOnRequestBoth = static_cast<int32_t>(0xd),
__E_WaitingOnRequestPlayerA = static_cast<int32_t>(0xe),
__E_WaitingOnRequestPlayerB = static_cast<int32_t>(0xf),
__E_RequestFailed = static_cast<int32_t>(0x10),
__E_Friends = static_cast<int32_t>(0x11),
__E_AlreadyFriends = static_cast<int32_t>(0x12),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FriendingManager_FriendStationState_Unwrapped () const noexcept {
return static_cast<__FriendingManager_FriendStationState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FriendingManager_FriendStationState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FriendingManager_FriendStationState(int32_t  value__) noexcept;

/// @brief Field AlreadyFriends value: I32(18)
static ::GlobalNamespace::FriendingManager_FriendStationState const AlreadyFriends;

/// @brief Field ButtonConfirmationTimer0 value: I32(8)
static ::GlobalNamespace::FriendingManager_FriendStationState const ButtonConfirmationTimer0;

/// @brief Field ButtonConfirmationTimer1 value: I32(9)
static ::GlobalNamespace::FriendingManager_FriendStationState const ButtonConfirmationTimer1;

/// @brief Field ButtonConfirmationTimer2 value: I32(10)
static ::GlobalNamespace::FriendingManager_FriendStationState const ButtonConfirmationTimer2;

/// @brief Field ButtonConfirmationTimer3 value: I32(11)
static ::GlobalNamespace::FriendingManager_FriendStationState const ButtonConfirmationTimer3;

/// @brief Field ButtonConfirmationTimer4 value: I32(12)
static ::GlobalNamespace::FriendingManager_FriendStationState const ButtonConfirmationTimer4;

/// @brief Field Friends value: I32(17)
static ::GlobalNamespace::FriendingManager_FriendStationState const Friends;

/// @brief Field NotInRoom value: I32(0)
static ::GlobalNamespace::FriendingManager_FriendStationState const NotInRoom;

/// @brief Field RequestFailed value: I32(16)
static ::GlobalNamespace::FriendingManager_FriendStationState const RequestFailed;

/// @brief Field WaitingForPlayers value: I32(1)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingForPlayers;

/// @brief Field WaitingOnButtonBoth value: I32(5)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingOnButtonBoth;

/// @brief Field WaitingOnButtonPlayerA value: I32(6)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingOnButtonPlayerA;

/// @brief Field WaitingOnButtonPlayerB value: I32(7)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingOnButtonPlayerB;

/// @brief Field WaitingOnFriendStatusBoth value: I32(2)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingOnFriendStatusBoth;

/// @brief Field WaitingOnFriendStatusPlayerA value: I32(3)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingOnFriendStatusPlayerA;

/// @brief Field WaitingOnFriendStatusPlayerB value: I32(4)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingOnFriendStatusPlayerB;

/// @brief Field WaitingOnRequestBoth value: I32(13)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingOnRequestBoth;

/// @brief Field WaitingOnRequestPlayerA value: I32(14)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingOnRequestPlayerA;

/// @brief Field WaitingOnRequestPlayerB value: I32(15)
static ::GlobalNamespace::FriendingManager_FriendStationState const WaitingOnRequestPlayerB;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3264};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendingManager_FriendStationState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendingManager_FriendStationState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
