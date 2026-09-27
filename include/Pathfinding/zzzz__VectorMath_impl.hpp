#pragma once
// IWYU pragma private; include "Pathfinding/VectorMath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__VectorMath_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__Side_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::VectorMath.ComplexMultiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::VectorMath::ComplexMultiply)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e4d220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ComplexMultiply", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ComplexMultiplyConjugate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::VectorMath::ComplexMultiplyConjugate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e4d23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ComplexMultiplyConjugate", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ClosestPointOnLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::ClosestPointOnLine)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5e4d258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ClosestPointOnLineFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::ClosestPointOnLineFactor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e4d398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnLineFactor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ClosestPointOnLineFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::ClosestPointOnLineFactor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e4d404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnLineFactor", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ClosestPointOnLineFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Pathfinding::Int2, ::Pathfinding::Int2, ::Pathfinding::Int2)>(&::Pathfinding::VectorMath::ClosestPointOnLineFactor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e4d4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnLineFactor", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ClosestPointOnSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::ClosestPointOnSegment)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e4d53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ClosestPointOnSegmentXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::ClosestPointOnSegmentXZ)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5e4d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnSegmentXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SqrDistancePointSegmentApproximate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Pathfinding::VectorMath::SqrDistancePointSegmentApproximate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e4d754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistancePointSegmentApproximate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SqrDistancePointSegmentApproximate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::SqrDistancePointSegmentApproximate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e4d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistancePointSegmentApproximate", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SqrDistancePointSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::SqrDistancePointSegment)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e4d88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistancePointSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SqrDistanceSegmentSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::SqrDistanceSegmentSegment)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5e4d8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistanceSegmentSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SqrDistanceXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::SqrDistanceXZ)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e4dbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistanceXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SignedTriangleAreaTimes2XZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::SignedTriangleAreaTimes2XZ)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e4dbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SignedTriangleAreaTimes2XZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SignedTriangleAreaTimes2XZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::SignedTriangleAreaTimes2XZ)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e4dc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SignedTriangleAreaTimes2XZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.RightXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::RightXZ)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e4dc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.RightXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::RightXZ)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4dc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SideXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Side (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::SideXZ)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e4dc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SideXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.RightOrColinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::VectorMath::RightOrColinear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e4dcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightOrColinear", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.RightOrColinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int2, ::Pathfinding::Int2, ::Pathfinding::Int2)>(&::Pathfinding::VectorMath::RightOrColinear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e4dcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightOrColinear", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.RightOrColinearXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::RightOrColinearXZ)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e4dd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightOrColinearXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.RightOrColinearXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::RightOrColinearXZ)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4dd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightOrColinearXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsClockwiseMarginXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::IsClockwiseMarginXZ)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e4dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseMarginXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsClockwiseXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::IsClockwiseXZ)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e4dda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsClockwiseXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::IsClockwiseXZ)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4ddd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsClockwiseOrColinearXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::IsClockwiseOrColinearXZ)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4ddfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseOrColinearXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsClockwiseOrColinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int2, ::Pathfinding::Int2, ::Pathfinding::Int2)>(&::Pathfinding::VectorMath::IsClockwiseOrColinear)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e4de20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseOrColinear", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsColinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::IsColinear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e4de50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinear", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsColinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::VectorMath::IsColinear)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e4debc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinear", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsColinearXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::IsColinearXZ)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4def8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinearXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsColinearXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::IsColinearXZ)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e4df1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinearXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.IsColinearAlmostXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::IsColinearAlmostXZ)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e4df60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinearAlmostXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SegmentsIntersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int2, ::Pathfinding::Int2, ::Pathfinding::Int2, ::Pathfinding::Int2)>(&::Pathfinding::VectorMath::SegmentsIntersect)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e4df84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentsIntersect", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SegmentsIntersectXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::SegmentsIntersectXZ)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e4e02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentsIntersectXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SegmentsIntersectXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::SegmentsIntersectXZ)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e4e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentsIntersectXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineLineIntersectionFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::by_ref<float_t>)>(&::Pathfinding::VectorMath::LineLineIntersectionFactor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e4e138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineLineIntersectionFactor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineDirIntersectionPointXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::LineDirIntersectionPointXZ)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e4e188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineDirIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineDirIntersectionPointXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<bool>)>(&::Pathfinding::VectorMath::LineDirIntersectionPointXZ)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e4e1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineDirIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.RaySegmentIntersectXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::RaySegmentIntersectXZ)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e4e24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RaySegmentIntersectXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineIntersectionFactorXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Pathfinding::VectorMath::LineIntersectionFactorXZ)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e4e32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionFactorXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineIntersectionFactorXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Pathfinding::VectorMath::LineIntersectionFactorXZ)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e4e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionFactorXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineRayIntersectionFactorXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3, ::Pathfinding::Int3)>(&::Pathfinding::VectorMath::LineRayIntersectionFactorXZ)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e4e4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineRayIntersectionFactorXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineIntersectionFactorXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::LineIntersectionFactorXZ)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e4e578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionFactorXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineIntersectionPointXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::LineIntersectionPointXZ)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e4e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineIntersectionPointXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<bool>)>(&::Pathfinding::VectorMath::LineIntersectionPointXZ)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e4e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineIntersectionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::VectorMath::LineIntersectionPoint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e4e68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineIntersectionPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::by_ref<bool>)>(&::Pathfinding::VectorMath::LineIntersectionPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e4e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SegmentIntersectionPointXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<bool>)>(&::Pathfinding::VectorMath::SegmentIntersectionPointXZ)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e4e740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.SegmentIntersectsBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::SegmentIntersectsBounds)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5e4e7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentIntersectsBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.LineCircleIntersectionFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Pathfinding::VectorMath::LineCircleIntersectionFactor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e4ea54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineCircleIntersectionFactor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ReversesFaceOrientations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Matrix4x4)>(&::Pathfinding::VectorMath::ReversesFaceOrientations)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e4ec18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ReversesFaceOrientations", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ReversesFaceOrientationsXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Matrix4x4)>(&::Pathfinding::VectorMath::ReversesFaceOrientationsXZ)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e4ecdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ReversesFaceOrientationsXZ", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::by_ref<float_t>)>(&::Pathfinding::VectorMath::Normalize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e4eb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.Normalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::by_ref<float_t>)>(&::Pathfinding::VectorMath::Normalize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e4ed3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.ClampMagnitudeXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, float_t)>(&::Pathfinding::VectorMath::ClampMagnitudeXZ)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e4ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClampMagnitudeXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::VectorMath.MagnitudeXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3)>(&::Pathfinding::VectorMath::MagnitudeXZ)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e4ee34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"MagnitudeXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 Pathfinding::VectorMath::ComplexMultiply(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ComplexMultiply", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 Pathfinding::VectorMath::ComplexMultiplyConjugate(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ComplexMultiplyConjugate", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::ClosestPointOnLine(::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lineStart, lineEnd, point);
}
inline float_t Pathfinding::VectorMath::ClosestPointOnLineFactor(::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnLineFactor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lineStart, lineEnd, point);
}
inline float_t Pathfinding::VectorMath::ClosestPointOnLineFactor(::Pathfinding::Int3  lineStart, ::Pathfinding::Int3  lineEnd, ::Pathfinding::Int3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnLineFactor", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lineStart, lineEnd, point);
}
inline float_t Pathfinding::VectorMath::ClosestPointOnLineFactor(::Pathfinding::Int2  lineStart, ::Pathfinding::Int2  lineEnd, ::Pathfinding::Int2  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnLineFactor", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lineStart, lineEnd, point);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::ClosestPointOnSegment(::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lineStart, lineEnd, point);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::ClosestPointOnSegmentXZ(::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClosestPointOnSegmentXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lineStart, lineEnd, point);
}
inline float_t Pathfinding::VectorMath::SqrDistancePointSegmentApproximate(int32_t  x, int32_t  z, int32_t  px, int32_t  pz, int32_t  qx, int32_t  qz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistancePointSegmentApproximate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, z, px, pz, qx, qz);
}
inline float_t Pathfinding::VectorMath::SqrDistancePointSegmentApproximate(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistancePointSegmentApproximate", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, p);
}
inline float_t Pathfinding::VectorMath::SqrDistancePointSegment(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistancePointSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, p);
}
inline float_t Pathfinding::VectorMath::SqrDistanceSegmentSegment(::UnityEngine::Vector3  s1, ::UnityEngine::Vector3  e1, ::UnityEngine::Vector3  s2, ::UnityEngine::Vector3  e2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistanceSegmentSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, s1, e1, s2, e2);
}
inline float_t Pathfinding::VectorMath::SqrDistanceXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SqrDistanceXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline int64_t Pathfinding::VectorMath::SignedTriangleAreaTimes2XZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SignedTriangleAreaTimes2XZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, a, b, c);
}
inline float_t Pathfinding::VectorMath::SignedTriangleAreaTimes2XZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SignedTriangleAreaTimes2XZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::RightXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, p);
}
inline bool Pathfinding::VectorMath::RightXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, p);
}
inline ::Pathfinding::Side Pathfinding::VectorMath::SideXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SideXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Side>(nullptr, ___internal_method, a, b, p);
}
inline bool Pathfinding::VectorMath::RightOrColinear(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightOrColinear", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, p);
}
inline bool Pathfinding::VectorMath::RightOrColinear(::Pathfinding::Int2  a, ::Pathfinding::Int2  b, ::Pathfinding::Int2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightOrColinear", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, p);
}
inline bool Pathfinding::VectorMath::RightOrColinearXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightOrColinearXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, p);
}
inline bool Pathfinding::VectorMath::RightOrColinearXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RightOrColinearXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, p);
}
inline bool Pathfinding::VectorMath::IsClockwiseMarginXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseMarginXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::IsClockwiseXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::IsClockwiseXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::IsClockwiseOrColinearXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseOrColinearXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::IsClockwiseOrColinear(::Pathfinding::Int2  a, ::Pathfinding::Int2  b, ::Pathfinding::Int2  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsClockwiseOrColinear", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::IsColinear(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinear", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::IsColinear(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Vector2  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinear", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::IsColinearXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinearXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::IsColinearXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinearXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::IsColinearAlmostXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"IsColinearAlmostXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, c);
}
inline bool Pathfinding::VectorMath::SegmentsIntersect(::Pathfinding::Int2  start1, ::Pathfinding::Int2  end1, ::Pathfinding::Int2  start2, ::Pathfinding::Int2  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentsIntersect", {}, {::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>(), ::i2c::type_of<::Pathfinding::Int2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start1, end1, start2, end2);
}
inline bool Pathfinding::VectorMath::SegmentsIntersectXZ(::Pathfinding::Int3  start1, ::Pathfinding::Int3  end1, ::Pathfinding::Int3  start2, ::Pathfinding::Int3  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentsIntersectXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start1, end1, start2, end2);
}
inline bool Pathfinding::VectorMath::SegmentsIntersectXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentsIntersectXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start1, end1, start2, end2);
}
inline bool Pathfinding::VectorMath::LineLineIntersectionFactor(::UnityEngine::Vector2  start1, ::UnityEngine::Vector2  dir1, ::UnityEngine::Vector2  start2, ::UnityEngine::Vector2  dir2, ::by_ref<float_t>  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineLineIntersectionFactor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start1, dir1, start2, dir2, t);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::LineDirIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  dir1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  dir2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineDirIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, start1, dir1, start2, dir2);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::LineDirIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  dir1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  dir2, ::by_ref<bool>  intersects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineDirIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, start1, dir1, start2, dir2, intersects);
}
inline bool Pathfinding::VectorMath::RaySegmentIntersectXZ(::Pathfinding::Int3  start1, ::Pathfinding::Int3  end1, ::Pathfinding::Int3  start2, ::Pathfinding::Int3  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"RaySegmentIntersectXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start1, end1, start2, end2);
}
inline bool Pathfinding::VectorMath::LineIntersectionFactorXZ(::Pathfinding::Int3  start1, ::Pathfinding::Int3  end1, ::Pathfinding::Int3  start2, ::Pathfinding::Int3  end2, ::by_ref<float_t>  factor1, ::by_ref<float_t>  factor2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionFactorXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start1, end1, start2, end2, factor1, factor2);
}
inline bool Pathfinding::VectorMath::LineIntersectionFactorXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2, ::by_ref<float_t>  factor1, ::by_ref<float_t>  factor2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionFactorXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, start1, end1, start2, end2, factor1, factor2);
}
inline float_t Pathfinding::VectorMath::LineRayIntersectionFactorXZ(::Pathfinding::Int3  start1, ::Pathfinding::Int3  end1, ::Pathfinding::Int3  start2, ::Pathfinding::Int3  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineRayIntersectionFactorXZ", {}, {::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>(), ::i2c::type_of<::Pathfinding::Int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start1, end1, start2, end2);
}
inline float_t Pathfinding::VectorMath::LineIntersectionFactorXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionFactorXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, start1, end1, start2, end2);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::LineIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, start1, end1, start2, end2);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::LineIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2, ::by_ref<bool>  intersects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, start1, end1, start2, end2, intersects);
}
inline ::UnityEngine::Vector2 Pathfinding::VectorMath::LineIntersectionPoint(::UnityEngine::Vector2  start1, ::UnityEngine::Vector2  end1, ::UnityEngine::Vector2  start2, ::UnityEngine::Vector2  end2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, start1, end1, start2, end2);
}
inline ::UnityEngine::Vector2 Pathfinding::VectorMath::LineIntersectionPoint(::UnityEngine::Vector2  start1, ::UnityEngine::Vector2  end1, ::UnityEngine::Vector2  start2, ::UnityEngine::Vector2  end2, ::by_ref<bool>  intersects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineIntersectionPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, start1, end1, start2, end2, intersects);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::SegmentIntersectionPointXZ(::UnityEngine::Vector3  start1, ::UnityEngine::Vector3  end1, ::UnityEngine::Vector3  start2, ::UnityEngine::Vector3  end2, ::by_ref<bool>  intersects)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentIntersectionPointXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, start1, end1, start2, end2, intersects);
}
inline bool Pathfinding::VectorMath::SegmentIntersectsBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"SegmentIntersectsBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bounds, a, b);
}
inline float_t Pathfinding::VectorMath::LineCircleIntersectionFactor(::UnityEngine::Vector3  circleCenter, ::UnityEngine::Vector3  linePoint1, ::UnityEngine::Vector3  linePoint2, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"LineCircleIntersectionFactor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, circleCenter, linePoint1, linePoint2, radius);
}
inline bool Pathfinding::VectorMath::ReversesFaceOrientations(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ReversesFaceOrientations", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, matrix);
}
inline bool Pathfinding::VectorMath::ReversesFaceOrientationsXZ(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ReversesFaceOrientationsXZ", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, matrix);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::Normalize(::UnityEngine::Vector3  v, ::by_ref<float_t>  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, magnitude);
}
inline ::UnityEngine::Vector2 Pathfinding::VectorMath::Normalize(::UnityEngine::Vector2  v, ::by_ref<float_t>  magnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"Normalize", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, v, magnitude);
}
inline ::UnityEngine::Vector3 Pathfinding::VectorMath::ClampMagnitudeXZ(::UnityEngine::Vector3  v, float_t  maxMagnitude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"ClampMagnitudeXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, v, maxMagnitude);
}
inline float_t Pathfinding::VectorMath::MagnitudeXZ(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::VectorMath*>(),
                        {"MagnitudeXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::Pathfinding::VectorMath::VectorMath()   {
}
