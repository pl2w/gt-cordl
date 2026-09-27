#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/Join.hpp"
#include "Pathfinding/ClipperLib/zzzz__IntPoint_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/ClipperLib/zzzz__Join_def.hpp"
#include "Pathfinding/ClipperLib/zzzz__OutPt_def.hpp"
//  Writing Method size for method: ::Pathfinding::ClipperLib::Join._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::ClipperLib::Join::*)()>(&::Pathfinding::ClipperLib::Join::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6835f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Join*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::ClipperLib::OutPt*& Pathfinding::ClipperLib::Join::__cordl_internal_get_OutPt1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutPt1;
}
constexpr ::Pathfinding::ClipperLib::OutPt* const& Pathfinding::ClipperLib::Join::__cordl_internal_get_OutPt1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutPt1;
}
constexpr void Pathfinding::ClipperLib::Join::__cordl_internal_set_OutPt1(::Pathfinding::ClipperLib::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutPt1 = value;
}
constexpr ::Pathfinding::ClipperLib::OutPt*& Pathfinding::ClipperLib::Join::__cordl_internal_get_OutPt2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutPt2;
}
constexpr ::Pathfinding::ClipperLib::OutPt* const& Pathfinding::ClipperLib::Join::__cordl_internal_get_OutPt2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutPt2;
}
constexpr void Pathfinding::ClipperLib::Join::__cordl_internal_set_OutPt2(::Pathfinding::ClipperLib::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutPt2 = value;
}
constexpr ::Pathfinding::ClipperLib::IntPoint& Pathfinding::ClipperLib::Join::__cordl_internal_get_OffPt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OffPt;
}
constexpr ::Pathfinding::ClipperLib::IntPoint const& Pathfinding::ClipperLib::Join::__cordl_internal_get_OffPt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OffPt;
}
constexpr void Pathfinding::ClipperLib::Join::__cordl_internal_set_OffPt(::Pathfinding::ClipperLib::IntPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OffPt = value;
}
inline void Pathfinding::ClipperLib::Join::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::ClipperLib::Join*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::ClipperLib::Join* Pathfinding::ClipperLib::Join::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::ClipperLib::Join*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::Join::Join()   {
}
