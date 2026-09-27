#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_RectangleParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_MeshFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshGenerator_RectangleParams)
namespace GlobalNamespace {
struct MeshBuilderNative_NativeRectParams;
}
namespace GlobalNamespace {
struct MeshGenerator_BackgroundRepeatInstance;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class NativePagedList_1;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshGenerator_RectangleParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshGenerator_RectangleParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshGenerator_RectangleParams, "UnityEngine.UIElements.UIR", "MeshGenerator/RectangleParams");
// Dependencies UnityEngine.Color, UnityEngine.Rect, UnityEngine.ScaleMode, UnityEngine.UIElements.BackgroundPosition, UnityEngine.UIElements.BackgroundRepeat, UnityEngine.UIElements.BackgroundSize, UnityEngine.UIElements.ColorPage, UnityEngine.UIElements.MeshGenerationContext::MeshFlags, UnityEngine.Vector2, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.MeshGenerator/RectangleParams
struct CORDL_TYPE MeshGenerator_RectangleParams {
public:
// Declarations
/// @brief Method AdjustSpriteUVsForScaleMode, addr 0xb7dd38c, size 0x2e8, virtual false, abstract: false, final false
static inline void AdjustSpriteUVsForScaleMode(::UnityEngine::Rect  containerRect, ::UnityEngine::Rect  srcRect, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ::by_ref<::UnityEngine::Rect>  rectOut, ::by_ref<::UnityEngine::Rect>  uvOut) ;

/// @brief Method AdjustUVsForScaleMode, addr 0xb7dd1f0, size 0x19c, virtual false, abstract: false, final false
static inline void AdjustUVsForScaleMode(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ::by_ref<::UnityEngine::Rect>  rectOut, ::by_ref<::UnityEngine::Rect>  uvOut) ;

/// @brief Method ApplyPackingRotation, addr 0xb7dd7d4, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect ApplyPackingRotation(::UnityEngine::Rect  uv, ::UnityEngine::SpritePackingRotation  rotation) ;

/// @brief Method ComputeGeomRect, addr 0xb7dd674, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect ComputeGeomRect(::UnityEngine::Sprite*  sprite) ;

/// @brief Method ComputeUVRect, addr 0xb7dd724, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect ComputeUVRect(::UnityEngine::Sprite*  sprite) ;

/// @brief Method HasRadius, addr 0xb7de30c, size 0x74, virtual false, abstract: false, final false
inline bool HasRadius(float_t  epsilon) ;

/// @brief Method HasSlices, addr 0xb7dc858, size 0x4c, virtual false, abstract: false, final false
inline bool HasSlices(float_t  epsilon) ;

/// @brief Method MakeSprite, addr 0xb7dd9a8, size 0x848, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MeshGenerator_RectangleParams MakeSprite(::UnityEngine::Rect  containerRect, ::UnityEngine::Rect  subRect, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playModeTintColor, bool  hasRadius, ::by_ref<::UnityEngine::Vector4>  slices, bool  useForRepeat) ;

/// @brief Method MakeTextured, addr 0xb7dd824, size 0x184, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MeshGenerator_RectangleParams MakeTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playModeTintColor) ;

/// @brief Method MakeVectorTextured, addr 0xb7de1f0, size 0x11c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MeshGenerator_RectangleParams MakeVectorTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::UIElements::VectorImage*  vectorImage, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playModeTintColor) ;

/// @brief Method RectIntersection, addr 0xb7dc8a4, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect RectIntersection(::UnityEngine::Rect  a, ::UnityEngine::Rect  b) ;

/// @brief Method ToNativeParams, addr 0xb7daaf4, size 0x128, virtual false, abstract: false, final false
inline void ToNativeParams(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  nativeRectParams) ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshGenerator_RectangleParams() ;

// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeatRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeatInstanceList", ty: "::UnityEngine::UIElements::UIR::NativePagedList_1<::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeatInstanceListStartIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeatInstanceListEndIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundPositionX", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundPositionY", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundRepeat", ty: "::UnityEngine::UIElements::BackgroundRepeat", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundSize", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "", def_value: None, comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sprite", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "vectorImage", ty: "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: None, comment: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "rectInset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshFlags", ty: "::GlobalNamespace::MeshGenerationContext_MeshFlags", modifiers: "", def_value: None, comment: None }]
constexpr MeshGenerator_RectangleParams(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Color  color, ::UnityEngine::Rect  subRect, ::UnityEngine::Rect  backgroundRepeatRect, ::UnityEngine::UIElements::UIR::NativePagedList_1<::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance>*  backgroundRepeatInstanceList, int32_t  backgroundRepeatInstanceListStartIndex, int32_t  backgroundRepeatInstanceListEndIndex, ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionX, ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionY, ::UnityEngine::UIElements::BackgroundRepeat  backgroundRepeat, ::UnityEngine::UIElements::BackgroundSize  backgroundSize, ::UnityW<::UnityEngine::Texture>  texture, ::UnityW<::UnityEngine::Sprite>  sprite, ::UnityW<::UnityEngine::UIElements::VectorImage>  vectorImage, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityEngine::Vector2  contentSize, ::UnityEngine::Vector2  textureSize, int32_t  leftSlice, int32_t  topSlice, int32_t  rightSlice, int32_t  bottomSlice, float_t  sliceScale, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Vector4  rectInset, ::UnityEngine::UIElements::ColorPage  colorPage, ::GlobalNamespace::MeshGenerationContext_MeshFlags  meshFlags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8543};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x138};

