#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingManager_RacingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RacingManager_RacingState)
// Forward declare root types
namespace GlobalNamespace {
struct RacingManager_RacingState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RacingManager_RacingState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RacingManager_RacingState, "", "RacingManager/RacingState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RacingManager/RacingState
struct CORDL_TYPE RacingManager_RacingState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RacingManager_RacingState_Unwrapped
enum struct __RacingManager_RacingState_Unwrapped : int32_t {
__E_Inactive = static_cast<int32_t>(0x0),
__E_Countdown = static_cast<int32_t>(0x1),
__E_InProgress = static_cast<int32_t>(0x2),
__E_Results = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RacingManager_RacingState_Unwrapped () const noexcept {
return static_cast<__RacingManager_RacingState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RacingManager_RacingState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RacingManager_RacingState(int32_t  value__) noexcept;

/// @brief Field Countdown value: I32(1)
static ::GlobalNamespace::RacingManager_RacingState const Countdown;

/// @brief Field InProgress value: I32(2)
static ::GlobalNamespace::RacingManager_RacingState const InProgress;

/// @brief Field Inactive value: I32(0)
static ::GlobalNamespace::RacingManager_RacingState const Inactive;

/// @brief Field Results value: I32(3)
static ::GlobalNamespace::RacingManager_RacingState const Results;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{883};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RacingManager_RacingState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RacingManager_RacingState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
