#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator_RectangleParams.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_MeshFlags_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__ScaleMode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_RectangleParams_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_BackgroundRepeatInstance_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NativePagedList_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeRectParams_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__SpritePackingRotation_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.AdjustUVsForScaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::GlobalNamespace::MeshGenerator_RectangleParams::AdjustUVsForScaleMode)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb7dd1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"AdjustUVsForScaleMode", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.AdjustSpriteUVsForScaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(&::GlobalNamespace::MeshGenerator_RectangleParams::AdjustSpriteUVsForScaleMode)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb7dd38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"AdjustSpriteUVsForScaleMode", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.RectIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(&::GlobalNamespace::MeshGenerator_RectangleParams::RectIntersection)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb7dc8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"RectIntersection", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.ComputeGeomRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(&::GlobalNamespace::MeshGenerator_RectangleParams::ComputeGeomRect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb7dd674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"ComputeGeomRect", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.ComputeUVRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(&::GlobalNamespace::MeshGenerator_RectangleParams::ComputeUVRect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb7dd724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"ComputeUVRect", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.ApplyPackingRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::SpritePackingRotation)>(&::GlobalNamespace::MeshGenerator_RectangleParams::ApplyPackingRotation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb7dd7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"ApplyPackingRotation", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::SpritePackingRotation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.MakeTextured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MeshGenerator_RectangleParams (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::UnityEngine::Color)>(&::GlobalNamespace::MeshGenerator_RectangleParams::MakeTextured)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb7dd824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"MakeTextured", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.MakeSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MeshGenerator_RectangleParams (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode, ::UnityEngine::Color, bool, ::by_ref<::UnityEngine::Vector4>, bool)>(&::GlobalNamespace::MeshGenerator_RectangleParams::MakeSprite)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0xb7dd9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"MakeSprite", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.MakeVectorTextured
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MeshGenerator_RectangleParams (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VectorImage*, ::UnityEngine::ScaleMode, ::UnityEngine::Color)>(&::GlobalNamespace::MeshGenerator_RectangleParams::MakeVectorTextured)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb7de1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"MakeVectorTextured", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.HasRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MeshGenerator_RectangleParams::*)(float_t)>(&::GlobalNamespace::MeshGenerator_RectangleParams::HasRadius)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb7de30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"HasRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.HasSlices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MeshGenerator_RectangleParams::*)(float_t)>(&::GlobalNamespace::MeshGenerator_RectangleParams::HasSlices)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb7dc858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"HasSlices", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshGenerator_RectangleParams.ToNativeParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshGenerator_RectangleParams::*)(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>)>(&::GlobalNamespace::MeshGenerator_RectangleParams::ToNativeParams)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb7daaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"ToNativeParams", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshGenerator_RectangleParams::AdjustUVsForScaleMode(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ::by_ref<::UnityEngine::Rect>  rectOut, ::by_ref<::UnityEngine::Rect>  uvOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"AdjustUVsForScaleMode", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect, uv, texture, scaleMode, rectOut, uvOut);
}
inline void GlobalNamespace::MeshGenerator_RectangleParams::AdjustSpriteUVsForScaleMode(::UnityEngine::Rect  containerRect, ::UnityEngine::Rect  srcRect, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ::by_ref<::UnityEngine::Rect>  rectOut, ::by_ref<::UnityEngine::Rect>  uvOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"AdjustSpriteUVsForScaleMode", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, containerRect, srcRect, spriteGeomRect, sprite, scaleMode, rectOut, uvOut);
}
inline ::UnityEngine::Rect GlobalNamespace::MeshGenerator_RectangleParams::RectIntersection(::UnityEngine::Rect  a, ::UnityEngine::Rect  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"RectIntersection", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rect GlobalNamespace::MeshGenerator_RectangleParams::ComputeGeomRect(::UnityEngine::Sprite*  sprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"ComputeGeomRect", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect GlobalNamespace::MeshGenerator_RectangleParams::ComputeUVRect(::UnityEngine::Sprite*  sprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"ComputeUVRect", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect GlobalNamespace::MeshGenerator_RectangleParams::ApplyPackingRotation(::UnityEngine::Rect  uv, ::UnityEngine::SpritePackingRotation  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"ApplyPackingRotation", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::SpritePackingRotation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, uv, rotation);
}
inline ::GlobalNamespace::MeshGenerator_RectangleParams GlobalNamespace::MeshGenerator_RectangleParams::MakeTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Texture*  texture, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playModeTintColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"MakeTextured", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MeshGenerator_RectangleParams>(nullptr, ___internal_method, rect, uv, texture, scaleMode, playModeTintColor);
}
inline ::GlobalNamespace::MeshGenerator_RectangleParams GlobalNamespace::MeshGenerator_RectangleParams::MakeSprite(::UnityEngine::Rect  containerRect, ::UnityEngine::Rect  subRect, ::UnityEngine::Sprite*  sprite, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playModeTintColor, bool  hasRadius, ::by_ref<::UnityEngine::Vector4>  slices, bool  useForRepeat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"MakeSprite", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MeshGenerator_RectangleParams>(nullptr, ___internal_method, containerRect, subRect, sprite, scaleMode, playModeTintColor, hasRadius, slices, useForRepeat);
}
inline ::GlobalNamespace::MeshGenerator_RectangleParams GlobalNamespace::MeshGenerator_RectangleParams::MakeVectorTextured(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::UIElements::VectorImage*  vectorImage, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playModeTintColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"MakeVectorTextured", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MeshGenerator_RectangleParams>(nullptr, ___internal_method, rect, uv, vectorImage, scaleMode, playModeTintColor);
}
inline bool GlobalNamespace::MeshGenerator_RectangleParams::HasRadius(float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"HasRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, epsilon);
}
inline bool GlobalNamespace::MeshGenerator_RectangleParams::HasSlices(float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"HasSlices", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, epsilon);
}
inline void GlobalNamespace::MeshGenerator_RectangleParams::ToNativeParams(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  nativeRectParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshGenerator_RectangleParams>(),
                        {"ToNativeParams", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nativeRectParams);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundRepeatRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundRepeatInstanceList", ty: "::UnityEngine::UIElements::UIR::NativePagedList_1<::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundRepeatInstanceListStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundRepeatInstanceListEndIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundPositionX", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundPositionY", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundRepeat", ty: "::UnityEngine::UIElements::BackgroundRepeat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundSize", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sprite", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vectorImage", ty: "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rectInset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshFlags", ty: "::GlobalNamespace::MeshGenerationContext_MeshFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshGenerator_RectangleParams::MeshGenerator_RectangleParams(::UnityEngine::Rect  rect, ::UnityEngine::Rect  uv, ::UnityEngine::Color  color, ::UnityEngine::Rect  subRect, ::UnityEngine::Rect  backgroundRepeatRect, ::UnityEngine::UIElements::UIR::NativePagedList_1<::GlobalNamespace::MeshGenerator_BackgroundRepeatInstance>*  backgroundRepeatInstanceList, int32_t  backgroundRepeatInstanceListStartIndex, int32_t  backgroundRepeatInstanceListEndIndex, ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionX, ::UnityEngine::UIElements::BackgroundPosition  backgroundPositionY, ::UnityEngine::UIElements::BackgroundRepeat  backgroundRepeat, ::UnityEngine::UIElements::BackgroundSize  backgroundSize, ::UnityW<::UnityEngine::Texture>  texture, ::UnityW<::UnityEngine::Sprite>  sprite, ::UnityW<::UnityEngine::UIElements::VectorImage>  vectorImage, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  playmodeTintColor, ::UnityEngine::Vector2  topLeftRadius, ::UnityEngine::Vector2  topRightRadius, ::UnityEngine::Vector2  bottomRightRadius, ::UnityEngine::Vector2  bottomLeftRadius, ::UnityEngine::Vector2  contentSize, ::UnityEngine::Vector2  textureSize, int32_t  leftSlice, int32_t  topSlice, int32_t  rightSlice, int32_t  bottomSlice, float_t  sliceScale, ::UnityEngine::Rect  spriteGeomRect, ::UnityEngine::Vector4  rectInset, ::UnityEngine::UIElements::ColorPage  colorPage, ::GlobalNamespace::MeshGenerationContext_MeshFlags  meshFlags) noexcept  {
this->rect = rect;
this->uv = uv;
this->color = color;
this->subRect = subRect;
this->backgroundRepeatRect = backgroundRepeatRect;
this->backgroundRepeatInstanceList = backgroundRepeatInstanceList;
this->backgroundRepeatInstanceListStartIndex = backgroundRepeatInstanceListStartIndex;
this->backgroundRepeatInstanceListEndIndex = backgroundRepeatInstanceListEndIndex;
this->backgroundPositionX = backgroundPositionX;
this->backgroundPositionY = backgroundPositionY;
this->backgroundRepeat = backgroundRepeat;
this->backgroundSize = backgroundSize;
this->texture = texture;
this->sprite = sprite;
this->vectorImage = vectorImage;
this->scaleMode = scaleMode;
this->playmodeTintColor = playmodeTintColor;
this->topLeftRadius = topLeftRadius;
this->topRightRadius = topRightRadius;
this->bottomRightRadius = bottomRightRadius;
this->bottomLeftRadius = bottomLeftRadius;
this->contentSize = contentSize;
this->textureSize = textureSize;
this->leftSlice = leftSlice;
this->topSlice = topSlice;
this->rightSlice = rightSlice;
this->bottomSlice = bottomSlice;
this->sliceScale = sliceScale;
this->spriteGeomRect = spriteGeomRect;
this->rectInset = rectInset;
this->colorPage = colorPage;
this->meshFlags = meshFlags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshGenerator_RectangleParams::MeshGenerator_RectangleParams()   {
}
