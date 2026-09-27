#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Clipper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__Rect64_impl.hpp"
#include "Unity/Cinemachine/zzzz__RectD_impl.hpp"
#include "Unity/Cinemachine/zzzz__Clipper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__ClipType_def.hpp"
#include "Unity/Cinemachine/zzzz__EndType_def.hpp"
#include "Unity/Cinemachine/zzzz__FillRule_def.hpp"
#include "Unity/Cinemachine/zzzz__JoinType_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include "Unity/Cinemachine/zzzz__PointD_def.hpp"
#include "Unity/Cinemachine/zzzz__PointInPolygonResult_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyPath64_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathD_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyTree64_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyTreeD_def.hpp"
#include "Unity/Cinemachine/zzzz__Rect64_def.hpp"
#include "Unity/Cinemachine/zzzz__RectD_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Intersect)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaee8408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Intersect", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Intersect)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaee8580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Intersect", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Union
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Union)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaee86f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Union", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Union
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Union)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaee8764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Union", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Union
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Union)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaee87d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Union", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Union
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Union)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaee8844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Union", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Difference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Difference)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaee88b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Difference", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Difference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Difference)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaee8928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Difference", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Xor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Xor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaee899c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Xor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Xor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::Unity::Cinemachine::FillRule)>(&::Unity::Cinemachine::Clipper::Xor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaee8a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Xor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.BooleanOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper::BooleanOp)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaee8478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"BooleanOp", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.BooleanOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::Unity::Cinemachine::ClipType, ::Unity::Cinemachine::FillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, int32_t)>(&::Unity::Cinemachine::Clipper::BooleanOp)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xaee85f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"BooleanOp", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.InflatePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, double_t, ::Unity::Cinemachine::JoinType, ::Unity::Cinemachine::EndType, double_t)>(&::Unity::Cinemachine::Clipper::InflatePaths)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaee8a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"InflatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Cinemachine::JoinType>(), ::i2c::type_of<::Unity::Cinemachine::EndType>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.InflatePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, double_t, ::Unity::Cinemachine::JoinType, ::Unity::Cinemachine::EndType, double_t, int32_t)>(&::Unity::Cinemachine::Clipper::InflatePaths)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xaee8b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"InflatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Cinemachine::JoinType>(), ::i2c::type_of<::Unity::Cinemachine::EndType>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.MinkowskiSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, bool)>(&::Unity::Cinemachine::Clipper::MinkowskiSum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MinkowskiSum", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.MinkowskiDiff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, bool)>(&::Unity::Cinemachine::Clipper::MinkowskiDiff)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaee9144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MinkowskiDiff", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::Clipper::Area)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xaee914c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper::Area)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xaee92f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*)>(&::Unity::Cinemachine::Clipper::Area)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xaee945c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::Clipper::Area)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xaee95f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.IsPositive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::Clipper::IsPositive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaee9760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"IsPositive", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.IsPositive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*)>(&::Unity::Cinemachine::Clipper::IsPositive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaee97c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"IsPositive", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Path64ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::Clipper::Path64ToString)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xaee9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Path64ToString", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Paths64ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper::Paths64ToString)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xaee99ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Paths64ToString", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PathDToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*)>(&::Unity::Cinemachine::Clipper::PathDToString)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xaee9b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PathDToString", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PathsDToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::Clipper::PathsDToString)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xaee9cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PathsDToString", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.OffsetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, int64_t, int64_t)>(&::Unity::Cinemachine::Clipper::OffsetPath)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xaee9e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"OffsetPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePoint64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Point64 (*)(::Unity::Cinemachine::Point64, double_t)>(&::Unity::Cinemachine::Clipper::ScalePoint64)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaeea058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePoint64", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePointD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PointD (*)(::Unity::Cinemachine::Point64, double_t)>(&::Unity::Cinemachine::Clipper::ScalePointD)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeea090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePointD", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, double_t)>(&::Unity::Cinemachine::Clipper::ScalePath)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xaeea0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, double_t)>(&::Unity::Cinemachine::Clipper::ScalePaths)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xaeea2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*, double_t)>(&::Unity::Cinemachine::Clipper::ScalePath)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xaeea524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, double_t)>(&::Unity::Cinemachine::Clipper::ScalePaths)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xaeea73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePath64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*, double_t)>(&::Unity::Cinemachine::Clipper::ScalePath64)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xaeea988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePath64", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePaths64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, double_t)>(&::Unity::Cinemachine::Clipper::ScalePaths64)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xaee8cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePaths64", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePathD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, double_t)>(&::Unity::Cinemachine::Clipper::ScalePathD)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xaeeab98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePathD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ScalePathsD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, double_t)>(&::Unity::Cinemachine::Clipper::ScalePathsD)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xaee8efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePathsD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Path64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*)>(&::Unity::Cinemachine::Clipper::Path64)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xaeead9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Path64", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Paths64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::Clipper::Paths64)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xaeeaf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Paths64", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PathsD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper::PathsD)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xaeeb1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PathsD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PathD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::Clipper::PathD)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xaeeb3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PathD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.TranslatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, int64_t, int64_t)>(&::Unity::Cinemachine::Clipper::TranslatePath)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xaeeb5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TranslatePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.TranslatePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, int64_t, int64_t)>(&::Unity::Cinemachine::Clipper::TranslatePaths)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xaeeb7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TranslatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.TranslatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*, double_t, double_t)>(&::Unity::Cinemachine::Clipper::TranslatePath)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xaeeba44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TranslatePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.TranslatePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, double_t, double_t)>(&::Unity::Cinemachine::Clipper::TranslatePaths)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xaeebc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TranslatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ReversePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::Clipper::ReversePath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaeebe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ReversePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ReversePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*)>(&::Unity::Cinemachine::Clipper::ReversePath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaeebf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ReversePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ReversePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper::ReversePaths)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xaeebfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ReversePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.ReversePaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::Clipper::ReversePaths)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xaeec204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ReversePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::Rect64 (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper::GetBounds)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xaeec434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::RectD (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::Clipper::GetBounds)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xaeec700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.MakePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::ArrayW<int32_t>)>(&::Unity::Cinemachine::Clipper::MakePath)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xaeec9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MakePath", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.MakePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::ArrayW<int64_t>)>(&::Unity::Cinemachine::Clipper::MakePath)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xaeecb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MakePath", {}, {::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.MakePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (*)(::ArrayW<double_t>)>(&::Unity::Cinemachine::Clipper::MakePath)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xaeecc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MakePath", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.Sqr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::Unity::Cinemachine::Clipper::Sqr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeecd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Sqr", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PointsNearEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Cinemachine::PointD, ::Unity::Cinemachine::PointD, double_t)>(&::Unity::Cinemachine::Clipper::PointsNearEqual)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaeecd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PointsNearEqual", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.StripNearDuplicates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*, double_t, bool)>(&::Unity::Cinemachine::Clipper::StripNearDuplicates)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xaeece28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"StripNearDuplicates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.StripDuplicates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, bool)>(&::Unity::Cinemachine::Clipper::StripDuplicates)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0xaeed144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"StripDuplicates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.AddPolyNodeToPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::PolyPath64*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*)>(&::Unity::Cinemachine::Clipper::AddPolyNodeToPaths)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xaeed378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"AddPolyNodeToPaths", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPath64*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PolyTreeToPaths64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::Unity::Cinemachine::PolyTree64*)>(&::Unity::Cinemachine::Clipper::PolyTreeToPaths64)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xaeed530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PolyTreeToPaths64", {}, {::i2c::type_of<::Unity::Cinemachine::PolyTree64*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.AddPolyNodeToPathsD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Cinemachine::PolyPathD*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*)>(&::Unity::Cinemachine::Clipper::AddPolyNodeToPathsD)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xaeed698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"AddPolyNodeToPathsD", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathD*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PolyTreeToPathsD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::Unity::Cinemachine::PolyTreeD*)>(&::Unity::Cinemachine::Clipper::PolyTreeToPathsD)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xaeed850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PolyTreeToPathsD", {}, {::i2c::type_of<::Unity::Cinemachine::PolyTreeD*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PerpendicDistFromLineSqrd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::PointD, ::Unity::Cinemachine::PointD, ::Unity::Cinemachine::PointD)>(&::Unity::Cinemachine::Clipper::PerpendicDistFromLineSqrd)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xaeeda98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PerpendicDistFromLineSqrd", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PerpendicDistFromLineSqrd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Point64)>(&::Unity::Cinemachine::Clipper::PerpendicDistFromLineSqrd)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaeedb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PerpendicDistFromLineSqrd", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.RDP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, int32_t, int32_t, double_t, ::System::Collections::Generic::List_1<bool>*)>(&::Unity::Cinemachine::Clipper::RDP)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xaeedc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RDP", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.RamerDouglasPeucker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, double_t)>(&::Unity::Cinemachine::Clipper::RamerDouglasPeucker)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xaeedea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RamerDouglasPeucker", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.RamerDouglasPeucker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*, double_t)>(&::Unity::Cinemachine::Clipper::RamerDouglasPeucker)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xaeee110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RamerDouglasPeucker", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.RDP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*, int32_t, int32_t, double_t, ::System::Collections::Generic::List_1<bool>*)>(&::Unity::Cinemachine::Clipper::RDP)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xaeee350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RDP", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.RamerDouglasPeucker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*, double_t)>(&::Unity::Cinemachine::Clipper::RamerDouglasPeucker)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xaeee5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RamerDouglasPeucker", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.RamerDouglasPeucker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* (*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*, double_t)>(&::Unity::Cinemachine::Clipper::RamerDouglasPeucker)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xaeee808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RamerDouglasPeucker", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.TrimCollinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*, bool)>(&::Unity::Cinemachine::Clipper::TrimCollinear)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0xaeeea48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TrimCollinear", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.TrimCollinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* (*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*, int32_t, bool)>(&::Unity::Cinemachine::Clipper::TrimCollinear)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaeef060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TrimCollinear", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::Clipper.PointInPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PointInPolygonResult (*)(::Unity::Cinemachine::Point64, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*)>(&::Unity::Cinemachine::Clipper::PointInPolygon)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeef170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PointInPolygon", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::Clipper::setStaticF_MaxInvalidRect64(::Unity::Cinemachine::Rect64  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::Rect64, "MaxInvalidRect64", ::Unity::Cinemachine::Clipper*>(std::forward<::Unity::Cinemachine::Rect64>(value));
}
inline ::Unity::Cinemachine::Rect64 Unity::Cinemachine::Clipper::getStaticF_MaxInvalidRect64()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::Rect64, "MaxInvalidRect64", ::Unity::Cinemachine::Clipper*>();
}
inline void Unity::Cinemachine::Clipper::setStaticF_MaxInvalidRectD(::Unity::Cinemachine::RectD  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::RectD, "MaxInvalidRectD", ::Unity::Cinemachine::Clipper*>(std::forward<::Unity::Cinemachine::RectD>(value));
}
inline ::Unity::Cinemachine::RectD Unity::Cinemachine::Clipper::getStaticF_MaxInvalidRectD()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::RectD, "MaxInvalidRectD", ::Unity::Cinemachine::Clipper*>();
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::Intersect(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Intersect", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, subject, clip, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::Intersect(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Intersect", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, subject, clip, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::Union(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Union", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, subject, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::Union(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Union", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, subject, clip, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::Union(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Union", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, subject, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::Union(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Union", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, subject, clip, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::Difference(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Difference", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, subject, clip, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::Difference(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Difference", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, subject, clip, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::Xor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Xor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, subject, clip, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::Xor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, ::Unity::Cinemachine::FillRule  fillRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Xor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, subject, clip, fillRule);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::BooleanOp(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  subject, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"BooleanOp", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, clipType, fillRule, subject, clip);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::BooleanOp(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  subject, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  clip, int32_t  roundingDecimalPrecision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"BooleanOp", {}, {::i2c::type_of<::Unity::Cinemachine::ClipType>(), ::i2c::type_of<::Unity::Cinemachine::FillRule>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, clipType, fillRule, subject, clip, roundingDecimalPrecision);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::InflatePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, double_t  delta, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType, double_t  miterLimit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"InflatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Cinemachine::JoinType>(), ::i2c::type_of<::Unity::Cinemachine::EndType>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, paths, delta, joinType, endType, miterLimit);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::InflatePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  delta, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType, double_t  miterLimit, int32_t  precision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"InflatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::Unity::Cinemachine::JoinType>(), ::i2c::type_of<::Unity::Cinemachine::EndType>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, paths, delta, joinType, endType, miterLimit, precision);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::MinkowskiSum(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  pattern, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isClosed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MinkowskiSum", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, pattern, path, isClosed);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::MinkowskiDiff(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  pattern, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isClosed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MinkowskiDiff", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, pattern, path, isClosed);
}
inline double_t Unity::Cinemachine::Clipper::Area(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, path);
}
inline double_t Unity::Cinemachine::Clipper::Area(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, paths);
}
inline double_t Unity::Cinemachine::Clipper::Area(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, path);
}
inline double_t Unity::Cinemachine::Clipper::Area(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Area", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, paths);
}
inline bool Unity::Cinemachine::Clipper::IsPositive(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  poly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"IsPositive", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, poly);
}
inline bool Unity::Cinemachine::Clipper::IsPositive(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  poly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"IsPositive", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, poly);
}
inline ::StringW Unity::Cinemachine::Clipper::Path64ToString(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Path64ToString", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW Unity::Cinemachine::Clipper::Paths64ToString(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Paths64ToString", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, paths);
}
inline ::StringW Unity::Cinemachine::Clipper::PathDToString(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PathDToString", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW Unity::Cinemachine::Clipper::PathsDToString(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PathsDToString", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, paths);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::OffsetPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, int64_t  dx, int64_t  dy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"OffsetPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, path, dx, dy);
}
inline ::Unity::Cinemachine::Point64 Unity::Cinemachine::Clipper::ScalePoint64(::Unity::Cinemachine::Point64  pt, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePoint64", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Point64>(nullptr, ___internal_method, pt, scale);
}
inline ::Unity::Cinemachine::PointD Unity::Cinemachine::Clipper::ScalePointD(::Unity::Cinemachine::Point64  pt, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePointD", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PointD>(nullptr, ___internal_method, pt, scale);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::ScalePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, path, scale);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::ScalePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, paths, scale);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::Clipper::ScalePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(nullptr, ___internal_method, path, scale);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::ScalePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, paths, scale);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::ScalePath64(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePath64", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, path, scale);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::ScalePaths64(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePaths64", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, paths, scale);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::Clipper::ScalePathD(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePathD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(nullptr, ___internal_method, path, scale);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::ScalePathsD(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, double_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ScalePathsD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, paths, scale);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::Path64(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Path64", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, path);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::Paths64(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Paths64", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, paths);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::PathsD(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PathsD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, paths);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::Clipper::PathD(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PathD", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(nullptr, ___internal_method, path);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::TranslatePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, int64_t  dx, int64_t  dy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TranslatePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, path, dx, dy);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::TranslatePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, int64_t  dx, int64_t  dy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TranslatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, paths, dx, dy);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::Clipper::TranslatePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  dx, double_t  dy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TranslatePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(nullptr, ___internal_method, path, dx, dy);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::TranslatePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  dx, double_t  dy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TranslatePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, paths, dx, dy);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::ReversePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ReversePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, path);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::Clipper::ReversePath(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ReversePath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(nullptr, ___internal_method, path);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::ReversePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ReversePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, paths);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::ReversePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"ReversePaths", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, paths);
}
inline ::Unity::Cinemachine::Rect64 Unity::Cinemachine::Clipper::GetBounds(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::Rect64>(nullptr, ___internal_method, paths);
}
inline ::Unity::Cinemachine::RectD Unity::Cinemachine::Clipper::GetBounds(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"GetBounds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::RectD>(nullptr, ___internal_method, paths);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::MakePath(::ArrayW<int32_t>  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MakePath", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, arr);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::MakePath(::ArrayW<int64_t>  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MakePath", {}, {::i2c::type_of<::ArrayW<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, arr);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::Clipper::MakePath(::ArrayW<double_t>  arr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"MakePath", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(nullptr, ___internal_method, arr);
}
inline double_t Unity::Cinemachine::Clipper::Sqr(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"Sqr", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline bool Unity::Cinemachine::Clipper::PointsNearEqual(::Unity::Cinemachine::PointD  pt1, ::Unity::Cinemachine::PointD  pt2, double_t  distanceSqrd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PointsNearEqual", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pt1, pt2, distanceSqrd);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::Clipper::StripNearDuplicates(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  minEdgeLenSqrd, bool  isClosedPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"StripNearDuplicates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(nullptr, ___internal_method, path, minEdgeLenSqrd, isClosedPath);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::StripDuplicates(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isClosedPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"StripDuplicates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, path, isClosedPath);
}
inline void Unity::Cinemachine::Clipper::AddPolyNodeToPaths(::Unity::Cinemachine::PolyPath64*  polyPath, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"AddPolyNodeToPaths", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPath64*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, polyPath, paths);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::PolyTreeToPaths64(::Unity::Cinemachine::PolyTree64*  polyTree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PolyTreeToPaths64", {}, {::i2c::type_of<::Unity::Cinemachine::PolyTree64*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, polyTree);
}
inline void Unity::Cinemachine::Clipper::AddPolyNodeToPathsD(::Unity::Cinemachine::PolyPathD*  polyPath, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"AddPolyNodeToPathsD", {}, {::i2c::type_of<::Unity::Cinemachine::PolyPathD*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, polyPath, paths);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::PolyTreeToPathsD(::Unity::Cinemachine::PolyTreeD*  polyTree)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PolyTreeToPathsD", {}, {::i2c::type_of<::Unity::Cinemachine::PolyTreeD*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, polyTree);
}
inline double_t Unity::Cinemachine::Clipper::PerpendicDistFromLineSqrd(::Unity::Cinemachine::PointD  pt, ::Unity::Cinemachine::PointD  line1, ::Unity::Cinemachine::PointD  line2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PerpendicDistFromLineSqrd", {}, {::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>(), ::i2c::type_of<::Unity::Cinemachine::PointD>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, pt, line1, line2);
}
inline double_t Unity::Cinemachine::Clipper::PerpendicDistFromLineSqrd(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Point64  line1, ::Unity::Cinemachine::Point64  line2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PerpendicDistFromLineSqrd", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Point64>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, pt, line1, line2);
}
inline void Unity::Cinemachine::Clipper::RDP(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, int32_t  begin, int32_t  end, double_t  epsSqrd, ::System::Collections::Generic::List_1<bool>*  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RDP", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, begin, end, epsSqrd, flags);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::RamerDouglasPeucker(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, double_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RamerDouglasPeucker", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, path, epsilon);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Unity::Cinemachine::Clipper::RamerDouglasPeucker(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, double_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RamerDouglasPeucker", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>(nullptr, ___internal_method, paths, epsilon);
}
inline void Unity::Cinemachine::Clipper::RDP(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, int32_t  begin, int32_t  end, double_t  epsSqrd, ::System::Collections::Generic::List_1<bool>*  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RDP", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, begin, end, epsSqrd, flags);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::Clipper::RamerDouglasPeucker(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, double_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RamerDouglasPeucker", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(nullptr, ___internal_method, path, epsilon);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Unity::Cinemachine::Clipper::RamerDouglasPeucker(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, double_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"RamerDouglasPeucker", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*>(nullptr, ___internal_method, paths, epsilon);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* Unity::Cinemachine::Clipper::TrimCollinear(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TrimCollinear", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>(nullptr, ___internal_method, path, isOpen);
}
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* Unity::Cinemachine::Clipper::TrimCollinear(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, int32_t  precision, bool  isOpen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"TrimCollinear", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>(nullptr, ___internal_method, path, precision, isOpen);
}
inline ::Unity::Cinemachine::PointInPolygonResult Unity::Cinemachine::Clipper::PointInPolygon(::Unity::Cinemachine::Point64  pt, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  polygon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Clipper*>(),
                        {"PointInPolygon", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PointInPolygonResult>(nullptr, ___internal_method, pt, polygon);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Clipper::Clipper()   {
}
