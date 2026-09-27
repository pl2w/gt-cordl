#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/TEdge.hpp"
#include "Pathfinding/ClipperLib/zzzz__EdgeSide_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__TEdge_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::TEdge._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::TEdge::*)()>(&::Pathfinding::ClipperLib::TEdge::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6835c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::TEdge*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::ClipperLib::IntPoint& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Bot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bot;
}
constexpr ::Pathfinding::ClipperLib::IntPoint const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Bot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bot;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_Bot(::Pathfinding::ClipperLib::IntPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bot = value;
}
constexpr ::Pathfinding::ClipperLib::IntPoint& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Curr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curr;
}
constexpr ::Pathfinding::ClipperLib::IntPoint const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Curr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Curr;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_Curr(::Pathfinding::ClipperLib::IntPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Curr = value;
}
constexpr ::Pathfinding::ClipperLib::IntPoint& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Top()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Top;
}
constexpr ::Pathfinding::ClipperLib::IntPoint const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Top() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Top;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_Top(::Pathfinding::ClipperLib::IntPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Top = value;
}
constexpr ::Pathfinding::ClipperLib::IntPoint& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Delta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delta;
}
constexpr ::Pathfinding::ClipperLib::IntPoint const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Delta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delta;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_Delta(::Pathfinding::ClipperLib::IntPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delta = value;
}
constexpr double_t& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Dx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dx;
}
constexpr double_t const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Dx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Dx;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_Dx(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Dx = value;
}
constexpr ::Pathfinding::ClipperLib::PolyType& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_PolyTyp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PolyTyp;
}
constexpr ::Pathfinding::ClipperLib::PolyType const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_PolyTyp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PolyTyp;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_PolyTyp(::Pathfinding::ClipperLib::PolyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PolyTyp = value;
}
constexpr ::Pathfinding::ClipperLib::EdgeSide& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Side()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Side;
}
constexpr ::Pathfinding::ClipperLib::EdgeSide const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Side() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Side;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_Side(::Pathfinding::ClipperLib::EdgeSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Side = value;
}
constexpr int32_t& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_WindDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindDelta;
}
constexpr int32_t const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_WindDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindDelta;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_WindDelta(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindDelta = value;
}
constexpr int32_t& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_WindCnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindCnt;
}
constexpr int32_t const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_WindCnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindCnt;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_WindCnt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindCnt = value;
}
constexpr int32_t& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_WindCnt2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindCnt2;
}
constexpr int32_t const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_WindCnt2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WindCnt2;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_WindCnt2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WindCnt2 = value;
}
constexpr int32_t& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_OutIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutIdx;
}
constexpr int32_t const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_OutIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutIdx;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_OutIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutIdx = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_Next(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_Prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_Prev(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prev = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_NextInLML()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInLML;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_NextInLML() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInLML;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_NextInLML(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextInLML = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_NextInAEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInAEL;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_NextInAEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInAEL;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_NextInAEL(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextInAEL = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_PrevInAEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrevInAEL;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_PrevInAEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrevInAEL;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_PrevInAEL(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrevInAEL = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_NextInSEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInSEL;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_NextInSEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextInSEL;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_NextInSEL(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextInSEL = value;
}
constexpr ::Pathfinding::ClipperLib::TEdge*& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_PrevInSEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrevInSEL;
}
constexpr ::Pathfinding::ClipperLib::TEdge* const& Pathfinding::ClipperLib::TEdge::__cordl_internal_get_PrevInSEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrevInSEL;
}
constexpr void Pathfinding::ClipperLib::TEdge::__cordl_internal_set_PrevInSEL(::Pathfinding::ClipperLib::TEdge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrevInSEL = value;
}
inline void Pathfinding::ClipperLib::TEdge::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::TEdge*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::TEdge* Pathfinding::ClipperLib::TEdge::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::TEdge*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::TEdge::TEdge()   {
}
