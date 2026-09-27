#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/DelaunayTriangle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedBitArray3_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.get_IsInterior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::get_IsInterior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb07cfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"get_IsInterior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.set_IsInterior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(bool)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::set_IsInterior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb07cfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"set_IsInterior", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb07cfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexOf)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb07d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"IndexOf", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.IndexCCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCCWFrom)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb07d0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"IndexCCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb07d130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkNeighbor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb07d188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkNeighbor", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkNeighbor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb07d318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkNeighbor", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.OppositePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::OppositePoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb07d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"OppositePoint", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.NeighborCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCWFrom)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb07d570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.NeighborCCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCCWFrom)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb07d60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborCCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.NeighborAcrossFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb07d6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborAcrossFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.PointCCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCCWFrom)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb07d724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"PointCCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.PointCWFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCWFrom)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb07d4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"PointCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.RotateCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::RotateCW)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb07d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"RotateCW", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.Legalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Legalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb07d870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"Legalize", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::ToString)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb07d904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                    {::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkConstrainedEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(int32_t)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb07daa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkConstrainedEdge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.MarkConstrainedEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb07db10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkConstrainedEdge", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.EdgeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::EdgeIndex)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb07d24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"EdgeIndex", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetConstrainedEdgeCCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb07db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"GetConstrainedEdgeCCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetConstrainedEdgeCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb07dbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"GetConstrainedEdgeCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetConstrainedEdgeCCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb07dc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"SetConstrainedEdgeCCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetConstrainedEdgeCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb07dc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"SetConstrainedEdgeCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetDelaunayEdgeCCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb07dcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"GetDelaunayEdgeCCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.GetDelaunayEdgeCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb07dcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"GetDelaunayEdgeCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetDelaunayEdgeCCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb07dd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"SetDelaunayEdgeCCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle.SetDelaunayEdgeCW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb07dd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"SetDelaunayEdgeCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> const& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Points;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set_Points(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Points = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Neighbors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Neighbors;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> const& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_Neighbors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Neighbors;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set_Neighbors(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Neighbors = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsConstrained()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeIsConstrained;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsConstrained() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeIsConstrained;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set_EdgeIsConstrained(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EdgeIsConstrained = value;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsDelaunay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeIsDelaunay;
}
constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get_EdgeIsDelaunay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EdgeIsDelaunay;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set_EdgeIsDelaunay(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EdgeIsDelaunay = value;
}
constexpr bool& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get__IsInterior_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInterior_k__BackingField;
}
constexpr bool const& UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_get__IsInterior_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInterior_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::__cordl_internal_set__IsInterior_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInterior_k__BackingField = value;
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::get_IsInterior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"get_IsInterior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::set_IsInterior(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"set_IsInterior", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, p3);
}
inline int32_t UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexOf(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"IndexOf", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline int32_t UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"IndexCCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Contains(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p2, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkNeighbor", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, t);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkNeighbor", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::OppositePoint(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"OppositePoint", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(this, ___internal_method, t, p);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborCCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"NeighborAcrossFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"PointCCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(this, ___internal_method, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"PointCWFrom", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(this, ___internal_method, point);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::RotateCW()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"RotateCW", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Legalize(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  oPoint, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  nPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"Legalize", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oPoint, nPoint);
}
inline ::StringW UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkConstrainedEdge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"MarkConstrainedEdge", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, q);
}
inline int32_t UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::EdgeIndex(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"EdgeIndex", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, p1, p2);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"GetConstrainedEdgeCCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"GetConstrainedEdgeCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p, bool  ce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"SetConstrainedEdgeCCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p, bool  ce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"SetConstrainedEdgeCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"GetDelaunayEdgeCCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"GetDelaunayEdgeCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p, bool  ce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"SetDelaunayEdgeCCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p, bool  ce)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(),
                        {"SetDelaunayEdgeCW", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, ce);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(p1, p2, p3));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::DelaunayTriangle()   {
}
