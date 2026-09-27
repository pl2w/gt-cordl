#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationConstraint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationConstraint_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::TriangulationConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::TriangulationConstraint::*)()>(&::Pathfinding::Poly2Tri::TriangulationConstraint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b5b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationConstraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& Pathfinding::Poly2Tri::TriangulationConstraint::__cordl_internal_get_P()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___P;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& Pathfinding::Poly2Tri::TriangulationConstraint::__cordl_internal_get_P() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___P;
}
constexpr void Pathfinding::Poly2Tri::TriangulationConstraint::__cordl_internal_set_P(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___P = value;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& Pathfinding::Poly2Tri::TriangulationConstraint::__cordl_internal_get_Q()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Q;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& Pathfinding::Poly2Tri::TriangulationConstraint::__cordl_internal_get_Q() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Q;
}
constexpr void Pathfinding::Poly2Tri::TriangulationConstraint::__cordl_internal_set_Q(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Q = value;
}
inline void Pathfinding::Poly2Tri::TriangulationConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::TriangulationConstraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::TriangulationConstraint* Pathfinding::Poly2Tri::TriangulationConstraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::TriangulationConstraint*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::TriangulationConstraint::TriangulationConstraint()   {
}
