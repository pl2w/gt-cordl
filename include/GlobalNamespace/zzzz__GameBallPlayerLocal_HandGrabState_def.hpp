#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallPlayerLocal_HandGrabState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameBallPlayerLocal_HandGrabState)
// Forward declare root types
namespace GlobalNamespace {
struct GameBallPlayerLocal_HandGrabState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameBallPlayerLocal_HandGrabState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallPlayerLocal_HandGrabState, "", "GameBallPlayerLocal/HandGrabState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameBallPlayerLocal/HandGrabState
struct CORDL_TYPE GameBallPlayerLocal_HandGrabState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameBallPlayerLocal_HandGrabState_Unwrapped
enum struct __GameBallPlayerLocal_HandGrabState_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_Holding = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameBallPlayerLocal_HandGrabState_Unwrapped () const noexcept {
return static_cast<__GameBallPlayerLocal_HandGrabState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameBallPlayerLocal_HandGrabState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameBallPlayerLocal_HandGrabState(int32_t  value__) noexcept;

/// @brief Field Empty value: I32(0)
static ::GlobalNamespace::GameBallPlayerLocal_HandGrabState const Empty;

/// @brief Field Holding value: I32(1)
static ::GlobalNamespace::GameBallPlayerLocal_HandGrabState const Holding;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1540};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_HandGrabState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallPlayerLocal_HandGrabState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
