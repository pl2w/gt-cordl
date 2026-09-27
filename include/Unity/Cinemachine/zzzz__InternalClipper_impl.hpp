#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InternalClipper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__InternalClipper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__PointD_def.hpp"
#include "Unity/Cinemachine/zzzz__PointInPolygonResult_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::InternalClipper.CrossProduct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::InternalClipper::CrossProduct)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaee7f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"CrossProduct", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InternalClipper.DotProduct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::InternalClipper::DotProduct)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaee7f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"DotProduct", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InternalClipper.DotProduct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::PointD, ::Unity::Cinemachine::PointD)>(&::Unity::Cinemachine::InternalClipper::DotProduct)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaee7f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"DotProduct", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InternalClipper.GetIntersectPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::by_ref<::Unity::Cinemachine::PointD>)>(&::Unity::Cinemachine::InternalClipper::GetIntersectPoint)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xaee7f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"GetIntersectPoint", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::PointD>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InternalClipper.SegmentsIntersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::InternalClipper::SegmentsIntersect)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaee8110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"SegmentsIntersect", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::InternalClipper.PointInPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PointInPolygonResult (*)(::Unity::Cinemachine::Point64, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::InternalClipper::PointInPolygon)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xaee81c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"PointInPolygon", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
inline double_t Unity::Cinemachine::InternalClipper::CrossProduct(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2, ::Unity::Cinemachine::Point64  pt3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"CrossProduct", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, pt1, pt2, pt3);
}
inline double_t Unity::Cinemachine::InternalClipper::DotProduct(::Unity::Cinemachine::Point64  pt1, ::Unity::Cinemachine::Point64  pt2, ::Unity::Cinemachine::Point64  pt3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"DotProduct", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, pt1, pt2, pt3);
}
inline double_t Unity::Cinemachine::InternalClipper::DotProduct(::Unity::Cinemachine::PointD  vec1, ::Unity::Cinemachine::PointD  vec2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"DotProduct", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, vec1, vec2);
}
inline bool Unity::Cinemachine::InternalClipper::GetIntersectPoint(::Unity::Cinemachine::Point64  ln1a, ::Unity::Cinemachine::Point64  ln1b, ::Unity::Cinemachine::Point64  ln2a, ::Unity::Cinemachine::Point64  ln2b, ::by_ref<::Unity::Cinemachine::PointD>  ip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"GetIntersectPoint", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::PointD>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ln1a, ln1b, ln2a, ln2b, ip);
}
inline bool Unity::Cinemachine::InternalClipper::SegmentsIntersect(::Unity::Cinemachine::Point64  seg1a, ::Unity::Cinemachine::Point64  seg1b, ::Unity::Cinemachine::Point64  seg2a, ::Unity::Cinemachine::Point64  seg2b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"SegmentsIntersect", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, seg1a, seg1b, seg2a, seg2b);
}
inline ::Unity::Cinemachine::PointInPolygonResult Unity::Cinemachine::InternalClipper::PointInPolygon(::Unity::Cinemachine::Point64  pt, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  polygon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::InternalClipper*>(),
                        {"PointInPolygon", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PointInPolygonResult>(nullptr, ___internal_method, pt, polygon);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::InternalClipper::InternalClipper()   {
}
