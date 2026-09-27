#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyPositionEvaluatorExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyPositionEvaluatorExtensions_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyPositionEvaluator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyPositionEvaluatorExtensions.GetBodyGroundWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*, ::Unity::XR::CoreUtils::XROrigin*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyPositionEvaluatorExtensions::GetBodyGroundWorldPosition)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb446efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyPositionEvaluatorExtensions*>(),
                        {"GetBodyGroundWorldPosition", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>(), ::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyPositionEvaluatorExtensions::GetBodyGroundWorldPosition(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  evaluator, ::Unity::XR::CoreUtils::XROrigin*  xrOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyPositionEvaluatorExtensions*>(),
                        {"GetBodyGroundWorldPosition", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>(), ::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, evaluator, xrOrigin);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyPositionEvaluatorExtensions::XRBodyPositionEvaluatorExtensions()   {
}
