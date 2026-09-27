#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionStateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionStateExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionState_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionStateExtensions.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionStateExtensions::IsActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb449620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionStateExtensions*>(),
                        {"IsActive", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionStateExtensions::IsActive(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionStateExtensions*>(),
                        {"IsActive", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionStateExtensions::LocomotionStateExtensions()   {
}
