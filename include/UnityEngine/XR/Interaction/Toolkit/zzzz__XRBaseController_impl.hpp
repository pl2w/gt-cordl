#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRBaseController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_UpdateType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticImpulseSingleChannelGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannelGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_UpdateType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.GetControllerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::GetControllerState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb40042c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.SetControllerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::SetControllerState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb40044c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_modelTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_modelTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb400458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_anchorControlDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_anchorControlDeadzone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40045c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_anchorControlDeadzone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_anchorControlDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_anchorControlDeadzone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb400464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_anchorControlDeadzone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_anchorControlOffAxisDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_anchorControlOffAxisDeadzone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_anchorControlOffAxisDeadzone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_anchorControlOffAxisDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_anchorControlOffAxisDeadzone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb400470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_anchorControlOffAxisDeadzone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_updateTrackingType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseController_UpdateType (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_updateTrackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_updateTrackingType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_updateTrackingType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::GlobalNamespace::XRBaseController_UpdateType)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_updateTrackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40047c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_updateTrackingType", {}, {::i2c::type_of<::GlobalNamespace::XRBaseController_UpdateType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_enableInputTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_enableInputTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_enableInputTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_enableInputTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_enableInputTracking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40048c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_enableInputTracking", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_enableInputActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_enableInputActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_enableInputActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_enableInputActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_enableInputActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40049c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_enableInputActions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_modelPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4004a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_modelPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4004ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelPrefab", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_modelParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4004b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_modelParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelParent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4004bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_model
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_model)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_model", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_model
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_model)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_model", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_animateModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_animateModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_animateModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_animateModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_animateModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_animateModel", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_modelSelectTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelSelectTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelSelectTransition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_modelSelectTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelSelectTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelSelectTransition", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_modelDeSelectTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelDeSelectTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelDeSelectTransition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_modelDeSelectTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelDeSelectTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4005a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelDeSelectTransition", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_hideControllerModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_hideControllerModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4005a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_hideControllerModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_hideControllerModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_hideControllerModel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4005b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_hideControllerModel", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_selectInteractionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionState (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_selectInteractionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_selectInteractionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_activateInteractionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionState (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_activateInteractionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_activateInteractionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_uiPressInteractionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionState (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_uiPressInteractionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_uiPressInteractionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_uiScrollValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_uiScrollValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_uiScrollValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.get_currentControllerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRControllerState* (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_currentControllerState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb400680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_currentControllerState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.set_currentControllerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_currentControllerState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb400714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_currentControllerState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::Awake)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb400734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::OnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb3fe760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::OnDisable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb3fea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::Update)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4008dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.SetupModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::SetupModel)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb4008e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"SetupModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.SetupControllerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::SetupControllerState)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb400698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"SetupControllerState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.GetModelPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::GetModelPrefab)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb400b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.UpdateController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::UpdateController)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb400b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.OnBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::OnBeforeRender)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb400c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::FixedUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb400c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.ApplyControllerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, ::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::ApplyControllerState)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb400ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.UpdateTrackingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::UpdateTrackingInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3ff230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.UpdateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::UpdateInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3ff660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.UpdateControllerModelAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::UpdateControllerModelAnimation)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb400dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb400fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController.UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_GetChannelGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_GetChannelGroup)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb400fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.IXRHapticImpulseProvider.GetChannelGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb400354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XRBaseController_UpdateType& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_UpdateTrackingType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateTrackingType;
}
constexpr ::GlobalNamespace::XRBaseController_UpdateType const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_UpdateTrackingType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateTrackingType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_UpdateTrackingType(::GlobalNamespace::XRBaseController_UpdateType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateTrackingType = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_EnableInputTracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableInputTracking;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_EnableInputTracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableInputTracking;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_EnableInputTracking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableInputTracking = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_EnableInputActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableInputActions;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_EnableInputActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableInputActions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_EnableInputActions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableInputActions = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelPrefab;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelPrefab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_ModelPrefab(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ModelPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelParent;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_ModelParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ModelParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_Model()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Model;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_Model() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Model;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_Model(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Model = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_AnimateModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimateModel;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_AnimateModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimateModel;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_AnimateModel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnimateModel = value;
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelSelectTransition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelSelectTransition;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelSelectTransition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelSelectTransition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_ModelSelectTransition(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ModelSelectTransition = value;
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelDeSelectTransition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelDeSelectTransition;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelDeSelectTransition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelDeSelectTransition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_ModelDeSelectTransition(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ModelDeSelectTransition = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_HideControllerModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideControllerModel;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_HideControllerModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideControllerModel;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_HideControllerModel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HideControllerModel = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_SelectInteractionState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractionState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_SelectInteractionState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractionState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_SelectInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectInteractionState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ActivateInteractionState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateInteractionState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ActivateInteractionState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateInteractionState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_ActivateInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateInteractionState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_UIPressInteractionState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressInteractionState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionState const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_UIPressInteractionState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressInteractionState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_UIPressInteractionState(::UnityEngine::XR::Interaction::Toolkit::InteractionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIPressInteractionState = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_UIScrollValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollValue;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_UIScrollValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_UIScrollValue(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIScrollValue = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerState*& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ControllerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ControllerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_ControllerState(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_CreateControllerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CreateControllerState;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_CreateControllerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CreateControllerState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_CreateControllerState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CreateControllerState = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelAnimator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_ModelAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ModelAnimator;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_ModelAnimator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ModelAnimator = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_HasWarnedAnimatorMissing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasWarnedAnimatorMissing;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_HasWarnedAnimatorMissing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasWarnedAnimatorMissing;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_HasWarnedAnimatorMissing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasWarnedAnimatorMissing = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_PerformSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformSetup;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_PerformSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformSetup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_PerformSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PerformSetup = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_HapticChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticChannel;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel* const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_HapticChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticChannel;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_HapticChannel(::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticChannel = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_HapticChannelGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticChannelGroup;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup* const& UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_get_m_HapticChannelGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticChannelGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController::__cordl_internal_set_m_HapticChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseSingleChannelGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticChannelGroup = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseController::GetControllerState(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::SetControllerState(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_anchorControlDeadzone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_anchorControlDeadzone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_anchorControlDeadzone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_anchorControlDeadzone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_anchorControlOffAxisDeadzone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_anchorControlOffAxisDeadzone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_anchorControlOffAxisDeadzone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_anchorControlOffAxisDeadzone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRBaseController_UpdateType UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_updateTrackingType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_updateTrackingType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseController_UpdateType>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_updateTrackingType(::GlobalNamespace::XRBaseController_UpdateType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_updateTrackingType", {}, {::i2c::type_of<::GlobalNamespace::XRBaseController_UpdateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_enableInputTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_enableInputTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_enableInputTracking(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_enableInputTracking", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_enableInputActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_enableInputActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_enableInputActions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_enableInputActions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelPrefab(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelPrefab", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelParent(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_model()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_model", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_model(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_model", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_animateModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_animateModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_animateModel(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_animateModel", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelSelectTransition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelSelectTransition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelSelectTransition(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelSelectTransition", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_modelDeSelectTransition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_modelDeSelectTransition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_modelDeSelectTransition(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_modelDeSelectTransition", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_hideControllerModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_hideControllerModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_hideControllerModel(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_hideControllerModel", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_selectInteractionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_selectInteractionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionState>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_activateInteractionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_activateInteractionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionState>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionState UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_uiPressInteractionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_uiPressInteractionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionState>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_uiScrollValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_uiScrollValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerState* UnityEngine::XR::Interaction::Toolkit::XRBaseController::get_currentControllerState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"get_currentControllerState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::set_currentControllerState(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"set_currentControllerState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::SetupModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"SetupModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::SetupControllerState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"SetupControllerState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::XRBaseController::GetModelPrefab()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::UpdateController()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::OnBeforeRender()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::ApplyControllerState(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::UpdateControllerModelAnimation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseController::SendHapticImpulse(float_t  amplitude, float_t  duration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, amplitude, duration);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup* UnityEngine::XR::Interaction::Toolkit::XRBaseController::UnityEngine_XR_Interaction_Toolkit_Inputs_Haptics_IXRHapticImpulseProvider_GetChannelGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.IXRHapticImpulseProvider.GetChannelGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannelGroup*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseController* UnityEngine::XR::Interaction::Toolkit::XRBaseController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::XRBaseController::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider* UnityEngine::XR::Interaction::Toolkit::XRBaseController::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRBaseController::XRBaseController()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb401094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::*)(float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb4010c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::__cordl_internal_get_m_Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controller;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::__cordl_internal_get_m_Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controller;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::__cordl_internal_set_m_Controller(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Controller = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::__cordl_internal_get_m_WarningLogged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WarningLogged;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::__cordl_internal_get_m_WarningLogged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WarningLogged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::__cordl_internal_set_m_WarningLogged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WarningLogged = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::_ctor(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, amplitude, duration, frequency);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel* UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::New_ctor(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  controller)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel*>(controller));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr  UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseChannel() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRBaseController_HapticImpulseChannel::XRBaseController_HapticImpulseChannel()   {
}
