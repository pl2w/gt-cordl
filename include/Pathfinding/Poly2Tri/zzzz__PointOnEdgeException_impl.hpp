#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/PointOnEdgeException.hpp"
#include "System/zzzz__NotImplementedException_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__PointOnEdgeException_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::PointOnEdgeException._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::PointOnEdgeException::*)(::StringW, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::PointOnEdgeException::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa6b4be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PointOnEdgeException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& Pathfinding::Poly2Tri::PointOnEdgeException::__cordl_internal_get_A()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___A;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& Pathfinding::Poly2Tri::PointOnEdgeException::__cordl_internal_get_A() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___A;
}
constexpr void Pathfinding::Poly2Tri::PointOnEdgeException::__cordl_internal_set_A(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___A = value;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& Pathfinding::Poly2Tri::PointOnEdgeException::__cordl_internal_get_B()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___B;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& Pathfinding::Poly2Tri::PointOnEdgeException::__cordl_internal_get_B() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___B;
}
constexpr void Pathfinding::Poly2Tri::PointOnEdgeException::__cordl_internal_set_B(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___B = value;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& Pathfinding::Poly2Tri::PointOnEdgeException::__cordl_internal_get_C()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___C;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& Pathfinding::Poly2Tri::PointOnEdgeException::__cordl_internal_get_C() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___C;
}
constexpr void Pathfinding::Poly2Tri::PointOnEdgeException::__cordl_internal_set_C(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___C = value;
}
inline void Pathfinding::Poly2Tri::PointOnEdgeException::_ctor(::StringW  message, ::Pathfinding::Poly2Tri::TriangulationPoint*  a, ::Pathfinding::Poly2Tri::TriangulationPoint*  b, ::Pathfinding::Poly2Tri::TriangulationPoint*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::PointOnEdgeException*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, a, b, c);
}
inline ::Pathfinding::Poly2Tri::PointOnEdgeException* Pathfinding::Poly2Tri::PointOnEdgeException::New_ctor(::StringW  message, ::Pathfinding::Poly2Tri::TriangulationPoint*  a, ::Pathfinding::Poly2Tri::TriangulationPoint*  b, ::Pathfinding::Poly2Tri::TriangulationPoint*  c)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::PointOnEdgeException*>(message, a, b, c));
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::PointOnEdgeException::PointOnEdgeException()   {
}
