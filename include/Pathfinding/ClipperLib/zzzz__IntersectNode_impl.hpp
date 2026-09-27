#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/IntersectNode.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntersectNode_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__TEdge_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::IntersectNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::IntersectNode::*)()>(&::Pathfinding::ClipperLib::IntersectNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6835c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntersectNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::IntersectNode::__cordl_internal_get_Edge1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Edge1;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::IntersectNode::__cordl_internal_get_Edge1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Edge1;
}
constexpr void Pathfinding::ClipperLib::IntersectNode::__cordl_internal_set_Edge1(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Edge1 = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::IntersectNode::__cordl_internal_get_Edge2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Edge2;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::IntersectNode::__cordl_internal_get_Edge2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Edge2;
}
constexpr void Pathfinding::ClipperLib::IntersectNode::__cordl_internal_set_Edge2(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Edge2 = value;
}
constexpr ::Pathfinding::ClipperLib::IntPoint& Pathfinding::ClipperLib::IntersectNode::__cordl_internal_get_Pt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pt;
}
constexpr ::Pathfinding::ClipperLib::IntPoint const& Pathfinding::ClipperLib::IntersectNode::__cordl_internal_get_Pt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pt;
}
constexpr void Pathfinding::ClipperLib::IntersectNode::__cordl_internal_set_Pt(::Pathfinding::ClipperLib::IntPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pt = value;
}
constexpr ::Pathfinding::ClipperLib::IntersectNode*& Pathfinding::ClipperLib::IntersectNode::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Pathfinding::ClipperLib::IntersectNode* const& Pathfinding::ClipperLib::IntersectNode::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Pathfinding::ClipperLib::IntersectNode::__cordl_internal_set_Next(::Pathfinding::ClipperLib::IntersectNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
inline void Pathfinding::ClipperLib::IntersectNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::IntersectNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::IntersectNode* Pathfinding::ClipperLib::IntersectNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::IntersectNode*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::IntersectNode::IntersectNode()   {
}
