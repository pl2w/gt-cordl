#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/OutPt.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__OutPt_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::OutPt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::OutPt::*)()>(&::Pathfinding::ClipperLib::OutPt::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6835e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::OutPt*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::ClipperLib::OutPt::__cordl_internal_get_Idx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Idx;
}
constexpr int32_t const& Pathfinding::ClipperLib::OutPt::__cordl_internal_get_Idx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Idx;
}
constexpr void Pathfinding::ClipperLib::OutPt::__cordl_internal_set_Idx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Idx = value;
}
constexpr ::Pathfinding::ClipperLib::IntPoint& Pathfinding::ClipperLib::OutPt::__cordl_internal_get_Pt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pt;
}
constexpr ::Pathfinding::ClipperLib::IntPoint const& Pathfinding::ClipperLib::OutPt::__cordl_internal_get_Pt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pt;
}
constexpr void Pathfinding::ClipperLib::OutPt::__cordl_internal_set_Pt(::Pathfinding::ClipperLib::IntPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pt = value;
}
constexpr ::Pathfinding::ClipperLib::OutPt*& Pathfinding::ClipperLib::OutPt::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Pathfinding::ClipperLib::OutPt* const& Pathfinding::ClipperLib::OutPt::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Pathfinding::ClipperLib::OutPt::__cordl_internal_set_Next(::Pathfinding::ClipperLib::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
constexpr ::Pathfinding::ClipperLib::OutPt*& Pathfinding::ClipperLib::OutPt::__cordl_internal_get_Prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr ::Pathfinding::ClipperLib::OutPt* const& Pathfinding::ClipperLib::OutPt::__cordl_internal_get_Prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Prev;
}
constexpr void Pathfinding::ClipperLib::OutPt::__cordl_internal_set_Prev(::Pathfinding::ClipperLib::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Prev = value;
}
inline void Pathfinding::ClipperLib::OutPt::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::OutPt*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::OutPt* Pathfinding::ClipperLib::OutPt::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::OutPt*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::OutPt::OutPt()   {
}
