#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRScreenSpaceController.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRScreenSpaceController_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInputModule_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerState_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_enableTouchscreenGestureInputController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_enableTouchscreenGestureInputController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_enableTouchscreenGestureInputController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_enableTouchscreenGestureInputController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_enableTouchscreenGestureInputController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_enableTouchscreenGestureInputController", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_tapStartPositionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_tapStartPositionAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb403a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_tapStartPositionAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_tapStartPositionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_tapStartPositionAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb403a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_tapStartPositionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_dragCurrentPositionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_dragCurrentPositionAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb403b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_dragCurrentPositionAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_dragCurrentPositionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_dragCurrentPositionAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb403ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_dragCurrentPositionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_dragDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_dragDeltaAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb403bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_dragDeltaAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_dragDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_dragDeltaAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb403bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_dragDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_pinchStartPositionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchStartPositionAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb403c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchStartPositionAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_pinchStartPositionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchStartPositionAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb403c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchStartPositionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_pinchGapAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchGapAction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb403c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchGapAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_pinchGapAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchGapAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb403c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchGapAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_pinchGapDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchGapDeltaAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb403ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchGapDeltaAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_pinchGapDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchGapDeltaAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb403cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchGapDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_twistStartPositionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_twistStartPositionAction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb403cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_twistStartPositionAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_twistStartPositionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_twistStartPositionAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb403d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_twistStartPositionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_twistDeltaRotationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_twistDeltaRotationAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb403d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_twistDeltaRotationAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_twistDeltaRotationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_twistDeltaRotationAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb403d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_twistDeltaRotationAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_screenTouchCountAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_screenTouchCountAction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb403d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_screenTouchCountAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_screenTouchCountAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_screenTouchCountAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb403d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_screenTouchCountAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_controllerCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_controllerCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_controllerCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_controllerCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::Camera*)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_controllerCamera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb403dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_controllerCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_blockInteractionsWithScreenSpaceUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_blockInteractionsWithScreenSpaceUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_blockInteractionsWithScreenSpaceUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_blockInteractionsWithScreenSpaceUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_blockInteractionsWithScreenSpaceUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_blockInteractionsWithScreenSpaceUI", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_useRotationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_useRotationThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_useRotationThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_useRotationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_useRotationThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_useRotationThreshold", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_rotationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_rotationThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_rotationThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_rotationThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_rotationThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_rotationThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_scaleDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_scaleDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_scaleDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_scaleDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_scaleDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb403e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_scaleDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_pinchStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchStartPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb403e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchStartPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_pinchStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchStartPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb403e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchStartPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_pinchGapDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchGapDelta)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb403e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchGapDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_pinchGapDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchGapDelta)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb403e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchGapDelta", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_twistStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_twistStartPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb403e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_twistStartPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_twistStartPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_twistStartPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb403e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_twistStartPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_twistRotationDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_twistRotationDeltaAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb403e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_twistRotationDeltaAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_twistRotationDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_twistRotationDeltaAction)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb403e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_twistRotationDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.get_screenTouchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_screenTouchCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb403e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_screenTouchCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.set_screenTouchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_screenTouchCount)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb403e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_screenTouchCount", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::Start)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb403e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb403f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4040b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.UpdateTrackingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::UpdateTrackingInput)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xb404208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.UpdateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::UpdateInput)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xb404840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.TryGetCurrentPositionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(int32_t, ::by_ref<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::TryGetCurrentPositionAction)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb404788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"TryGetCurrentPositionAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.TryGetCurrentOneInputSelectAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::by_ref<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::TryGetCurrentOneInputSelectAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb404bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"TryGetCurrentOneInputSelectAction", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.TryGetCurrentTwoInputSelectAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::by_ref<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::TryGetCurrentTwoInputSelectAction)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb404b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"TryGetCurrentTwoInputSelectAction", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.TryGetAbsoluteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputAction*, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::TryGetAbsoluteValue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb404ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"TryGetAbsoluteValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.FindUIInputModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::FindUIInputModule)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb404d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"FindUIInputModule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.IsPointerOverScreenSpaceCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::IsPointerOverScreenSpaceCanvas)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb4045bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"IsPointerOverScreenSpaceCanvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.InitializeTouchscreenGestureController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::InitializeTouchscreenGestureController)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4040b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"InitializeTouchscreenGestureController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.RemoveTouchscreenGestureController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::RemoveTouchscreenGestureController)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb404204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"RemoveTouchscreenGestureController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.EnableAllDirectActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::EnableAllDirectActions)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb403f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"EnableAllDirectActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.DisableAllDirectActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::DisableAllDirectActions)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb4040dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"DisableAllDirectActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.SetInputActionProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)(::by_ref<::UnityEngine::InputSystem::InputActionProperty>, ::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::SetInputActionProperty)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb403aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"SetInputActionProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionProperty>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController.IsDisabledReferenceAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::IsDisabledReferenceAction)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4046bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"IsDisabledReferenceAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::_ctor)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0xb404eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_EnableTouchscreenGestureInputController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableTouchscreenGestureInputController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_EnableTouchscreenGestureInputController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableTouchscreenGestureInputController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_EnableTouchscreenGestureInputController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableTouchscreenGestureInputController = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_TapStartPositionAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TapStartPositionAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_TapStartPositionAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TapStartPositionAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_TapStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TapStartPositionAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_DragCurrentPositionAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragCurrentPositionAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_DragCurrentPositionAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragCurrentPositionAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_DragCurrentPositionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DragCurrentPositionAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_DragDeltaAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragDeltaAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_DragDeltaAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragDeltaAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_DragDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DragDeltaAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_PinchStartPositionAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PinchStartPositionAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_PinchStartPositionAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PinchStartPositionAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_PinchStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PinchStartPositionAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_PinchGapAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PinchGapAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_PinchGapAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PinchGapAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_PinchGapAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PinchGapAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_PinchGapDeltaAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PinchGapDeltaAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_PinchGapDeltaAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PinchGapDeltaAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_PinchGapDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PinchGapDeltaAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_TwistStartPositionAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwistStartPositionAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_TwistStartPositionAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwistStartPositionAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_TwistStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TwistStartPositionAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_TwistDeltaRotationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwistDeltaRotationAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_TwistDeltaRotationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwistDeltaRotationAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_TwistDeltaRotationAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TwistDeltaRotationAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_ScreenTouchCountAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenTouchCountAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_ScreenTouchCountAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenTouchCountAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_ScreenTouchCountAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenTouchCountAction = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_ControllerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_ControllerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerCamera;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_ControllerCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerCamera = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockInteractionsWithScreenSpaceUI;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockInteractionsWithScreenSpaceUI;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_BlockInteractionsWithScreenSpaceUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlockInteractionsWithScreenSpaceUI = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_UseRotationThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseRotationThreshold;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_UseRotationThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseRotationThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_UseRotationThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseRotationThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_RotationThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_RotationThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_RotationThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotationThreshold = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get__scaleDelta_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleDelta_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get__scaleDelta_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleDelta_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set__scaleDelta_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleDelta_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCheckedDisabledTrackingInputReferenceActions;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCheckedDisabledTrackingInputReferenceActions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_HasCheckedDisabledTrackingInputReferenceActions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasCheckedDisabledTrackingInputReferenceActions = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_HasCheckedDisabledInputReferenceActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCheckedDisabledInputReferenceActions;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_HasCheckedDisabledInputReferenceActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCheckedDisabledInputReferenceActions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_HasCheckedDisabledInputReferenceActions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasCheckedDisabledInputReferenceActions = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule>& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_UIInputModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIInputModule;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule> const& UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_get_m_UIInputModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIInputModule;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::__cordl_internal_set_m_UIInputModule(::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIInputModule = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_enableTouchscreenGestureInputController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_enableTouchscreenGestureInputController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_enableTouchscreenGestureInputController(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_enableTouchscreenGestureInputController", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_tapStartPositionAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_tapStartPositionAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_tapStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_tapStartPositionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_dragCurrentPositionAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_dragCurrentPositionAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_dragCurrentPositionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_dragCurrentPositionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_dragDeltaAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_dragDeltaAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_dragDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_dragDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchStartPositionAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchStartPositionAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchStartPositionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchGapAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchGapAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchGapAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchGapAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchGapDeltaAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchGapDeltaAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchGapDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchGapDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_twistStartPositionAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_twistStartPositionAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_twistStartPositionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_twistStartPositionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_twistDeltaRotationAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_twistDeltaRotationAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_twistDeltaRotationAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_twistDeltaRotationAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_screenTouchCountAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_screenTouchCountAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_screenTouchCountAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_screenTouchCountAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_controllerCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_controllerCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_controllerCamera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_controllerCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_blockInteractionsWithScreenSpaceUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_blockInteractionsWithScreenSpaceUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_blockInteractionsWithScreenSpaceUI(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_blockInteractionsWithScreenSpaceUI", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_useRotationThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_useRotationThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_useRotationThreshold(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_useRotationThreshold", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_rotationThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_rotationThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_rotationThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_rotationThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_scaleDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_scaleDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_scaleDelta(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_scaleDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchStartPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchStartPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchStartPosition(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchStartPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_pinchGapDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_pinchGapDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_pinchGapDelta(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_pinchGapDelta", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_twistStartPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_twistStartPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_twistStartPosition(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_twistStartPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_twistRotationDeltaAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_twistRotationDeltaAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_twistRotationDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_twistRotationDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::get_screenTouchCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"get_screenTouchCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::set_screenTouchCount(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"set_screenTouchCount", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::TryGetCurrentPositionAction(int32_t  touchCount, ::by_ref<::UnityEngine::InputSystem::InputAction*>  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"TryGetCurrentPositionAction", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchCount, action);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::TryGetCurrentOneInputSelectAction(::by_ref<::UnityEngine::InputSystem::InputAction*>  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"TryGetCurrentOneInputSelectAction", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::TryGetCurrentTwoInputSelectAction(::by_ref<::UnityEngine::InputSystem::InputAction*>  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"TryGetCurrentTwoInputSelectAction", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::TryGetAbsoluteValue(::UnityEngine::InputSystem::InputAction*  action, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"TryGetAbsoluteValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, action, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::FindUIInputModule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"FindUIInputModule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::IsPointerOverScreenSpaceCanvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"IsPointerOverScreenSpaceCanvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::InitializeTouchscreenGestureController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"InitializeTouchscreenGestureController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::RemoveTouchscreenGestureController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"RemoveTouchscreenGestureController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::EnableAllDirectActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"EnableAllDirectActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::DisableAllDirectActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"DisableAllDirectActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::SetInputActionProperty(::by_ref<::UnityEngine::InputSystem::InputActionProperty>  property, ::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"SetInputActionProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionProperty>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::IsDisabledReferenceAction(::UnityEngine::InputSystem::InputActionProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {"IsDisabledReferenceAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, property);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController* UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController::XRScreenSpaceController()   {
}
