#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshBuilderNative_NativeBorderParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeColorPage_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MeshBuilderNative_NativeBorderParams)
// Forward declare root types
namespace GlobalNamespace {
struct MeshBuilderNative_NativeBorderParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshBuilderNative_NativeBorderParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, "UnityEngine.UIElements", "MeshBuilderNative/NativeBorderParams");
// Dependencies UnityEngine.Color, UnityEngine.Rect, UnityEngine.UIElements.MeshBuilderNative::NativeColorPage, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshBuilderNative/NativeBorderParams
struct CORDL_TYPE MeshBuilderNative_NativeBorderParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshBuilderNative_NativeBorderParams() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftColorPage", ty: "::GlobalNamespace::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None, comment: None }, CppParam { name: "topColorPage", ty: "::GlobalNamespace::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightColorPage", ty: "::GlobalNamespace::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomColorPage", ty: "::GlobalNamespace::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None, comment: None }]
constexpr MeshBuilderNative_NativeBorderParams(::UnityEngine::Rect  rect, ::UnityEngine::Color  leftColor, ::UnityEngine::Color  topColor, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  bottomColor, float_t  leftWidth, float_t  topWidth, float_t  rightWidth, float_t  bottomWidth, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  leftColorPage, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  topColorPage, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  rightColorPage, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  bottomColorPage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7820};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field leftColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  leftColor;

/// @brief Field topColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  topColor;

/// @brief Field rightColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  rightColor;

/// @brief Field bottomColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  bottomColor;

/// @brief Field leftWidth, offset: 0x50, size: 0x4, def value: None
 float_t  leftWidth;

/// @brief Field topWidth, offset: 0x54, size: 0x4, def value: None
 float_t  topWidth;

/// @brief Field rightWidth, offset: 0x58, size: 0x4, def value: None
 float_t  rightWidth;

/// @brief Field bottomWidth, offset: 0x5c, size: 0x4, def value: None
 float_t  bottomWidth;

/// @brief Field topLeftRadius, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  topLeftRadius;

/// @brief Field topRightRadius, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Vector2  topRightRadius;

/// @brief Field bottomRightRadius, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomRightRadius;

/// @brief Field bottomLeftRadius, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomLeftRadius;

/// @brief Field leftColorPage, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::MeshBuilderNative_NativeColorPage  leftColorPage;

/// @brief Field topColorPage, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::MeshBuilderNative_NativeColorPage  topColorPage;

/// @brief Field rightColorPage, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::MeshBuilderNative_NativeColorPage  rightColorPage;

/// @brief Field bottomColorPage, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::MeshBuilderNative_NativeColorPage  bottomColorPage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, leftColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, topColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, rightColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, bottomColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, leftWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, topWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, rightWidth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, bottomWidth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, topLeftRadius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, topRightRadius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, bottomRightRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, bottomLeftRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, leftColorPage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, topColorPage) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, rightColorPage) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams, bottomColorPage) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshBuilderNative_NativeBorderParams) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
