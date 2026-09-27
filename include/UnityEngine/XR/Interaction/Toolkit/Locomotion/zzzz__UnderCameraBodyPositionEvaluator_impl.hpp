#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/UnderCameraBodyPositionEvaluator.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__UnderCameraBodyPositionEvaluator_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyPositionEvaluator_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator.GetBodyGroundLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::*)(::Unity::XR::CoreUtils::XROrigin*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::GetBodyGroundLocalPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb44965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator*>(),
                        {"GetBodyGroundLocalPosition", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb449680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::GetBodyGroundLocalPosition(::Unity::XR::CoreUtils::XROrigin*  xrOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator*>(),
                        {"GetBodyGroundLocalPosition", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, xrOrigin);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator* UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::operator ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IXRBodyPositionEvaluator() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::UnderCameraBodyPositionEvaluator::UnderCameraBodyPositionEvaluator()   {
}
