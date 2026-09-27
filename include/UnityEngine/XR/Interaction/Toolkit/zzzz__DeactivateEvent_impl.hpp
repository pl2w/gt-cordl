#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/DeactivateEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb40844c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::DeactivateEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* UnityEngine::XR::Interaction::Toolkit::DeactivateEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent::DeactivateEvent()   {
}
