#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/Triangulatable.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Triangulatable_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationMode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Triangulatable.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Triangulatable::*)(::Pathfinding::Poly2Tri::TriangulationContext*)>(&::Pathfinding::Poly2Tri::Triangulatable::Prepare)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Triangulatable.AddTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Triangulatable::*)(::Pathfinding::Poly2Tri::DelaunayTriangle*)>(&::Pathfinding::Poly2Tri::Triangulatable::AddTriangle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Triangulatable.AddTriangles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::Triangulatable::*)(::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*)>(&::Pathfinding::Poly2Tri::Triangulatable::AddTriangles)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::Triangulatable.get_TriangulationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Poly2Tri::TriangulationMode (::Pathfinding::Poly2Tri::Triangulatable::*)()>(&::Pathfinding::Poly2Tri::Triangulatable::get_TriangulationMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(),
                    {::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::Poly2Tri::Triangulatable::Prepare(::Pathfinding::Poly2Tri::TriangulationContext*  tcx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tcx);
}
inline void Pathfinding::Poly2Tri::Triangulatable::AddTriangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void Pathfinding::Poly2Tri::Triangulatable::AddTriangles(::System::Collections::Generic::IEnumerable_1<::Pathfinding::Poly2Tri::DelaunayTriangle*>*  list)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::Pathfinding::Poly2Tri::TriangulationMode Pathfinding::Poly2Tri::Triangulatable::get_TriangulationMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Poly2Tri::Triangulatable*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Poly2Tri::TriangulationMode>(this, ___internal_method);
}
