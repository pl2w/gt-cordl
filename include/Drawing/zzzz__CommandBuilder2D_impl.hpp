#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder2D.hpp"
#include "Drawing/zzzz__CommandBuilder_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4x4_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "Drawing/zzzz__CommandBuilder2D_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeColor_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeLineWidth_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeMatrix_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopePersist_def.hpp"
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "Drawing/zzzz__LabelAlignment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__FixedString128Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString512Bytes_def.hpp"
#include "Unity/Collections/zzzz__FixedString64Bytes_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Drawing::CommandBuilder2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Drawing::CommandBuilder, bool)>(&::Drawing::CommandBuilder2D::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55a86a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::Line)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x55bd52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Line)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x55bd618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder2D::Line)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55bd74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, float_t, float_t)>(&::Drawing::CommandBuilder2D::Circle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x55bd7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::CommandBuilder2D::Circle)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x55bd88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, float_t, float_t)>(&::Drawing::CommandBuilder2D::SolidCircle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x55bd9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::CommandBuilder2D::SolidCircle)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x55bda7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WirePill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::Drawing::CommandBuilder2D::WirePill)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55bdbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WirePill", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WirePill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, float_t)>(&::Drawing::CommandBuilder2D::WirePill)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x55bdca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WirePill", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, bool)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x55be03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::UnityEngine::Vector2>, bool)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55be25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::Unity::Mathematics::float2>, bool)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x55be3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float2>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>, bool)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55be4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t)>(&::Drawing::CommandBuilder2D::Cross)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x55be620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::WireRectangle)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x55be6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Rect)>(&::Drawing::CommandBuilder2D::WireRectangle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55b0540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Rect)>(&::Drawing::CommandBuilder2D::SolidRectangle)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x55b0b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::int2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::WireGrid)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x55be7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::int2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::WireGrid)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x55be934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WithMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeMatrix (::Drawing::CommandBuilder2D::*)(::UnityEngine::Matrix4x4)>(&::Drawing::CommandBuilder2D::WithMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55bea74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WithMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeMatrix (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3x3)>(&::Drawing::CommandBuilder2D::WithMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55beb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WithColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeColor (::Drawing::CommandBuilder2D::*)(::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WithColor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55beba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WithDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopePersist (::Drawing::CommandBuilder2D::*)(float_t)>(&::Drawing::CommandBuilder2D::WithDuration)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x55bec54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WithLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeLineWidth (::Drawing::CommandBuilder2D::*)(float_t, bool)>(&::Drawing::CommandBuilder2D::WithLineWidth)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55bece4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.InLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeMatrix (::Drawing::CommandBuilder2D::*)(::UnityEngine::Transform*)>(&::Drawing::CommandBuilder2D::InLocalSpace)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x55bed7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"InLocalSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.InScreenSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeMatrix (::Drawing::CommandBuilder2D::*)(::UnityEngine::Camera*)>(&::Drawing::CommandBuilder2D::InScreenSpace)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x55bee04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"InScreenSpace", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PushMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Matrix4x4)>(&::Drawing::CommandBuilder2D::PushMatrix)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x55bee8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PushMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float4x4)>(&::Drawing::CommandBuilder2D::PushMatrix)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x55bef0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PushSetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Matrix4x4)>(&::Drawing::CommandBuilder2D::PushSetMatrix)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x55bef8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PushSetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float4x4)>(&::Drawing::CommandBuilder2D::PushSetMatrix)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x55bf00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PopMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)()>(&::Drawing::CommandBuilder2D::PopMatrix)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55bf08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PushColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::PushColor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x55bf0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PopColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)()>(&::Drawing::CommandBuilder2D::PopColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55bf164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PushDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(float_t)>(&::Drawing::CommandBuilder2D::PushDuration)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55bf1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PopDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)()>(&::Drawing::CommandBuilder2D::PopDuration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55bf21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PushPersist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(float_t)>(&::Drawing::CommandBuilder2D::PushPersist)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55bf270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushPersist", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PopPersist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)()>(&::Drawing::CommandBuilder2D::PopPersist)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55bf2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopPersist", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PushLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(float_t, bool)>(&::Drawing::CommandBuilder2D::PushLineWidth)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x55bf328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.PopLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)()>(&::Drawing::CommandBuilder2D::PopLineWidth)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x55bf39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopLineWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Drawing::CommandBuilder2D::Line)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55bf3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Drawing::CommandBuilder2D::Line)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55be1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Line)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55bf48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Line)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55bf588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder2D::Ray)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55bf654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::Ray)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55bf6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Ray, float_t)>(&::Drawing::CommandBuilder2D::Ray)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x55bf788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder2D::Arc)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55bf818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::Arc)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55bf914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::CommandBuilder2D::CircleXY)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55bf9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, float_t, float_t)>(&::Drawing::CommandBuilder2D::CircleXY)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x55bfa74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder2D::SolidArc)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55bfb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::SolidArc)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55bfc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55bfcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::UnityEngine::Vector3>, bool)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55bfd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::Unity::Mathematics::float3>, bool)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55bfdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, bool)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x55bfe1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.DashedLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::CommandBuilder2D::DashedLine)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55bfe98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.DashedLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, float_t)>(&::Drawing::CommandBuilder2D::DashedLine)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55bff4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.DashedPolyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t, float_t)>(&::Drawing::CommandBuilder2D::DashedPolyline)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x55bfffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder2D::Cross)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x55c0078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Bezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder2D::Bezier)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55c00fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Bezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::Bezier)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55c0208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Drawing::CommandBuilder2D::CatmullRom)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55c02ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder2D::CatmullRom)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55c0350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::CatmullRom)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55c045c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder2D::Arrow)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55c0540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::Arrow)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55c0748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder2D::Arrow)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55c07e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::Drawing::CommandBuilder2D::Arrow)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55c08d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowRelativeSizeHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder2D::ArrowRelativeSizeHead)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55c0654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowRelativeSizeHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::Drawing::CommandBuilder2D::ArrowRelativeSizeHead)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55c09a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder2D::Arrowhead)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55c0a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::Drawing::CommandBuilder2D::Arrowhead)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x55c0c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::CommandBuilder2D::Arrowhead)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55c0b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t)>(&::Drawing::CommandBuilder2D::Arrowhead)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x55c0d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::CommandBuilder2D::ArrowheadArc)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x55c0df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, float_t)>(&::Drawing::CommandBuilder2D::ArrowheadArc)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55c124c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder2D::WireTriangle)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55c12fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::WireTriangle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c13f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::WireRectangle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55c14bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::WireRectangle)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c15c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::CommandBuilder2D::WireTriangle)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55c168c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::CommandBuilder2D::WireTriangle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55c1740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::CommandBuilder2D::SolidTriangle)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55c17fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&::Drawing::CommandBuilder2D::SolidTriangle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c18f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::StringW, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55c19bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::StringW, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55c1a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::StringW, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c1aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::StringW, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c1bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55c1c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55c1d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55c1dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55c1e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55c1edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55c1f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55c200c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55c20a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c213c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c2200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c22cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c245c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c2520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c25ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c26b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Ray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55c277c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Ray)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c2878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Ray, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Ray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55c2944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arc)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55c2a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arc)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55c2b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::CircleXY)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55c2c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::CircleXY)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c2d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::CircleXY)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55c2ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::CircleXY)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55c2eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::SolidArc)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55c2f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::SolidArc)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55c3090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55c318c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55c3228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::UnityEngine::Vector3>, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55c32c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55c335c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::Unity::Mathematics::float3>, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55c33f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::Unity::Mathematics::float3>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55c3490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55c3528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x55c35d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.DashedLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::DashedLine)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55c3674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.DashedLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::DashedLine)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x55c3778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.DashedPolyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::DashedPolyline)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55c3850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Cross)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55c38fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Cross)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55c39b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Bezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Bezier)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x55c3a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Bezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Bezier)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x55c3b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::CatmullRom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x55c3cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::CatmullRom)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x55c3d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::CatmullRom)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x55c3e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arrow)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55c3f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arrow)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c41d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arrow)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55c42a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arrow)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x55c43c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowRelativeSizeHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::ArrowRelativeSizeHead)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55c40b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowRelativeSizeHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::ArrowRelativeSizeHead)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x55c44d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arrowhead)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55c45e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arrowhead)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x55c4810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arrowhead)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55c46ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Arrowhead)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x55c48f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::ArrowheadArc)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x55c4a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::ArrowheadArc)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55c4eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::ArrowheadArc)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x55c4fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::ArrowheadArc)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55c50a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireTriangle)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55c519c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireTriangle)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55c52b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireRectangle)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x55c53b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireRectangle)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x55c54d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireTriangle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55c55ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireTriangle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x55c56f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::SolidTriangle)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55c57d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::SolidTriangle)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55c58f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::StringW, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c59f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::StringW, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55c5ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::StringW, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c5b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::StringW, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55c5c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::StringW, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55c5cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::StringW, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x55c5dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c5ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55c5fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c6078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString32Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55c6144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c61f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55c62b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c6378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString64Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55c6444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c64f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55c65b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c6678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString128Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55c6744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c67f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55c68b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55c6978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString512Bytes>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55c6a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55c6af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x55c6c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55c6cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x55c6e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55c6efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x55c7008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55c7100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Label2D)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x55c720c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Line)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55c7304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Circle)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55c7400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Circle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55c7658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Circle)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x55c74dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Circle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c7714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::SolidCircle)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55c77d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::SolidCircle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55c7a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::SolidCircle)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x55c78b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::SolidCircle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x55c7ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WirePill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WirePill)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55c7bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WirePill", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WirePill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WirePill)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x55c7ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WirePill", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x55c8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55c8220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::UnityEngine::Vector2>, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x55c82b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::UnityEngine::Vector2>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55c8450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::Unity::Mathematics::float2>, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x55c84e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float2>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::ArrayW<::Unity::Mathematics::float2>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55c8680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float2>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>, bool, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x55c8718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Polyline)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x55c8880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, float_t, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Cross)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55c8920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::Cross)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x55c8a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireRectangle)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x55c8ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Rect, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireRectangle)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x55b8f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.SolidRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::UnityEngine::Rect, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::SolidRectangle)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x55b96fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::int2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireGrid)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x55c8bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::CommandBuilder2D.WireGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::CommandBuilder2D::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::int2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::CommandBuilder2D::WireGrid)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x55c8d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::CommandBuilder2D::setStaticF_XY_UP(::Unity::Mathematics::float3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float3, "XY_UP", ::Drawing::CommandBuilder2D>(std::forward<::Unity::Mathematics::float3>(value));
}
inline ::Unity::Mathematics::float3 Drawing::CommandBuilder2D::getStaticF_XY_UP()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float3, "XY_UP", ::Drawing::CommandBuilder2D>();
}
inline void Drawing::CommandBuilder2D::setStaticF_XZ_UP(::Unity::Mathematics::float3  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float3, "XZ_UP", ::Drawing::CommandBuilder2D>(std::forward<::Unity::Mathematics::float3>(value));
}
inline ::Unity::Mathematics::float3 Drawing::CommandBuilder2D::getStaticF_XZ_UP()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float3, "XZ_UP", ::Drawing::CommandBuilder2D>();
}
inline void Drawing::CommandBuilder2D::setStaticF_XY_TO_XZ_ROTATION(::Unity::Mathematics::quaternion  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::quaternion, "XY_TO_XZ_ROTATION", ::Drawing::CommandBuilder2D>(std::forward<::Unity::Mathematics::quaternion>(value));
}
inline ::Unity::Mathematics::quaternion Drawing::CommandBuilder2D::getStaticF_XY_TO_XZ_ROTATION()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::quaternion, "XY_TO_XZ_ROTATION", ::Drawing::CommandBuilder2D>();
}
inline void Drawing::CommandBuilder2D::setStaticF_XZ_TO_XZ_ROTATION(::Unity::Mathematics::quaternion  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::quaternion, "XZ_TO_XZ_ROTATION", ::Drawing::CommandBuilder2D>(std::forward<::Unity::Mathematics::quaternion>(value));
}
inline ::Unity::Mathematics::quaternion Drawing::CommandBuilder2D::getStaticF_XZ_TO_XZ_ROTATION()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::quaternion, "XZ_TO_XZ_ROTATION", ::Drawing::CommandBuilder2D>();
}
inline void Drawing::CommandBuilder2D::setStaticF_XZ_TO_XY_MATRIX(::Unity::Mathematics::float4x4  value)  {
::cordl_internals::setStaticField<::Unity::Mathematics::float4x4, "XZ_TO_XY_MATRIX", ::Drawing::CommandBuilder2D>(std::forward<::Unity::Mathematics::float4x4>(value));
}
inline ::Unity::Mathematics::float4x4 Drawing::CommandBuilder2D::getStaticF_XZ_TO_XY_MATRIX()  {
return ::cordl_internals::getStaticField<::Unity::Mathematics::float4x4, "XZ_TO_XY_MATRIX", ::Drawing::CommandBuilder2D>();
}
inline void Drawing::CommandBuilder2D::_ctor(::Drawing::CommandBuilder  draw, bool  xy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {".ctor", {}, {::i2c::type_of<::Drawing::CommandBuilder>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, draw, xy);
}
inline void Drawing::CommandBuilder2D::Line(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b);
}
inline void Drawing::CommandBuilder2D::Line(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, color);
}
inline void Drawing::CommandBuilder2D::Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b);
}
inline void Drawing::CommandBuilder2D::Circle(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder2D::Circle(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder2D::SolidCircle(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder2D::SolidCircle(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder2D::WirePill(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WirePill", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, radius);
}
inline void Drawing::CommandBuilder2D::WirePill(::Unity::Mathematics::float2  position, ::Unity::Mathematics::float2  direction, float_t  length, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WirePill", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, direction, length, radius);
}
inline void Drawing::CommandBuilder2D::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::UnityEngine::Vector2>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::Unity::Mathematics::float2>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float2>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder2D::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder2D::Cross(::Unity::Mathematics::float2  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size);
}
inline void Drawing::CommandBuilder2D::WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size);
}
inline void Drawing::CommandBuilder2D::WireRectangle(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rect);
}
inline void Drawing::CommandBuilder2D::SolidRectangle(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rect);
}
inline void Drawing::CommandBuilder2D::WireGrid(::Unity::Mathematics::float2  center, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, cells, totalSize);
}
inline void Drawing::CommandBuilder2D::WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, cells, totalSize);
}
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix Drawing::CommandBuilder2D::WithMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeMatrix>(*this, ___internal_method, matrix);
}
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix Drawing::CommandBuilder2D::WithMatrix(::Unity::Mathematics::float3x3  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeMatrix>(*this, ___internal_method, matrix);
}
inline ::GlobalNamespace::CommandBuilder_ScopeColor Drawing::CommandBuilder2D::WithColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeColor>(*this, ___internal_method, color);
}
inline ::GlobalNamespace::CommandBuilder_ScopePersist Drawing::CommandBuilder2D::WithDuration(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopePersist>(*this, ___internal_method, duration);
}
inline ::GlobalNamespace::CommandBuilder_ScopeLineWidth Drawing::CommandBuilder2D::WithLineWidth(float_t  pixels, bool  automaticJoins)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WithLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeLineWidth>(*this, ___internal_method, pixels, automaticJoins);
}
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix Drawing::CommandBuilder2D::InLocalSpace(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"InLocalSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeMatrix>(*this, ___internal_method, transform);
}
inline ::GlobalNamespace::CommandBuilder_ScopeMatrix Drawing::CommandBuilder2D::InScreenSpace(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"InScreenSpace", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeMatrix>(*this, ___internal_method, camera);
}
inline void Drawing::CommandBuilder2D::PushMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline void Drawing::CommandBuilder2D::PushMatrix(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline void Drawing::CommandBuilder2D::PushSetMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline void Drawing::CommandBuilder2D::PushSetMatrix(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, matrix);
}
inline void Drawing::CommandBuilder2D::PopMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder2D::PushColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, color);
}
inline void Drawing::CommandBuilder2D::PopColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder2D::PushDuration(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, duration);
}
inline void Drawing::CommandBuilder2D::PopDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder2D::PushPersist(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushPersist", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, duration);
}
inline void Drawing::CommandBuilder2D::PopPersist()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopPersist", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder2D::PushLineWidth(float_t  pixels, bool  automaticJoins)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PushLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pixels, automaticJoins);
}
inline void Drawing::CommandBuilder2D::PopLineWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"PopLineWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Drawing::CommandBuilder2D::Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b);
}
inline void Drawing::CommandBuilder2D::Line(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b);
}
inline void Drawing::CommandBuilder2D::Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, color);
}
inline void Drawing::CommandBuilder2D::Line(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, color);
}
inline void Drawing::CommandBuilder2D::Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction);
}
inline void Drawing::CommandBuilder2D::Ray(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction);
}
inline void Drawing::CommandBuilder2D::Ray(::UnityEngine::Ray  ray, float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ray, length);
}
inline void Drawing::CommandBuilder2D::Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end);
}
inline void Drawing::CommandBuilder2D::Arc(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end);
}
inline void Drawing::CommandBuilder2D::CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder2D::CircleXY(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::CommandBuilder2D::SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end);
}
inline void Drawing::CommandBuilder2D::SolidArc(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end);
}
inline void Drawing::CommandBuilder2D::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder2D::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle);
}
inline void Drawing::CommandBuilder2D::DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, dash, gap);
}
inline void Drawing::CommandBuilder2D::DashedLine(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  dash, float_t  gap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, dash, gap);
}
inline void Drawing::CommandBuilder2D::DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, dash, gap);
}
inline void Drawing::CommandBuilder2D::Cross(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size);
}
inline void Drawing::CommandBuilder2D::Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3);
}
inline void Drawing::CommandBuilder2D::Bezier(::Unity::Mathematics::float2  p0, ::Unity::Mathematics::float2  p1, ::Unity::Mathematics::float2  p2, ::Unity::Mathematics::float2  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3);
}
inline void Drawing::CommandBuilder2D::CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points);
}
inline void Drawing::CommandBuilder2D::CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3);
}
inline void Drawing::CommandBuilder2D::CatmullRom(::Unity::Mathematics::float2  p0, ::Unity::Mathematics::float2  p1, ::Unity::Mathematics::float2  p2, ::Unity::Mathematics::float2  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3);
}
inline void Drawing::CommandBuilder2D::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to);
}
inline void Drawing::CommandBuilder2D::Arrow(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to);
}
inline void Drawing::CommandBuilder2D::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headSize);
}
inline void Drawing::CommandBuilder2D::Arrow(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::Unity::Mathematics::float2  up, float_t  headSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headSize);
}
inline void Drawing::CommandBuilder2D::ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headFraction);
}
inline void Drawing::CommandBuilder2D::ArrowRelativeSizeHead(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::Unity::Mathematics::float2  up, float_t  headFraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headFraction);
}
inline void Drawing::CommandBuilder2D::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, radius);
}
inline void Drawing::CommandBuilder2D::Arrowhead(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  direction, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, radius);
}
inline void Drawing::CommandBuilder2D::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, up, radius);
}
inline void Drawing::CommandBuilder2D::Arrowhead(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  direction, ::Unity::Mathematics::float2  up, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, up, radius);
}
inline void Drawing::CommandBuilder2D::ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, offset, width);
}
inline void Drawing::CommandBuilder2D::ArrowheadArc(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction, float_t  offset, float_t  width)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, offset, width);
}
inline void Drawing::CommandBuilder2D::WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c);
}
inline void Drawing::CommandBuilder2D::WireTriangle(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c);
}
inline void Drawing::CommandBuilder2D::WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size);
}
inline void Drawing::CommandBuilder2D::WireRectangle(::Unity::Mathematics::float2  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size);
}
inline void Drawing::CommandBuilder2D::WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius);
}
inline void Drawing::CommandBuilder2D::WireTriangle(::Unity::Mathematics::float2  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius);
}
inline void Drawing::CommandBuilder2D::SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c);
}
inline void Drawing::CommandBuilder2D::SolidTriangle(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::StringW  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::CommandBuilder2D::Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, color);
}
inline void Drawing::CommandBuilder2D::Ray(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, color);
}
inline void Drawing::CommandBuilder2D::Ray(::UnityEngine::Ray  ray, float_t  length, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ray, length, color);
}
inline void Drawing::CommandBuilder2D::Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end, color);
}
inline void Drawing::CommandBuilder2D::Arc(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end, color);
}
inline void Drawing::CommandBuilder2D::CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder2D::CircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder2D::CircleXY(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder2D::CircleXY(::Unity::Mathematics::float2  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder2D::SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end, color);
}
inline void Drawing::CommandBuilder2D::SolidArc(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  start, ::Unity::Mathematics::float2  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, start, end, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder2D::DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, dash, gap, color);
}
inline void Drawing::CommandBuilder2D::DashedLine(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  dash, float_t  gap, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, dash, gap, color);
}
inline void Drawing::CommandBuilder2D::DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, dash, gap, color);
}
inline void Drawing::CommandBuilder2D::Cross(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size, color);
}
inline void Drawing::CommandBuilder2D::Cross(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, color);
}
inline void Drawing::CommandBuilder2D::Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3, color);
}
inline void Drawing::CommandBuilder2D::Bezier(::Unity::Mathematics::float2  p0, ::Unity::Mathematics::float2  p1, ::Unity::Mathematics::float2  p2, ::Unity::Mathematics::float2  p3, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3, color);
}
inline void Drawing::CommandBuilder2D::CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder2D::CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3, color);
}
inline void Drawing::CommandBuilder2D::CatmullRom(::Unity::Mathematics::float2  p0, ::Unity::Mathematics::float2  p1, ::Unity::Mathematics::float2  p2, ::Unity::Mathematics::float2  p3, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p0, p1, p2, p3, color);
}
inline void Drawing::CommandBuilder2D::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, color);
}
inline void Drawing::CommandBuilder2D::Arrow(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, color);
}
inline void Drawing::CommandBuilder2D::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headSize, color);
}
inline void Drawing::CommandBuilder2D::Arrow(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::Unity::Mathematics::float2  up, float_t  headSize, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headSize, color);
}
inline void Drawing::CommandBuilder2D::ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headFraction, color);
}
inline void Drawing::CommandBuilder2D::ArrowRelativeSizeHead(::Unity::Mathematics::float2  from, ::Unity::Mathematics::float2  to, ::Unity::Mathematics::float2  up, float_t  headFraction, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, from, to, up, headFraction, color);
}
inline void Drawing::CommandBuilder2D::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, radius, color);
}
inline void Drawing::CommandBuilder2D::Arrowhead(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  direction, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, radius, color);
}
inline void Drawing::CommandBuilder2D::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, up, radius, color);
}
inline void Drawing::CommandBuilder2D::Arrowhead(::Unity::Mathematics::float2  center, ::Unity::Mathematics::float2  direction, ::Unity::Mathematics::float2  up, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, direction, up, radius, color);
}
inline void Drawing::CommandBuilder2D::ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, offset, width, color);
}
inline void Drawing::CommandBuilder2D::ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, offset, color);
}
inline void Drawing::CommandBuilder2D::ArrowheadArc(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction, float_t  offset, float_t  width, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, offset, width, color);
}
inline void Drawing::CommandBuilder2D::ArrowheadArc(::Unity::Mathematics::float2  origin, ::Unity::Mathematics::float2  direction, float_t  offset, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, origin, direction, offset, color);
}
inline void Drawing::CommandBuilder2D::WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c, color);
}
inline void Drawing::CommandBuilder2D::WireTriangle(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c, color);
}
inline void Drawing::CommandBuilder2D::WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size, color);
}
inline void Drawing::CommandBuilder2D::WireRectangle(::Unity::Mathematics::float2  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, size, color);
}
inline void Drawing::CommandBuilder2D::WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius, color);
}
inline void Drawing::CommandBuilder2D::WireTriangle(::Unity::Mathematics::float2  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, rotation, radius, color);
}
inline void Drawing::CommandBuilder2D::SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c, color);
}
inline void Drawing::CommandBuilder2D::SolidTriangle(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, ::Unity::Mathematics::float2  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::StringW  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::StringW  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Label2D(::Unity::Mathematics::float2  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::CommandBuilder2D::Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, color);
}
inline void Drawing::CommandBuilder2D::Circle(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder2D::Circle(::Unity::Mathematics::float2  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder2D::Circle(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder2D::Circle(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder2D::SolidCircle(::Unity::Mathematics::float2  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder2D::SolidCircle(::Unity::Mathematics::float2  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder2D::SolidCircle(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::CommandBuilder2D::SolidCircle(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, radius, color);
}
inline void Drawing::CommandBuilder2D::WirePill(::Unity::Mathematics::float2  a, ::Unity::Mathematics::float2  b, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WirePill", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, radius, color);
}
inline void Drawing::CommandBuilder2D::WirePill(::Unity::Mathematics::float2  position, ::Unity::Mathematics::float2  direction, float_t  length, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WirePill", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, direction, length, radius, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::UnityEngine::Vector2>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::UnityEngine::Vector2>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::Unity::Mathematics::float2>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float2>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::ArrayW<::Unity::Mathematics::float2>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float2>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, cycle, color);
}
inline void Drawing::CommandBuilder2D::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, points, color);
}
inline void Drawing::CommandBuilder2D::Cross(::Unity::Mathematics::float2  position, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, size, color);
}
inline void Drawing::CommandBuilder2D::Cross(::Unity::Mathematics::float2  position, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, color);
}
inline void Drawing::CommandBuilder2D::WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, size, color);
}
inline void Drawing::CommandBuilder2D::WireRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rect, color);
}
inline void Drawing::CommandBuilder2D::SolidRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rect, color);
}
inline void Drawing::CommandBuilder2D::WireGrid(::Unity::Mathematics::float2  center, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, cells, totalSize, color);
}
inline void Drawing::CommandBuilder2D::WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::CommandBuilder2D>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, center, cells, totalSize, color);
}
// Ctor Parameters [CppParam { name: "draw", ty: "::Drawing::CommandBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xy", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::CommandBuilder2D::CommandBuilder2D(::Drawing::CommandBuilder  draw, bool  xy) noexcept  {
this->draw = draw;
this->xy = xy;
}
// Ctor Parameters []
constexpr ::Drawing::CommandBuilder2D::CommandBuilder2D()   {
}
