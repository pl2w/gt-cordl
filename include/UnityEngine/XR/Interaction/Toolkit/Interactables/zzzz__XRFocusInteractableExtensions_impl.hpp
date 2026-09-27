#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRFocusInteractableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRFocusInteractableExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRFocusInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRFocusInteractableExtensions.GetOldestInteractorFocusing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRFocusInteractableExtensions::GetOldestInteractorFocusing)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb490eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRFocusInteractableExtensions*>(),
                        {"GetOldestInteractorFocusing", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::Interactables::XRFocusInteractableExtensions::GetOldestInteractorFocusing(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRFocusInteractableExtensions*>(),
                        {"GetOldestInteractorFocusing", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(nullptr, ___internal_method, interactable);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRFocusInteractableExtensions::XRFocusInteractableExtensions()   {
}
