#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SmoothScaleModifierCosmetic_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SmoothScaleModifierCosmetic_State)
// Forward declare root types
namespace GlobalNamespace {
struct SmoothScaleModifierCosmetic_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SmoothScaleModifierCosmetic_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SmoothScaleModifierCosmetic_State, "GorillaTag.Cosmetics", "SmoothScaleModifierCosmetic/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.SmoothScaleModifierCosmetic/State
struct CORDL_TYPE SmoothScaleModifierCosmetic_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SmoothScaleModifierCosmetic_State_Unwrapped
enum struct __SmoothScaleModifierCosmetic_State_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Reset = static_cast<int32_t>(0x1),
__E_Scaling = static_cast<int32_t>(0x2),
__E_Scaled = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SmoothScaleModifierCosmetic_State_Unwrapped () const noexcept {
return static_cast<__SmoothScaleModifierCosmetic_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SmoothScaleModifierCosmetic_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SmoothScaleModifierCosmetic_State(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SmoothScaleModifierCosmetic_State const None;

/// @brief Field Reset value: I32(1)
static ::GlobalNamespace::SmoothScaleModifierCosmetic_State const Reset;

/// @brief Field Scaled value: I32(3)
static ::GlobalNamespace::SmoothScaleModifierCosmetic_State const Scaled;

/// @brief Field Scaling value: I32(2)
static ::GlobalNamespace::SmoothScaleModifierCosmetic_State const Scaling;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4969};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SmoothScaleModifierCosmetic_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SmoothScaleModifierCosmetic_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
