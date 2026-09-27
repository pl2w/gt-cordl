#pragma once
// IWYU pragma private; include "Drawing/GeometryBuilderJob.hpp"
#include "Drawing/zzzz__CommandBuilder_LineWidthData_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "Drawing/zzzz__GeometryBuilderJob_def.hpp"
#include "Drawing/Text/zzzz__SDFCharacter_def.hpp"
#include "Drawing/zzzz__CommandBuilder_BoxData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_CircleData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_CircleXZData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_LineData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_LineWidthData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_PlaneData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_SphereData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_TextData3D_def.hpp"
#include "Drawing/zzzz__CommandBuilder_TextData_def.hpp"
#include "Drawing/zzzz__CommandBuilder_TriangleData_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_MeshBuffers_def.hpp"
#include "Drawing/zzzz__GeometryBuilderJob_TextVertex_def.hpp"
#include "Drawing/zzzz__GeometryBuilderJob_Vertex_def.hpp"
#include "Drawing/zzzz__LabelAlignment_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_Reader_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.Reserve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*, int32_t)>(&::Drawing::GeometryBuilderJob::Reserve)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x55d5388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"Reserve", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.PerspectiveDivide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float4)>(&::Drawing::GeometryBuilderJob::PerspectiveDivide)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55d53bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"PerspectiveDivide", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(uint16_t*, ::GlobalNamespace::CommandBuilder_TextData, ::UnityEngine::Color32)>(&::Drawing::GeometryBuilderJob::AddText)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x55d53d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddText", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<::GlobalNamespace::CommandBuilder_TextData>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddText3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(uint16_t*, ::GlobalNamespace::CommandBuilder_TextData3D, ::UnityEngine::Color32)>(&::Drawing::GeometryBuilderJob::AddText3D)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x55d5f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddText3D", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<::GlobalNamespace::CommandBuilder_TextData3D>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddTextInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(uint16_t*, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Drawing::LabelAlignment, float_t, bool, int32_t, ::UnityEngine::Color32)>(&::Drawing::GeometryBuilderJob::AddTextInternal)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0x55d55bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddTextInternal", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_LineData)>(&::Drawing::GeometryBuilderJob::AddLine)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x55d615c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddLine", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_LineData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.CircleSteps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Unity::Mathematics::float3, float_t, float_t, ::by_ref<::Unity::Mathematics::float4x4>, ::Unity::Mathematics::float2, ::Unity::Mathematics::float3)>(&::Drawing::GeometryBuilderJob::CircleSteps)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x55d6698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"CircleSteps", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_CircleData)>(&::Drawing::GeometryBuilderJob::AddCircle)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x55d69c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddCircle", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_CircleData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddDisc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_CircleData)>(&::Drawing::GeometryBuilderJob::AddDisc)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x55d7904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddDisc", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_CircleData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddSphereOutline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_SphereData)>(&::Drawing::GeometryBuilderJob::AddSphereOutline)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x55d7f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddSphereOutline", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_SphereData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_CircleXZData)>(&::Drawing::GeometryBuilderJob::AddCircle)> {
  constexpr static std::size_t size = 0xbe8;
  constexpr static std::size_t addrs = 0x55d6d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddCircle", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_CircleXZData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddDisc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_CircleXZData)>(&::Drawing::GeometryBuilderJob::AddDisc)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x55d83f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddDisc", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_CircleXZData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddSolidTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_TriangleData)>(&::Drawing::GeometryBuilderJob::AddSolidTriangle)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x55d89dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddSolidTriangle", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_TriangleData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddWireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_BoxData)>(&::Drawing::GeometryBuilderJob::AddWireBox)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x55d8e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddWireBox", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_BoxData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_PlaneData)>(&::Drawing::GeometryBuilderJob::AddPlane)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x55d9020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddPlane", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_PlaneData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.AddBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::GlobalNamespace::CommandBuilder_BoxData)>(&::Drawing::GeometryBuilderJob::AddBox)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x55d9238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddBox", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_BoxData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.Next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)(::by_ref<::GlobalNamespace::UnsafeAppendBuffer_Reader>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>, ::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::CommandBuilder_LineWidthData>>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Drawing::GeometryBuilderJob::Next)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x55d95fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"Next", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::UnsafeAppendBuffer_Reader>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::CommandBuilder_LineWidthData>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.CreateTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)()>(&::Drawing::GeometryBuilderJob::CreateTriangles)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x55d9f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"CreateTriangles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilderJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::GeometryBuilderJob::*)()>(&::Drawing::GeometryBuilderJob::Execute)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x55da060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::GeometryBuilderJob::setStaticF_BoxVertices(::ArrayW<::Unity::Mathematics::float4>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::float4>, "BoxVertices", ::Drawing::GeometryBuilderJob>(std::forward<::ArrayW<::Unity::Mathematics::float4>>(value));
}
inline ::ArrayW<::Unity::Mathematics::float4> Drawing::GeometryBuilderJob::getStaticF_BoxVertices()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::float4>, "BoxVertices", ::Drawing::GeometryBuilderJob>();
}
inline void Drawing::GeometryBuilderJob::setStaticF_BoxTriangles(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "BoxTriangles", ::Drawing::GeometryBuilderJob>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Drawing::GeometryBuilderJob::getStaticF_BoxTriangles()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "BoxTriangles", ::Drawing::GeometryBuilderJob>();
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Drawing::GeometryBuilderJob::Add(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                    {"Add", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, value);
}
inline void Drawing::GeometryBuilderJob::Reserve(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*  buffer, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"Reserve", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, size);
}
inline ::Unity::Mathematics::float3 Drawing::GeometryBuilderJob::PerspectiveDivide(::Unity::Mathematics::float4  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"PerspectiveDivide", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, p);
}
inline void Drawing::GeometryBuilderJob::AddText(uint16_t*  text, ::GlobalNamespace::CommandBuilder_TextData  textData, ::UnityEngine::Color32  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddText", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<::GlobalNamespace::CommandBuilder_TextData>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, textData, color);
}
inline void Drawing::GeometryBuilderJob::AddText3D(uint16_t*  text, ::GlobalNamespace::CommandBuilder_TextData3D  textData, ::UnityEngine::Color32  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddText3D", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<::GlobalNamespace::CommandBuilder_TextData3D>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, textData, color);
}
inline void Drawing::GeometryBuilderJob::AddTextInternal(uint16_t*  text, ::Unity::Mathematics::float3  pivot, ::Unity::Mathematics::float3  right, ::Unity::Mathematics::float3  up, ::Drawing::LabelAlignment  alignment, float_t  size, bool  sizeIsInPixels, int32_t  numCharacters, ::UnityEngine::Color32  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddTextInternal", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, pivot, right, up, alignment, size, sizeIsInPixels, numCharacters, color);
}
inline void Drawing::GeometryBuilderJob::AddLine(::GlobalNamespace::CommandBuilder_LineData  line)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddLine", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_LineData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, line);
}
inline int32_t Drawing::GeometryBuilderJob::CircleSteps(::Unity::Mathematics::float3  center, float_t  radius, float_t  maxPixelError, ::by_ref<::Unity::Mathematics::float4x4>  currentMatrix, ::Unity::Mathematics::float2  cameraDepthToPixelSize, ::Unity::Mathematics::float3  cameraPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"CircleSteps", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, center, radius, maxPixelError, currentMatrix, cameraDepthToPixelSize, cameraPosition);
}
inline void Drawing::GeometryBuilderJob::AddCircle(::GlobalNamespace::CommandBuilder_CircleData  circle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddCircle", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_CircleData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, circle);
}
inline void Drawing::GeometryBuilderJob::AddDisc(::GlobalNamespace::CommandBuilder_CircleData  circle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddDisc", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_CircleData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, circle);
}
inline void Drawing::GeometryBuilderJob::AddSphereOutline(::GlobalNamespace::CommandBuilder_SphereData  circle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddSphereOutline", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_SphereData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, circle);
}
inline void Drawing::GeometryBuilderJob::AddCircle(::GlobalNamespace::CommandBuilder_CircleXZData  circle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddCircle", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_CircleXZData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, circle);
}
inline void Drawing::GeometryBuilderJob::AddDisc(::GlobalNamespace::CommandBuilder_CircleXZData  circle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddDisc", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_CircleXZData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, circle);
}
inline void Drawing::GeometryBuilderJob::AddSolidTriangle(::GlobalNamespace::CommandBuilder_TriangleData  triangle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddSolidTriangle", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_TriangleData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, triangle);
}
inline void Drawing::GeometryBuilderJob::AddWireBox(::GlobalNamespace::CommandBuilder_BoxData  box)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddWireBox", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_BoxData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, box);
}
inline void Drawing::GeometryBuilderJob::AddPlane(::GlobalNamespace::CommandBuilder_PlaneData  plane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddPlane", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_PlaneData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, plane);
}
inline void Drawing::GeometryBuilderJob::AddBox(::GlobalNamespace::CommandBuilder_BoxData  box)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"AddBox", {}, {::i2c::type_of<::GlobalNamespace::CommandBuilder_BoxData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, box);
}
inline void Drawing::GeometryBuilderJob::Next(::by_ref<::GlobalNamespace::UnsafeAppendBuffer_Reader>  reader, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>  matrixStack, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>  colorStack, ::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::CommandBuilder_LineWidthData>>  lineWidthStack, ::by_ref<int32_t>  matrixStackSize, ::by_ref<int32_t>  colorStackSize, ::by_ref<int32_t>  lineWidthStackSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"Next", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::UnsafeAppendBuffer_Reader>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Color32>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::CommandBuilder_LineWidthData>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader, matrixStack, colorStack, lineWidthStack, matrixStackSize, colorStackSize, lineWidthStackSize);
}
inline void Drawing::GeometryBuilderJob::CreateTriangles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"CreateTriangles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::GeometryBuilderJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilderJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  Drawing::GeometryBuilderJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Drawing::GeometryBuilderJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "buffers", ty: "::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "characterInfo", ty: "::Drawing::Text::SDFCharacter*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "characterInfoLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentMatrix", ty: "::Unity::Mathematics::float4x4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentLineWidthData", ty: "::GlobalNamespace::CommandBuilder_LineWidthData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lineWidthMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minBounds", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxBounds", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraRotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraDepthToPixelSize", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxPixelError", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraIsOrthographic", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastNormalizedLineDir", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastLineWidth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::GeometryBuilderJob::GeometryBuilderJob(::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*  buffers, ::Drawing::Text::SDFCharacter*  characterInfo, int32_t  characterInfoLength, ::UnityEngine::Color32  currentColor, ::Unity::Mathematics::float4x4  currentMatrix, ::GlobalNamespace::CommandBuilder_LineWidthData  currentLineWidthData, float_t  lineWidthMultiplier, ::Unity::Mathematics::float3  minBounds, ::Unity::Mathematics::float3  maxBounds, ::Unity::Mathematics::float3  cameraPosition, ::Unity::Mathematics::quaternion  cameraRotation, ::Unity::Mathematics::float2  cameraDepthToPixelSize, float_t  maxPixelError, bool  cameraIsOrthographic, ::Unity::Mathematics::float3  lastNormalizedLineDir, float_t  lastLineWidth) noexcept  {
this->buffers = buffers;
this->characterInfo = characterInfo;
this->characterInfoLength = characterInfoLength;
this->currentColor = currentColor;
this->currentMatrix = currentMatrix;
this->currentLineWidthData = currentLineWidthData;
this->lineWidthMultiplier = lineWidthMultiplier;
this->minBounds = minBounds;
this->maxBounds = maxBounds;
this->cameraPosition = cameraPosition;
this->cameraRotation = cameraRotation;
this->cameraDepthToPixelSize = cameraDepthToPixelSize;
this->maxPixelError = maxPixelError;
this->cameraIsOrthographic = cameraIsOrthographic;
this->lastNormalizedLineDir = lastNormalizedLineDir;
this->lastLineWidth = lastLineWidth;
}
// Ctor Parameters []
constexpr ::Drawing::GeometryBuilderJob::GeometryBuilderJob()   {
}
