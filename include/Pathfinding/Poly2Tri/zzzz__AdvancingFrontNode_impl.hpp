#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/AdvancingFrontNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DelaunayTriangle_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFrontNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::AdvancingFrontNode::*)(::Pathfinding::Poly2Tri::TriangulationPoint*)>(&::Pathfinding::Poly2Tri::AdvancingFrontNode::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa6b2434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFrontNode.get_HasNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::AdvancingFrontNode::*)()>(&::Pathfinding::Poly2Tri::AdvancingFrontNode::get_HasNext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6b2478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(),
                        {"get_HasNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Poly2Tri::AdvancingFrontNode.get_HasPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Poly2Tri::AdvancingFrontNode::*)()>(&::Pathfinding::Poly2Tri::AdvancingFrontNode::get_HasPrev)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6b2488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(),
                        {"get_HasPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Next(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr void Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Prev(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prev = value;
}
constexpr double_t& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr double_t const& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Value(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint*& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Point()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr ::Pathfinding::Poly2Tri::TriangulationPoint* const& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Point() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr void Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Point(::Pathfinding::Poly2Tri::TriangulationPoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Point = value;
}
constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle*& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Triangle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Triangle;
}
constexpr ::Pathfinding::Poly2Tri::DelaunayTriangle* const& Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_get_Triangle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Triangle;
}
constexpr void Pathfinding::Poly2Tri::AdvancingFrontNode::__cordl_internal_set_Triangle(::Pathfinding::Poly2Tri::DelaunayTriangle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Triangle = value;
}
inline void Pathfinding::Poly2Tri::AdvancingFrontNode::_ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Poly2Tri::TriangulationPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
inline bool Pathfinding::Poly2Tri::AdvancingFrontNode::get_HasNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(),
                        {"get_HasNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::Poly2Tri::AdvancingFrontNode::get_HasPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(),
                        {"get_HasPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::AdvancingFrontNode* Pathfinding::Poly2Tri::AdvancingFrontNode::New_ctor(::Pathfinding::Poly2Tri::TriangulationPoint*  point)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::AdvancingFrontNode*>(point));
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode::AdvancingFrontNode()   {
}
