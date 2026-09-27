#pragma once
// IWYU pragma private; include "Drawing/Draw.hpp"
#include "Drawing/zzzz__CommandBuilder_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Drawing/zzzz__Draw_def.hpp"
#include "Drawing/zzzz__CommandBuilder2D_def.hpp"
#include "Drawing/zzzz__CommandBuilder_ScopeEmpty_def.hpp"
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
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Drawing::Draw.get_ingame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Drawing::CommandBuilder> (*)()>(&::Drawing::Draw::get_ingame)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x55cabe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"get_ingame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.get_editor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Drawing::CommandBuilder> (*)()>(&::Drawing::Draw::get_editor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x55cade8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"get_editor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.get_xy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder2D (*)()>(&::Drawing::Draw::get_xy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55cae54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"get_xy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.get_xz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::CommandBuilder2D (*)()>(&::Drawing::Draw::get_xz)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55caf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"get_xz", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WithMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeEmpty (*)(::UnityEngine::Matrix4x4)>(&::Drawing::Draw::WithMatrix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cafac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WithMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeEmpty (*)(::Unity::Mathematics::float3x3)>(&::Drawing::Draw::WithMatrix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cafb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WithColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeEmpty (*)(::UnityEngine::Color)>(&::Drawing::Draw::WithColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cafbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WithDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeEmpty (*)(float_t)>(&::Drawing::Draw::WithDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cafc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WithLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeEmpty (*)(float_t, bool)>(&::Drawing::Draw::WithLineWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cafcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.InLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeEmpty (*)(::UnityEngine::Transform*)>(&::Drawing::Draw::InLocalSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cafd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"InLocalSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.InScreenSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CommandBuilder_ScopeEmpty (*)(::UnityEngine::Camera*)>(&::Drawing::Draw::InScreenSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55cafdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"InScreenSpace", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PushMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4)>(&::Drawing::Draw::PushMatrix)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cafe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PushMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float4x4)>(&::Drawing::Draw::PushMatrix)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cafe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PushSetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4)>(&::Drawing::Draw::PushSetMatrix)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cafec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PushSetMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float4x4)>(&::Drawing::Draw::PushSetMatrix)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55caff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PopMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::Draw::PopMatrix)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55caff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PushColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::Drawing::Draw::PushColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55caff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PopColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::Draw::PopColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55caffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PushDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Drawing::Draw::PushDuration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PopDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::Draw::PopDuration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PushPersist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::Drawing::Draw::PushPersist)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushPersist", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PopPersist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::Draw::PopPersist)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopPersist", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PushLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, bool)>(&::Drawing::Draw::PushLineWidth)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PopLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Drawing::Draw::PopLineWidth)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopLineWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::Line)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Drawing::Draw::Line)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::Drawing::Draw::Line)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::Ray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Ray, float_t)>(&::Drawing::Draw::Ray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::Arc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::Draw::CircleXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::Draw::CircleXY)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::Circle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::SolidArc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidCircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::Draw::SolidCircleXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidCircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, float_t, float_t)>(&::Drawing::Draw::SolidCircleXY)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::SolidCircle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SphereOutline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::SphereOutline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SphereOutline", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::WireCylinder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::Draw::WireCylinder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::WireCapsule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::Draw::WireCapsule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::WireSphere)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, bool)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Unity::Mathematics::float3>, bool)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, bool)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.DashedLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::Draw::DashedLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.DashedPolyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t, float_t)>(&::Drawing::Draw::DashedPolyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::WireBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(&::Drawing::Draw::WireBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds)>(&::Drawing::Draw::WireBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*)>(&::Drawing::Draw::WireMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeArray_1<int32_t>)>(&::Drawing::Draw::WireMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*)>(&::Drawing::Draw::SolidMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<::UnityEngine::Color>*)>(&::Drawing::Draw::SolidMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<int32_t>, ::ArrayW<::UnityEngine::Color>, int32_t, int32_t)>(&::Drawing::Draw::SolidMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::Cross)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CrossXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::CrossXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CrossXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::CrossXY)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Bezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::Bezier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Drawing::Draw::CatmullRom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::CatmullRom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::Arrow)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::Arrow)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.ArrowRelativeSizeHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::ArrowRelativeSizeHead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::Arrowhead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t)>(&::Drawing::Draw::Arrowhead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t)>(&::Drawing::Draw::ArrowheadArc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::int2, ::Unity::Mathematics::float2)>(&::Drawing::Draw::WireGrid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::WireTriangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireRectangleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float2)>(&::Drawing::Draw::WireRectangleXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::Draw::WireRectangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect)>(&::Drawing::Draw::WireRectangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::Draw::WireTriangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WirePentagon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::Draw::WirePentagon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePentagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireHexagon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::Draw::WireHexagon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireHexagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WirePolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, int32_t, ::Unity::Mathematics::quaternion, float_t)>(&::Drawing::Draw::WirePolygon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePolygon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect)>(&::Drawing::Draw::SolidRectangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2)>(&::Drawing::Draw::SolidPlane)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::Draw::SolidPlane)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WirePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2)>(&::Drawing::Draw::WirePlane)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WirePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::Draw::WirePlane)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PlaneWithNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2)>(&::Drawing::Draw::PlaneWithNormal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PlaneWithNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2)>(&::Drawing::Draw::PlaneWithNormal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::SolidTriangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::Drawing::Draw::SolidBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds)>(&::Drawing::Draw::SolidBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3)>(&::Drawing::Draw::SolidBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::StringW, float_t)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::StringW, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::StringW, float_t)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::StringW, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Line
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::Line)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::Ray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Ray, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Ray)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::Arc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::CircleXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::CircleXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::CircleXY)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::CircleXY)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Circle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Circle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::SolidArc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidCircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::SolidCircleXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidCircleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::SolidCircleXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidCircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::SolidCircleXY)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidCircleXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::SolidCircleXY)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::SolidCircle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SphereOutline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::SphereOutline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SphereOutline", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::WireCylinder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::WireCylinder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::WireCapsule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::WireCapsule)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::WireSphere)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool, ::UnityEngine::Color)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Color)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, bool, ::UnityEngine::Color)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Color)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Unity::Mathematics::float3>, bool, ::UnityEngine::Color)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::Unity::Mathematics::float3>, ::UnityEngine::Color)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, bool, ::UnityEngine::Color)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Polyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::UnityEngine::Color)>(&::Drawing::Draw::Polyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.DashedLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::DashedLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.DashedPolyline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::DashedPolyline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::WireBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::WireBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds, ::UnityEngine::Color)>(&::Drawing::Draw::WireBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Color)>(&::Drawing::Draw::WireMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeArray_1<int32_t>, ::UnityEngine::Color)>(&::Drawing::Draw::WireMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Color)>(&::Drawing::Draw::SolidMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Cross)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Cross
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::Cross)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CrossXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::CrossXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CrossXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::CrossXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CrossXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::CrossXY)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CrossXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::CrossXY)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Bezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::Bezier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Color)>(&::Drawing::Draw::CatmullRom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.CatmullRom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::CatmullRom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::Arrow)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Arrow)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.ArrowRelativeSizeHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::ArrowRelativeSizeHead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Arrowhead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Arrowhead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Arrowhead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::ArrowheadArc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.ArrowheadArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::ArrowheadArc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireGrid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::int2, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::Draw::WireGrid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::WireTriangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireRectangleXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::Draw::WireRectangleXZ)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::Draw::WireRectangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Color)>(&::Drawing::Draw::WireRectangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::WireTriangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WirePentagon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::WirePentagon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePentagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WireHexagon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::WireHexagon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireHexagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WirePolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, int32_t, ::Unity::Mathematics::quaternion, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::WirePolygon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePolygon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidRectangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Color)>(&::Drawing::Draw::SolidRectangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::Draw::SolidPlane)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::Draw::SolidPlane)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WirePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::Draw::WirePlane)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.WirePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::Draw::WirePlane)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PlaneWithNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::Draw::PlaneWithNormal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.PlaneWithNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float2, ::UnityEngine::Color)>(&::Drawing::Draw::PlaneWithNormal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::SolidTriangle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::SolidBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Bounds, ::UnityEngine::Color)>(&::Drawing::Draw::SolidBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.SolidBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::Unity::Mathematics::float3, ::UnityEngine::Color)>(&::Drawing::Draw::SolidBox)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::StringW, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::StringW, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::StringW, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::StringW, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::StringW, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label2D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString32Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString64Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString128Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::Draw.Label3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion, ::by_ref<::Unity::Collections::FixedString512Bytes>, float_t, ::Drawing::LabelAlignment, ::UnityEngine::Color)>(&::Drawing::Draw::Label3D)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55cb2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void Drawing::Draw::setStaticF_builder(::Drawing::CommandBuilder  value)  {
::cordl_internals::setStaticField<::Drawing::CommandBuilder, "builder", ::Drawing::Draw*>(std::forward<::Drawing::CommandBuilder>(value));
}
inline ::Drawing::CommandBuilder Drawing::Draw::getStaticF_builder()  {
return ::cordl_internals::getStaticField<::Drawing::CommandBuilder, "builder", ::Drawing::Draw*>();
}
inline void Drawing::Draw::setStaticF_ingame_builder(::Drawing::CommandBuilder  value)  {
::cordl_internals::setStaticField<::Drawing::CommandBuilder, "ingame_builder", ::Drawing::Draw*>(std::forward<::Drawing::CommandBuilder>(value));
}
inline ::Drawing::CommandBuilder Drawing::Draw::getStaticF_ingame_builder()  {
return ::cordl_internals::getStaticField<::Drawing::CommandBuilder, "ingame_builder", ::Drawing::Draw*>();
}
inline ::by_ref<::Drawing::CommandBuilder> Drawing::Draw::get_ingame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"get_ingame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Drawing::CommandBuilder>>(nullptr, ___internal_method);
}
inline ::by_ref<::Drawing::CommandBuilder> Drawing::Draw::get_editor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"get_editor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Drawing::CommandBuilder>>(nullptr, ___internal_method);
}
inline ::Drawing::CommandBuilder2D Drawing::Draw::get_xy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"get_xy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder2D>(nullptr, ___internal_method);
}
inline ::Drawing::CommandBuilder2D Drawing::Draw::get_xz()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"get_xz", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::CommandBuilder2D>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::CommandBuilder_ScopeEmpty Drawing::Draw::WithMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeEmpty>(nullptr, ___internal_method, matrix);
}
inline ::GlobalNamespace::CommandBuilder_ScopeEmpty Drawing::Draw::WithMatrix(::Unity::Mathematics::float3x3  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float3x3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeEmpty>(nullptr, ___internal_method, matrix);
}
inline ::GlobalNamespace::CommandBuilder_ScopeEmpty Drawing::Draw::WithColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeEmpty>(nullptr, ___internal_method, color);
}
inline ::GlobalNamespace::CommandBuilder_ScopeEmpty Drawing::Draw::WithDuration(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeEmpty>(nullptr, ___internal_method, duration);
}
inline ::GlobalNamespace::CommandBuilder_ScopeEmpty Drawing::Draw::WithLineWidth(float_t  pixels, bool  automaticJoins)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WithLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeEmpty>(nullptr, ___internal_method, pixels, automaticJoins);
}
inline ::GlobalNamespace::CommandBuilder_ScopeEmpty Drawing::Draw::InLocalSpace(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"InLocalSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeEmpty>(nullptr, ___internal_method, transform);
}
inline ::GlobalNamespace::CommandBuilder_ScopeEmpty Drawing::Draw::InScreenSpace(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"InScreenSpace", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CommandBuilder_ScopeEmpty>(nullptr, ___internal_method, camera);
}
inline void Drawing::Draw::PushMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, matrix);
}
inline void Drawing::Draw::PushMatrix(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, matrix);
}
inline void Drawing::Draw::PushSetMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, matrix);
}
inline void Drawing::Draw::PushSetMatrix(::Unity::Mathematics::float4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushSetMatrix", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, matrix);
}
inline void Drawing::Draw::PopMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Drawing::Draw::PushColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color);
}
inline void Drawing::Draw::PopColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Drawing::Draw::PushDuration(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, duration);
}
inline void Drawing::Draw::PopDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Drawing::Draw::PushPersist(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushPersist", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, duration);
}
inline void Drawing::Draw::PopPersist()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopPersist", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Drawing::Draw::PushLineWidth(float_t  pixels, bool  automaticJoins)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PushLineWidth", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pixels, automaticJoins);
}
inline void Drawing::Draw::PopLineWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PopLineWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Drawing::Draw::Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline void Drawing::Draw::Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline void Drawing::Draw::Line(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, color);
}
inline void Drawing::Draw::Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, direction);
}
inline void Drawing::Draw::Ray(::UnityEngine::Ray  ray, float_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ray, length);
}
inline void Drawing::Draw::Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, start, end);
}
inline void Drawing::Draw::CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::Draw::CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::Draw::Circle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, radius);
}
inline void Drawing::Draw::SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, start, end);
}
inline void Drawing::Draw::SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::Draw::SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, startAngle, endAngle);
}
inline void Drawing::Draw::SolidCircle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, radius);
}
inline void Drawing::Draw::SphereOutline(::Unity::Mathematics::float3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SphereOutline", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius);
}
inline void Drawing::Draw::WireCylinder(::Unity::Mathematics::float3  bottom, ::Unity::Mathematics::float3  top, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bottom, top, radius);
}
inline void Drawing::Draw::WireCylinder(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  up, float_t  height, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, up, height, radius);
}
inline void Drawing::Draw::WireCapsule(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, radius);
}
inline void Drawing::Draw::WireCapsule(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  direction, float_t  length, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction, length, radius);
}
inline void Drawing::Draw::WireSphere(::Unity::Mathematics::float3  position, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, radius);
}
inline void Drawing::Draw::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, cycle);
}
inline void Drawing::Draw::Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, cycle);
}
inline void Drawing::Draw::Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, cycle);
}
inline void Drawing::Draw::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, cycle);
}
inline void Drawing::Draw::DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, dash, gap);
}
inline void Drawing::Draw::DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, dash, gap);
}
inline void Drawing::Draw::WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size);
}
inline void Drawing::Draw::WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size);
}
inline void Drawing::Draw::WireBox(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bounds);
}
inline void Drawing::Draw::WireMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
inline void Drawing::Draw::WireMesh(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  vertices, ::Unity::Collections::NativeArray_1<int32_t>  triangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, triangles);
}
inline void Drawing::Draw::SolidMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh);
}
inline void Drawing::Draw::SolidMesh(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidMesh", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Color>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, triangles, colors);
}
inline void Drawing::Draw::SolidMesh(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::ArrayW<::UnityEngine::Color>  colors, int32_t  vertexCount, int32_t  indexCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidMesh", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Color>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, triangles, colors, vertexCount, indexCount);
}
inline void Drawing::Draw::Cross(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, size);
}
inline void Drawing::Draw::CrossXZ(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, size);
}
inline void Drawing::Draw::CrossXY(::Unity::Mathematics::float3  position, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, size);
}
inline void Drawing::Draw::Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, p3);
}
inline void Drawing::Draw::CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points);
}
inline void Drawing::Draw::CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, p3);
}
inline void Drawing::Draw::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline void Drawing::Draw::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, up, headSize);
}
inline void Drawing::Draw::ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, up, headFraction);
}
inline void Drawing::Draw::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, direction, radius);
}
inline void Drawing::Draw::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, direction, up, radius);
}
inline void Drawing::Draw::ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, direction, offset, width);
}
inline void Drawing::Draw::WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, cells, totalSize);
}
inline void Drawing::Draw::WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, c);
}
inline void Drawing::Draw::WireRectangleXZ(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size);
}
inline void Drawing::Draw::WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size);
}
inline void Drawing::Draw::WireRectangle(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect);
}
inline void Drawing::Draw::WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius);
}
inline void Drawing::Draw::WirePentagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePentagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius);
}
inline void Drawing::Draw::WireHexagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireHexagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius);
}
inline void Drawing::Draw::WirePolygon(::Unity::Mathematics::float3  center, int32_t  vertices, ::Unity::Mathematics::quaternion  rotation, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePolygon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, vertices, rotation, radius);
}
inline void Drawing::Draw::SolidRectangle(::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect);
}
inline void Drawing::Draw::SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, size);
}
inline void Drawing::Draw::SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size);
}
inline void Drawing::Draw::WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, size);
}
inline void Drawing::Draw::WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size);
}
inline void Drawing::Draw::PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, size);
}
inline void Drawing::Draw::PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size);
}
inline void Drawing::Draw::SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, c);
}
inline void Drawing::Draw::SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size);
}
inline void Drawing::Draw::SolidBox(::UnityEngine::Bounds  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bounds);
}
inline void Drawing::Draw::SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment);
}
inline void Drawing::Draw::Line(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Line", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, color);
}
inline void Drawing::Draw::Ray(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Ray", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, direction, color);
}
inline void Drawing::Draw::Ray(::UnityEngine::Ray  ray, float_t  length, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Ray", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ray, length, color);
}
inline void Drawing::Draw::Arc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, start, end, color);
}
inline void Drawing::Draw::CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::Draw::CircleXZ(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, color);
}
inline void Drawing::Draw::CircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::Draw::CircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, color);
}
inline void Drawing::Draw::Circle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Circle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, radius, color);
}
inline void Drawing::Draw::SolidArc(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, start, end, color);
}
inline void Drawing::Draw::SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::Draw::SolidCircleXZ(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, color);
}
inline void Drawing::Draw::SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, startAngle, endAngle, color);
}
inline void Drawing::Draw::SolidCircleXY(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircleXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, color);
}
inline void Drawing::Draw::SolidCircle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidCircle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, radius, color);
}
inline void Drawing::Draw::SphereOutline(::Unity::Mathematics::float3  center, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SphereOutline", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, color);
}
inline void Drawing::Draw::WireCylinder(::Unity::Mathematics::float3  bottom, ::Unity::Mathematics::float3  top, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bottom, top, radius, color);
}
inline void Drawing::Draw::WireCylinder(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  up, float_t  height, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCylinder", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, up, height, radius, color);
}
inline void Drawing::Draw::WireCapsule(::Unity::Mathematics::float3  start, ::Unity::Mathematics::float3  end, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, end, radius, color);
}
inline void Drawing::Draw::WireCapsule(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  direction, float_t  length, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireCapsule", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, direction, length, radius, color);
}
inline void Drawing::Draw::WireSphere(::Unity::Mathematics::float3  position, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireSphere", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, radius, color);
}
inline void Drawing::Draw::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, cycle, color);
}
inline void Drawing::Draw::Polyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, color);
}
inline void Drawing::Draw::Polyline(::ArrayW<::UnityEngine::Vector3>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, cycle, color);
}
inline void Drawing::Draw::Polyline(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, color);
}
inline void Drawing::Draw::Polyline(::ArrayW<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, cycle, color);
}
inline void Drawing::Draw::Polyline(::ArrayW<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, color);
}
inline void Drawing::Draw::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, bool  cycle, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, cycle, color);
}
inline void Drawing::Draw::Polyline(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Polyline", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, color);
}
inline void Drawing::Draw::DashedLine(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, float_t  dash, float_t  gap, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"DashedLine", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, dash, gap, color);
}
inline void Drawing::Draw::DashedPolyline(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, float_t  dash, float_t  gap, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"DashedPolyline", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, dash, gap, color);
}
inline void Drawing::Draw::WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size, color);
}
inline void Drawing::Draw::WireBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size, color);
}
inline void Drawing::Draw::WireBox(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireBox", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bounds, color);
}
inline void Drawing::Draw::WireMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, color);
}
inline void Drawing::Draw::WireMesh(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  vertices, ::Unity::Collections::NativeArray_1<int32_t>  triangles, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireMesh", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertices, triangles, color);
}
inline void Drawing::Draw::SolidMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, color);
}
inline void Drawing::Draw::Cross(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, size, color);
}
inline void Drawing::Draw::Cross(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Cross", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color);
}
inline void Drawing::Draw::CrossXZ(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, size, color);
}
inline void Drawing::Draw::CrossXZ(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color);
}
inline void Drawing::Draw::CrossXY(::Unity::Mathematics::float3  position, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, size, color);
}
inline void Drawing::Draw::CrossXY(::Unity::Mathematics::float3  position, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CrossXY", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, color);
}
inline void Drawing::Draw::Bezier(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Bezier", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, p3, color);
}
inline void Drawing::Draw::CatmullRom(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CatmullRom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, color);
}
inline void Drawing::Draw::CatmullRom(::Unity::Mathematics::float3  p0, ::Unity::Mathematics::float3  p1, ::Unity::Mathematics::float3  p2, ::Unity::Mathematics::float3  p3, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"CatmullRom", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2, p3, color);
}
inline void Drawing::Draw::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, color);
}
inline void Drawing::Draw::Arrow(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headSize, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrow", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, up, headSize, color);
}
inline void Drawing::Draw::ArrowRelativeSizeHead(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  up, float_t  headFraction, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowRelativeSizeHead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, up, headFraction, color);
}
inline void Drawing::Draw::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, direction, radius, color);
}
inline void Drawing::Draw::Arrowhead(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  direction, ::Unity::Mathematics::float3  up, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Arrowhead", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, direction, up, radius, color);
}
inline void Drawing::Draw::ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, float_t  width, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, direction, offset, width, color);
}
inline void Drawing::Draw::ArrowheadArc(::Unity::Mathematics::float3  origin, ::Unity::Mathematics::float3  direction, float_t  offset, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"ArrowheadArc", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, direction, offset, color);
}
inline void Drawing::Draw::WireGrid(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::int2  cells, ::Unity::Mathematics::float2  totalSize, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireGrid", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::int2>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, cells, totalSize, color);
}
inline void Drawing::Draw::WireTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, c, color);
}
inline void Drawing::Draw::WireRectangleXZ(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangleXZ", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size, color);
}
inline void Drawing::Draw::WireRectangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size, color);
}
inline void Drawing::Draw::WireRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect, color);
}
inline void Drawing::Draw::WireTriangle(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius, color);
}
inline void Drawing::Draw::WirePentagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePentagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius, color);
}
inline void Drawing::Draw::WireHexagon(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WireHexagon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius, color);
}
inline void Drawing::Draw::WirePolygon(::Unity::Mathematics::float3  center, int32_t  vertices, ::Unity::Mathematics::quaternion  rotation, float_t  radius, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePolygon", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, vertices, rotation, radius, color);
}
inline void Drawing::Draw::SolidRectangle(::UnityEngine::Rect  rect, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidRectangle", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect, color);
}
inline void Drawing::Draw::SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, size, color);
}
inline void Drawing::Draw::SolidPlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size, color);
}
inline void Drawing::Draw::WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, size, color);
}
inline void Drawing::Draw::WirePlane(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"WirePlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size, color);
}
inline void Drawing::Draw::PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, size, color);
}
inline void Drawing::Draw::PlaneWithNormal(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"PlaneWithNormal", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size, color);
}
inline void Drawing::Draw::SolidTriangle(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b, ::Unity::Mathematics::float3  c, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidTriangle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, c, color);
}
inline void Drawing::Draw::SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, size, color);
}
inline void Drawing::Draw::SolidBox(::UnityEngine::Bounds  bounds, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bounds, color);
}
inline void Drawing::Draw::SolidBox(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float3  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"SolidBox", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, size, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::StringW  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::StringW  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::Draw::Label2D(::Unity::Mathematics::float3  position, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  sizeInPixels, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label2D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text, sizeInPixels, alignment, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString32Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString32Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString64Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString64Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString128Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString128Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment, color);
}
inline void Drawing::Draw::Label3D(::Unity::Mathematics::float3  position, ::Unity::Mathematics::quaternion  rotation, ::by_ref<::Unity::Collections::FixedString512Bytes>  text, float_t  size, ::Drawing::LabelAlignment  alignment, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::Draw*>(),
                        {"Label3D", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedString512Bytes>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Drawing::LabelAlignment>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, text, size, alignment, color);
}
// Ctor Parameters []
constexpr ::Drawing::Draw::Draw()   {
}
