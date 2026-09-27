#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinTriggerVisualState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoinTriggerVisualState)
// Forward declare root types
namespace GlobalNamespace {
struct JoinTriggerVisualState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JoinTriggerVisualState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JoinTriggerVisualState, "", "JoinTriggerVisualState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: JoinTriggerVisualState
struct CORDL_TYPE JoinTriggerVisualState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JoinTriggerVisualState_Unwrapped
enum struct __JoinTriggerVisualState_Unwrapped : int32_t {
__E_ConnectionError = static_cast<int32_t>(0x0),
__E_AlreadyInRoom = static_cast<int32_t>(0x1),
__E_InPrivateRoom = static_cast<int32_t>(0x2),
__E_NotConnectedSoloJoin = static_cast<int32_t>(0x3),
__E_LeaveRoomAndSoloJoin = static_cast<int32_t>(0x4),
__E_LeaveRoomAndPartyJoin = static_cast<int32_t>(0x5),
__E_AbandonPartyAndSoloJoin = static_cast<int32_t>(0x6),
__E_ChangingGameModeSoloJoin = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoinTriggerVisualState_Unwrapped () const noexcept {
return static_cast<__JoinTriggerVisualState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoinTriggerVisualState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JoinTriggerVisualState(int32_t  value__) noexcept;

/// @brief Field AbandonPartyAndSoloJoin value: I32(6)
static ::GlobalNamespace::JoinTriggerVisualState const AbandonPartyAndSoloJoin;

/// @brief Field AlreadyInRoom value: I32(1)
static ::GlobalNamespace::JoinTriggerVisualState const AlreadyInRoom;

/// @brief Field ChangingGameModeSoloJoin value: I32(7)
static ::GlobalNamespace::JoinTriggerVisualState const ChangingGameModeSoloJoin;

/// @brief Field ConnectionError value: I32(0)
static ::GlobalNamespace::JoinTriggerVisualState const ConnectionError;

/// @brief Field InPrivateRoom value: I32(2)
static ::GlobalNamespace::JoinTriggerVisualState const InPrivateRoom;

/// @brief Field LeaveRoomAndPartyJoin value: I32(5)
static ::GlobalNamespace::JoinTriggerVisualState const LeaveRoomAndPartyJoin;

/// @brief Field LeaveRoomAndSoloJoin value: I32(4)
static ::GlobalNamespace::JoinTriggerVisualState const LeaveRoomAndSoloJoin;

/// @brief Field NotConnectedSoloJoin value: I32(3)
static ::GlobalNamespace::JoinTriggerVisualState const NotConnectedSoloJoin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{857};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinTriggerVisualState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JoinTriggerVisualState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
