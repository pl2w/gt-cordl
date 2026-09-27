#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIContainer_GUIGlobals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMGUIContainer_GUIGlobals)
// Forward declare root types
namespace GlobalNamespace {
struct IMGUIContainer_GUIGlobals;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::IMGUIContainer_GUIGlobals);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IMGUIContainer_GUIGlobals, "UnityEngine.UIElements", "IMGUIContainer/GUIGlobals");
// Dependencies UnityEngine.Color, UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.IMGUIContainer/GUIGlobals
struct CORDL_TYPE IMGUIContainer_GUIGlobals {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IMGUIContainer_GUIGlobals() ;

// Ctor Parameters [CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "contentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "changed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pixelsPerPoint", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr IMGUIContainer_GUIGlobals(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Color  color, ::UnityEngine::Color  contentColor, ::UnityEngine::Color  backgroundColor, bool  enabled, bool  changed, int32_t  displayIndex, float_t  pixelsPerPoint) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7802};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x7c};

/// @brief Field matrix, offset: 0x0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  matrix;

/// @brief Field color, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field contentColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  contentColor;

/// @brief Field backgroundColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  backgroundColor;

/// @brief Field enabled, offset: 0x70, size: 0x1, def value: None
 bool  enabled;

/// @brief Field changed, offset: 0x71, size: 0x1, def value: None
 bool  changed;

/// @brief Field displayIndex, offset: 0x74, size: 0x4, def value: None
 int32_t  displayIndex;

/// @brief Field pixelsPerPoint, offset: 0x78, size: 0x4, def value: None
 float_t  pixelsPerPoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::IMGUIContainer_GUIGlobals, matrix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IMGUIContainer_GUIGlobals, color) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IMGUIContainer_GUIGlobals, contentColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IMGUIContainer_GUIGlobals, backgroundColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IMGUIContainer_GUIGlobals, enabled) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IMGUIContainer_GUIGlobals, changed) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IMGUIContainer_GUIGlobals, displayIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::IMGUIContainer_GUIGlobals, pixelsPerPoint) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::IMGUIContainer_GUIGlobals) == 0x7c, "Size mismatch!");

} // namespace end def GlobalNamespace
