#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTopButton_TopButtonState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GtTopButton_TopButtonState)
// Forward declare root types
namespace GlobalNamespace {
struct GtTopButton_TopButtonState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GtTopButton_TopButtonState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GtTopButton_TopButtonState, "Liv.Lck.GorillaTag", "GtTopButton/TopButtonState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.GtTopButton/TopButtonState
struct CORDL_TYPE GtTopButton_TopButtonState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GtTopButton_TopButtonState_Unwrapped
enum struct __GtTopButton_TopButtonState_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Selected = static_cast<int32_t>(0x1),
__E_Disabled = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GtTopButton_TopButtonState_Unwrapped () const noexcept {
return static_cast<__GtTopButton_TopButtonState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GtTopButton_TopButtonState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GtTopButton_TopButtonState(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::GtTopButton_TopButtonState const Default;

/// @brief Field Disabled value: I32(2)
static ::GlobalNamespace::GtTopButton_TopButtonState const Disabled;

/// @brief Field Selected value: I32(1)
static ::GlobalNamespace::GtTopButton_TopButtonState const Selected;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29666};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GtTopButton_TopButtonState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GtTopButton_TopButtonState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
