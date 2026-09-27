#pragma once
// IWYU pragma private; include "Oculus/Interaction/FloatConstraint.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__FloatConstraint_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::FloatConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FloatConstraint::*)()>(&::Oculus::Interaction::FloatConstraint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa444e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FloatConstraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::FloatConstraint::__cordl_internal_get_Constrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Constrain;
}
constexpr bool const& Oculus::Interaction::FloatConstraint::__cordl_internal_get_Constrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Constrain;
}
constexpr void Oculus::Interaction::FloatConstraint::__cordl_internal_set_Constrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Constrain = value;
}
constexpr float_t& Oculus::Interaction::FloatConstraint::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr float_t const& Oculus::Interaction::FloatConstraint::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void Oculus::Interaction::FloatConstraint::__cordl_internal_set_Value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void Oculus::Interaction::FloatConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FloatConstraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::FloatConstraint* Oculus::Interaction::FloatConstraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::FloatConstraint*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::FloatConstraint::FloatConstraint()   {
}
