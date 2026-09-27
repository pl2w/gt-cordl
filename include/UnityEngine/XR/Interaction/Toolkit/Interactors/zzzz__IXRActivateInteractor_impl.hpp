#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRActivateInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRActivateInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor.get_shouldActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::get_shouldActivate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor.get_shouldDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::get_shouldDeactivate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor.GetActivateTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::GetActivateTargets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::get_shouldActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::get_shouldDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
