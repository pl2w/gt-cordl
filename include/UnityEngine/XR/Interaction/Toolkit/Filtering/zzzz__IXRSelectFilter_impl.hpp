#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRSelectFilter.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRSelectFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::get_canProcess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::get_canProcess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter::Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
