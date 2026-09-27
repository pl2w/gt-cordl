#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRHoverFilter.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRHoverFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::get_canProcess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::get_canProcess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter::Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
