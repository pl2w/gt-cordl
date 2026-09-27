#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRInteractableEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractableEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb408664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent::XRInteractableEvent()   {
}
