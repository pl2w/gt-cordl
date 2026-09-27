#pragma once
// IWYU pragma private; include "GlobalNamespace/LegacyTransferrableObject_InterpolateState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyTransferrableObject_InterpolateState)
// Forward declare root types
namespace GlobalNamespace {
struct LegacyTransferrableObject_InterpolateState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LegacyTransferrableObject_InterpolateState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegacyTransferrableObject_InterpolateState, "", "LegacyTransferrableObject/InterpolateState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LegacyTransferrableObject/InterpolateState
struct CORDL_TYPE LegacyTransferrableObject_InterpolateState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LegacyTransferrableObject_InterpolateState_Unwrapped
enum struct __LegacyTransferrableObject_InterpolateState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Interpolating = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LegacyTransferrableObject_InterpolateState_Unwrapped () const noexcept {
return static_cast<__LegacyTransferrableObject_InterpolateState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LegacyTransferrableObject_InterpolateState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LegacyTransferrableObject_InterpolateState(int32_t  value__) noexcept;

/// @brief Field Interpolating value: I32(1)
static ::GlobalNamespace::LegacyTransferrableObject_InterpolateState const Interpolating;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::LegacyTransferrableObject_InterpolateState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1330};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegacyTransferrableObject_InterpolateState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegacyTransferrableObject_InterpolateState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
