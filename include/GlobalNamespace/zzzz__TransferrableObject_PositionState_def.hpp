#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObject_PositionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransferrableObject_PositionState)
// Forward declare root types
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransferrableObject_PositionState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObject_PositionState, "", "TransferrableObject/PositionState");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TransferrableObject/PositionState
struct CORDL_TYPE TransferrableObject_PositionState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TransferrableObject_PositionState_Unwrapped
enum struct __TransferrableObject_PositionState_Unwrapped : int32_t {
__E_OnLeftArm = static_cast<int32_t>(0x1),
__E_OnRightArm = static_cast<int32_t>(0x2),
__E_InLeftHand = static_cast<int32_t>(0x4),
__E_InRightHand = static_cast<int32_t>(0x8),
__E_OnChest = static_cast<int32_t>(0x10),
__E_OnLeftShoulder = static_cast<int32_t>(0x20),
__E_OnRightShoulder = static_cast<int32_t>(0x40),
__E_Dropped = static_cast<int32_t>(0x80),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransferrableObject_PositionState_Unwrapped () const noexcept {
return static_cast<__TransferrableObject_PositionState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObject_PositionState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransferrableObject_PositionState(int32_t  value__) noexcept;

/// @brief Field Dropped value: I32(128)
static ::GlobalNamespace::TransferrableObject_PositionState const Dropped;

/// @brief Field InLeftHand value: I32(4)
static ::GlobalNamespace::TransferrableObject_PositionState const InLeftHand;

/// @brief Field InRightHand value: I32(8)
static ::GlobalNamespace::TransferrableObject_PositionState const InRightHand;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TransferrableObject_PositionState const None;

/// @brief Field OnChest value: I32(16)
static ::GlobalNamespace::TransferrableObject_PositionState const OnChest;

/// @brief Field OnLeftArm value: I32(1)
static ::GlobalNamespace::TransferrableObject_PositionState const OnLeftArm;

/// @brief Field OnLeftShoulder value: I32(32)
static ::GlobalNamespace::TransferrableObject_PositionState const OnLeftShoulder;

/// @brief Field OnRightArm value: I32(2)
static ::GlobalNamespace::TransferrableObject_PositionState const OnRightArm;

/// @brief Field OnRightShoulder value: I32(64)
static ::GlobalNamespace::TransferrableObject_PositionState const OnRightShoulder;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1363};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObject_PositionState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObject_PositionState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
