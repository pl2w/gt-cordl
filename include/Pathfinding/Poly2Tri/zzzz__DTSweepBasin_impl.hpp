#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/DTSweepBasin.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Poly2Tri/zzzz__DTSweepBasin_def.hpp"
#include "Pathfinding/Poly2Tri/zzzz__AdvancingFrontNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::Poly2Tri::DTSweepBasin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Poly2Tri::DTSweepBasin::*)()>(&::Pathfinding::Poly2Tri::DTSweepBasin::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6b5a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepBasin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_leftNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftNode;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_leftNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftNode;
}
constexpr void Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_set_leftNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftNode = value;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_bottomNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomNode;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_bottomNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomNode;
}
constexpr void Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_set_bottomNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomNode = value;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode*& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_rightNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightNode;
}
constexpr ::Pathfinding::Poly2Tri::AdvancingFrontNode* const& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_rightNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightNode;
}
constexpr void Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_set_rightNode(::Pathfinding::Poly2Tri::AdvancingFrontNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightNode = value;
}
constexpr double_t& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr double_t const& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_set_width(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr bool& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_leftHighest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHighest;
}
constexpr bool const& Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_get_leftHighest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHighest;
}
constexpr void Pathfinding::Poly2Tri::DTSweepBasin::__cordl_internal_set_leftHighest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHighest = value;
}
inline void Pathfinding::Poly2Tri::DTSweepBasin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Poly2Tri::DTSweepBasin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Poly2Tri::DTSweepBasin* Pathfinding::Poly2Tri::DTSweepBasin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Poly2Tri::DTSweepBasin*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::DTSweepBasin::DTSweepBasin()   {
}
