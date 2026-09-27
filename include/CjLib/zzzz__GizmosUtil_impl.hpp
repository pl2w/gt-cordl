#pragma once
// IWYU pragma private; include "CjLib/GizmosUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "CjLib/zzzz__GizmosUtil_def.hpp"
#include "CjLib/zzzz__GizmosUtil_Style_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&::CjLib::GizmosUtil::DrawLine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5df2f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Color)>(&::CjLib::GizmosUtil::DrawLines)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5df2fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawLines", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawLineStrip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Color)>(&::CjLib::GizmosUtil::DrawLineStrip)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5df3048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawLineStrip", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawBox)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5df30c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, int32_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawCylinder)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5df32e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawCylinder)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5df353c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, int32_t, int32_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawSphere)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5df3954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, int32_t, int32_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawSphere)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5df3b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, int32_t, int32_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawCapsule)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x5df3c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, int32_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawCapsule)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5df417c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, float_t, int32_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawCone)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5df45a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawCone)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5df47f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawArrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, int32_t, float_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawArrow)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x5df4b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil.DrawArrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Color, ::GlobalNamespace::GizmosUtil_Style)>(&::CjLib::GizmosUtil::DrawArrow)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5df4ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CjLib::GizmosUtil._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CjLib::GizmosUtil::*)()>(&::CjLib::GizmosUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df502c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void CjLib::GizmosUtil::DrawLine(::UnityEngine::Vector3  v0, ::UnityEngine::Vector3  v1, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, v0, v1, color);
}
inline void CjLib::GizmosUtil::DrawLines(::ArrayW<::UnityEngine::Vector3>  aVert, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawLines", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aVert, color);
}
inline void CjLib::GizmosUtil::DrawLineStrip(::ArrayW<::UnityEngine::Vector3>  aVert, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawLineStrip", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, aVert, color);
}
inline void CjLib::GizmosUtil::DrawBox(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  dimensions, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawBox", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, dimensions, color, style);
}
inline void CjLib::GizmosUtil::DrawCylinder(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, height, radius, numSegments, color, style);
}
inline void CjLib::GizmosUtil::DrawCylinder(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCylinder", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, point0, point1, radius, numSegments, color, style);
}
inline void CjLib::GizmosUtil::DrawSphere(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius, int32_t  latSegments, int32_t  longSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, radius, latSegments, longSegments, color, style);
}
inline void CjLib::GizmosUtil::DrawSphere(::UnityEngine::Vector3  center, float_t  radius, int32_t  latSegments, int32_t  longSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, latSegments, longSegments, color, style);
}
inline void CjLib::GizmosUtil::DrawCapsule(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, rotation, height, radius, latSegmentsPerCap, longSegmentsPerCap, color, style);
}
inline void CjLib::GizmosUtil::DrawCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  latSegmentsPerCap, int32_t  longSegmentsPerCap, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCapsule", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, point0, point1, radius, latSegmentsPerCap, longSegmentsPerCap, color, style);
}
inline void CjLib::GizmosUtil::DrawCone(::UnityEngine::Vector3  baseCenter, ::UnityEngine::Quaternion  rotation, float_t  height, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCenter, rotation, height, radius, numSegments, color, style);
}
inline void CjLib::GizmosUtil::DrawCone(::UnityEngine::Vector3  baseCenter, ::UnityEngine::Vector3  top, float_t  radius, int32_t  numSegments, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawCone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCenter, top, radius, numSegments, color, style);
}
inline void CjLib::GizmosUtil::DrawArrow(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  coneRadius, float_t  coneHeight, int32_t  numSegments, float_t  stemThickness, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, coneRadius, coneHeight, numSegments, stemThickness, color, style);
}
inline void CjLib::GizmosUtil::DrawArrow(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  size, ::UnityEngine::Color  color, ::GlobalNamespace::GizmosUtil_Style  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {"DrawArrow", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::GizmosUtil_Style>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, size, color, style);
}
inline void CjLib::GizmosUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CjLib::GizmosUtil*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CjLib::GizmosUtil* CjLib::GizmosUtil::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CjLib::GizmosUtil*>());
}
// Ctor Parameters []
constexpr ::CjLib::GizmosUtil::GizmosUtil()   {
}
