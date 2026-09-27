#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/GorillaClimbableRef.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbable_impl.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbableRef_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbable_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaClimbableRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaClimbableRef::*)()>(&::GorillaLocomotion::Climbing::GorillaClimbableRef::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cf35f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaClimbableRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& GorillaLocomotion::Climbing::GorillaClimbableRef::__cordl_internal_get_climb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climb;
}
constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& GorillaLocomotion::Climbing::GorillaClimbableRef::__cordl_internal_get_climb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climb;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbableRef::__cordl_internal_set_climb(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___climb = value;
}
inline void GorillaLocomotion::Climbing::GorillaClimbableRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaClimbableRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Climbing::GorillaClimbableRef* GorillaLocomotion::Climbing::GorillaClimbableRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Climbing::GorillaClimbableRef*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Climbing::GorillaClimbableRef::GorillaClimbableRef()   {
}
