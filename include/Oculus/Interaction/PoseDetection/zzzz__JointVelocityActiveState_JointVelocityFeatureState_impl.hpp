#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointVelocityActiveState_JointVelocityFeatureState.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_JointVelocityFeatureState_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4a2a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState::_ctor(::UnityEngine::Vector3  targetVector, float_t  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, targetVector, velocity);
}
// Ctor Parameters [CppParam { name: "TargetVector", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Amount", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState::JointVelocityActiveState_JointVelocityFeatureState(::UnityEngine::Vector3  TargetVector, float_t  Amount) noexcept  {
this->TargetVector = TargetVector;
this->Amount = Amount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JointVelocityActiveState_JointVelocityFeatureState::JointVelocityActiveState_JointVelocityFeatureState()   {
}
