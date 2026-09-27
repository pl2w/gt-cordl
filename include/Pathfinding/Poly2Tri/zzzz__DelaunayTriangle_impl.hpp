#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DelaunayTriangle.hpp"
#include "Pathfinding/Poly2Tri/zzzz__FixedArray3_1_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__FixedBitArray3_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa6b1308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.get_IsInterior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::DelaunayTriangle::*)()>(&::Pathfinding::Poly2Tri::DelaunayTriangle::get_IsInterior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b13a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"get_IsInterior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.set_IsInterior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(bool)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::set_IsInterior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b13b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"set_IsInterior", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::IndexOf)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6b13b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.IndexCCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::IndexCCWFrom)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa6b1464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"IndexCCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6b1498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"Contains", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.MarkNeighbor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa6b14f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkNeighbor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.MarkNeighbor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa6b1680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkNeighbor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.OppositePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationPoint* (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::OppositePoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa6b1828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"OppositePoint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.NeighborCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::DelaunayTriangle* (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::NeighborCWFrom)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa6b18d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.NeighborCCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::DelaunayTriangle* (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::NeighborCCWFrom)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa6b1974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborCCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.NeighborAcrossFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::DelaunayTriangle* (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa6b1a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborAcrossFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.PointCCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationPoint* (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::PointCCWFrom)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6b1a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"PointCCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.PointCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationPoint* (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::PointCWFrom)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa6b1854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"PointCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.RotateCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)()>(&::Pathfinding::Poly2Tri::DelaunayTriangle::RotateCW)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa6b1b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"RotateCW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.Legalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::Legalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa6b1bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"Legalize", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Poly2Tri::DelaunayTriangle::*)()>(&::Pathfinding::Poly2Tri::DelaunayTriangle::ToString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa6b1c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.MarkConstrainedEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(int32_t)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa6b1e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkConstrainedEdge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.MarkConstrainedEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa6b1eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkConstrainedEdge", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.EdgeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::EdgeIndex)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa6b15b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"EdgeIndex", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.GetConstrainedEdgeCCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6b1ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"GetConstrainedEdgeCCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.GetConstrainedEdgeCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6b1f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"GetConstrainedEdgeCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.SetConstrainedEdgeCCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, bool)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6b1fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"SetConstrainedEdgeCCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.SetConstrainedEdgeCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, bool)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6b200c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"SetConstrainedEdgeCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.GetDelaunayEdgeCCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6b2058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"GetDelaunayEdgeCCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.GetDelaunayEdgeCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6b2094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"GetDelaunayEdgeCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.SetDelaunayEdgeCCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, bool)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6b20d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"SetDelaunayEdgeCCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DelaunayTriangle.SetDelaunayEdgeCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DelaunayTriangle::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, bool)>(&::Pathfinding::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6b211c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"SetDelaunayEdgeCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*>& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*> const& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr void Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_set_Points(::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::TriangulationPoint*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Points = value;
}
constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Neighbors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Neighbors;
}
constexpr ::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*> const& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Neighbors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Neighbors;
}
constexpr void Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_set_Neighbors(::Pathfinding::Poly2Tri::FixedArray3_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Neighbors = value;
}
constexpr ::Pathfinding::Poly2Tri::FixedBitArray3& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsConstrained()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeIsConstrained;
}
constexpr ::Pathfinding::Poly2Tri::FixedBitArray3 const& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsConstrained() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeIsConstrained;
}
constexpr void Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_set_EdgeIsConstrained(::Pathfinding::Poly2Tri::FixedBitArray3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EdgeIsConstrained = value;
}
constexpr ::Pathfinding::Poly2Tri::FixedBitArray3& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsDelaunay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeIsDelaunay;
}
constexpr ::Pathfinding::Poly2Tri::FixedBitArray3 const& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsDelaunay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeIsDelaunay;
}
constexpr void Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_set_EdgeIsDelaunay(::Pathfinding::Poly2Tri::FixedBitArray3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EdgeIsDelaunay = value;
}
constexpr bool& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get__IsInterior_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInterior_k__BackingField;
}
constexpr bool const& Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_get__IsInterior_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInterior_k__BackingField;
}
constexpr void Pathfinding::Poly2Tri::DelaunayTriangle::__cordl_internal_set__IsInterior_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInterior_k__BackingField = value;
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::_ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2, ::Pathfinding::Poly2Tri::TriangulationPoint*  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, p3);
}
inline bool Pathfinding::Poly2Tri::DelaunayTriangle::get_IsInterior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"get_IsInterior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::set_IsInterior(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"set_IsInterior", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::Poly2Tri::DelaunayTriangle::IndexOf(::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"IndexOf", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline int32_t Pathfinding::Poly2Tri::DelaunayTriangle::IndexCCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"IndexCCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline bool Pathfinding::Poly2Tri::DelaunayTriangle::Contains(::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"Contains", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::MarkNeighbor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkNeighbor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, t);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::MarkNeighbor(::Pathfinding::Poly2Tri::DelaunayTriangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkNeighbor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::Pathfinding::Poly2Tri::TriangulationPoint* Pathfinding::Poly2Tri::DelaunayTriangle::OppositePoint(::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"OppositePoint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationPoint*>(this, ___internal_method, t, p);
}
inline ::Pathfinding::Poly2Tri::DelaunayTriangle* Pathfinding::Poly2Tri::DelaunayTriangle::NeighborCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::DelaunayTriangle*>(this, ___internal_method, point);
}
inline ::Pathfinding::Poly2Tri::DelaunayTriangle* Pathfinding::Poly2Tri::DelaunayTriangle::NeighborCCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborCCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::DelaunayTriangle*>(this, ___internal_method, point);
}
inline ::Pathfinding::Poly2Tri::DelaunayTriangle* Pathfinding::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborAcrossFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::DelaunayTriangle*>(this, ___internal_method, point);
}
inline ::Pathfinding::Poly2Tri::TriangulationPoint* Pathfinding::Poly2Tri::DelaunayTriangle::PointCCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"PointCCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationPoint*>(this, ___internal_method, point);
}
inline ::Pathfinding::Poly2Tri::TriangulationPoint* Pathfinding::Poly2Tri::DelaunayTriangle::PointCWFrom(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"PointCWFrom", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationPoint*>(this, ___internal_method, point);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::RotateCW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"RotateCW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::Legalize(::Pathfinding::Poly2Tri::TriangulationPoint*  oPoint, ::Pathfinding::Poly2Tri::TriangulationPoint*  nPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"Legalize", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oPoint, nPoint);
}
inline ::StringW Pathfinding::Poly2Tri::DelaunayTriangle::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkConstrainedEdge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge(::Pathfinding::Poly2Tri::TriangulationPoint*  p, ::Pathfinding::Poly2Tri::TriangulationPoint*  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkConstrainedEdge", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, q);
}
inline int32_t Pathfinding::Poly2Tri::DelaunayTriangle::EdgeIndex(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"EdgeIndex", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p1, p2);
}
inline bool Pathfinding::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"GetConstrainedEdgeCCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool Pathfinding::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"GetConstrainedEdgeCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p, bool  ce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"SetConstrainedEdgeCCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p, bool  ce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"SetConstrainedEdgeCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline bool Pathfinding::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"GetDelaunayEdgeCCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool Pathfinding::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"GetDelaunayEdgeCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p, bool  ce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"SetDelaunayEdgeCCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline void Pathfinding::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW(::Pathfinding::Poly2Tri::TriangulationPoint*  p, bool  ce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(),
                        {"SetDelaunayEdgeCW", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline ::Pathfinding::Poly2Tri::DelaunayTriangle* Pathfinding::Poly2Tri::DelaunayTriangle::New_ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2, ::Pathfinding::Poly2Tri::TriangulationPoint*  p3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::DelaunayTriangle*>(p1, p2, p3));
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle::DelaunayTriangle()   {
}
