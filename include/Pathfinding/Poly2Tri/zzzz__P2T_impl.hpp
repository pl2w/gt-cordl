#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/P2T.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationAlgorithm_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__P2T_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Polygon_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Triangulatable_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationAlgorithm_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationContext_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::P2T.Triangulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::Polygon*)>(&::Pathfinding::Poly2Tri::P2T::Triangulate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa6affec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::P2T*>(),
                        {"Triangulate", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::Polygon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::P2T.CreateContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationContext* (*)(::Pathfinding::Poly2Tri::TriangulationAlgorithm)>(&::Pathfinding::Poly2Tri::P2T::CreateContext)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa6b0078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::P2T*>(),
                        {"CreateContext", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationAlgorithm>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::P2T.Triangulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::TriangulationAlgorithm, ::Pathfinding::Poly2Tri::Triangulatable*)>(&::Pathfinding::Poly2Tri::P2T::Triangulate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa6b003c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::P2T*>(),
                        {"Triangulate", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationAlgorithm>(), ::i2c::type_of<::Pathfinding::Poly2Tri::Triangulatable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::P2T.Triangulate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Poly2Tri::TriangulationContext*)>(&::Pathfinding::Poly2Tri::P2T::Triangulate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa6b01c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::P2T*>(),
                        {"Triangulate", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Poly2Tri::P2T::setStaticF__defaultAlgorithm(::Pathfinding::Poly2Tri::TriangulationAlgorithm  value)  {
::cordl_internals::setStaticField<::Pathfinding::Poly2Tri::TriangulationAlgorithm, "_defaultAlgorithm", ::Pathfinding::Poly2Tri::P2T*>(std::forward<::Pathfinding::Poly2Tri::TriangulationAlgorithm>(value));
}
inline ::Pathfinding::Poly2Tri::TriangulationAlgorithm Pathfinding::Poly2Tri::P2T::getStaticF__defaultAlgorithm()  {
return ::cordl_internals::getStaticField<::Pathfinding::Poly2Tri::TriangulationAlgorithm, "_defaultAlgorithm", ::Pathfinding::Poly2Tri::P2T*>();
}
inline void Pathfinding::Poly2Tri::P2T::Triangulate(::Pathfinding::Poly2Tri::Polygon*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::P2T*>(),
                        {"Triangulate", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::Polygon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p);
}
inline ::Pathfinding::Poly2Tri::TriangulationContext* Pathfinding::Poly2Tri::P2T::CreateContext(::Pathfinding::Poly2Tri::TriangulationAlgorithm  algorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::P2T*>(),
                        {"CreateContext", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationAlgorithm>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationContext*>(nullptr, ___internal_method, algorithm);
}
inline void Pathfinding::Poly2Tri::P2T::Triangulate(::Pathfinding::Poly2Tri::TriangulationAlgorithm  algorithm, ::Pathfinding::Poly2Tri::Triangulatable*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::P2T*>(),
                        {"Triangulate", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationAlgorithm>(), ::i2c::type_of<::Pathfinding::Poly2Tri::Triangulatable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, algorithm, t);
}
inline void Pathfinding::Poly2Tri::P2T::Triangulate(::Pathfinding::Poly2Tri::TriangulationContext*  tcx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::P2T*>(),
                        {"Triangulate", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tcx);
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::P2T::P2T()   {
}
