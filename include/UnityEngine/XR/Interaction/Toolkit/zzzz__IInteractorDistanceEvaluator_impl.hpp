#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/IInteractorDistanceEvaluator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IInteractorDistanceEvaluator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator.EvaluateDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator::EvaluateDistance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator::EvaluateDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, interactable);
}
