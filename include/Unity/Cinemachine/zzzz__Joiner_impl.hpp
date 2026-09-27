#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Joiner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__Joiner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__OutPt_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::Joiner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::Joiner::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*, ::Unity::Cinemachine::OutPt*, ::Unity::Cinemachine::OutPt*, ::Unity::Cinemachine::Joiner*)>(&::Unity::Cinemachine::Joiner::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xaeef484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Joiner*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::Joiner*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::Joiner::__cordl_internal_get_idx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr int32_t const& Unity::Cinemachine::Joiner::__cordl_internal_get_idx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idx;
}
constexpr void Unity::Cinemachine::Joiner::__cordl_internal_set_idx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idx = value;
}
constexpr ::Unity::Cinemachine::OutPt*& Unity::Cinemachine::Joiner::__cordl_internal_get_op1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op1;
}
constexpr ::Unity::Cinemachine::OutPt* const& Unity::Cinemachine::Joiner::__cordl_internal_get_op1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op1;
}
constexpr void Unity::Cinemachine::Joiner::__cordl_internal_set_op1(::Unity::Cinemachine::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___op1 = value;
}
constexpr ::Unity::Cinemachine::OutPt*& Unity::Cinemachine::Joiner::__cordl_internal_get_op2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op2;
}
constexpr ::Unity::Cinemachine::OutPt* const& Unity::Cinemachine::Joiner::__cordl_internal_get_op2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op2;
}
constexpr void Unity::Cinemachine::Joiner::__cordl_internal_set_op2(::Unity::Cinemachine::OutPt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___op2 = value;
}
constexpr ::Unity::Cinemachine::Joiner*& Unity::Cinemachine::Joiner::__cordl_internal_get_next1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next1;
}
constexpr ::Unity::Cinemachine::Joiner* const& Unity::Cinemachine::Joiner::__cordl_internal_get_next1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next1;
}
constexpr void Unity::Cinemachine::Joiner::__cordl_internal_set_next1(::Unity::Cinemachine::Joiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next1 = value;
}
constexpr ::Unity::Cinemachine::Joiner*& Unity::Cinemachine::Joiner::__cordl_internal_get_next2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next2;
}
constexpr ::Unity::Cinemachine::Joiner* const& Unity::Cinemachine::Joiner::__cordl_internal_get_next2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next2;
}
constexpr void Unity::Cinemachine::Joiner::__cordl_internal_set_next2(::Unity::Cinemachine::Joiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next2 = value;
}
constexpr ::Unity::Cinemachine::Joiner*& Unity::Cinemachine::Joiner::__cordl_internal_get_nextH()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextH;
}
constexpr ::Unity::Cinemachine::Joiner* const& Unity::Cinemachine::Joiner::__cordl_internal_get_nextH() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextH;
}
constexpr void Unity::Cinemachine::Joiner::__cordl_internal_set_nextH(::Unity::Cinemachine::Joiner*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextH = value;
}
inline void Unity::Cinemachine::Joiner::_ctor(::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*  joinerList, /* [Nullable(1)] */ ::Unity::Cinemachine::OutPt*  op1, ::Unity::Cinemachine::OutPt*  op2, ::Unity::Cinemachine::Joiner*  nextH)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::Joiner*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::OutPt*>(), ::i2c::type_of<::Unity::Cinemachine::Joiner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joinerList, op1, op2, nextH);
}
inline ::Unity::Cinemachine::Joiner* Unity::Cinemachine::Joiner::New_ctor(::System::Collections::Generic::List_1<::Unity::Cinemachine::Joiner*>*  joinerList, /* [Nullable(1)] */ ::Unity::Cinemachine::OutPt*  op1, ::Unity::Cinemachine::OutPt*  op2, ::Unity::Cinemachine::Joiner*  nextH)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::Joiner*>(joinerList, op1, op2, nextH));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::Joiner::Joiner()   {
}
