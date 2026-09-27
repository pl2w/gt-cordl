#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/OutRec.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__OutRec_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__OutPt_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::OutRec._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::OutRec::*)()>(&::Pathfinding::ClipperLib::OutRec::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6835e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::OutRec*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_Idx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Idx;
}
constexpr int32_t const& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_Idx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Idx;
}
constexpr void Pathfinding::ClipperLib::OutRec::__cordl_internal_set_Idx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Idx = value;
}
constexpr bool& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_IsHole()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsHole;
}
constexpr bool const& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_IsHole() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsHole;
}
constexpr void Pathfinding::ClipperLib::OutRec::__cordl_internal_set_IsHole(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsHole = value;
}
constexpr bool& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_IsOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsOpen;
}
constexpr bool const& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_IsOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsOpen;
}
constexpr void Pathfinding::ClipperLib::OutRec::__cordl_internal_set_IsOpen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsOpen = value;
}
constexpr ::Pathfinding::ClipperLib::OutRec*& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_FirstLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstLeft;
}
constexpr ::Pathfinding::ClipperLib::OutRec* const& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_FirstLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstLeft;
}
constexpr void Pathfinding::ClipperLib::OutRec::__cordl_internal_set_FirstLeft(::Pathfinding::ClipperLib::OutRec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FirstLeft = value;
}
constexpr ::Pathfinding::ClipperLib::OutPt*& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_Pts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pts;
}
constexpr ::Pathfinding::ClipperLib::OutPt* const& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_Pts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pts;
}
constexpr void Pathfinding::ClipperLib::OutRec::__cordl_internal_set_Pts(::Pathfinding::ClipperLib::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pts = value;
}
constexpr ::Pathfinding::ClipperLib::OutPt*& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_BottomPt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomPt;
}
constexpr ::Pathfinding::ClipperLib::OutPt* const& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_BottomPt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BottomPt;
}
constexpr void Pathfinding::ClipperLib::OutRec::__cordl_internal_set_BottomPt(::Pathfinding::ClipperLib::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BottomPt = value;
}
constexpr ::Pathfinding::ClipperLib::PolyNode*& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_PolyNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PolyNode;
}
constexpr ::Pathfinding::ClipperLib::PolyNode* const& Pathfinding::ClipperLib::OutRec::__cordl_internal_get_PolyNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PolyNode;
}
constexpr void Pathfinding::ClipperLib::OutRec::__cordl_internal_set_PolyNode(::Pathfinding::ClipperLib::PolyNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PolyNode = value;
}
inline void Pathfinding::ClipperLib::OutRec::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::OutRec*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::OutRec* Pathfinding::ClipperLib::OutRec::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::OutRec*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::OutRec::OutRec()   {
}
