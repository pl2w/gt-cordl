#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRSimpleInteractable.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRSimpleInteractable_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4a0d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable::XRSimpleInteractable()   {
}
