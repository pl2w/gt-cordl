#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshBuilderNative_NativeRectParams.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeColorPage_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__ScaleMode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeRectParams_def.hpp"
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundRepeatInstanceList", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundRepeatInstanceListStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundRepeatInstanceListEndIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundRepeatRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "texture", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sprite", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vectorImage", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteTexture", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteVertices", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteUVs", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteTriangles", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "texturePixelsPerPoint", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rectInset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colorPage", ty: "::GlobalNamespace::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshFlags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshBuilderNative_NativeRectParams::MeshBuilderNative_NativeRectParams(::UnityEngine::Rect  rect, ::UnityEngine::Rect  subRect, ::UnityEngine::Rect  uv, ::UnityEngine::Color  color, ::UnityEngine::ScaleMode  scaleMode, ::System::IntPtr  backgroundRepeatInstanceList, int32_t  backgroundRepeatInstanceListStartIndex, int32_t  backgroundRepeatInstanceListEndIndex, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityEngine::Rect  backgroundRepeatRect, ::System::IntPtr  texture, ::System::IntPtr  sprite, ::System::IntPtr  vectorImage, ::System::IntPtr  spriteTexture, ::System::IntPtr  spriteVertices, ::System::IntPtr  spriteUVs, ::System::IntPtr  spriteTriangles, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Vector2  contentSize, ::UnityEngine::Vector2  textureSize, float_t  texturePixelsPerPoint, int32_t  leftSlice, int32_t  topSlice, int32_t  rightSlice, int32_t  bottomSlice, float_t  sliceScale, ::UnityEngine::Vector4  rectInset, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  colorPage, int32_t  meshFlags) noexcept  {
this->rect = rect;
this->subRect = subRect;
this->uv = uv;
this->color = color;
this->scaleMode = scaleMode;
this->backgroundRepeatInstanceList = backgroundRepeatInstanceList;
this->backgroundRepeatInstanceListStartIndex = backgroundRepeatInstanceListStartIndex;
this->backgroundRepeatInstanceListEndIndex = backgroundRepeatInstanceListEndIndex;
this->topLeftRadius = topLeftRadius;
this->topRightRadius = topRightRadius;
this->bottomRightRadius = bottomRightRadius;
this->bottomLeftRadius = bottomLeftRadius;
this->backgroundRepeatRect = backgroundRepeatRect;
this->texture = texture;
this->sprite = sprite;
this->vectorImage = vectorImage;
this->spriteTexture = spriteTexture;
this->spriteVertices = spriteVertices;
this->spriteUVs = spriteUVs;
this->spriteTriangles = spriteTriangles;
this->spriteGeomRect = spriteGeomRect;
this->contentSize = contentSize;
this->textureSize = textureSize;
this->texturePixelsPerPoint = texturePixelsPerPoint;
this->leftSlice = leftSlice;
this->topSlice = topSlice;
this->rightSlice = rightSlice;
this->bottomSlice = bottomSlice;
this->sliceScale = sliceScale;
this->rectInset = rectInset;
this->colorPage = colorPage;
this->meshFlags = meshFlags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshBuilderNative_NativeRectParams::MeshBuilderNative_NativeRectParams()   {
}
