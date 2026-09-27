#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/QuickHull3D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Face_impl.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Vertex_impl.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__QuickHull3D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__FaceList_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Face_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__HalfEdge_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Point3d_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__VertexList_def.hpp"
#include "Technie/PhysicsCreator/QHull/zzzz__Vertex_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getDebug)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.setDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(bool)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::setDebug)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setDebug", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getDistanceTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getDistanceTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getDistanceTolerance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.setExplicitDistanceTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(double_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::setExplicitDistanceTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setExplicitDistanceTolerance", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getExplicitDistanceTolerance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getExplicitDistanceTolerance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadddfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getExplicitDistanceTolerance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.addPointToFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::Face*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::addPointToFace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadddfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"addPointToFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.removePointFromFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::Face*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::removePointFromFace)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xadde11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"removePointFromFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.removeAllPointsFromFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Vertex* (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Face*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::removeAllPointsFromFace)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xadde1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"removeAllPointsFromFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xadde2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<double_t>)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::_ctor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xadde528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xadde894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.findHalfEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::HalfEdge* (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::Vertex*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::findHalfEdge)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xaddebd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"findHalfEdge", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.setHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<double_t>, int32_t, ::ArrayW<::ArrayW<int32_t>>, int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::setHull)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xadded2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setHull", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<double_t>)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::build)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaddf5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"build", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<double_t>, int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::build)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xadde7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"build", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::build)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaddf66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"build", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>, int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::build)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaddeb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"build", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.triangulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::triangulate)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xaddf708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"triangulate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.initBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::initBuffers)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xaddeea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"initBuffers", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.setPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<double_t>, int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::setPoints)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaddf0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setPoints", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.setPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>, int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::setPoints)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaddf680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setPoints", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.computeMaxAndMin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::computeMaxAndMin)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xaddf19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"computeMaxAndMin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.createInitialSimplex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::createInitialSimplex)> {
  constexpr static std::size_t size = 0xbe0;
  constexpr static std::size_t addrs = 0xaddf9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"createInitialSimplex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getNumVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getNumVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xade06f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getNumVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*> (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getVertices)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xade0700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<double_t>)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getVertices)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xade0820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getVertices", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getVertexPointIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getVertexPointIndices)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xade08ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getVertexPointIndices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getNumFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getNumFaces)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xade0994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getNumFaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<int32_t>> (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getFaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xade09dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getFaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<int32_t>> (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getFaces)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xade09e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getFaces", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.getFaceIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::ArrayW<int32_t>, ::Technie::PhysicsCreator::QHull::Face*, int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::getFaceIndices)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xade0c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getFaceIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.resolveUnclaimedPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::FaceList*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::resolveUnclaimedPoints)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xade0ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"resolveUnclaimedPoints", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::FaceList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.deleteFacePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Face*, ::Technie::PhysicsCreator::QHull::Face*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::deleteFacePoints)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xade0d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"deleteFacePoints", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.oppFaceDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::HalfEdge*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::oppFaceDistance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xade0e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"oppFaceDistance", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.doAdjacentMerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Face*, int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::doAdjacentMerge)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xade0e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"doAdjacentMerge", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.calculateHorizon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Point3d*, ::Technie::PhysicsCreator::QHull::HalfEdge*, ::Technie::PhysicsCreator::QHull::Face*, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::calculateHorizon)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xade1008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"calculateHorizon", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Point3d*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.addAdjoiningFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::HalfEdge* (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Vertex*, ::Technie::PhysicsCreator::QHull::HalfEdge*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::addAdjoiningFace)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xade115c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"addAdjoiningFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.addNewFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::FaceList*, ::Technie::PhysicsCreator::QHull::Vertex*, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::addNewFaces)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xade1260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"addNewFaces", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::FaceList*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.nextPointToAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::QHull::Vertex* (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::nextPointToAdd)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xade1460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"nextPointToAdd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.addPointToHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Vertex*)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::addPointToHull)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xade14f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"addPointToHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.buildHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::buildHull)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaddf624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"buildHull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.markFaceVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Face*, int32_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::markFaceVertices)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xade180c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"markFaceVertices", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.reindexFacesAndVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::reindexFacesAndVertices)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xade1668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"reindexFacesAndVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.checkFaceConvexity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(::Technie::PhysicsCreator::QHull::Face*, double_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::checkFaceConvexity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xade1844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"checkFaceConvexity", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.checkFaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(double_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::checkFaces)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xade18e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"checkFaces", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::QHull::QuickHull3D::*)()>(&::Technie::PhysicsCreator::QHull::QuickHull3D::check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xade1a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"check", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::QHull::QuickHull3D.check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::QHull::QuickHull3D::*)(double_t)>(&::Technie::PhysicsCreator::QHull::QuickHull3D::check)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xade1a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"check", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_findIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___findIndex;
}
constexpr int32_t const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_findIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___findIndex;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_findIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___findIndex = value;
}
constexpr double_t& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_charLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___charLength;
}
constexpr double_t const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_charLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___charLength;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_charLength(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___charLength = value;
}
constexpr bool& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug;
}
constexpr bool const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_debug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debug = value;
}
constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_pointBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointBuffer;
}
constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*> const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_pointBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointBuffer;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_pointBuffer(::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointBuffer = value;
}
constexpr ::ArrayW<int32_t>& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_vertexPointIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexPointIndices;
}
constexpr ::ArrayW<int32_t> const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_vertexPointIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexPointIndices;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_vertexPointIndices(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertexPointIndices = value;
}
constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Face*>& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_discardedFaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___discardedFaces;
}
constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Face*> const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_discardedFaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___discardedFaces;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_discardedFaces(::ArrayW<::Technie::PhysicsCreator::QHull::Face*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___discardedFaces = value;
}
constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_maxVtxs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVtxs;
}
constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*> const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_maxVtxs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVtxs;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_maxVtxs(::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVtxs = value;
}
constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_minVtxs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVtxs;
}
constexpr ::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*> const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_minVtxs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVtxs;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_minVtxs(::ArrayW<::Technie::PhysicsCreator::QHull::Vertex*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVtxs = value;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::Face*>*& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_faces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faces;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::Face*>* const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_faces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faces;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_faces(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::Face*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faces = value;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_horizon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizon;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>* const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_horizon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizon;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_horizon(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizon = value;
}
constexpr ::Technie::PhysicsCreator::QHull::FaceList*& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_newFaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newFaces;
}
constexpr ::Technie::PhysicsCreator::QHull::FaceList* const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_newFaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newFaces;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_newFaces(::Technie::PhysicsCreator::QHull::FaceList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newFaces = value;
}
constexpr ::Technie::PhysicsCreator::QHull::VertexList*& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_unclaimed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unclaimed;
}
constexpr ::Technie::PhysicsCreator::QHull::VertexList* const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_unclaimed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unclaimed;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_unclaimed(::Technie::PhysicsCreator::QHull::VertexList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unclaimed = value;
}
constexpr ::Technie::PhysicsCreator::QHull::VertexList*& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_claimed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___claimed;
}
constexpr ::Technie::PhysicsCreator::QHull::VertexList* const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_claimed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___claimed;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_claimed(::Technie::PhysicsCreator::QHull::VertexList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___claimed = value;
}
constexpr int32_t& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_numVertices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVertices;
}
constexpr int32_t const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_numVertices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVertices;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_numVertices(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numVertices = value;
}
constexpr int32_t& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_numFaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numFaces;
}
constexpr int32_t const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_numFaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numFaces;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_numFaces(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numFaces = value;
}
constexpr int32_t& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_numPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPoints;
}
constexpr int32_t const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_numPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numPoints;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_numPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numPoints = value;
}
constexpr double_t& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_explicitTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explicitTolerance;
}
constexpr double_t const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_explicitTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___explicitTolerance;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_explicitTolerance(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___explicitTolerance = value;
}
constexpr double_t& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_tolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tolerance;
}
constexpr double_t const& Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_get_tolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tolerance;
}
constexpr void Technie::PhysicsCreator::QHull::QuickHull3D::__cordl_internal_set_tolerance(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tolerance = value;
}
inline bool Technie::PhysicsCreator::QHull::QuickHull3D::getDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::setDebug(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setDebug", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline double_t Technie::PhysicsCreator::QHull::QuickHull3D::getDistanceTolerance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getDistanceTolerance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::setExplicitDistanceTolerance(double_t  tol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setExplicitDistanceTolerance", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tol);
}
inline double_t Technie::PhysicsCreator::QHull::QuickHull3D::getExplicitDistanceTolerance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getExplicitDistanceTolerance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::addPointToFace(::Technie::PhysicsCreator::QHull::Vertex*  vtx, ::Technie::PhysicsCreator::QHull::Face*  face)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"addPointToFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vtx, face);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::removePointFromFace(::Technie::PhysicsCreator::QHull::Vertex*  vtx, ::Technie::PhysicsCreator::QHull::Face*  face)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"removePointFromFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vtx, face);
}
inline ::Technie::PhysicsCreator::QHull::Vertex* Technie::PhysicsCreator::QHull::QuickHull3D::removeAllPointsFromFace(::Technie::PhysicsCreator::QHull::Face*  face)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"removeAllPointsFromFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Vertex*>(this, ___internal_method, face);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::_ctor(::ArrayW<double_t>  coords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coords);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::_ctor(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::QuickHull3D::findHalfEdge(::Technie::PhysicsCreator::QHull::Vertex*  tail, ::Technie::PhysicsCreator::QHull::Vertex*  head)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"findHalfEdge", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::HalfEdge*>(this, ___internal_method, tail, head);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::setHull(::ArrayW<double_t>  coords, int32_t  nump, ::ArrayW<::ArrayW<int32_t>>  faceIndices, int32_t  numf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setHull", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::ArrayW<int32_t>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coords, nump, faceIndices, numf);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::build(::ArrayW<double_t>  coords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"build", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coords);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::build(::ArrayW<double_t>  coords, int32_t  nump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"build", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coords, nump);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::build(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"build", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::build(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  points, int32_t  nump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"build", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, nump);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::triangulate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"triangulate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::initBuffers(int32_t  nump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"initBuffers", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nump);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::setPoints(::ArrayW<double_t>  coords, int32_t  nump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setPoints", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coords, nump);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::setPoints(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  pnts, int32_t  nump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"setPoints", {}, {::i2c::type_of<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pnts, nump);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::computeMaxAndMin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"computeMaxAndMin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::createInitialSimplex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"createInitialSimplex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::QHull::QuickHull3D::getNumVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getNumVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*> Technie::PhysicsCreator::QHull::QuickHull3D::getVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::QHull::QuickHull3D::getVertices(::ArrayW<double_t>  coords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getVertices", {}, {::i2c::type_of<::ArrayW<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, coords);
}
inline ::ArrayW<int32_t> Technie::PhysicsCreator::QHull::QuickHull3D::getVertexPointIndices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getVertexPointIndices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline int32_t Technie::PhysicsCreator::QHull::QuickHull3D::getNumFaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getNumFaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::ArrayW<int32_t>> Technie::PhysicsCreator::QHull::QuickHull3D::getFaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getFaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<int32_t>>>(this, ___internal_method);
}
inline ::ArrayW<::ArrayW<int32_t>> Technie::PhysicsCreator::QHull::QuickHull3D::getFaces(int32_t  indexFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getFaces", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<int32_t>>>(this, ___internal_method, indexFlags);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::getFaceIndices(::ArrayW<int32_t>  indices, ::Technie::PhysicsCreator::QHull::Face*  face, int32_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"getFaceIndices", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, indices, face, flags);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::resolveUnclaimedPoints(::Technie::PhysicsCreator::QHull::FaceList*  newFaces)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"resolveUnclaimedPoints", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::FaceList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newFaces);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::deleteFacePoints(::Technie::PhysicsCreator::QHull::Face*  face, ::Technie::PhysicsCreator::QHull::Face*  absorbingFace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"deleteFacePoints", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, face, absorbingFace);
}
inline double_t Technie::PhysicsCreator::QHull::QuickHull3D::oppFaceDistance(::Technie::PhysicsCreator::QHull::HalfEdge*  he)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"oppFaceDistance", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, he);
}
inline bool Technie::PhysicsCreator::QHull::QuickHull3D::doAdjacentMerge(::Technie::PhysicsCreator::QHull::Face*  face, int32_t  mergeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"doAdjacentMerge", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, face, mergeType);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::calculateHorizon(::Technie::PhysicsCreator::QHull::Point3d*  eyePnt, ::Technie::PhysicsCreator::QHull::HalfEdge*  edge0, ::Technie::PhysicsCreator::QHull::Face*  face, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*  horizon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"calculateHorizon", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Point3d*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eyePnt, edge0, face, horizon);
}
inline ::Technie::PhysicsCreator::QHull::HalfEdge* Technie::PhysicsCreator::QHull::QuickHull3D::addAdjoiningFace(::Technie::PhysicsCreator::QHull::Vertex*  eyeVtx, ::Technie::PhysicsCreator::QHull::HalfEdge*  he)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"addAdjoiningFace", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::HalfEdge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::HalfEdge*>(this, ___internal_method, eyeVtx, he);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::addNewFaces(::Technie::PhysicsCreator::QHull::FaceList*  newFaces, ::Technie::PhysicsCreator::QHull::Vertex*  eyeVtx, ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*  horizon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"addNewFaces", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::FaceList*>(), ::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::QHull::HalfEdge*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newFaces, eyeVtx, horizon);
}
inline ::Technie::PhysicsCreator::QHull::Vertex* Technie::PhysicsCreator::QHull::QuickHull3D::nextPointToAdd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"nextPointToAdd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::QHull::Vertex*>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::addPointToHull(::Technie::PhysicsCreator::QHull::Vertex*  eyeVtx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"addPointToHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Vertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eyeVtx);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::buildHull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"buildHull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::markFaceVertices(::Technie::PhysicsCreator::QHull::Face*  face, int32_t  mark)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"markFaceVertices", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, face, mark);
}
inline void Technie::PhysicsCreator::QHull::QuickHull3D::reindexFacesAndVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"reindexFacesAndVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::QHull::QuickHull3D::checkFaceConvexity(::Technie::PhysicsCreator::QHull::Face*  face, double_t  tol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"checkFaceConvexity", {}, {::i2c::type_of<::Technie::PhysicsCreator::QHull::Face*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, face, tol);
}
inline bool Technie::PhysicsCreator::QHull::QuickHull3D::checkFaces(double_t  tol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"checkFaces", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tol);
}
inline bool Technie::PhysicsCreator::QHull::QuickHull3D::check()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"check", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::QHull::QuickHull3D::check(double_t  tol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::QHull::QuickHull3D*>(),
                        {"check", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tol);
}
inline ::Technie::PhysicsCreator::QHull::QuickHull3D* Technie::PhysicsCreator::QHull::QuickHull3D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::QuickHull3D*>());
}
inline ::Technie::PhysicsCreator::QHull::QuickHull3D* Technie::PhysicsCreator::QHull::QuickHull3D::New_ctor(::ArrayW<double_t>  coords)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::QuickHull3D*>(coords));
}
inline ::Technie::PhysicsCreator::QHull::QuickHull3D* Technie::PhysicsCreator::QHull::QuickHull3D::New_ctor(::ArrayW<::Technie::PhysicsCreator::QHull::Point3d*>  points)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::QHull::QuickHull3D*>(points));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::QHull::QuickHull3D::QuickHull3D()   {
}
