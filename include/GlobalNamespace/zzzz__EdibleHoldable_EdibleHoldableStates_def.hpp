#pragma once
// IWYU pragma private; include "GlobalNamespace/EdibleHoldable_EdibleHoldableStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EdibleHoldable_EdibleHoldableStates)
// Forward declare root types
namespace GlobalNamespace {
struct EdibleHoldable_EdibleHoldableStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EdibleHoldable_EdibleHoldableStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EdibleHoldable_EdibleHoldableStates, "", "EdibleHoldable/EdibleHoldableStates");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EdibleHoldable/EdibleHoldableStates
struct CORDL_TYPE EdibleHoldable_EdibleHoldableStates {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EdibleHoldable_EdibleHoldableStates_Unwrapped
enum struct __EdibleHoldable_EdibleHoldableStates_Unwrapped : int32_t {
__E_EatingState0 = static_cast<int32_t>(0x1),
__E_EatingState1 = static_cast<int32_t>(0x2),
__E_EatingState2 = static_cast<int32_t>(0x4),
__E_EatingState3 = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EdibleHoldable_EdibleHoldableStates_Unwrapped () const noexcept {
return static_cast<__EdibleHoldable_EdibleHoldableStates_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EdibleHoldable_EdibleHoldableStates() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EdibleHoldable_EdibleHoldableStates(int32_t  value__) noexcept;

/// @brief Field EatingState0 value: I32(1)
static ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates const EatingState0;

/// @brief Field EatingState1 value: I32(2)
static ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates const EatingState1;

/// @brief Field EatingState2 value: I32(4)
static ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates const EatingState2;

/// @brief Field EatingState3 value: I32(8)
static ::GlobalNamespace::EdibleHoldable_EdibleHoldableStates const EatingState3;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EdibleHoldable_EdibleHoldableStates, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EdibleHoldable_EdibleHoldableStates) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
