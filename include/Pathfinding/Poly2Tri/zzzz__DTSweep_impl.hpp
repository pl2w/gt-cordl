#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweep.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweep_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepContext_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Orientation_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.Triangulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*)>(&::Pathfinding::Poly2Tri::DTSweep::Triangulate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa6b0254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"Triangulate", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.Sweep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*)>(&::Pathfinding::Poly2Tri::DTSweep::Sweep)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa6b2734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"Sweep", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FinalizationConvexHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*)>(&::Pathfinding::Poly2Tri::DTSweep::FinalizationConvexHull)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa6b29ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FinalizationConvexHull", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.TurnAdvancingFrontConvex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::TurnAdvancingFrontConvex)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa6b3010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"TurnAdvancingFrontConvex", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FinalizationPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*)>(&::Pathfinding::Poly2Tri::DTSweep::FinalizationPolygon)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6b2948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FinalizationPolygon", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.PointEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::AdvancingFrontNode* (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweep::PointEvent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa6b2c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"PointEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.NewFrontTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::AdvancingFrontNode* (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::NewFrontTriangle)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa6b3b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"NewFrontTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.EdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::EdgeEvent)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa6b2e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"EdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillEdgeEvent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa6b4150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillRightConcaveEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillRightConcaveEdgeEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa6b456c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillRightConcaveEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillRightConvexEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillRightConvexEdgeEvent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa6b4668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillRightConvexEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillRightBelowEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillRightBelowEdgeEvent)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa6b4788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillRightBelowEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillRightAboveEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillRightAboveEdgeEvent)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa6b4358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillRightAboveEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillLeftConvexEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillLeftConvexEdgeEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa6b48b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillLeftConvexEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillLeftConcaveEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillLeftConcaveEdgeEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa6b49cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillLeftConcaveEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillLeftBelowEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillLeftBelowEdgeEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa6b4ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillLeftBelowEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillLeftAboveEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DTSweepConstraint*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillLeftAboveEdgeEvent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa6b4464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillLeftAboveEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.IsEdgeSideOfTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweep::IsEdgeSideOfTriangle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa6b40a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"IsEdgeSideOfTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.EdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweep::EdgeEvent)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa6b417c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"EdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FlipEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweep::FlipEdgeEvent)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa6b4dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FlipEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.NextFlipPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationPoint* (*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweep::NextFlipPoint)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa6b51b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"NextFlipPoint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.NextFlipTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::DelaunayTriangle* (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::Orientation, ::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweep::NextFlipTriangle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6b5114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"NextFlipTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::Orientation>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FlipScanEdgeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweep::FlipScanEdgeEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa6b5310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FlipScanEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillAdvancingFront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillAdvancingFront)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa6b3d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillAdvancingFront", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillBasin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillBasin)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa6b55d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillBasin", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.FillBasinReq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::FillBasinReq)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa6b57a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillBasinReq", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.IsShallow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::IsShallow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa6b591c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"IsShallow", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.HoleAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::HoleAngle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa6b547c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"HoleAngle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.BasinAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::BasinAngle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa6b553c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"BasinAngle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::AdvancingFrontNode*)>(&::Pathfinding::Poly2Tri::DTSweep::Fill)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa6b3968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"Fill", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.Legalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::Poly2Tri::DTSweepContext*, ::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::DTSweep::Legalize)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xa6b3e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"Legalize", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweep.RotateTrianglePair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::DelaunayTriangle*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweep::RotateTrianglePair)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xa6b317c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"RotateTrianglePair", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Poly2Tri::DTSweep::Triangulate(::Pathfinding::Poly2Tri::DTSweepContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"Triangulate", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
inline void Pathfinding::Poly2Tri::DTSweep::Sweep(::Pathfinding::Poly2Tri::DTSweepContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"Sweep", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
inline void Pathfinding::Poly2Tri::DTSweep::FinalizationConvexHull(::Pathfinding::Poly2Tri::DTSweepContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FinalizationConvexHull", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
inline void Pathfinding::Poly2Tri::DTSweep::TurnAdvancingFrontConvex(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  b, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"TurnAdvancingFrontConvex", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, b, c);
}
inline void Pathfinding::Poly2Tri::DTSweep::FinalizationPolygon(::Pathfinding::Poly2Tri::DTSweepContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FinalizationPolygon", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* Pathfinding::Poly2Tri::DTSweep::PointEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"PointEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(nullptr, ___internal_method, tcx, point);
}
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* Pathfinding::Poly2Tri::DTSweep::NewFrontTriangle(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  point, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"NewFrontTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(nullptr, ___internal_method, tcx, point, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::EdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"EdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillRightConcaveEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillRightConcaveEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillRightConvexEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillRightConvexEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillRightBelowEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillRightBelowEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillRightAboveEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillRightAboveEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillLeftConvexEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillLeftConvexEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillLeftConcaveEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillLeftConcaveEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillLeftBelowEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillLeftBelowEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillLeftAboveEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DTSweepConstraint*  edge, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillLeftAboveEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, edge, node);
}
inline bool Pathfinding::Poly2Tri::DTSweep::IsEdgeSideOfTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle, ::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"IsEdgeSideOfTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, triangle, ep, eq);
}
inline void Pathfinding::Poly2Tri::DTSweep::EdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq, ::Pathfinding::Poly2Tri::DelaunayTriangle*  triangle, ::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"EdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, ep, eq, triangle, point);
}
inline void Pathfinding::Poly2Tri::DTSweep::FlipEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FlipEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, ep, eq, t, p);
}
inline ::Pathfinding::Poly2Tri::TriangulationPoint* Pathfinding::Poly2Tri::DTSweep::NextFlipPoint(::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq, ::Pathfinding::Poly2Tri::DelaunayTriangle*  ot, ::Pathfinding::Poly2Tri::TriangulationPoint*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"NextFlipPoint", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationPoint*>(nullptr, ___internal_method, ep, eq, ot, op);
}
inline ::Pathfinding::Poly2Tri::DelaunayTriangle* Pathfinding::Poly2Tri::DTSweep::NextFlipTriangle(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::Orientation  o, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::DelaunayTriangle*  ot, ::Pathfinding::Poly2Tri::TriangulationPoint*  p, ::Pathfinding::Poly2Tri::TriangulationPoint*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"NextFlipTriangle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::Orientation>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::DelaunayTriangle*>(nullptr, ___internal_method, tcx, o, t, ot, p, op);
}
inline void Pathfinding::Poly2Tri::DTSweep::FlipScanEdgeEvent(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::TriangulationPoint*  ep, ::Pathfinding::Poly2Tri::TriangulationPoint*  eq, ::Pathfinding::Poly2Tri::DelaunayTriangle*  flipTriangle, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::TriangulationPoint*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FlipScanEdgeEvent", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, ep, eq, flipTriangle, t, p);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillAdvancingFront(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillAdvancingFront", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, n);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillBasin(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillBasin", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::FillBasinReq(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"FillBasinReq", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, node);
}
inline bool Pathfinding::Poly2Tri::DTSweep::IsShallow(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"IsShallow", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tcx, node);
}
inline double_t Pathfinding::Poly2Tri::DTSweep::HoleAngle(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"HoleAngle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, node);
}
inline double_t Pathfinding::Poly2Tri::DTSweep::BasinAngle(::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"BasinAngle", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, node);
}
inline void Pathfinding::Poly2Tri::DTSweep::Fill(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::AdvancingFrontNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"Fill", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx, node);
}
inline bool Pathfinding::Poly2Tri::DTSweep::Legalize(::Pathfinding::Poly2Tri::DTSweepContext*  tcx, ::Pathfinding::Poly2Tri::DelaunayTriangle*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"Legalize", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DTSweepContext*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tcx, t);
}
inline void Pathfinding::Poly2Tri::DTSweep::RotateTrianglePair(::Pathfinding::Poly2Tri::DelaunayTriangle*  t, ::Pathfinding::Poly2Tri::TriangulationPoint*  p, ::Pathfinding::Poly2Tri::DelaunayTriangle*  ot, ::Pathfinding::Poly2Tri::TriangulationPoint*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweep*>(),
                        {"RotateTrianglePair", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::DelaunayTriangle*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, p, ot, op);
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::DTSweep::DTSweep()   {
}
