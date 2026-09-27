#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/DTSweep.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweep_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DTSweepContext_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__Orientation_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.Triangulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::Triangulate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb07e0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"Triangulate", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.Sweep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::Sweep)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xb07e3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"Sweep", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FinalizationConvexHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationConvexHull)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xb07e690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FinalizationConvexHull", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.TurnAdvancingFrontConvex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::TurnAdvancingFrontConvex)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb07ecac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"TurnAdvancingFrontConvex", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FinalizationPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationPolygon)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb07e5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FinalizationPolygon", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.PointEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::PointEvent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb07e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"PointEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.NewFrontTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::NewFrontTriangle)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb07f7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"NewFrontTriangle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.EdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb07eb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"EdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillEdgeEvent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb07fdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillRightConcaveEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConcaveEdgeEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb080208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillRightConcaveEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillRightConvexEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConvexEdgeEvent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb080304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillRightConvexEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillRightBelowEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightBelowEdgeEvent)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb080424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillRightBelowEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillRightAboveEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightAboveEdgeEvent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb07fff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillRightAboveEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillLeftConvexEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConvexEdgeEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb080550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillLeftConvexEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillLeftConcaveEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConcaveEdgeEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb080668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillLeftConcaveEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillLeftBelowEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftBelowEdgeEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb08075c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillLeftBelowEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillLeftAboveEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftAboveEdgeEvent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb080100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillLeftAboveEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.IsEdgeSideOfTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsEdgeSideOfTriangle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb07fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"IsEdgeSideOfTriangle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.EdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb07fe18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"EdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FlipEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipEdgeEvent)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0xb0808e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FlipEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.NextFlipPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipPoint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb080ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"NextFlipPoint", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.NextFlipTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::Orientation, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipTriangle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb080d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"NextFlipTriangle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::Orientation>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FlipScanEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipScanEdgeEvent)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb080f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FlipScanEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillAdvancingFront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillAdvancingFront)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb07f9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillAdvancingFront", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillBasin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasin)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb081238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillBasin", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.FillBasinReq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasinReq)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb08140c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillBasinReq", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.IsShallow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsShallow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb081580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"IsShallow", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.HoleAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::HoleAngle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb0810e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"HoleAngle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.BasinAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::BasinAngle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb0811a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"BasinAngle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::Fill)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb07f604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"Fill", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.Legalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::Legalize)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb07faa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"Legalize", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::Poly2Tri::DTSweep.RotateTrianglePair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&::UnityEngine::ProBuilder::Poly2Tri::DTSweep::RotateTrianglePair)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xb07ee18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"RotateTrianglePair", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::Triangulate(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"Triangulate", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::Sweep(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"Sweep", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationConvexHull(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FinalizationConvexHull", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::TurnAdvancingFrontConvex(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  b, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"TurnAdvancingFrontConvex", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, b, c);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationPolygon(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FinalizationPolygon", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::DTSweep::PointEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"PointEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(nullptr, ___internal_method, tcx, point);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::DTSweep::NewFrontTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"NewFrontTriangle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(nullptr, ___internal_method, tcx, point, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"EdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillRightConcaveEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillRightConvexEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillRightBelowEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillRightAboveEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillLeftConvexEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillLeftConcaveEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillLeftBelowEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  edge, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillLeftAboveEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsEdgeSideOfTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  triangle, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"IsEdgeSideOfTriangle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, triangle, ep, eq);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  triangle, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"EdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, ep, eq, triangle, point);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FlipEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, ep, eq, t, p);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"NextFlipPoint", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(nullptr, ___internal_method, ep, eq, ot, op);
}
inline ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::Orientation  o, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"NextFlipTriangle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::Orientation>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(nullptr, ___internal_method, tcx, o, t, ot, p, op);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipScanEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  ep, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  eq, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  flipTriangle, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FlipScanEdgeEvent", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, ep, eq, flipTriangle, t, p);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillAdvancingFront(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillAdvancingFront", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, n);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasin(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillBasin", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasinReq(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"FillBasinReq", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, node);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsShallow(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"IsShallow", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tcx, node);
}
inline double_t UnityEngine::ProBuilder::Poly2Tri::DTSweep::HoleAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"HoleAngle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, node);
}
inline double_t UnityEngine::ProBuilder::Poly2Tri::DTSweep::BasinAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"BasinAngle", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, node);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::Fill(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"Fill", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, node);
}
inline bool UnityEngine::ProBuilder::Poly2Tri::DTSweep::Legalize(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*  tcx, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"Legalize", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tcx, t);
}
inline void UnityEngine::ProBuilder::Poly2Tri::DTSweep::RotateTrianglePair(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  p, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*  ot, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::Poly2Tri::DTSweep*>(),
                        {"RotateTrianglePair", {}, {::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, p, ot, op);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweep::DTSweep()   {
}
