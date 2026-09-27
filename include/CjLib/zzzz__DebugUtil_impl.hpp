#pragma once
// IWYU pragma private; include "CjLib/DebugUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "CjLib/zzzz__DebugUtil_def.hpp"
#include "CjLib/zzzz__DebugUtil_Style_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::CjLib::DebugUtil.GetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::GlobalNamespace::DebugUtil_Style, bool, bool)>(&::CjLib::DebugUtil::GetMaterial)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5de2fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"GetMaterial", {}, {::i2c::type_of<::GlobalNamespace::DebugUtil_Style>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.GetMaterialPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (*)()>(&::CjLib::DebugUtil::GetMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5de32ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"GetMaterialPropertyBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, bool)>(&::CjLib::DebugUtil::DrawLine)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5de27c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Color, bool)>(&::CjLib::DebugUtil::DrawLines)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5de3544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLines", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawLineStrip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Color, bool)>(&::CjLib::DebugUtil::DrawLineStrip)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5de3920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLineStrip", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, int32_t, ::UnityEngine::Color, bool)>(&::CjLib::DebugUtil::DrawArc)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5de1468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawArc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawLocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, float_t)>(&::CjLib::DebugUtil::DrawLocator)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5de3cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLocator", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawLocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::CjLib::DebugUtil::DrawLocator)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5de3ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLocator", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawLocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, float_t)>(&::CjLib::DebugUtil::DrawLocator)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5de3ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLocator", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawLocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t)>(&::CjLib::DebugUtil::DrawLocator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5de4230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLocator", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawBox)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5de4300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector2, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawRect)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5de5874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawRect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawRect2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector2, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawRect2D)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5de62ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawRect2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCircle)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5de64d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCircle)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5de2400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCircle2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCircle2D)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5de7820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCircle2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCylinder)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5de7938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCylinder)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5de9928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, int32_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawSphere)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5de2c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, int32_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawSphere)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5dec27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawSphereTripleCircles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawSphereTripleCircles)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5dec3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawSphereTripleCircles", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawSphereTripleCircles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawSphereTripleCircles)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5dec5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawSphereTripleCircles", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, int32_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCapsule)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5dec710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCapsule)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5def860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCapsule2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, float_t, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCapsule2D)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5defcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCapsule2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCone)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5df0fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawCone)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5df2a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawArrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, int32_t, float_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawArrow)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x5de1920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil.DrawArrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Color, bool, ::GlobalNamespace::DebugUtil_Style)>(&::CjLib::DebugUtil::DrawArrow)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5df2ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::DebugUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::DebugUtil::*)()>(&::CjLib::DebugUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df2eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void CjLib::DebugUtil::setStaticF_s_wireframeZBias(float_t  value)  {
::cordl_internals::setStaticField<float_t, "s_wireframeZBias", ::CjLib::DebugUtil*>(std::forward<float_t>(value));
}
inline float_t CjLib::DebugUtil::getStaticF_s_wireframeZBias()  {
return ::cordl_internals::getStaticField<float_t, "s_wireframeZBias", ::CjLib::DebugUtil*>();
}
inline void CjLib::DebugUtil::setStaticF_s_materialPool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Material>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Material>>*, "s_materialPool", ::CjLib::DebugUtil*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Material>>* CjLib::DebugUtil::getStaticF_s_materialPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Material>>*, "s_materialPool", ::CjLib::DebugUtil*>();
}
inline void CjLib::DebugUtil::setStaticF_s_materialProperties(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "s_materialProperties", ::CjLib::DebugUtil*>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* CjLib::DebugUtil::getStaticF_s_materialProperties()  {
return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "s_materialProperties", ::CjLib::DebugUtil*>();
}
inline ::UnityW<::UnityEngine::Material> CjLib::DebugUtil::GetMaterial(::GlobalNamespace::DebugUtil_Style  style, bool  depthTest, bool  capShiftScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"GetMaterial", {}, {::i2c::type_of<::GlobalNamespace::DebugUtil_Style>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, style, depthTest, capShiftScale);
}
inline ::UnityEngine::MaterialPropertyBlock* CjLib::DebugUtil::GetMaterialPropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"GetMaterialPropertyBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(nullptr, ___internal_method);
}
inline void CjLib::DebugUtil::DrawLine(::UnityEngine::Vector3  v0, ::UnityEngine::Vector3  v1, ::UnityEngine::Color  color, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v0, v1, color, depthTest);
}
inline void CjLib::DebugUtil::DrawLines(::ArrayW<::UnityEngine::Vector3>  aVert, ::UnityEngine::Color  color, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLines", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aVert, color, depthTest);
}
inline void CjLib::DebugUtil::DrawLineStrip(::ArrayW<::UnityEngine::Vector3>  aVert, ::UnityEngine::Color  color, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLineStrip", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aVert, color, depthTest);
}
inline void CjLib::DebugUtil::DrawArc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  from, ::UnityEngine::Vector3  normal, float_t  angle, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawArc", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, from, normal, angle, radius, numSegments, color, depthTest);
}
inline void CjLib::DebugUtil::DrawLocator(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  right, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  forward, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  upColor, ::UnityEngine::Color  forwardColor, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLocator", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, right, up, forward, rightColor, upColor, forwardColor, size);
}
inline void CjLib::DebugUtil::DrawLocator(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  right, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  forward, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLocator", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, right, up, forward, size);
}
inline void CjLib::DebugUtil::DrawLocator(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Color  rightColor, ::UnityEngine::Color  upColor, ::UnityEngine::Color  forwardColor, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLocator", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, rightColor, upColor, forwardColor, size);
}
inline void CjLib::DebugUtil::DrawLocator(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawLocator", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, rotation, size);
}
inline void CjLib::DebugUtil::DrawBox(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  dimensions, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, dimensions, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawRect(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector2  dimensions, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawRect", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, dimensions, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawRect2D(::UnityEngine::Vector3  center, float_t  rotationDeg, ::UnityEngine::Vector2  dimensions, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawRect2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotationDeg, dimensions, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCircle(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius, numSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCircle(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  normal, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, normal, radius, numSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCircle2D(::UnityEngine::Vector3  center, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCircle2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, numSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCylinder(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, height, radius, numSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCylinder(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, point0, point1, radius, numSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawSphere(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius, int32_t  latSegments, int32_t  longSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius, latSegments, longSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawSphere(::UnityEngine::Vector3  center, float_t  radius, int32_t  latSegments, int32_t  longSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, latSegments, longSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawSphereTripleCircles(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawSphereTripleCircles", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius, numSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawSphereTripleCircles(::UnityEngine::Vector3  center, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawSphereTripleCircles", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, numSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCapsule(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, height, radius, latSegmentsPerCap, longSegmentsPerCap, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, point0, point1, radius, latSegmentsPerCap, longSegmentsPerCap, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCapsule2D(::UnityEngine::Vector3  center, float_t  rotationDeg, float_t  height, float_t  radius, int32_t  capSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCapsule2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotationDeg, height, radius, capSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCone(::UnityEngine::Vector3  baseCenter, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCenter, rotation, height, radius, numSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawCone(::UnityEngine::Vector3  baseCenter, ::UnityEngine::Vector3  top, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCenter, top, radius, numSegments, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawArrow(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  coneRadius, float_t  coneHeight, int32_t  numSegments, float_t  stemThickness, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, coneRadius, coneHeight, numSegments, stemThickness, color, depthTest, style);
}
inline void CjLib::DebugUtil::DrawArrow(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  size, ::UnityEngine::Color  color, bool  depthTest, ::GlobalNamespace::DebugUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::DebugUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, size, color, depthTest, style);
}
inline void CjLib::DebugUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::DebugUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::DebugUtil* CjLib::DebugUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::DebugUtil*>());
}
// Ctor Parameters []
constexpr ::CjLib::DebugUtil::DebugUtil()   {
}
