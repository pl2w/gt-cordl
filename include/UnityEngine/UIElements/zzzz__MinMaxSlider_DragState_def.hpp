#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MinMaxSlider_DragState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MinMaxSlider_DragState)
// Forward declare root types
namespace GlobalNamespace {
struct MinMaxSlider_DragState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MinMaxSlider_DragState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MinMaxSlider_DragState, "UnityEngine.UIElements", "MinMaxSlider/DragState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.MinMaxSlider/DragState
struct CORDL_TYPE MinMaxSlider_DragState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MinMaxSlider_DragState_Unwrapped
enum struct __MinMaxSlider_DragState_Unwrapped : int32_t {
__E_MinThumb = static_cast<int32_t>(0x0),
__E_MaxThumb = static_cast<int32_t>(0x1),
__E_MiddleThumb = static_cast<int32_t>(0x2),
__E_NoThumb = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MinMaxSlider_DragState_Unwrapped () const noexcept {
return static_cast<__MinMaxSlider_DragState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MinMaxSlider_DragState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MinMaxSlider_DragState(int32_t  value__) noexcept;

/// @brief Field MaxThumb value: I32(1)
static ::GlobalNamespace::MinMaxSlider_DragState const MaxThumb;

/// @brief Field MiddleThumb value: I32(2)
static ::GlobalNamespace::MinMaxSlider_DragState const MiddleThumb;

/// @brief Field MinThumb value: I32(0)
static ::GlobalNamespace::MinMaxSlider_DragState const MinThumb;

/// @brief Field NoThumb value: I32(3)
static ::GlobalNamespace::MinMaxSlider_DragState const NoThumb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7408};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MinMaxSlider_DragState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MinMaxSlider_DragState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
