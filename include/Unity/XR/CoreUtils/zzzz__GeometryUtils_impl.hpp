#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/GeometryUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__GeometryUtils_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.FindClosestEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::XR::CoreUtils::GeometryUtils::FindClosestEdge)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb3f3920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"FindClosestEdge", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PointOnOppositeSideOfPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::GeometryUtils::PointOnOppositeSideOfPolygon)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0xb3f3d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointOnOppositeSideOfPolygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.TriangulatePolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<int32_t>*, int32_t, bool)>(&::Unity::XR::CoreUtils::GeometryUtils::TriangulatePolygon)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xb3f4454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"TriangulatePolygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.ClosestTimesOnTwoLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<float_t>, double_t)>(&::Unity::XR::CoreUtils::GeometryUtils::ClosestTimesOnTwoLines)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb3f42a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestTimesOnTwoLines", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.ClosestTimesOnTwoLinesXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<float_t>, double_t)>(&::Unity::XR::CoreUtils::GeometryUtils::ClosestTimesOnTwoLinesXZ)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb3f4744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestTimesOnTwoLinesXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.ClosestPointsOnTwoLineSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, double_t)>(&::Unity::XR::CoreUtils::GeometryUtils::ClosestPointsOnTwoLineSegments)> {
  constexpr static std::size_t size = 0xa3c;
  constexpr static std::size_t addrs = 0xb3f48b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestPointsOnTwoLineSegments", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.ClosestPointOnLineSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::GeometryUtils::ClosestPointOnLineSegment)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb3f3b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestPointOnLineSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.ClosestPolygonApproach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t)>(&::Unity::XR::CoreUtils::GeometryUtils::ClosestPolygonApproach)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xb3f52f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestPolygonApproach", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PointInPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Unity::XR::CoreUtils::GeometryUtils::PointInPolygon)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xb3f561c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointInPolygon", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PointInPolygon3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Unity::XR::CoreUtils::GeometryUtils::PointInPolygon3D)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb3f59b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointInPolygon3D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.ProjectPointOnPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::GeometryUtils::ProjectPointOnPlane)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb3f5bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ProjectPointOnPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.ConvexHull2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Unity::XR::CoreUtils::GeometryUtils::ConvexHull2D)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0xb3f5d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ConvexHull2D", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PolygonCentroid2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Unity::XR::CoreUtils::GeometryUtils::PolygonCentroid2D)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb3f6210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonCentroid2D", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.OrientedMinimumBoundingBox2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::ArrayW<::UnityEngine::Vector3>)>(&::Unity::XR::CoreUtils::GeometryUtils::OrientedMinimumBoundingBox2D)> {
  constexpr static std::size_t size = 0xa08;
  constexpr static std::size_t addrs = 0xb3f6398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"OrientedMinimumBoundingBox2D", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.RotateCalipers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::XR::CoreUtils::GeometryUtils::RotateCalipers)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0xb3f6da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"RotateCalipers", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.RotationForBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::ArrayW<::UnityEngine::Vector3>)>(&::Unity::XR::CoreUtils::GeometryUtils::RotationForBox)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb3f7214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"RotationForBox", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.ConvexPolygonArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Unity::XR::CoreUtils::GeometryUtils::ConvexPolygonArea)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb3f72a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ConvexPolygonArea", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PolygonInPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::Unity::XR::CoreUtils::GeometryUtils::PolygonInPolygon)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb3f73d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonInPolygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PolygonsWithinRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t)>(&::Unity::XR::CoreUtils::GeometryUtils::PolygonsWithinRange)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb3f757c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonsWithinRange", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PolygonsWithinSqRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t)>(&::Unity::XR::CoreUtils::GeometryUtils::PolygonsWithinSqRange)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb3f75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonsWithinSqRange", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PointOnPolygonBoundsXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t)>(&::Unity::XR::CoreUtils::GeometryUtils::PointOnPolygonBoundsXZ)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb3f770c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointOnPolygonBoundsXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PointOnLineSegmentXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::XR::CoreUtils::GeometryUtils::PointOnLineSegmentXZ)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb3f7910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointOnLineSegmentXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.NormalizeRotationKeepingUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion)>(&::Unity::XR::CoreUtils::GeometryUtils::NormalizeRotationKeepingUp)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xb3f7988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"NormalizeRotationKeepingUp", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PolygonUVPoseFromPlanePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose)>(&::Unity::XR::CoreUtils::GeometryUtils::PolygonUVPoseFromPlanePose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb3f7b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonUVPoseFromPlanePose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::GeometryUtils.PolygonVertexToUV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3, ::UnityEngine::Pose, ::UnityEngine::Pose)>(&::Unity::XR::CoreUtils::GeometryUtils::PolygonVertexToUV)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb3f7c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonVertexToUV", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::GeometryUtils::setStaticF_k_Up(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "k_Up", ::Unity::XR::CoreUtils::GeometryUtils*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::GeometryUtils::getStaticF_k_Up()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "k_Up", ::Unity::XR::CoreUtils::GeometryUtils*>();
}
inline void Unity::XR::CoreUtils::GeometryUtils::setStaticF_k_Forward(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "k_Forward", ::Unity::XR::CoreUtils::GeometryUtils*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::GeometryUtils::getStaticF_k_Forward()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "k_Forward", ::Unity::XR::CoreUtils::GeometryUtils*>();
}
inline void Unity::XR::CoreUtils::GeometryUtils::setStaticF_k_Zero(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "k_Zero", ::Unity::XR::CoreUtils::GeometryUtils*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::GeometryUtils::getStaticF_k_Zero()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "k_Zero", ::Unity::XR::CoreUtils::GeometryUtils*>();
}
inline void Unity::XR::CoreUtils::GeometryUtils::setStaticF_k_VerticalCorrection(::UnityEngine::Quaternion  value)  {
::cordl_internals::setStaticField<::UnityEngine::Quaternion, "k_VerticalCorrection", ::Unity::XR::CoreUtils::GeometryUtils*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion Unity::XR::CoreUtils::GeometryUtils::getStaticF_k_VerticalCorrection()  {
return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "k_VerticalCorrection", ::Unity::XR::CoreUtils::GeometryUtils*>();
}
inline void Unity::XR::CoreUtils::GeometryUtils::setStaticF_k_HullEdgeDirections(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "k_HullEdgeDirections", ::Unity::XR::CoreUtils::GeometryUtils*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Unity::XR::CoreUtils::GeometryUtils::getStaticF_k_HullEdgeDirections()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, "k_HullEdgeDirections", ::Unity::XR::CoreUtils::GeometryUtils*>();
}
inline void Unity::XR::CoreUtils::GeometryUtils::setStaticF_k_HullIndices(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_HullIndices", ::Unity::XR::CoreUtils::GeometryUtils*>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* Unity::XR::CoreUtils::GeometryUtils::getStaticF_k_HullIndices()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_HullIndices", ::Unity::XR::CoreUtils::GeometryUtils*>();
}
inline bool Unity::XR::CoreUtils::GeometryUtils::FindClosestEdge(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::UnityEngine::Vector3  point, ::by_ref<::UnityEngine::Vector3>  vertexA, ::by_ref<::UnityEngine::Vector3>  vertexB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"FindClosestEdge", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vertices, point, vertexA, vertexB);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::GeometryUtils::PointOnOppositeSideOfPolygon(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointOnOppositeSideOfPolygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vertices, point);
}
inline void Unity::XR::CoreUtils::GeometryUtils::TriangulatePolygon(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  vertCount, bool  reverse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"TriangulatePolygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indices, vertCount, reverse);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::ClosestTimesOnTwoLines(::UnityEngine::Vector3  positionA, ::UnityEngine::Vector3  velocityA, ::UnityEngine::Vector3  positionB, ::UnityEngine::Vector3  velocityB, ::by_ref<float_t>  s, ::by_ref<float_t>  t, double_t  parallelTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestTimesOnTwoLines", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, positionA, velocityA, positionB, velocityB, s, t, parallelTest);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::ClosestTimesOnTwoLinesXZ(::UnityEngine::Vector3  positionA, ::UnityEngine::Vector3  velocityA, ::UnityEngine::Vector3  positionB, ::UnityEngine::Vector3  velocityB, ::by_ref<float_t>  s, ::by_ref<float_t>  t, double_t  parallelTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestTimesOnTwoLinesXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, positionA, velocityA, positionB, velocityB, s, t, parallelTest);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::ClosestPointsOnTwoLineSegments(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  aLineVector, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  bLineVector, ::by_ref<::UnityEngine::Vector3>  resultA, ::by_ref<::UnityEngine::Vector3>  resultB, double_t  parallelTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestPointsOnTwoLineSegments", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, aLineVector, b, bLineVector, resultA, resultB, parallelTest);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::GeometryUtils::ClosestPointOnLineSegment(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestPointOnLineSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, a, b);
}
inline void Unity::XR::CoreUtils::GeometryUtils::ClosestPolygonApproach(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verticesA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  verticesB, ::by_ref<::UnityEngine::Vector3>  pointA, ::by_ref<::UnityEngine::Vector3>  pointB, float_t  parallelTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ClosestPolygonApproach", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verticesA, verticesB, pointA, pointB, parallelTest);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::PointInPolygon(::UnityEngine::Vector3  testPoint, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointInPolygon", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, testPoint, vertices);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::PointInPolygon3D(::UnityEngine::Vector3  testPoint, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointInPolygon3D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, testPoint, vertices);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::GeometryUtils::ProjectPointOnPlane(::UnityEngine::Vector3  planeNormal, ::UnityEngine::Vector3  planePoint, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ProjectPointOnPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, planeNormal, planePoint, point);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::ConvexHull2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  hull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ConvexHull2D", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, points, hull);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::GeometryUtils::PolygonCentroid2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonCentroid2D", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vertices);
}
inline ::UnityEngine::Vector2 Unity::XR::CoreUtils::GeometryUtils::OrientedMinimumBoundingBox2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  convexHull, ::ArrayW<::UnityEngine::Vector3>  boundingBox)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"OrientedMinimumBoundingBox2D", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, convexHull, boundingBox);
}
inline void Unity::XR::CoreUtils::GeometryUtils::RotateCalipers(::UnityEngine::Vector3  alignEdge, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, ::by_ref<int32_t>  indexA, ::by_ref<int32_t>  indexB, ::by_ref<int32_t>  indexC, ::by_ref<int32_t>  indexD, ::by_ref<::UnityEngine::Vector3>  caliperA, ::by_ref<::UnityEngine::Vector3>  caliperB, ::by_ref<::UnityEngine::Vector3>  caliperC, ::by_ref<::UnityEngine::Vector3>  caliperD, ::by_ref<::UnityEngine::Vector3>  caliperAEndCorner, ::by_ref<::UnityEngine::Vector3>  caliperBEndCorner, ::by_ref<::UnityEngine::Vector3>  caliperCEndCorner, ::by_ref<::UnityEngine::Vector3>  caliperDEndCorner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"RotateCalipers", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, alignEdge, vertices, indexA, indexB, indexC, indexD, caliperA, caliperB, caliperC, caliperD, caliperAEndCorner, caliperBEndCorner, caliperCEndCorner, caliperDEndCorner);
}
inline ::UnityEngine::Quaternion Unity::XR::CoreUtils::GeometryUtils::RotationForBox(::ArrayW<::UnityEngine::Vector3>  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"RotationForBox", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, vertices);
}
inline float_t Unity::XR::CoreUtils::GeometryUtils::ConvexPolygonArea(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"ConvexPolygonArea", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, vertices);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::PolygonInPolygon(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonInPolygon", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, polygonA, polygonB);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::PolygonsWithinRange(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonB, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonsWithinRange", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, polygonA, polygonB, maxDistance);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::PolygonsWithinSqRange(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonA, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  polygonB, float_t  maxSqDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonsWithinSqRange", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, polygonA, polygonB, maxSqDistance);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::PointOnPolygonBoundsXZ(::UnityEngine::Vector3  testPoint, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vertices, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointOnPolygonBoundsXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, testPoint, vertices, epsilon);
}
inline bool Unity::XR::CoreUtils::GeometryUtils::PointOnLineSegmentXZ(::UnityEngine::Vector3  testPoint, ::UnityEngine::Vector3  lineStart, ::UnityEngine::Vector3  lineEnd, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PointOnLineSegmentXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, testPoint, lineStart, lineEnd, epsilon);
}
inline ::UnityEngine::Quaternion Unity::XR::CoreUtils::GeometryUtils::NormalizeRotationKeepingUp(::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"NormalizeRotationKeepingUp", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rot);
}
inline ::UnityEngine::Pose Unity::XR::CoreUtils::GeometryUtils::PolygonUVPoseFromPlanePose(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonUVPoseFromPlanePose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, pose);
}
inline ::UnityEngine::Vector2 Unity::XR::CoreUtils::GeometryUtils::PolygonVertexToUV(::UnityEngine::Vector3  vertexPos, ::UnityEngine::Pose  planePose, ::UnityEngine::Pose  uvPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::GeometryUtils*>(),
                        {"PolygonVertexToUV", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, vertexPos, planePose, uvPose);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::GeometryUtils::GeometryUtils()   {
}
