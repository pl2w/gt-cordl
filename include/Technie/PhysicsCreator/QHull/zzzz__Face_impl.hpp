#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/Face.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Face_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__FaceList_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__HalfEdge_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Point3d_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Vector3d_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Vertex_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.computeCentroid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Face::*)(::Technie::PhysicsCreator::QHull::Point3d*)>(&::Technie::PhysicsCreator::QHull::Face::computeCentroid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaddc310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeCentroid", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Point3d*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.computeNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Face::*)(::Technie::PhysicsCreator::QHull::Vector3d*, double_t)>(&::Technie::PhysicsCreator::QHull::Face::computeNormal)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xaddc3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeNormal", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vector3d*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.computeNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Face::*)(::Technie::PhysicsCreator::QHull::Vector3d*)>(&::Technie::PhysicsCreator::QHull::Face::computeNormal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xaddc540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeNormal", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vector3d*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.computeNormalAndCentroid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Face::*)()>(&::Technie::PhysicsCreator::QHull::Face::computeNormalAndCentroid)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xaddc820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeNormalAndCentroid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.computeNormalAndCentroid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Face::*)(double_t)>(&::Technie::PhysicsCreator::QHull::Face::computeNormalAndCentroid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaddcac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeNormalAndCentroid", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.createTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Face* (*)(::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::Vertex*)>(&::Technie::PhysicsCreator::QHull::Face::createTriangle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddcb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"createTriangle", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.createTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Face* (*)(::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::Vertex*, double_t)>(&::Technie::PhysicsCreator::QHull::Face::createTriangle)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xaddcb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"createTriangle", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Face* (*)(::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>, ::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::QHull::Face::create)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xaddcd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"create", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Face::*)()>(&::Technie::PhysicsCreator::QHull::Face::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaddcc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.getEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::HalfEdge* (::Technie::PhysicsCreator::QHull::Face::*)(int32_t)>(&::Technie::PhysicsCreator::QHull::Face::getEdge)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaddcef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getEdge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.getFirstEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::HalfEdge* (::Technie::PhysicsCreator::QHull::Face::*)()>(&::Technie::PhysicsCreator::QHull::Face::getFirstEdge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddcf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getFirstEdge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.findEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::HalfEdge* (::Technie::PhysicsCreator::QHull::Face::*)(::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::Vertex*)>(&::Technie::PhysicsCreator::QHull::Face::findEdge)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xaddcf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"findEdge", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.distanceToPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Technie::PhysicsCreator::QHull::Face::*)(::Technie::PhysicsCreator::QHull::Point3d*)>(&::Technie::PhysicsCreator::QHull::Face::distanceToPlane)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaddcf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"distanceToPlane", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Point3d*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.getNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Vector3d* (::Technie::PhysicsCreator::QHull::Face::*)()>(&::Technie::PhysicsCreator::QHull::Face::getNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddcfd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.getCentroid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Point3d* (::Technie::PhysicsCreator::QHull::Face::*)()>(&::Technie::PhysicsCreator::QHull::Face::getCentroid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddcfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getCentroid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.numVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::QHull::Face::*)()>(&::Technie::PhysicsCreator::QHull::Face::numVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaddcfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"numVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.getVertexString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Technie::PhysicsCreator::QHull::Face::*)()>(&::Technie::PhysicsCreator::QHull::Face::getVertexString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaddc9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getVertexString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.getVertexIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Face::*)(::ArrayW<int32_t>)>(&::Technie::PhysicsCreator::QHull::Face::getVertexIndices)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaddcff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getVertexIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.connectHalfEdges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Face* (::Technie::PhysicsCreator::QHull::Face::*)(::Technie::PhysicsCreator::QHull::HalfEdge*, ::Technie::PhysicsCreator::QHull::HalfEdge*)>(&::Technie::PhysicsCreator::QHull::Face::connectHalfEdges)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xaddd048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"connectHalfEdges", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.checkConsistency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Face::*)()>(&::Technie::PhysicsCreator::QHull::Face::checkConsistency)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0xaddd1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"checkConsistency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.mergeAdjacentFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::QHull::Face::*)(::Technie::PhysicsCreator::QHull::HalfEdge*, ::ArrayW<::Technie::PhysicsCreator::QHull::Face*>)>(&::Technie::PhysicsCreator::QHull::Face::mergeAdjacentFace)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xaddd800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"mergeAdjacentFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(), ::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Face*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.areaSquared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Technie::PhysicsCreator::QHull::Face::*)(::Technie::PhysicsCreator::QHull::HalfEdge*, ::Technie::PhysicsCreator::QHull::HalfEdge*)>(&::Technie::PhysicsCreator::QHull::Face::areaSquared)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xaddda1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"areaSquared", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::Face.triangulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::Face::*)(::Technie::PhysicsCreator::QHull::FaceList*, double_t)>(&::Technie::PhysicsCreator::QHull::Face::triangulate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xadddae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"triangulate", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::FaceList*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Technie::PhysicsCreator::QHull::HalfEdge*& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_he0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___he0;
}
constexpr ::Technie::PhysicsCreator::QHull::HalfEdge* const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_he0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___he0;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_he0(::Technie::PhysicsCreator::QHull::HalfEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___he0 = value;
}
constexpr ::Technie::PhysicsCreator::QHull::Vector3d*& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_normal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr ::Technie::PhysicsCreator::QHull::Vector3d* const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_normal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normal;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_normal(::Technie::PhysicsCreator::QHull::Vector3d*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normal = value;
}
constexpr double_t& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr double_t const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_area(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___area = value;
}
constexpr ::Technie::PhysicsCreator::QHull::Point3d*& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_centroid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centroid;
}
constexpr ::Technie::PhysicsCreator::QHull::Point3d* const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_centroid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centroid;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_centroid(::Technie::PhysicsCreator::QHull::Point3d*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centroid = value;
}
constexpr double_t& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_planeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeOffset;
}
constexpr double_t const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_planeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___planeOffset;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_planeOffset(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___planeOffset = value;
}
constexpr int32_t& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr int32_t& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_numVerts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVerts;
}
constexpr int32_t const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_numVerts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVerts;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_numVerts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numVerts = value;
}
constexpr ::Technie::PhysicsCreator::QHull::Face*& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Technie::PhysicsCreator::QHull::Face* const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_next(::Technie::PhysicsCreator::QHull::Face*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr int32_t& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_mark()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mark;
}
constexpr int32_t const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_mark() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mark;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_mark(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mark = value;
}
constexpr ::Technie::PhysicsCreator::QHull::Vertex*& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_outside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outside;
}
constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& Technie::PhysicsCreator::QHull::Face::__cordl_internal_get_outside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outside;
}
constexpr void Technie::PhysicsCreator::QHull::Face::__cordl_internal_set_outside(::Technie::PhysicsCreator::QHull::Vertex*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outside = value;
}
inline void Technie::PhysicsCreator::QHull::Face::computeCentroid(::Technie::PhysicsCreator::QHull::Point3d*  centroid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeCentroid", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Point3d*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, centroid);
}
inline void Technie::PhysicsCreator::QHull::Face::computeNormal(::Technie::PhysicsCreator::QHull::Vector3d*  normal, double_t  minArea)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeNormal", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vector3d*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normal, minArea);
}
inline void Technie::PhysicsCreator::QHull::Face::computeNormal(::Technie::PhysicsCreator::QHull::Vector3d*  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeNormal", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vector3d*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normal);
}
inline void Technie::PhysicsCreator::QHull::Face::computeNormalAndCentroid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeNormalAndCentroid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::Face::computeNormalAndCentroid(double_t  minArea)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"computeNormalAndCentroid", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minArea);
}
inline ::Technie::PhysicsCreator::QHull::Face* Technie::PhysicsCreator::QHull::Face::createTriangle(::Technie::PhysicsCreator::QHull::Vertex*  v0, ::Technie::PhysicsCreator::QHull::Vertex*  v1, ::Technie::PhysicsCreator::QHull::Vertex*  v2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"createTriangle", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Face*>(nullptr, ___internal_method, v0, v1, v2);
}
inline ::Technie::PhysicsCreator::QHull::Face* Technie::PhysicsCreator::QHull::Face::createTriangle(::Technie::PhysicsCreator::QHull::Vertex*  v0, ::Technie::PhysicsCreator::QHull::Vertex*  v1, ::Technie::PhysicsCreator::QHull::Vertex*  v2, double_t  minArea)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"createTriangle", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Face*>(nullptr, ___internal_method, v0, v1, v2, minArea);
}
inline ::Technie::PhysicsCreator::QHull::Face* Technie::PhysicsCreator::QHull::Face::create(::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  vtxArray, ::ArrayW<int32_t>  indices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"create", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Face*>(nullptr, ___internal_method, vtxArray, indices);
}
inline void Technie::PhysicsCreator::QHull::Face::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::Face::getEdge(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getEdge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::HalfEdge*>(this, ___internal_method, i);
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::Face::getFirstEdge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getFirstEdge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::HalfEdge*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::Face::findEdge(::Technie::PhysicsCreator::QHull::Vertex*  vt, ::Technie::PhysicsCreator::QHull::Vertex*  vh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"findEdge", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::HalfEdge*>(this, ___internal_method, vt, vh);
}
inline double_t Technie::PhysicsCreator::QHull::Face::distanceToPlane(::Technie::PhysicsCreator::QHull::Point3d*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"distanceToPlane", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Point3d*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, p);
}
inline ::Technie::PhysicsCreator::QHull::Vector3d* Technie::PhysicsCreator::QHull::Face::getNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Vector3d*>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::QHull::Point3d* Technie::PhysicsCreator::QHull::Face::getCentroid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getCentroid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Point3d*>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::QHull::Face::numVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"numVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Technie::PhysicsCreator::QHull::Face::getVertexString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getVertexString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::Face::getVertexIndices(::ArrayW<int32_t>  idxs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"getVertexIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idxs);
}
inline ::Technie::PhysicsCreator::QHull::Face* Technie::PhysicsCreator::QHull::Face::connectHalfEdges(::Technie::PhysicsCreator::QHull::HalfEdge*  hedgePrev, ::Technie::PhysicsCreator::QHull::HalfEdge*  hedge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"connectHalfEdges", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Face*>(this, ___internal_method, hedgePrev, hedge);
}
inline void Technie::PhysicsCreator::QHull::Face::checkConsistency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"checkConsistency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::QHull::Face::mergeAdjacentFace(::Technie::PhysicsCreator::QHull::HalfEdge*  hedgeAdj, ::ArrayW<::Technie::PhysicsCreator::QHull::Face*>  discarded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"mergeAdjacentFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(), ::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Face*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hedgeAdj, discarded);
}
inline double_t Technie::PhysicsCreator::QHull::Face::areaSquared(::Technie::PhysicsCreator::QHull::HalfEdge*  hedge0, ::Technie::PhysicsCreator::QHull::HalfEdge*  hedge1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"areaSquared", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, hedge0, hedge1);
}
inline void Technie::PhysicsCreator::QHull::Face::triangulate(::Technie::PhysicsCreator::QHull::FaceList*  newFaces, double_t  minArea)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::Face*>(),
                        {"triangulate", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::FaceList*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newFaces, minArea);
}
inline ::Technie::PhysicsCreator::QHull::Face* Technie::PhysicsCreator::QHull::Face::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::Face*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::QHull::Face::Face()   {
}
