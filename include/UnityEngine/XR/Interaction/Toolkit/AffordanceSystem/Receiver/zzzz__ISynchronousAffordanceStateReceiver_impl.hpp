#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/ISynchronousAffordanceStateReceiver.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__ISynchronousAffordanceStateReceiver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__IAffordanceStateReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver.HandleTween
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver::HandleTween)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver::HandleTween(float_t  tweenTarget)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweenTarget);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver::operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver::i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>(static_cast<void*>(this));
}
