#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshBuilderNative_NativeRectParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeColorPage_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshBuilderNative_NativeRectParams)
// Forward declare root types
namespace GlobalNamespace {
struct MeshBuilderNative_NativeRectParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshBuilderNative_NativeRectParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshBuilderNative_NativeRectParams, "UnityEngine.UIElements", "MeshBuilderNative/NativeRectParams");
// Dependencies System.IntPtr, UnityEngine.Color, UnityEngine.Rect, UnityEngine.ScaleMode, UnityEngine.UIElements.MeshBuilderNative::NativeColorPage, UnityEngine.Vector2, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshBuilderNative/NativeRectParams
struct CORDL_TYPE MeshBuilderNative_NativeRectParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MeshBuilderNative_NativeRectParams() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeatInstanceList", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeatInstanceListStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeatInstanceListEndIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeatRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "texture", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "sprite", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "vectorImage", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteTexture", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteVertices", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteUVs", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteTriangles", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "texturePixelsPerPoint", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rectInset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "colorPage", ty: "::GlobalNamespace::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshFlags", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MeshBuilderNative_NativeRectParams(::UnityEngine::Rect  rect, ::UnityEngine::Rect  subRect, ::UnityEngine::Rect  uv, ::UnityEngine::Color  color, ::UnityEngine::ScaleMode  scaleMode, ::System::IntPtr  backgroundRepeatInstanceList, int32_t  backgroundRepeatInstanceListStartIndex, int32_t  backgroundRepeatInstanceListEndIndex, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityEngine::Rect  backgroundRepeatRect, ::System::IntPtr  texture, ::System::IntPtr  sprite, ::System::IntPtr  vectorImage, ::System::IntPtr  spriteTexture, ::System::IntPtr  spriteVertices, ::System::IntPtr  spriteUVs, ::System::IntPtr  spriteTriangles, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Vector2  contentSize, ::UnityEngine::Vector2  textureSize, float_t  texturePixelsPerPoint, int32_t  leftSlice, int32_t  topSlice, int32_t  rightSlice, int32_t  bottomSlice, float_t  sliceScale, ::UnityEngine::Vector4  rectInset, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  colorPage, int32_t  meshFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x118};

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field subRect, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  subRect;

/// @brief Field uv, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rect  uv;

/// @brief Field color, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field scaleMode, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::ScaleMode  scaleMode;

/// @brief Field backgroundRepeatInstanceList, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  backgroundRepeatInstanceList;

/// @brief Field backgroundRepeatInstanceListStartIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  backgroundRepeatInstanceListStartIndex;

/// @brief Field backgroundRepeatInstanceListEndIndex, offset: 0x54, size: 0x4, def value: None
 int32_t  backgroundRepeatInstanceListEndIndex;

/// @brief Field topLeftRadius, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  topLeftRadius;

/// @brief Field topRightRadius, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  topRightRadius;

/// @brief Field bottomRightRadius, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomRightRadius;

/// @brief Field bottomLeftRadius, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomLeftRadius;

/// @brief Field backgroundRepeatRect, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Rect  backgroundRepeatRect;

/// @brief Field texture, offset: 0x88, size: 0x8, def value: None
 ::System::IntPtr  texture;

/// @brief Field sprite, offset: 0x90, size: 0x8, def value: None
 ::System::IntPtr  sprite;

/// @brief Field vectorImage, offset: 0x98, size: 0x8, def value: None
 ::System::IntPtr  vectorImage;

/// @brief Field spriteTexture, offset: 0xa0, size: 0x8, def value: None
 ::System::IntPtr  spriteTexture;

/// @brief Field spriteVertices, offset: 0xa8, size: 0x8, def value: None
 ::System::IntPtr  spriteVertices;

/// @brief Field spriteUVs, offset: 0xb0, size: 0x8, def value: None
 ::System::IntPtr  spriteUVs;

/// @brief Field spriteTriangles, offset: 0xb8, size: 0x8, def value: None
 ::System::IntPtr  spriteTriangles;

/// @brief Field spriteGeomRect, offset: 0xc0, size: 0x10, def value: None
 ::UnityEngine::Rect  spriteGeomRect;

/// @brief Field contentSize, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Vector2  contentSize;

/// @brief Field textureSize, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Vector2  textureSize;

/// @brief Field texturePixelsPerPoint, offset: 0xe0, size: 0x4, def value: None
 float_t  texturePixelsPerPoint;

/// @brief Field leftSlice, offset: 0xe4, size: 0x4, def value: None
 int32_t  leftSlice;

/// @brief Field topSlice, offset: 0xe8, size: 0x4, def value: None
 int32_t  topSlice;

/// @brief Field rightSlice, offset: 0xec, size: 0x4, def value: None
 int32_t  rightSlice;

/// @brief Field bottomSlice, offset: 0xf0, size: 0x4, def value: None
 int32_t  bottomSlice;

/// @brief Field sliceScale, offset: 0xf4, size: 0x4, def value: None
 float_t  sliceScale;

/// @brief Field rectInset, offset: 0xf8, size: 0x10, def value: None
 ::UnityEngine::Vector4  rectInset;

/// @brief Field colorPage, offset: 0x108, size: 0x8, def value: None
 ::GlobalNamespace::MeshBuilderNative_NativeColorPage  colorPage;

/// @brief Field meshFlags, offset: 0x110, size: 0x4, def value: None
 int32_t  meshFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, subRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, uv) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, color) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, scaleMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, backgroundRepeatInstanceList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, backgroundRepeatInstanceListStartIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, backgroundRepeatInstanceListEndIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, topLeftRadius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, topRightRadius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, bottomRightRadius) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, bottomLeftRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, backgroundRepeatRect) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, texture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, sprite) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, vectorImage) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, spriteTexture) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, spriteVertices) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, spriteUVs) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, spriteTriangles) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, spriteGeomRect) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, contentSize) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, textureSize) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, texturePixelsPerPoint) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, leftSlice) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, topSlice) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, rightSlice) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, bottomSlice) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, sliceScale) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, rectInset) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, colorPage) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshBuilderNative_NativeRectParams, meshFlags) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshBuilderNative_NativeRectParams) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
