#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshBuilderNative.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeBorderParams_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeColorPage_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_NativeRectParams_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteDataInterface_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeBorder)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb8bb560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeBorder", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeSolidRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb8bb60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeSolidRect", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeTexturedRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb8bb6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeTexturedRect", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphicsStretchBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(::ArrayW<::UnityEngine::UIElements::Vertex>, ::ArrayW<uint16_t>, float_t, float_t, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::ScaleMode, ::UnityEngine::Color, ::GlobalNamespace::MeshBuilderNative_NativeColorPage)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb8bb764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeVectorGraphicsStretchBackground", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Vertex>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::MeshBuilderNative_NativeColorPage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphics9SliceBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(::ArrayW<::UnityEngine::UIElements::Vertex>, ::ArrayW<uint16_t>, float_t, float_t, ::UnityEngine::Rect, ::UnityEngine::Vector4, ::UnityEngine::Color, ::GlobalNamespace::MeshBuilderNative_NativeColorPage)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb8bb9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeVectorGraphics9SliceBackground", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Vertex>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::MeshBuilderNative_NativeColorPage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeBorder_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeBorder_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb8bb5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeBorder_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeSolidRect_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb8bb674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeSolidRect_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeTexturedRect_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb8bb720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeTexturedRect_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphicsStretchBackground_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, float_t, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>, ::UnityEngine::ScaleMode, ::by_ref<::UnityEngine::Color>, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground_Injected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb8bb918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeVectorGraphicsStretchBackground_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphics9SliceBackground_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, float_t, ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Color>, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb8bbb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeVectorGraphics9SliceBackground_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeBorder(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>  borderParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeBorder", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, borderParams);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeSolidRect", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, rectParams);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeTexturedRect", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, rectParams);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground(::ArrayW<::UnityEngine::UIElements::Vertex>  svgVertices, ::ArrayW<uint16_t>  svgIndices, float_t  svgWidth, float_t  svgHeight, ::UnityEngine::Rect  targetRect, ::UnityEngine::Rect  sourceUV, ::UnityEngine::ScaleMode  scaleMode, ::UnityEngine::Color  tint, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  colorPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeVectorGraphicsStretchBackground", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Vertex>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::MeshBuilderNative_NativeColorPage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sourceUV, scaleMode, tint, colorPage);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground(::ArrayW<::UnityEngine::UIElements::Vertex>  svgVertices, ::ArrayW<uint16_t>  svgIndices, float_t  svgWidth, float_t  svgHeight, ::UnityEngine::Rect  targetRect, ::UnityEngine::Vector4  sliceLTRB, ::UnityEngine::Color  tint, ::GlobalNamespace::MeshBuilderNative_NativeColorPage  colorPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeVectorGraphics9SliceBackground", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Vertex>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::MeshBuilderNative_NativeColorPage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sliceLTRB, tint, colorPage);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeBorder_Injected(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>  borderParams, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeBorder_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeBorderParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, borderParams, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect_Injected(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeSolidRect_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rectParams, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect_Injected(::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>  rectParams, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeTexturedRect_Injected", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rectParams, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  svgVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  svgIndices, float_t  svgWidth, float_t  svgHeight, ::by_ref<::UnityEngine::Rect>  targetRect, ::by_ref<::UnityEngine::Rect>  sourceUV, ::UnityEngine::ScaleMode  scaleMode, ::by_ref<::UnityEngine::Color>  tint, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>  colorPage, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeVectorGraphicsStretchBackground_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sourceUV, scaleMode, tint, colorPage, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  svgVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  svgIndices, float_t  svgWidth, float_t  svgHeight, ::by_ref<::UnityEngine::Rect>  targetRect, ::by_ref<::UnityEngine::Vector4>  sliceLTRB, ::by_ref<::UnityEngine::Color>  tint, ::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>  colorPage, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                        {"MakeVectorGraphics9SliceBackground_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MeshBuilderNative_NativeColorPage>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sliceLTRB, tint, colorPage, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshBuilderNative::MeshBuilderNative()   {
}
