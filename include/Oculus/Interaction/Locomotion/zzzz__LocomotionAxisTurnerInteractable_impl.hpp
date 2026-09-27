#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionAxisTurnerInteractable.hpp"
#include "Oculus/Interaction/zzzz__Interactable_2_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionAxisTurnerInteractable_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionAxisTurnerInteractor_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable::*)()>(&::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa4d2bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable* Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionAxisTurnerInteractable::LocomotionAxisTurnerInteractable()   {
}
