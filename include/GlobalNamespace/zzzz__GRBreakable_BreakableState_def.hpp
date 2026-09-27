#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBreakable_BreakableState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRBreakable_BreakableState)
// Forward declare root types
namespace GlobalNamespace {
struct GRBreakable_BreakableState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRBreakable_BreakableState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBreakable_BreakableState, "", "GRBreakable/BreakableState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRBreakable/BreakableState
struct CORDL_TYPE GRBreakable_BreakableState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRBreakable_BreakableState_Unwrapped
enum struct __GRBreakable_BreakableState_Unwrapped : int32_t {
__E_Unbroken = static_cast<int32_t>(0x0),
__E_Broken = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRBreakable_BreakableState_Unwrapped () const noexcept {
return static_cast<__GRBreakable_BreakableState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRBreakable_BreakableState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRBreakable_BreakableState(int32_t  value__) noexcept;

/// @brief Field Broken value: I32(1)
static ::GlobalNamespace::GRBreakable_BreakableState const Broken;

/// @brief Field Unbroken value: I32(0)
static ::GlobalNamespace::GRBreakable_BreakableState const Unbroken;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1894};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBreakable_BreakableState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBreakable_BreakableState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
