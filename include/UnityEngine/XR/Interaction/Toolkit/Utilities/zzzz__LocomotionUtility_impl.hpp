#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/LocomotionUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__LocomotionUtility_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionMediator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyTransformer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility.GetCameraFloorWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Unity::XR::CoreUtils::XROrigin*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility::GetCameraFloorWorldPosition)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb427774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*>(),
                        {"GetCameraFloorWorldPosition", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility.TryGetOriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*, ::by_ref<::UnityEngine::Transform*>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility::TryGetOriginTransform)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4277c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*>(),
                        {"TryGetOriginTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility.TryGetOriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*, ::by_ref<::UnityEngine::Transform*>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility::TryGetOriginTransform)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb42786c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*>(),
                        {"TryGetOriginTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility.TryGetOriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*, ::by_ref<::UnityEngine::Transform*>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility::TryGetOriginTransform)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb42797c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*>(),
                        {"TryGetOriginTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility::GetCameraFloorWorldPosition(::Unity::XR::CoreUtils::XROrigin*  xrOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*>(),
                        {"GetCameraFloorWorldPosition", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, xrOrigin);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility::TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  locomotionProvider, ::by_ref<::UnityEngine::Transform*>  originTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*>(),
                        {"TryGetOriginTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, locomotionProvider, originTransform);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility::TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*  mediator, ::by_ref<::UnityEngine::Transform*>  originTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*>(),
                        {"TryGetOriginTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mediator, originTransform);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility::TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer, ::by_ref<::UnityEngine::Transform*>  originTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility*>(),
                        {"TryGetOriginTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bodyTransformer, originTransform);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::LocomotionUtility::LocomotionUtility()   {
}