/// @brief Field rect, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rect  rect;

/// @brief Field uv, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  uv;

/// @brief Field color, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field subRect, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Rect  subRect;

/// @brief Field backgroundRepeatRect, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Rect  backgroundRepeatRect;

/// @brief Field backgroundRepeatInstanceList, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::UIElements::UIR::NativePagedList_1<::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance>*  backgroundRepeatInstanceList;

/// @brief Field backgroundRepeatInstanceListStartIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  backgroundRepeatInstanceListStartIndex;

/// @brief Field backgroundRepeatInstanceListEndIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  backgroundRepeatInstanceListEndIndex;

/// @brief Field backgroundPositionX, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionX;

/// @brief Field backgroundPositionY, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionY;

/// @brief Field backgroundRepeat, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::UIElements::BackgroundRepeat  backgroundRepeat;

/// @brief Field backgroundSize, offset: 0x80, size: 0x14, def value: None
 ::UnityEngine::UIElements::BackgroundSize  backgroundSize;

/// @brief Field texture, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  texture;

/// @brief Field sprite, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  sprite;

/// @brief Field vectorImage, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::VectorImage>  vectorImage;

/// @brief Field scaleMode, offset: 0xb0, size: 0x4, def value: None
 ::UnityEngine::ScaleMode  scaleMode;

/// @brief Field playmodeTintColor, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Color  playmodeTintColor;

/// @brief Field topLeftRadius, offset: 0xc4, size: 0x8, def value: None
 ::UnityEngine::Vector2  topLeftRadius;

/// @brief Field topRightRadius, offset: 0xcc, size: 0x8, def value: None
 ::UnityEngine::Vector2  topRightRadius;

/// @brief Field bottomRightRadius, offset: 0xd4, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomRightRadius;

/// @brief Field bottomLeftRadius, offset: 0xdc, size: 0x8, def value: None
 ::UnityEngine::Vector2  bottomLeftRadius;

/// @brief Field contentSize, offset: 0xe4, size: 0x8, def value: None
 ::UnityEngine::Vector2  contentSize;

/// @brief Field textureSize, offset: 0xec, size: 0x8, def value: None
 ::UnityEngine::Vector2  textureSize;

/// @brief Field leftSlice, offset: 0xf4, size: 0x4, def value: None
 int32_t  leftSlice;

/// @brief Field topSlice, offset: 0xf8, size: 0x4, def value: None
 int32_t  topSlice;

/// @brief Field rightSlice, offset: 0xfc, size: 0x4, def value: None
 int32_t  rightSlice;

/// @brief Field bottomSlice, offset: 0x100, size: 0x4, def value: None
 int32_t  bottomSlice;

/// @brief Field sliceScale, offset: 0x104, size: 0x4, def value: None
 float_t  sliceScale;

/// @brief Field spriteGeomRect, offset: 0x108, size: 0x10, def value: None
 ::UnityEngine::Rect  spriteGeomRect;

/// @brief Field rectInset, offset: 0x118, size: 0x10, def value: None
 ::UnityEngine::Vector4  rectInset;

/// @brief Field colorPage, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::UIElements::ColorPage  colorPage;

/// @brief Field meshFlags, offset: 0x130, size: 0x4, def value: None
 ::GlobalNamespace::MeshGenerationContext_MeshFlags  meshFlags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, rect) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, uv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, color) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, subRect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, backgroundRepeatRect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, backgroundRepeatInstanceList) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, backgroundRepeatInstanceListStartIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, backgroundRepeatInstanceListEndIndex) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, backgroundPositionX) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, backgroundPositionY) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, backgroundRepeat) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, backgroundSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, texture) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, sprite) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, vectorImage) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, scaleMode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, playmodeTintColor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, topLeftRadius) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, topRightRadius) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, bottomRightRadius) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, bottomLeftRadius) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, contentSize) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, textureSize) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, leftSlice) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, topSlice) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, rightSlice) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, bottomSlice) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, sliceScale) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, spriteGeomRect) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, rectInset) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, colorPage) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshGenerator_RectangleParams, meshFlags) == 0x130, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshGenerator_RectangleParams) == 0x138, "Size mismatch!");

} // namespace end def GlobalNamespace
