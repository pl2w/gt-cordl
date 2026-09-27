#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_BorderParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MeshGenerator_BorderParams)
namespace GlobalNamespace {
struct MeshBuilderNative_NativeBorderParams;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshGenerator_BorderParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshGenerator_BorderParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshGenerator_BorderParams, "UnityEngine.UIElements.UIR", "MeshGenerator/BorderParams");
// Dependencies UnityEngine.Color, UnityEngine.Rect, UnityEngine.UIElements.ColorPage, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.MeshGenerator/BorderParams
struct CORDL_TYPE MeshGenerator_BorderParams {
public:
// Declarations
/// @brief Method ToNativeParams, addr 0xb7dd124, size 0xcc, virtual false, abstract: false, final false
inline void ToNativeParams(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>  nativeBorderParams) ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshGenerator_BorderParams() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None, comment: None }, CppParam { name: "topColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None, comment: None }]
constexpr MeshGenerator_BorderParams(::UnityEngine::Rect  rect, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Color  leftColor, ::UnityEngine::Color  topColor, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  bottomColor, float_t  leftWidth, float_t  topWidth, float_t  rightWidth, float_t  bottomWidth, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityEngine::UIElements::ColorPage  leftColorPage, ::UnityEngine::UIElements::ColorPage  topColorPage, ::UnityEngine::UIElements::ColorPage  rightColorPage, ::UnityEngine::UIElements::ColorPage  bottomColorPage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8542};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field playmodeTintColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  playmodeTintColor;

/// @brief Field leftColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  leftColor;

/// @brief Field topColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  topColor;

/// @brief Field rightColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  rightColor;

/// @brief Field bottomColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  bottomColor;

/// @brief Field leftWidth, offset: 0x60, size: 0x4, def value: None
 float_t  leftWidth;

/// @brief Field topWidth, offset: 0x64, size: 0x4, def value: None
 float_t  topWidth;

/// @brief Field rightWidth, offset: 0x68, size: 0x4, def value: None
 float_t  rightWidth;

/// @brief Field bottomWidth, offset: 0x6c, size: 0x4, def value: None
 float_t  bottomWidth;

/// @brief Field topLeftRadius, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2  topLeftRadius;

/// @brief Field topRightRadius, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Vector2  topRightRadius;

/// @brief Field bottomRightRadius, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomRightRadius;

/// @brief Field bottomLeftRadius, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomLeftRadius;

/// @brief Field leftColorPage, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  leftColorPage;

/// @brief Field topColorPage, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  topColorPage;

/// @brief Field rightColorPage, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  rightColorPage;

/// @brief Field bottomColorPage, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  bottomColorPage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, playmodeTintColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, leftColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, topColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, rightColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, bottomColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, leftWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, topWidth) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, rightWidth) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, bottomWidth) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, topLeftRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, topRightRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, bottomRightRadius) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, bottomLeftRadius) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, leftColorPage) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, topColorPage) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, rightColorPage) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_BorderParams, bottomColorPage) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshGenerator_BorderParams) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
