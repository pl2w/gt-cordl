#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepConstraint.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationConstraint_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepConstraint::*)(::Pathfinding::Poly2Tri::TriangulationPoint*, ::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::DTSweepConstraint::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa6b5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Poly2Tri::DTSweepConstraint::_ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepConstraint*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>(), ::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2);
}
inline ::Pathfinding::Poly2Tri::DTSweepConstraint* Pathfinding::Poly2Tri::DTSweepConstraint::New_ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  p1, ::Pathfinding::Poly2Tri::TriangulationPoint*  p2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::DTSweepConstraint*>(p1, p2));
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::DTSweepConstraint::DTSweepConstraint()   {
}
