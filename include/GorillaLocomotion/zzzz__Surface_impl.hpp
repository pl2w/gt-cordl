#pragma once
// IWYU pragma private; include "GorillaLocomotion/Surface.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/zzzz__Surface_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Surface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Surface::*)()>(&::GorillaLocomotion::Surface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cde228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Surface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaLocomotion::Surface::__cordl_internal_get_slipPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slipPercentage;
}
constexpr float_t const& GorillaLocomotion::Surface::__cordl_internal_get_slipPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slipPercentage;
}
constexpr void GorillaLocomotion::Surface::__cordl_internal_set_slipPercentage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slipPercentage = value;
}
inline void GorillaLocomotion::Surface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Surface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Surface* GorillaLocomotion::Surface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Surface*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Surface::Surface()   {
}
