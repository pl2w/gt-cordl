#pragma once
// IWYU pragma private; include "Unity/Cinemachine/OutPt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__Point64_impl.hpp"
#include "Unity/Cinemachine/zzzz__OutPt_def.hpp"
#include "Unity/Cinemachine/zzzz__Joiner_def.hpp"
#include "Unity/Cinemachine/zzzz__OutRec_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::OutPt._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::OutPt::*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::OutRec*)>(&::Unity::Cinemachine::OutPt::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaeef37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::OutPt*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::Point64& Unity::Cinemachine::OutPt::__cordl_internal_get_pt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pt;
}
constexpr ::Unity::Cinemachine::Point64 const& Unity::Cinemachine::OutPt::__cordl_internal_get_pt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pt;
}
constexpr void Unity::Cinemachine::OutPt::__cordl_internal_set_pt(::Unity::Cinemachine::Point64  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pt = value;
}
constexpr ::Unity::Cinemachine::OutPt*& Unity::Cinemachine::OutPt::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Unity::Cinemachine::OutPt* const& Unity::Cinemachine::OutPt::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Unity::Cinemachine::OutPt::__cordl_internal_set_next(::Unity::Cinemachine::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr ::Unity::Cinemachine::OutPt*& Unity::Cinemachine::OutPt::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::Unity::Cinemachine::OutPt* const& Unity::Cinemachine::OutPt::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void Unity::Cinemachine::OutPt::__cordl_internal_set_prev(::Unity::Cinemachine::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
constexpr ::Unity::Cinemachine::OutRec*& Unity::Cinemachine::OutPt::__cordl_internal_get_outrec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outrec;
}
constexpr ::Unity::Cinemachine::OutRec* const& Unity::Cinemachine::OutPt::__cordl_internal_get_outrec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outrec;
}
constexpr void Unity::Cinemachine::OutPt::__cordl_internal_set_outrec(::Unity::Cinemachine::OutRec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outrec = value;
}
constexpr ::Unity::Cinemachine::Joiner*& Unity::Cinemachine::OutPt::__cordl_internal_get_joiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joiner;
}
constexpr ::Unity::Cinemachine::Joiner* const& Unity::Cinemachine::OutPt::__cordl_internal_get_joiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joiner;
}
constexpr void Unity::Cinemachine::OutPt::__cordl_internal_set_joiner(::Unity::Cinemachine::Joiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joiner = value;
}
inline void Unity::Cinemachine::OutPt::_ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::OutRec*  outrec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::OutPt*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::OutRec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pt, outrec);
}
inline ::Unity::Cinemachine::OutPt* Unity::Cinemachine::OutPt::New_ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::OutRec*  outrec)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::OutPt*>(pt, outrec));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::OutPt::OutPt()   {
}
