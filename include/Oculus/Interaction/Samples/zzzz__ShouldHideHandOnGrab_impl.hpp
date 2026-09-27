#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ShouldHideHandOnGrab.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__ShouldHideHandOnGrab_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::ShouldHideHandOnGrab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ShouldHideHandOnGrab::*)()>(&::Oculus::Interaction::Samples::ShouldHideHandOnGrab::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa440818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ShouldHideHandOnGrab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Samples::ShouldHideHandOnGrab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ShouldHideHandOnGrab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::ShouldHideHandOnGrab* Oculus::Interaction::Samples::ShouldHideHandOnGrab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::ShouldHideHandOnGrab*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::ShouldHideHandOnGrab::ShouldHideHandOnGrab()   {
}
