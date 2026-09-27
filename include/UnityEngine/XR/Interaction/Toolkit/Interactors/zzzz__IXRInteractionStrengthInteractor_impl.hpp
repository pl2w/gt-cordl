#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRInteractionStrengthInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionStrengthInteractor_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor.get_largestInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::get_largestInteractionStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor.GetInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::GetInteractionStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor.ProcessInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::ProcessInteractionStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::get_largestInteractionStrength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>*>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
