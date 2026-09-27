#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRTargetPriorityInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRTargetPriorityInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor.get_targetPriorityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor::get_targetPriorityMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor.get_targetsForSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor::get_targetsForSelection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor::get_targetPriorityMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor::get_targetsForSelection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
