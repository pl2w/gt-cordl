#pragma once
// IWYU pragma private; include "Oculus/Interaction/UITheme_ElementColors.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UITheme_ElementColors)
// Forward declare root types
namespace GlobalNamespace {
struct UITheme_ElementColors;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UITheme_ElementColors);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UITheme_ElementColors, "Oculus.Interaction", "UITheme/ElementColors");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.UITheme/ElementColors
struct CORDL_TYPE UITheme_ElementColors {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr UITheme_ElementColors() ;

// Ctor Parameters [CppParam { name: "normal", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "highlighted", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "pressed", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "selected", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "disabled", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr UITheme_ElementColors(::UnityEngine::Color  normal, ::UnityEngine::Color  highlighted, ::UnityEngine::Color  pressed, ::UnityEngine::Color  selected, ::UnityEngine::Color  disabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28251};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field normal, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  normal;

/// @brief Field highlighted, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  highlighted;

/// @brief Field pressed, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  pressed;

/// @brief Field selected, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  selected;

/// @brief Field disabled, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  disabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UITheme_ElementColors, normal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UITheme_ElementColors, highlighted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UITheme_ElementColors, pressed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UITheme_ElementColors, selected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UITheme_ElementColors, disabled) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UITheme_ElementColors) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
