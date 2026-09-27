#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ActionBasedController.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActionBasedController_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticControlActionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerState_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_buttonPressPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_buttonPressPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fe1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_buttonPressPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_buttonPressPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_buttonPressPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3fe1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_buttonPressPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_positionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_positionAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_positionAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_positionAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_positionAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_positionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_rotationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_rotationAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_rotationAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_rotationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_rotationAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_rotationAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_isTrackedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_isTrackedAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_isTrackedAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_isTrackedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_isTrackedAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_isTrackedAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_trackingStateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_trackingStateAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_trackingStateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_trackingStateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_trackingStateAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_trackingStateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_selectAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_selectAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_selectAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_selectAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_selectAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_selectAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_selectActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_selectActionValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3fe400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_selectActionValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_selectActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_selectActionValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_selectActionValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_activateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_activateAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_activateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_activateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_activateAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_activateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_activateActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_activateActionValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3fe48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_activateActionValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_activateActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_activateActionValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_activateActionValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_uiPressAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_uiPressAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_uiPressAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_uiPressAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_uiPressAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_uiPressAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_uiPressActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_uiPressActionValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3fe518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_uiPressActionValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_uiPressActionValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_uiPressActionValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_uiPressActionValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_uiScrollAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_uiScrollAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_uiScrollAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_uiScrollAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_uiScrollAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_uiScrollAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_hapticDeviceAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_hapticDeviceAction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3fe5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_hapticDeviceAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_hapticDeviceAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_hapticDeviceAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_hapticDeviceAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_rotateAnchorAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_rotateAnchorAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_rotateAnchorAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_rotateAnchorAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_rotateAnchorAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_rotateAnchorAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_directionalAnchorRotationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_directionalAnchorRotationAction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3fe630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_directionalAnchorRotationAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_directionalAnchorRotationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_directionalAnchorRotationAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_directionalAnchorRotationAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_translateAnchorAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_translateAnchorAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_translateAnchorAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_translateAnchorAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_translateAnchorAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_translateAnchorAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_scaleToggleAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_scaleToggleAction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3fe6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_scaleToggleAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_scaleToggleAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_scaleToggleAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_scaleToggleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.get_scaleDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_scaleDeltaAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fe704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_scaleDeltaAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.set_scaleDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_scaleDeltaAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fe718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_scaleDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3fe748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb3fea08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.UpdateTrackingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::UpdateTrackingInput)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0xb3fecc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.UpdateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::UpdateInput)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xb3ff300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.IsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::IsPressed)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3ff6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::ReadValue)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb3ff6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb3ff898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.EnableAllDirectActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::EnableAllDirectActions)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xb3fe7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"EnableAllDirectActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.DisableAllDirectActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::DisableAllDirectActions)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xb3feab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"DisableAllDirectActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.SetInputActionProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)(::by_ref<::UnityEngine::InputSystem::InputActionProperty>, ::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::SetInputActionProperty)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb3fe1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"SetInputActionProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionProperty>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController.IsDisabledReferenceAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::IsDisabledReferenceAction)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb3ff234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"IsDisabledReferenceAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::_ctor)> {
  constexpr static std::size_t size = 0x918;
  constexpr static std::size_t addrs = 0xb3ffa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_PositionAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_PositionAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_PositionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_RotationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_RotationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_RotationAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotationAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_IsTrackedAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTrackedAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_IsTrackedAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTrackedAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_IsTrackedAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsTrackedAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_TrackingStateAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackingStateAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_TrackingStateAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackingStateAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_TrackingStateAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackingStateAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_SelectAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_SelectAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_SelectAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_SelectActionValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectActionValue;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_SelectActionValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectActionValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_SelectActionValue(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectActionValue = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_ActivateAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_ActivateAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_ActivateAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_ActivateActionValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateActionValue;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_ActivateActionValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateActionValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_ActivateActionValue(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateActionValue = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_UIPressAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_UIPressAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_UIPressAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIPressAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_UIPressActionValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressActionValue;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_UIPressActionValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressActionValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_UIPressActionValue(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIPressActionValue = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_UIScrollAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_UIScrollAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_UIScrollAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIScrollAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_HapticDeviceAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticDeviceAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_HapticDeviceAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticDeviceAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_HapticDeviceAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticDeviceAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_RotateAnchorAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateAnchorAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_RotateAnchorAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateAnchorAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_RotateAnchorAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateAnchorAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_DirectionalAnchorRotationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DirectionalAnchorRotationAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_DirectionalAnchorRotationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DirectionalAnchorRotationAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_DirectionalAnchorRotationAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DirectionalAnchorRotationAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_TranslateAnchorAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateAnchorAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_TranslateAnchorAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateAnchorAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_TranslateAnchorAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateAnchorAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_ScaleToggleAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleToggleAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_ScaleToggleAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleToggleAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_ScaleToggleAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleToggleAction = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_ScaleDeltaAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleDeltaAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_ScaleDeltaAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleDeltaAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_ScaleDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleDeltaAction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCheckedDisabledTrackingInputReferenceActions;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_HasCheckedDisabledTrackingInputReferenceActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCheckedDisabledTrackingInputReferenceActions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_HasCheckedDisabledTrackingInputReferenceActions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasCheckedDisabledTrackingInputReferenceActions = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_HasCheckedDisabledInputReferenceActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCheckedDisabledInputReferenceActions;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_HasCheckedDisabledInputReferenceActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCheckedDisabledInputReferenceActions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_HasCheckedDisabledInputReferenceActions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasCheckedDisabledInputReferenceActions = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_HapticControlActionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticControlActionManager;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager* const& UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_get_m_HapticControlActionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticControlActionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::__cordl_internal_set_m_HapticControlActionManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticControlActionManager = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_buttonPressPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_buttonPressPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_buttonPressPoint(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_buttonPressPoint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_positionAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_positionAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_positionAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_positionAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_rotationAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_rotationAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_rotationAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_rotationAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_isTrackedAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_isTrackedAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_isTrackedAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_isTrackedAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_trackingStateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_trackingStateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_trackingStateAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_trackingStateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_selectAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_selectAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_selectAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_selectAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_selectActionValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_selectActionValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_selectActionValue(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_selectActionValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_activateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_activateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_activateAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_activateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_activateActionValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_activateActionValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_activateActionValue(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_activateActionValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_uiPressAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_uiPressAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_uiPressAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_uiPressAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_uiPressActionValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_uiPressActionValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_uiPressActionValue(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_uiPressActionValue", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_uiScrollAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_uiScrollAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_uiScrollAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_uiScrollAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_hapticDeviceAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_hapticDeviceAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_hapticDeviceAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_hapticDeviceAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_rotateAnchorAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_rotateAnchorAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_rotateAnchorAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_rotateAnchorAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_directionalAnchorRotationAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_directionalAnchorRotationAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_directionalAnchorRotationAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_directionalAnchorRotationAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_translateAnchorAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_translateAnchorAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_translateAnchorAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_translateAnchorAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_scaleToggleAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_scaleToggleAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_scaleToggleAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_scaleToggleAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::ActionBasedController::get_scaleDeltaAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"get_scaleDeltaAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::set_scaleDeltaAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"set_scaleDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ActionBasedController::IsPressed(::UnityEngine::InputSystem::InputAction*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, action);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::ActionBasedController::ReadValue(::UnityEngine::InputSystem::InputAction*  action)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, action);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ActionBasedController::SendHapticImpulse(float_t  amplitude, float_t  duration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, amplitude, duration);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::EnableAllDirectActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"EnableAllDirectActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::DisableAllDirectActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"DisableAllDirectActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::SetInputActionProperty(::by_ref<::UnityEngine::InputSystem::InputActionProperty>  property, ::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"SetInputActionProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionProperty>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::ActionBasedController::IsDisabledReferenceAction(::UnityEngine::InputSystem::InputActionProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {"IsDisabledReferenceAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, property);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActionBasedController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController* UnityEngine::XR::Interaction::Toolkit::ActionBasedController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::ActionBasedController::ActionBasedController()   {
}
