#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRInteractorEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractorEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4086ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent::XRInteractorEvent()   {
}
