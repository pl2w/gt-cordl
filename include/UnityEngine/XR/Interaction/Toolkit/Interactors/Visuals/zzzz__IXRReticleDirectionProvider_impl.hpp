#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/IXRReticleDirectionProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__IXRReticleDirectionProvider_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider.GetReticleDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider::GetReticleDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider::GetReticleDirection(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::Vector3  hitNormal, ::by_ref<::UnityEngine::Vector3>  reticleUp, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  optionalReticleForward)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, hitNormal, reticleUp, optionalReticleForward);
}
