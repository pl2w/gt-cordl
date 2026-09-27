#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepEdgeEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepEdgeEvent_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepConstraint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepEdgeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepEdgeEvent::*)()>(&::Pathfinding::Poly2Tri::DTSweepEdgeEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b5c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepEdgeEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Poly2Tri::DTSweepConstraint*& Pathfinding::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_ConstrainedEdge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstrainedEdge;
}
constexpr ::Pathfinding::Poly2Tri::DTSweepConstraint* const& Pathfinding::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_ConstrainedEdge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstrainedEdge;
}
constexpr void Pathfinding::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_set_ConstrainedEdge(::Pathfinding::Poly2Tri::DTSweepConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConstrainedEdge = value;
}
constexpr bool& Pathfinding::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_Right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Right;
}
constexpr bool const& Pathfinding::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_get_Right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Right;
}
constexpr void Pathfinding::Poly2Tri::DTSweepEdgeEvent::__cordl_internal_set_Right(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Right = value;
}
inline void Pathfinding::Poly2Tri::DTSweepEdgeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepEdgeEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::DTSweepEdgeEvent* Pathfinding::Poly2Tri::DTSweepEdgeEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::DTSweepEdgeEvent*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::DTSweepEdgeEvent::DTSweepEdgeEvent()   {
}
