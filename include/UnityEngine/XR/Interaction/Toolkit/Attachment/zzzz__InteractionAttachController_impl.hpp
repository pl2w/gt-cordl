#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/InteractionAttachController.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractionAttachController_ManipulationXAxisMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractionAttachController_ManipulationYAxisMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__MotionStabilizationMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractionAttachController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__AttachPointVelocityTracker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IInteractionAttachController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractionAttachController_ManipulationXAxisMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractionAttachController_ManipulationYAxisMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractionAttachController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__MotionStabilizationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_transformToFollow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_transformToFollow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_transformToFollow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_transformToFollow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_transformToFollow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_transformToFollow", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_motionStabilizationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_motionStabilizationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_motionStabilizationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_motionStabilizationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_motionStabilizationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_motionStabilizationMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_positionStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_positionStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_positionStabilization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_positionStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_positionStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_positionStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_angleStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_angleStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_angleStabilization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_angleStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_angleStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_angleStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_smoothOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_smoothOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_smoothOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_smoothOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_smoothOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_smoothOffset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_smoothingSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_smoothingSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_smoothingSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_smoothingSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_smoothingSpeed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4ae1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_smoothingSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_useDistanceBasedVelocityScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_useDistanceBasedVelocityScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_useDistanceBasedVelocityScaling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_useDistanceBasedVelocityScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_useDistanceBasedVelocityScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_useDistanceBasedVelocityScaling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_useMomentum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_useMomentum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_useMomentum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_useMomentum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_useMomentum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_useMomentum", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_momentumDecayScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_momentumDecayScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_momentumDecayScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_momentumDecayScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_momentumDecayScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4ae204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_momentumDecayScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_momentumDecayScaleFromInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_momentumDecayScaleFromInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_momentumDecayScaleFromInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_momentumDecayScaleFromInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_momentumDecayScaleFromInput)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4ae22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_momentumDecayScaleFromInput", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_zVelocityRampThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_zVelocityRampThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_zVelocityRampThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_zVelocityRampThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_zVelocityRampThreshold)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4ae254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_zVelocityRampThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_pullVelocityBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_pullVelocityBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_pullVelocityBias", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_pullVelocityBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_pullVelocityBias)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4ae27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_pullVelocityBias", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_pushVelocityBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_pushVelocityBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_pushVelocityBias", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_pushVelocityBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_pushVelocityBias)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4ae2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_pushVelocityBias", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_minAdditionalVelocityScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_minAdditionalVelocityScalar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_minAdditionalVelocityScalar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_minAdditionalVelocityScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_minAdditionalVelocityScalar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4ae2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_minAdditionalVelocityScalar", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_maxAdditionalVelocityScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_maxAdditionalVelocityScalar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_maxAdditionalVelocityScalar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_maxAdditionalVelocityScalar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_maxAdditionalVelocityScalar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4ae2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_maxAdditionalVelocityScalar", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_useManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_useManipulationInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_useManipulationInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_useManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_useManipulationInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_useManipulationInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_manipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_manipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4ae32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_manipulationXAxisMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationXAxisMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationXAxisMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_manipulationXAxisMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationXAxisMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationXAxisMode", {}, {::i2c::type_of<::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_manipulationYAxisMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationYAxisMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationYAxisMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_manipulationYAxisMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationYAxisMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationYAxisMode", {}, {::i2c::type_of<::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_combineManipulationAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_combineManipulationAxes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_combineManipulationAxes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_combineManipulationAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_combineManipulationAxes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_combineManipulationAxes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_manipulationTranslateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationTranslateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_manipulationTranslateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationTranslateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_manipulationRotateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationRotateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationRotateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_manipulationRotateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationRotateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationRotateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_manipulationRotateReferenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationRotateReferenceFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationRotateReferenceFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_manipulationRotateReferenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationRotateReferenceFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationRotateReferenceFrame", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_enableDebugLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_enableDebugLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_enableDebugLines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.set_enableDebugLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_enableDebugLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_enableDebugLines", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.get_hasOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_hasOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ae3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_hasOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.add_attachUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::System::Action*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::add_attachUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4ae400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"add_attachUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.remove_attachUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::System::Action*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::remove_attachUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4ae49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"remove_attachUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.GetXROriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::GetXROriginTransform)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb4ae538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"GetXROriginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.InitializeXROrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::InitializeXROrigin)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb4ae574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"InitializeXROrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::OnValidate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4ae658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4ae710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::OnEnable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb4ae7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::OnDisable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4ae8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.SyncAnchorParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::SyncAnchorParent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb4ae980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"SyncAnchorParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_GetOrCreateAnchorTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_GetOrCreateAnchorTransform)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0xb4aea44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.GetOrCreateAnchorTransform", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_MoveTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb4aef7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.MoveTo", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.SyncOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::SyncOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4af1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"SyncOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.MoveToPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::MoveToPosition)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb4aefbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"MoveToPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_ApplyLocalPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_ApplyLocalPositionOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4af1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.ApplyLocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_ApplyLocalRotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::UnityEngine::Quaternion)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_ApplyLocalRotationOffset)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb4af260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.ApplyLocalRotationOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.ResetOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::ResetOffset)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4af31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"ResetOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_DoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_DoUpdate)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0xb4af3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.DoUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.DoPositionUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::DoPositionUpdate)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xb4afea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"DoPositionUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.UpdateVelocityScalingBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UpdateVelocityScalingBlock)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb4afcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UpdateVelocityScalingBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.UpdatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::UnityEngine::Vector3, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UpdatePosition)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb4b025c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.ComputeAmplifiedOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, float_t, float_t, float_t, bool, bool, float_t, ::by_ref<float_t>, ::by_ref<float_t>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::ComputeAmplifiedOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4ae158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"ComputeAmplifiedOffset", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.FilterManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)(::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::FilterManipulationInput)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb4b03b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"FilterManipulationInput", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb4b05a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController.ComputeAmplifiedOffset$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, float_t, float_t, float_t, bool, bool, float_t, ::by_ref<float_t>, ::by_ref<float_t>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::ComputeAmplifiedOffset$BurstManaged)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0xb4b06e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"ComputeAmplifiedOffset$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_TransformToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformToFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_TransformToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformToFollow;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_TransformToFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TransformToFollow = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MotionStabilizationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MotionStabilizationMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MotionStabilizationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MotionStabilizationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_MotionStabilizationMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MotionStabilizationMode = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_PositionStabilization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionStabilization;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_PositionStabilization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionStabilization;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_PositionStabilization(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionStabilization = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_AngleStabilization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngleStabilization;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_AngleStabilization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngleStabilization;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_AngleStabilization(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AngleStabilization = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_SmoothOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothOffset;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_SmoothOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_SmoothOffset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothOffset = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_SmoothingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothingSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_SmoothingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothingSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_SmoothingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothingSpeed = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_UseDistanceBasedVelocityScaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseDistanceBasedVelocityScaling;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_UseDistanceBasedVelocityScaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseDistanceBasedVelocityScaling;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_UseDistanceBasedVelocityScaling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseDistanceBasedVelocityScaling = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_UseMomentum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseMomentum;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_UseMomentum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseMomentum;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_UseMomentum(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseMomentum = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MomentumDecayScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MomentumDecayScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MomentumDecayScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MomentumDecayScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_MomentumDecayScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MomentumDecayScale = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MomentumDecayScaleFromInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MomentumDecayScaleFromInput;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MomentumDecayScaleFromInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MomentumDecayScaleFromInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_MomentumDecayScaleFromInput(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MomentumDecayScaleFromInput = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ZVelocityRampThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZVelocityRampThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ZVelocityRampThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZVelocityRampThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_ZVelocityRampThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ZVelocityRampThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_PullVelocityBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PullVelocityBias;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_PullVelocityBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PullVelocityBias;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_PullVelocityBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PullVelocityBias = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_PushVelocityBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PushVelocityBias;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_PushVelocityBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PushVelocityBias;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_PushVelocityBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PushVelocityBias = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MinAdditionalVelocityScalar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinAdditionalVelocityScalar;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MinAdditionalVelocityScalar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinAdditionalVelocityScalar;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_MinAdditionalVelocityScalar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinAdditionalVelocityScalar = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MaxAdditionalVelocityScalar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxAdditionalVelocityScalar;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MaxAdditionalVelocityScalar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxAdditionalVelocityScalar;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_MaxAdditionalVelocityScalar(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxAdditionalVelocityScalar = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_UseManipulationInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseManipulationInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_UseManipulationInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseManipulationInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_UseManipulationInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseManipulationInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_ManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulationInput = value;
}
constexpr ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationXAxisMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationXAxisMode;
}
constexpr ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationXAxisMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationXAxisMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_ManipulationXAxisMode(::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulationXAxisMode = value;
}
constexpr ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationYAxisMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationYAxisMode;
}
constexpr ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationYAxisMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationYAxisMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_ManipulationYAxisMode(::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulationYAxisMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_CombineManipulationAxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CombineManipulationAxes;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_CombineManipulationAxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CombineManipulationAxes;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_CombineManipulationAxes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CombineManipulationAxes = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationTranslateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationTranslateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationTranslateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationTranslateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_ManipulationTranslateSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulationTranslateSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationRotateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationRotateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationRotateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationRotateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_ManipulationRotateSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulationRotateSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationRotateReferenceFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationRotateReferenceFrame;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_ManipulationRotateReferenceFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulationRotateReferenceFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_ManipulationRotateReferenceFrame(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulationRotateReferenceFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_EnableDebugLines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableDebugLines;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_EnableDebugLines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableDebugLines;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_EnableDebugLines(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableDebugLines = value;
}
constexpr ::System::Action*& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_attachUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachUpdated;
}
constexpr ::System::Action* const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_attachUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachUpdated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_attachUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachUpdated = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_FirstMovementFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstMovementFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_FirstMovementFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstMovementFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_FirstMovementFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstMovementFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_HasOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasOffset;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_HasOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_HasOffset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasOffset = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_StartLocalOffsetLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartLocalOffsetLength;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_StartLocalOffsetLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartLocalOffsetLength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_StartLocalOffsetLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartLocalOffsetLength = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_StartLocalOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartLocalOffset;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_StartLocalOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartLocalOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_StartLocalOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartLocalOffset = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_StartLocalOffsetNormalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartLocalOffsetNormalized;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_StartLocalOffsetNormalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartLocalOffsetNormalized;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_StartLocalOffsetNormalized(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartLocalOffsetNormalized = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_TargetLocalOffsetNormalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetLocalOffsetNormalized;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_TargetLocalOffsetNormalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetLocalOffsetNormalized;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_TargetLocalOffsetNormalized(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetLocalOffsetNormalized = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_Pivot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pivot;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_Pivot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pivot;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_Pivot(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pivot = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_Momentum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Momentum;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_Momentum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Momentum;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_Momentum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Momentum = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MomentumDecayFromInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MomentumDecayFromInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_MomentumDecayFromInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MomentumDecayFromInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_MomentumDecayFromInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MomentumDecayFromInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_WasVelocityScalingBlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasVelocityScalingBlocked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_WasVelocityScalingBlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasVelocityScalingBlocked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_WasVelocityScalingBlocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WasVelocityScalingBlocked = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_HasSelectInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelectInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_HasSelectInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelectInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_HasSelectInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasSelectInteractor = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_SelectInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_SelectInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_SelectInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectInteractor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_HasXROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasXROrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_HasXROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasXROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_HasXROrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasXROrigin = value;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_XROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_XROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XROrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_AnchorParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnchorParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_AnchorParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnchorParent;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_AnchorParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnchorParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_AnchorChild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnchorChild;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_AnchorChild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnchorChild;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_AnchorChild(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnchorChild = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_LastTargetLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTargetLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_LastTargetLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTargetLocalPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_LastTargetLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastTargetLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_LastTargetOriginSpacePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTargetOriginSpacePosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_LastTargetOriginSpacePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTargetOriginSpacePosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_LastTargetOriginSpacePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastTargetOriginSpacePosition = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_VelocityTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VelocityTracker;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker* const& UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_get_m_VelocityTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VelocityTracker;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::__cordl_internal_set_m_VelocityTracker(::UnityEngine::XR::Interaction::Toolkit::Attachment::AttachPointVelocityTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VelocityTracker = value;
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_transformToFollow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_transformToFollow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_transformToFollow(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_transformToFollow", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_motionStabilizationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_motionStabilizationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_motionStabilizationMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_motionStabilizationMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_positionStabilization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_positionStabilization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_positionStabilization(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_positionStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_angleStabilization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_angleStabilization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_angleStabilization(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_angleStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_smoothOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_smoothOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_smoothOffset(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_smoothOffset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_smoothingSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_smoothingSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_smoothingSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_smoothingSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_useDistanceBasedVelocityScaling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_useDistanceBasedVelocityScaling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_useDistanceBasedVelocityScaling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_useDistanceBasedVelocityScaling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_useMomentum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_useMomentum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_useMomentum(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_useMomentum", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_momentumDecayScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_momentumDecayScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_momentumDecayScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_momentumDecayScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_momentumDecayScaleFromInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_momentumDecayScaleFromInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_momentumDecayScaleFromInput(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_momentumDecayScaleFromInput", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_zVelocityRampThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_zVelocityRampThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_zVelocityRampThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_zVelocityRampThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_pullVelocityBias()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_pullVelocityBias", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_pullVelocityBias(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_pullVelocityBias", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_pushVelocityBias()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_pushVelocityBias", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_pushVelocityBias(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_pushVelocityBias", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_minAdditionalVelocityScalar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_minAdditionalVelocityScalar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_minAdditionalVelocityScalar(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_minAdditionalVelocityScalar", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_maxAdditionalVelocityScalar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_maxAdditionalVelocityScalar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_maxAdditionalVelocityScalar(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_maxAdditionalVelocityScalar", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_useManipulationInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_useManipulationInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_useManipulationInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_useManipulationInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationXAxisMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationXAxisMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationXAxisMode(::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationXAxisMode", {}, {::i2c::type_of<::GlobalNamespace::InteractionAttachController_ManipulationXAxisMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationYAxisMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationYAxisMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationYAxisMode(::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationYAxisMode", {}, {::i2c::type_of<::GlobalNamespace::InteractionAttachController_ManipulationYAxisMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_combineManipulationAxes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_combineManipulationAxes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_combineManipulationAxes(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_combineManipulationAxes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationTranslateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationTranslateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationTranslateSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationTranslateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationRotateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationRotateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationRotateSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationRotateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_manipulationRotateReferenceFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_manipulationRotateReferenceFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_manipulationRotateReferenceFrame(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_manipulationRotateReferenceFrame", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_enableDebugLines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_enableDebugLines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::set_enableDebugLines(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"set_enableDebugLines", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::get_hasOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"get_hasOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::add_attachUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"add_attachUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::remove_attachUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"remove_attachUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::GetXROriginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"GetXROriginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::InitializeXROrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"InitializeXROrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::SyncAnchorParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"SyncAnchorParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_GetOrCreateAnchorTransform(bool  updateTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.GetOrCreateAnchorTransform", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, updateTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_MoveTo(::UnityEngine::Vector3  targetWorldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.MoveTo", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetWorldPosition);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::SyncOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"SyncOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::MoveToPosition(::UnityEngine::Vector3  targetWorldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"MoveToPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetWorldPosition);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_ApplyLocalPositionOffset(::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.ApplyLocalPositionOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_ApplyLocalRotationOffset(::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.ApplyLocalRotationOffset", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localRotation);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::ResetOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"ResetOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UnityEngine_XR_Interaction_Toolkit_Attachment_IInteractionAttachController_DoUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Attachment.IInteractionAttachController.DoUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::DoPositionUpdate(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"DoPositionUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UpdateVelocityScalingBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UpdateVelocityScalingBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::UpdatePosition(::UnityEngine::Vector3  targetLocalPosition, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"UpdatePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetLocalPosition, deltaTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::ComputeAmplifiedOffset(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"ComputeAmplifiedOffset", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, velocityLocal, startLocalOffsetNormalized, startLocalOffsetLength, targetLocalOffsetNormalized, currentLocalOffset, minAdditionalVelocityScalar, maxAdditionalVelocityScalar, pushVelocityBias, pullVelocityBias, zVelocityRampThreshold, calculateMomentum, applyMomentum, momentumDecayScale, momentum, pivot, deltaTime, newOffset);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::FilterManipulationInput(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"FilterManipulationInput", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, input);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::ComputeAmplifiedOffset$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>(),
                        {"ComputeAmplifiedOffset$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, velocityLocal, startLocalOffsetNormalized, startLocalOffsetLength, targetLocalOffsetNormalized, currentLocalOffset, minAdditionalVelocityScalar, maxAdditionalVelocityScalar, pushVelocityBias, pullVelocityBias, zVelocityRampThreshold, calculateMomentum, applyMomentum, momentumDecayScale, momentum, pivot, deltaTime, newOffset);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController* UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController"
constexpr  UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::operator ::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController* UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::i___UnityEngine__XR__Interaction__Toolkit__Attachment__IInteractionAttachController() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController::InteractionAttachController()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4b0ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4b0fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, float_t, float_t, float_t, bool, bool, float_t, ::by_ref<float_t>, ::by_ref<float_t>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb4b03f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, velocityLocal, startLocalOffsetNormalized, startLocalOffsetLength, targetLocalOffsetNormalized, currentLocalOffset, minAdditionalVelocityScalar, maxAdditionalVelocityScalar, pushVelocityBias, pullVelocityBias, zVelocityRampThreshold, calculateMomentum, applyMomentum, momentumDecayScale, momentum, pivot, deltaTime, newOffset);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall::InteractionAttachController_ComputeAmplifiedOffset_00001157$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4b0bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, float_t, float_t, float_t, bool, bool, float_t, ::by_ref<float_t>, ::by_ref<float_t>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4b0c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, float_t, float_t, float_t, bool, bool, float_t, ::by_ref<float_t>, ::by_ref<float_t>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb4b0ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4b0ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocityLocal, startLocalOffsetNormalized, startLocalOffsetLength, targetLocalOffsetNormalized, currentLocalOffset, minAdditionalVelocityScalar, maxAdditionalVelocityScalar, pushVelocityBias, pullVelocityBias, zVelocityRampThreshold, calculateMomentum, applyMomentum, momentumDecayScale, momentum, pivot, deltaTime, newOffset);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  velocityLocal, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startLocalOffsetNormalized, float_t  startLocalOffsetLength, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetLocalOffsetNormalized, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentLocalOffset, float_t  minAdditionalVelocityScalar, float_t  maxAdditionalVelocityScalar, float_t  pushVelocityBias, float_t  pullVelocityBias, float_t  zVelocityRampThreshold, bool  calculateMomentum, bool  applyMomentum, float_t  momentumDecayScale, ::by_ref<float_t>  momentum, ::by_ref<float_t>  pivot, float_t  deltaTime, ::by_ref<::Unity::Mathematics::float3>  newOffset, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_18)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, velocityLocal, startLocalOffsetNormalized, startLocalOffsetLength, targetLocalOffsetNormalized, currentLocalOffset, minAdditionalVelocityScalar, maxAdditionalVelocityScalar, pushVelocityBias, pullVelocityBias, zVelocityRampThreshold, calculateMomentum, applyMomentum, momentumDecayScale, momentum, pivot, deltaTime, newOffset, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_18);
}
inline void UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate::InteractionAttachController_ComputeAmplifiedOffset_00001157$PostfixBurstDelegate()   {
}
