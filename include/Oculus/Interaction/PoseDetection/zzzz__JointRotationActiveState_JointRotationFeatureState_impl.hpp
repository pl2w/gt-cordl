#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointRotationActiveState_JointRotationFeatureState.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_JointRotationFeatureState_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4a0fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JointRotationActiveState_JointRotationFeatureState::_ctor(::UnityEngine::Vector3  targetAxis, float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, targetAxis, amount);
}
// Ctor Parameters [CppParam { name: "TargetAxis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Amount", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState::JointRotationActiveState_JointRotationFeatureState(::UnityEngine::Vector3  TargetAxis, float_t  Amount) noexcept  {
this->TargetAxis = TargetAxis;
this->Amount = Amount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JointRotationActiveState_JointRotationFeatureState::JointRotationActiveState_JointRotationFeatureState()   {
}
