#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRPokeInteractor_PokeCollision.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRPokeInteractor_PokeCollision_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRPokeFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRPokeInteractor_PokeCollision._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRPokeInteractor_PokeCollision::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*)>(&::GlobalNamespace::XRPokeInteractor_PokeCollision::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb478078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRPokeInteractor_PokeCollision>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRPokeInteractor_PokeCollision::_ctor(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRPokeInteractor_PokeCollision>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, interactable, filter);
}
// Ctor Parameters [CppParam { name: "interactable", ty: "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filter", ty: "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRPokeInteractor_PokeCollision::XRPokeInteractor_PokeCollision(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  filter) noexcept  {
this->interactable = interactable;
this->filter = filter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRPokeInteractor_PokeCollision::XRPokeInteractor_PokeCollision()   {
}
