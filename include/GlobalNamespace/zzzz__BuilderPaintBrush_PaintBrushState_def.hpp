#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPaintBrush_PaintBrushState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPaintBrush_PaintBrushState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPaintBrush_PaintBrushState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPaintBrush_PaintBrushState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPaintBrush_PaintBrushState, "", "BuilderPaintBrush/PaintBrushState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderPaintBrush/PaintBrushState
struct CORDL_TYPE BuilderPaintBrush_PaintBrushState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPaintBrush_PaintBrushState_Unwrapped
enum struct __BuilderPaintBrush_PaintBrushState_Unwrapped : int32_t {
__E_Inactive = static_cast<int32_t>(0x0),
__E_HeldRemote = static_cast<int32_t>(0x1),
__E_Held = static_cast<int32_t>(0x2),
__E_Hover = static_cast<int32_t>(0x3),
__E_JustPainted = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPaintBrush_PaintBrushState_Unwrapped () const noexcept {
return static_cast<__BuilderPaintBrush_PaintBrushState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPaintBrush_PaintBrushState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPaintBrush_PaintBrushState(int32_t  value__) noexcept;

/// @brief Field Held value: I32(2)
static ::GlobalNamespace::BuilderPaintBrush_PaintBrushState const Held;

/// @brief Field HeldRemote value: I32(1)
static ::GlobalNamespace::BuilderPaintBrush_PaintBrushState const HeldRemote;

/// @brief Field Hover value: I32(3)
static ::GlobalNamespace::BuilderPaintBrush_PaintBrushState const Hover;

/// @brief Field Inactive value: I32(0)
static ::GlobalNamespace::BuilderPaintBrush_PaintBrushState const Inactive;

/// @brief Field JustPainted value: I32(4)
static ::GlobalNamespace::BuilderPaintBrush_PaintBrushState const JustPainted;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1562};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPaintBrush_PaintBrushState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPaintBrush_PaintBrushState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
