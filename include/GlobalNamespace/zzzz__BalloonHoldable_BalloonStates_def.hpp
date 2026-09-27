#pragma once
// IWYU pragma private; include "GlobalNamespace/BalloonHoldable_BalloonStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BalloonHoldable_BalloonStates)
// Forward declare root types
namespace GlobalNamespace {
struct BalloonHoldable_BalloonStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BalloonHoldable_BalloonStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BalloonHoldable_BalloonStates, "", "BalloonHoldable/BalloonStates");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BalloonHoldable/BalloonStates
struct CORDL_TYPE BalloonHoldable_BalloonStates {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BalloonHoldable_BalloonStates_Unwrapped
enum struct __BalloonHoldable_BalloonStates_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Pop = static_cast<int32_t>(0x1),
__E_Waiting = static_cast<int32_t>(0x2),
__E_WaitForOwnershipTransfer = static_cast<int32_t>(0x3),
__E_WaitForReDock = static_cast<int32_t>(0x4),
__E_Refilling = static_cast<int32_t>(0x5),
__E_Returning = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BalloonHoldable_BalloonStates_Unwrapped () const noexcept {
return static_cast<__BalloonHoldable_BalloonStates_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BalloonHoldable_BalloonStates() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BalloonHoldable_BalloonStates(int32_t  value__) noexcept;

/// @brief Field Normal value: I32(0)
static ::GlobalNamespace::BalloonHoldable_BalloonStates const Normal;

/// @brief Field Pop value: I32(1)
static ::GlobalNamespace::BalloonHoldable_BalloonStates const Pop;

/// @brief Field Refilling value: I32(5)
static ::GlobalNamespace::BalloonHoldable_BalloonStates const Refilling;

/// @brief Field Returning value: I32(6)
static ::GlobalNamespace::BalloonHoldable_BalloonStates const Returning;

/// @brief Field WaitForOwnershipTransfer value: I32(3)
static ::GlobalNamespace::BalloonHoldable_BalloonStates const WaitForOwnershipTransfer;

/// @brief Field WaitForReDock value: I32(4)
static ::GlobalNamespace::BalloonHoldable_BalloonStates const WaitForReDock;

/// @brief Field Waiting value: I32(2)
static ::GlobalNamespace::BalloonHoldable_BalloonStates const Waiting;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1193};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BalloonHoldable_BalloonStates, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BalloonHoldable_BalloonStates) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
