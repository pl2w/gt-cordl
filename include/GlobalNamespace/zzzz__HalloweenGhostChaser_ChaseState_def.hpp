#pragma once
// IWYU pragma private; include "GlobalNamespace/HalloweenGhostChaser_ChaseState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HalloweenGhostChaser_ChaseState)
// Forward declare root types
namespace GlobalNamespace {
struct HalloweenGhostChaser_ChaseState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HalloweenGhostChaser_ChaseState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HalloweenGhostChaser_ChaseState, "", "HalloweenGhostChaser/ChaseState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HalloweenGhostChaser/ChaseState
struct CORDL_TYPE HalloweenGhostChaser_ChaseState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HalloweenGhostChaser_ChaseState_Unwrapped
enum struct __HalloweenGhostChaser_ChaseState_Unwrapped : int32_t {
__E_Dormant = static_cast<int32_t>(0x1),
__E_InitialRise = static_cast<int32_t>(0x2),
__E_Gong = static_cast<int32_t>(0x4),
__E_Chasing = static_cast<int32_t>(0x8),
__E_Grabbing = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HalloweenGhostChaser_ChaseState_Unwrapped () const noexcept {
return static_cast<__HalloweenGhostChaser_ChaseState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HalloweenGhostChaser_ChaseState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HalloweenGhostChaser_ChaseState(int32_t  value__) noexcept;

/// @brief Field Chasing value: I32(8)
static ::GlobalNamespace::HalloweenGhostChaser_ChaseState const Chasing;

/// @brief Field Dormant value: I32(1)
static ::GlobalNamespace::HalloweenGhostChaser_ChaseState const Dormant;

/// @brief Field Gong value: I32(4)
static ::GlobalNamespace::HalloweenGhostChaser_ChaseState const Gong;

/// @brief Field Grabbing value: I32(16)
static ::GlobalNamespace::HalloweenGhostChaser_ChaseState const Grabbing;

/// @brief Field InitialRise value: I32(2)
static ::GlobalNamespace::HalloweenGhostChaser_ChaseState const InitialRise;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2293};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser_ChaseState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HalloweenGhostChaser_ChaseState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
