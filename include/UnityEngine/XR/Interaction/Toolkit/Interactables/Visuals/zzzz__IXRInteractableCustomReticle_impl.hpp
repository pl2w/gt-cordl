#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/Visuals/IXRInteractableCustomReticle.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/Visuals/zzzz__IXRInteractableCustomReticle_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__IXRCustomReticleProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle.OnReticleAttached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle::OnReticleAttached)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle.OnReticleDetaching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle::OnReticleDetaching)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle::OnReticleAttached(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider*  reticleProvider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable, reticleProvider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle::OnReticleDetaching()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::IXRInteractableCustomReticle*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
