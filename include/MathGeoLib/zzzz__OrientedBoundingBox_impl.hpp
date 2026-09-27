#pragma once
// IWYU pragma private; include "MathGeoLib/OrientedBoundingBox.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "MathGeoLib/zzzz__OrientedBoundingBox_def.hpp"
#include "MathGeoLib/zzzz__Line3_def.hpp"
#include "MathGeoLib/zzzz__Matrix3X4_def.hpp"
#include "MathGeoLib/zzzz__OrientedBoundingBox_def.hpp"
#include "MathGeoLib/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MathGeoLib::OrientedBoundingBox::*)()>(&::MathGeoLib::OrientedBoundingBox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55e2d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MathGeoLib::OrientedBoundingBox::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x55e2d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.get_NumEdges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MathGeoLib::OrientedBoundingBox::get_NumEdges)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e2dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"get_NumEdges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.get_NumFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MathGeoLib::OrientedBoundingBox::get_NumFaces)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e2e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"get_NumFaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.get_NumVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MathGeoLib::OrientedBoundingBox::get_NumVertices)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e2ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"get_NumVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.OptimalEnclosing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MathGeoLib::OrientedBoundingBox* (*)(::ArrayW<::UnityEngine::Vector3>)>(&::MathGeoLib::OrientedBoundingBox::OptimalEnclosing)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x55e2f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"OptimalEnclosing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.BruteEnclosing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MathGeoLib::OrientedBoundingBox* (*)(::ArrayW<::UnityEngine::Vector3>)>(&::MathGeoLib::OrientedBoundingBox::BruteEnclosing)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x55e30ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"BruteEnclosing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MathGeoLib::OrientedBoundingBox::*)(::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox::Contains)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e32d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.CornerPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::MathGeoLib::OrientedBoundingBox::*)(int32_t)>(&::MathGeoLib::OrientedBoundingBox::CornerPoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55e3388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"CornerPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.Enclose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MathGeoLib::OrientedBoundingBox::*)(::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox::Enclose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e3450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Enclose", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.FacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::MathGeoLib::OrientedBoundingBox::*)(int32_t, float_t, float_t)>(&::MathGeoLib::OrientedBoundingBox::FacePoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55e3500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"FacePoint", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.PointInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::MathGeoLib::OrientedBoundingBox::*)(float_t, float_t, float_t)>(&::MathGeoLib::OrientedBoundingBox::PointInside)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55e35e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"PointInside", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MathGeoLib::OrientedBoundingBox::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox::Scale)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e36c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Scale", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.Translate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MathGeoLib::OrientedBoundingBox::*)(::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox::Translate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e3790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Translate", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.Distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MathGeoLib::OrientedBoundingBox::*)(::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox::Distance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x55e3840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Distance", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.PointOnEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::MathGeoLib::OrientedBoundingBox::*)(int32_t, float_t)>(&::MathGeoLib::OrientedBoundingBox::PointOnEdge)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55e38f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"PointOnEdge", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.Edge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MathGeoLib::Line3 (::MathGeoLib::OrientedBoundingBox::*)(int32_t)>(&::MathGeoLib::OrientedBoundingBox::Edge)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x55e39c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Edge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.WorldToLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MathGeoLib::Matrix3X4 (::MathGeoLib::OrientedBoundingBox::*)()>(&::MathGeoLib::OrientedBoundingBox::WorldToLocal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x55e3a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"WorldToLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.LocalToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MathGeoLib::Matrix3X4 (::MathGeoLib::OrientedBoundingBox::*)()>(&::MathGeoLib::OrientedBoundingBox::LocalToWorld)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x55e3b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"LocalToWorld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.FacePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MathGeoLib::Plane (::MathGeoLib::OrientedBoundingBox::*)(int32_t)>(&::MathGeoLib::OrientedBoundingBox::FacePlane)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55e3c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"FacePlane", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::MathGeoLib::OrientedBoundingBox::*)()>(&::MathGeoLib::OrientedBoundingBox::ToString)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x55e3cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                    {::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr ::UnityEngine::Vector3 const& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr void MathGeoLib::OrientedBoundingBox::__cordl_internal_set_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Center = value;
}
constexpr ::UnityEngine::Vector3& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Extent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Extent;
}
constexpr ::UnityEngine::Vector3 const& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Extent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Extent;
}
constexpr void MathGeoLib::OrientedBoundingBox::__cordl_internal_set_Extent(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Extent = value;
}
constexpr ::UnityEngine::Vector3& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Axis1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis1;
}
constexpr ::UnityEngine::Vector3 const& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Axis1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis1;
}
constexpr void MathGeoLib::OrientedBoundingBox::__cordl_internal_set_Axis1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Axis1 = value;
}
constexpr ::UnityEngine::Vector3& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Axis2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis2;
}
constexpr ::UnityEngine::Vector3 const& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Axis2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis2;
}
constexpr void MathGeoLib::OrientedBoundingBox::__cordl_internal_set_Axis2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Axis2 = value;
}
constexpr ::UnityEngine::Vector3& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Axis3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis3;
}
constexpr ::UnityEngine::Vector3 const& MathGeoLib::OrientedBoundingBox::__cordl_internal_get_Axis3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Axis3;
}
constexpr void MathGeoLib::OrientedBoundingBox::__cordl_internal_set_Axis3(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Axis3 = value;
}
inline void MathGeoLib::OrientedBoundingBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MathGeoLib::OrientedBoundingBox::_ctor(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extent, ::UnityEngine::Vector3  axis1, ::UnityEngine::Vector3  axis2, ::UnityEngine::Vector3  axis3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, extent, axis1, axis2, axis3);
}
inline int32_t MathGeoLib::OrientedBoundingBox::get_NumEdges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"get_NumEdges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MathGeoLib::OrientedBoundingBox::get_NumFaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"get_NumFaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MathGeoLib::OrientedBoundingBox::get_NumVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"get_NumVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::MathGeoLib::OrientedBoundingBox* MathGeoLib::OrientedBoundingBox::OptimalEnclosing(::ArrayW<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"OptimalEnclosing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MathGeoLib::OrientedBoundingBox*>(nullptr, ___internal_method, points);
}
inline ::MathGeoLib::OrientedBoundingBox* MathGeoLib::OrientedBoundingBox::BruteEnclosing(::ArrayW<::UnityEngine::Vector3>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"BruteEnclosing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MathGeoLib::OrientedBoundingBox*>(nullptr, ___internal_method, points);
}
inline bool MathGeoLib::OrientedBoundingBox::Contains(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 MathGeoLib::OrientedBoundingBox::CornerPoint(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"CornerPoint", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, index);
}
inline void MathGeoLib::OrientedBoundingBox::Enclose(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Enclose", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 MathGeoLib::OrientedBoundingBox::FacePoint(int32_t  index, float_t  u, float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"FacePoint", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, index, u, v);
}
inline ::UnityEngine::Vector3 MathGeoLib::OrientedBoundingBox::PointInside(float_t  x, float_t  y, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"PointInside", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, x, y, z);
}
inline void MathGeoLib::OrientedBoundingBox::Scale(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  factor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Scale", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, factor);
}
inline void MathGeoLib::OrientedBoundingBox::Translate(::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Translate", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline float_t MathGeoLib::OrientedBoundingBox::Distance(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Distance", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 MathGeoLib::OrientedBoundingBox::PointOnEdge(int32_t  index, float_t  u)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"PointOnEdge", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, index, u);
}
inline ::MathGeoLib::Line3 MathGeoLib::OrientedBoundingBox::Edge(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"Edge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MathGeoLib::Line3>(this, ___internal_method, index);
}
inline ::MathGeoLib::Matrix3X4 MathGeoLib::OrientedBoundingBox::WorldToLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"WorldToLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MathGeoLib::Matrix3X4>(this, ___internal_method);
}
inline ::MathGeoLib::Matrix3X4 MathGeoLib::OrientedBoundingBox::LocalToWorld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"LocalToWorld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MathGeoLib::Matrix3X4>(this, ___internal_method);
}
inline ::MathGeoLib::Plane MathGeoLib::OrientedBoundingBox::FacePlane(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(),
                        {"FacePlane", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MathGeoLib::Plane>(this, ___internal_method, index);
}
inline ::StringW MathGeoLib::OrientedBoundingBox::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MathGeoLib::OrientedBoundingBox*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [PublicAPI]
inline ::MathGeoLib::OrientedBoundingBox* MathGeoLib::OrientedBoundingBox::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MathGeoLib::OrientedBoundingBox*>());
}
inline ::MathGeoLib::OrientedBoundingBox* MathGeoLib::OrientedBoundingBox::New_ctor(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extent, ::UnityEngine::Vector3  axis1, ::UnityEngine::Vector3  axis2, ::UnityEngine::Vector3  axis3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MathGeoLib::OrientedBoundingBox*>(center, extent, axis1, axis2, axis3));
}
// Ctor Parameters []
constexpr ::MathGeoLib::OrientedBoundingBox::OrientedBoundingBox()   {
}
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_optimal_enclosing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_optimal_enclosing)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55e3030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_optimal_enclosing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_brute_enclosing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_brute_enclosing)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x55e3214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_brute_enclosing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_enclose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, ::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_enclose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55e3454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_enclose", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_point_inside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_point_inside)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55e360c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_point_inside", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, ::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_contains)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55e32d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_contains", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_corner_point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, int32_t, ::by_ref<::UnityEngine::Vector3>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_corner_point)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55e33b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_corner_point", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_face_point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, int32_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_face_point)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x55e352c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_face_point", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_num_faces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_num_faces)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55e2e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_num_faces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_num_edges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_num_edges)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55e2dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_num_edges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_num_vertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_num_vertices)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x55e2ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_num_vertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_scale)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55e36c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_scale", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_translate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, ::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_translate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55e3794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_translate", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_distance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, ::UnityEngine::Vector3)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_distance)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55e3844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_distance", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_point_on_edge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, int32_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_point_on_edge)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x55e391c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_point_on_edge", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_edge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, int32_t, ::by_ref<::MathGeoLib::Line3>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_edge)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55e3a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_edge", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MathGeoLib::Line3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_world_to_local
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, ::by_ref<::MathGeoLib::Matrix3X4>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_world_to_local)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55e3ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_world_to_local", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::by_ref<::MathGeoLib::Matrix3X4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_local_to_world
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, ::by_ref<::MathGeoLib::Matrix3X4>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_local_to_world)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x55e3ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_local_to_world", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::by_ref<::MathGeoLib::Matrix3X4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MathGeoLib::OrientedBoundingBox_NativeMethods.obb_face_plane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::MathGeoLib::OrientedBoundingBox*>, int32_t, ::by_ref<::MathGeoLib::Plane>)>(&::MathGeoLib::OrientedBoundingBox_NativeMethods::obb_face_plane)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55e3c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_face_plane", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MathGeoLib::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_optimal_enclosing(::ArrayW<::UnityEngine::Vector3>  points, int32_t  numPoints, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  extent, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_optimal_enclosing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, numPoints, center, extent, axis);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_brute_enclosing(::ArrayW<::UnityEngine::Vector3>  points, int32_t  numPoints, ::by_ref<::UnityEngine::Vector3>  center, ::by_ref<::UnityEngine::Vector3>  extent, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_brute_enclosing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, numPoints, center, extent, axis);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_enclose(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_enclose", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, point);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_point_inside(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, float_t  x, float_t  y, float_t  z, ::by_ref<::UnityEngine::Vector3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_point_inside", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, x, y, z, point);
}
inline bool MathGeoLib::OrientedBoundingBox_NativeMethods::obb_contains(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_contains", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, box, point);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_corner_point(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, ::by_ref<::UnityEngine::Vector3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_corner_point", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, index, point);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_face_point(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, float_t  u, float_t  v, ::by_ref<::UnityEngine::Vector3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_face_point", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, index, u, v, point);
}
inline int32_t MathGeoLib::OrientedBoundingBox_NativeMethods::obb_num_faces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_num_faces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MathGeoLib::OrientedBoundingBox_NativeMethods::obb_num_edges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_num_edges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t MathGeoLib::OrientedBoundingBox_NativeMethods::obb_num_vertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_num_vertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_scale(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  factor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_scale", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, center, factor);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_translate(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_translate", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, offset);
}
inline float_t MathGeoLib::OrientedBoundingBox_NativeMethods::obb_distance(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_distance", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, box, point);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_point_on_edge(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, float_t  u, ::by_ref<::UnityEngine::Vector3>  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_point_on_edge", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, index, u, point);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_edge(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, ::by_ref<::MathGeoLib::Line3>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_edge", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MathGeoLib::Line3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, index, segment);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_world_to_local(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::by_ref<::MathGeoLib::Matrix3X4>  local)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_world_to_local", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::by_ref<::MathGeoLib::Matrix3X4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, local);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_local_to_world(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, ::by_ref<::MathGeoLib::Matrix3X4>  world)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_local_to_world", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<::by_ref<::MathGeoLib::Matrix3X4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, world);
}
inline void MathGeoLib::OrientedBoundingBox_NativeMethods::obb_face_plane(::by_ref<::MathGeoLib::OrientedBoundingBox*>  box, int32_t  index, ::by_ref<::MathGeoLib::Plane>  plane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MathGeoLib::OrientedBoundingBox_NativeMethods*>(),
                        {"obb_face_plane", {}, {::i2c::type_of<::by_ref<::MathGeoLib::OrientedBoundingBox*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MathGeoLib::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, box, index, plane);
}
// Ctor Parameters []
constexpr ::MathGeoLib::OrientedBoundingBox_NativeMethods::OrientedBoundingBox_NativeMethods()   {
}
