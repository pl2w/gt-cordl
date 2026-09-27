#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRDeviceSimulator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionName_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__XRSimulatedHandState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_Axis2DTargets_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_Space_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_TargetedDevices_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_TransformationMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMDState_impl.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_impl.hpp"
#include "UnityEngine/zzzz__CursorLockMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_CallbackContext_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionCapture_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionName_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedDeviceLifecycleManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedHandExpressionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedHandExpression_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_Axis2DTargets_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_DeviceMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_Space_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_TargetedDevices_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_TransformationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_deviceSimulatorActionAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceSimulatorActionAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b92c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_deviceSimulatorActionAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_deviceSimulatorActionAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionAsset*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_deviceSimulatorActionAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b92cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_deviceSimulatorActionAsset", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_controllerActionAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_controllerActionAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b92d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_controllerActionAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_controllerActionAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionAsset*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_controllerActionAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b92dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_controllerActionAsset", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardXTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardXTranslateAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b92e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardXTranslateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardXTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardXTranslateAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4b92ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardXTranslateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardYTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardYTranslateAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b94f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardYTranslateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardYTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardYTranslateAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4b94f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardYTranslateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardZTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardZTranslateAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b96fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardZTranslateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardZTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardZTranslateAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4b9704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardZTranslateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulateLeftAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateLeftAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b9908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulateLeftAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_manipulateLeftAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateLeftAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4b9910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_manipulateLeftAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulateRightAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateRightAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b9b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulateRightAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_manipulateRightAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateRightAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4b9b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_manipulateRightAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleManipulateLeftAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateLeftAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b9d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleManipulateLeftAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleManipulateLeftAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateLeftAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4b9d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleManipulateLeftAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleManipulateRightAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateRightAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b9ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleManipulateRightAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleManipulateRightAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateRightAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4b9ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleManipulateRightAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleManipulateBodyAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateBodyAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ba058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleManipulateBodyAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleManipulateBodyAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateBodyAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4ba060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleManipulateBodyAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulateHeadAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateHeadAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ba1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulateHeadAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_manipulateHeadAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateHeadAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4ba1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_manipulateHeadAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_handControllerModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_handControllerModeAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ba400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_handControllerModeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_handControllerModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_handControllerModeAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4ba408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_handControllerModeAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_cycleDevicesAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_cycleDevicesAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ba59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_cycleDevicesAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_cycleDevicesAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_cycleDevicesAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4ba5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_cycleDevicesAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_stopManipulationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_stopManipulationAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ba738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_stopManipulationAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_stopManipulationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_stopManipulationAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4ba740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_stopManipulationAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseDeltaAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ba8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseDeltaAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseDeltaAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4ba8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseScrollAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4baae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseScrollAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseScrollAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4baae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseScrollAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_rotateModeOverrideAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rotateModeOverrideAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bacec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_rotateModeOverrideAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_rotateModeOverrideAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rotateModeOverrideAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bacf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_rotateModeOverrideAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleMouseTransformationModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleMouseTransformationModeAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4baef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleMouseTransformationModeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleMouseTransformationModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleMouseTransformationModeAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4baf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleMouseTransformationModeAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_negateModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_negateModeAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bb094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_negateModeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_negateModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_negateModeAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bb09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_negateModeAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_xConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_xConstraintAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bb2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_xConstraintAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_xConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_xConstraintAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bb2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_xConstraintAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_yConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_yConstraintAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bb4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_yConstraintAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_yConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_yConstraintAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bb4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_yConstraintAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_zConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_zConstraintAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bb6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_zConstraintAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_zConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_zConstraintAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bb6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_zConstraintAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_resetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_resetAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bb8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_resetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_resetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_resetAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bb8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_resetAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleCursorLockAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleCursorLockAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bbad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleCursorLockAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleCursorLockAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleCursorLockAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bbad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleCursorLockAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleDevicePositionTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleDevicePositionTargetAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bbc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleDevicePositionTargetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleDevicePositionTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleDevicePositionTargetAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bbc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleDevicePositionTargetAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_togglePrimary2DAxisTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_togglePrimary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bbe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_togglePrimary2DAxisTargetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_togglePrimary2DAxisTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_togglePrimary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bbe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_togglePrimary2DAxisTargetAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_toggleSecondary2DAxisTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleSecondary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bbfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleSecondary2DAxisTargetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_toggleSecondary2DAxisTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleSecondary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bbfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleSecondary2DAxisTargetAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_axis2DAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_axis2DAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bc140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_axis2DAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_axis2DAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_axis2DAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bc148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_axis2DAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_restingHandAxis2DAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_restingHandAxis2DAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bc34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_restingHandAxis2DAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_restingHandAxis2DAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_restingHandAxis2DAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bc354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_restingHandAxis2DAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_gripAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_gripAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bc558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_gripAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_gripAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_gripAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bc560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_gripAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_triggerAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_triggerAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bc764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_triggerAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_triggerAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_triggerAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bc76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_triggerAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_primaryButtonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primaryButtonAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bc970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_primaryButtonAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_primaryButtonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primaryButtonAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bc978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_primaryButtonAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_secondaryButtonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondaryButtonAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bcb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_secondaryButtonAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_secondaryButtonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondaryButtonAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bcb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_secondaryButtonAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_menuAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_menuAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bcd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_menuAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_menuAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_menuAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bcd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_menuAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_primary2DAxisClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primary2DAxisClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bcf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_primary2DAxisClickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_primary2DAxisClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primary2DAxisClickAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bcf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_primary2DAxisClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_secondary2DAxisClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondary2DAxisClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bd1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_secondary2DAxisClickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_secondary2DAxisClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondary2DAxisClickAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bd1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_secondary2DAxisClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_primary2DAxisTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bd3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_primary2DAxisTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_primary2DAxisTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bd3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_primary2DAxisTouchAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_secondary2DAxisTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bd5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_secondary2DAxisTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_secondary2DAxisTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bd5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_secondary2DAxisTouchAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_primaryTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primaryTouchAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bd7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_primaryTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_primaryTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primaryTouchAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bd7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_primaryTouchAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_secondaryTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondaryTouchAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bd9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_secondaryTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_secondaryTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondaryTouchAction)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bd9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_secondaryTouchAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_handActionAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_handActionAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_handActionAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_handActionAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::InputSystem::InputActionAsset*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_handActionAsset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4bdbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_handActionAsset", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_cameraTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_cameraTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_cameraTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_cameraTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_cameraTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4bdbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_cameraTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardTranslateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRDeviceSimulator_Space (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardTranslateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardTranslateSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardTranslateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::XRDeviceSimulator_Space)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardTranslateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardTranslateSpace", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseTranslateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRDeviceSimulator_Space (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseTranslateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseTranslateSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseTranslateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::XRDeviceSimulator_Space)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseTranslateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseTranslateSpace", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardXTranslateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardXTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardXTranslateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardXTranslateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardXTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardXTranslateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardYTranslateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardYTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardYTranslateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardYTranslateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardYTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardYTranslateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardZTranslateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardZTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardZTranslateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardZTranslateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardZTranslateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardZTranslateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_keyboardBodyTranslateMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardBodyTranslateMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardBodyTranslateMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_keyboardBodyTranslateMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardBodyTranslateMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardBodyTranslateMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseXTranslateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseXTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseXTranslateSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseXTranslateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseXTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseXTranslateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseYTranslateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseYTranslateSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseYTranslateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseYTranslateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseScrollTranslateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseScrollTranslateSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseScrollTranslateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollTranslateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseScrollTranslateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseXRotateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseXRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseXRotateSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseXRotateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseXRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseXRotateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseYRotateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseYRotateSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseYRotateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseYRotateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseScrollRotateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseScrollRotateSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseScrollRotateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseScrollRotateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseYRotateInvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYRotateInvert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseYRotateInvert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseYRotateInvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYRotateInvert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseYRotateInvert", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_desiredCursorLockMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CursorLockMode (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_desiredCursorLockMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_desiredCursorLockMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_desiredCursorLockMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::CursorLockMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_desiredCursorLockMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_desiredCursorLockMode", {}, {::i2c::type_of<::UnityEngine::CursorLockMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_deviceSimulatorUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceSimulatorUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_deviceSimulatorUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_deviceSimulatorUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_deviceSimulatorUI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4bdcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_deviceSimulatorUI", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_gripAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_gripAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_gripAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_gripAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_gripAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_gripAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_triggerAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_triggerAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_triggerAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_triggerAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_triggerAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_triggerAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_hmdIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_hmdIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_hmdIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_hmdIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_hmdIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_hmdIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_hmdTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_hmdTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_hmdTrackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_hmdTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_hmdTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_hmdTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_leftControllerIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_leftControllerIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_leftControllerIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_leftControllerIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_leftControllerTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_leftControllerTrackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_leftControllerTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_leftControllerTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_rightControllerIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_rightControllerIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_rightControllerIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_rightControllerIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_rightControllerTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_rightControllerTrackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_rightControllerTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_rightControllerTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_leftHandIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftHandIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_leftHandIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_leftHandIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftHandIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_leftHandIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_rightHandIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightHandIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_rightHandIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_rightHandIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightHandIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_rightHandIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_mouseTransformationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRDeviceSimulator_TransformationMode (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseTransformationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseTransformationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_mouseTransformationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::XRDeviceSimulator_TransformationMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseTransformationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseTransformationMode", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TransformationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_negateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_negateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bddb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_negateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_negateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_negateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bddbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_negateMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_axis2DTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRDeviceSimulator_Axis2DTargets (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_axis2DTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bddc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_axis2DTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_axis2DTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::XRDeviceSimulator_Axis2DTargets)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_axis2DTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bddcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_axis2DTargets", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_Axis2DTargets>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingLeftDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingLeftDevice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4bddd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingLeftDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingRightDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingRightDevice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4bdde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingRightDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingLeftController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingLeftController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4bddf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingLeftController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingRightController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingRightController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4bde24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingRightController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingLeftHand)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bde54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingRightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingRightHand)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4bde88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingRightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_manipulatingFPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingFPS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4bdebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingFPS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4bdecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4bdf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_instance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_targetedDeviceInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRDeviceSimulator_TargetedDevices (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_targetedDeviceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_targetedDeviceInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_targetedDeviceInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::XRDeviceSimulator_TargetedDevices)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_targetedDeviceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4bdf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_targetedDeviceInput", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Awake)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0xb4bdf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnEnable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb4be89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnDisable)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb4beabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4beca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4bed84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Update)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb4bed8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessPoseInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessPoseInput)> {
  constexpr static std::size_t size = 0x1938;
  constexpr static std::size_t addrs = 0xb4bee74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessControlInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessControlInput)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4c0848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessHandExpressionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessHandExpressionInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4bee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"ProcessHandExpressionInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ToggleHandExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ToggleHandExpression)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4c08fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"ToggleHandExpression", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessAxis2DControlInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessAxis2DControlInput)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb4c0900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessButtonControlInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessButtonControlInput)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb4c0bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ProcessAnalogButtonControlInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessAnalogButtonControlInput)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4c0d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.GetResetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetResetScale)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4c07ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"GetResetScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Negate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRDeviceSimulator_TransformationMode (*)(::GlobalNamespace::XRDeviceSimulator_TransformationMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Negate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c0d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"Negate", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TransformationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.Negate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CursorLockMode (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::CursorLockMode)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Negate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4c0d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"Negate", {}, {::i2c::type_of<::UnityEngine::CursorLockMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeKeyboardXTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardXTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b9408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeKeyboardXTranslateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeKeyboardXTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardXTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b9320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeKeyboardXTranslateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeKeyboardYTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardYTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b9614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeKeyboardYTranslateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeKeyboardYTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardYTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b952c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeKeyboardYTranslateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeKeyboardZTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardZTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeKeyboardZTranslateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeKeyboardZTranslateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardZTranslateAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b9738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeKeyboardZTranslateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeManipulateLeftAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateLeftAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b9a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeManipulateLeftAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeManipulateLeftAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateLeftAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b9944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeManipulateLeftAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeManipulateRightAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateRightAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b9c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeManipulateRightAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeManipulateRightAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateRightAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4b9b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeManipulateRightAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleManipulateLeftAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateLeftAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4b9e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleManipulateLeftAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleManipulateLeftAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateLeftAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4b9d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleManipulateLeftAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleManipulateRightAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateRightAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4b9fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleManipulateRightAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleManipulateRightAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateRightAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4b9ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleManipulateRightAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleManipulateBodyAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateBodyAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ba144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleManipulateBodyAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleManipulateBodyAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateBodyAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ba094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleManipulateBodyAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeManipulateHeadAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateHeadAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4ba318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeManipulateHeadAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeManipulateHeadAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateHeadAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4ba230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeManipulateHeadAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeHandControllerModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeHandControllerModeAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ba4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeHandControllerModeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeHandControllerModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeHandControllerModeAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ba43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeHandControllerModeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeCycleDevicesAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeCycleDevicesAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ba688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeCycleDevicesAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeCycleDevicesAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeCycleDevicesAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ba5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeCycleDevicesAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeStopManipulationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeStopManipulationAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ba824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeStopManipulationAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeStopManipulationAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeStopManipulationAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4ba774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeStopManipulationAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeMouseDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMouseDeltaAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4ba9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeMouseDeltaAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeMouseDeltaAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMouseDeltaAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4ba910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeMouseDeltaAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeMouseScrollAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMouseScrollAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bac04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeMouseScrollAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeMouseScrollAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMouseScrollAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bab1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeMouseScrollAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeRotateModeOverrideAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeRotateModeOverrideAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeRotateModeOverrideAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeRotateModeOverrideAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeRotateModeOverrideAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bad28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeRotateModeOverrideAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleMouseTransformationModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleMouseTransformationModeAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4bafe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleMouseTransformationModeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleMouseTransformationModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleMouseTransformationModeAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4baf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleMouseTransformationModeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeNegateModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeNegateModeAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeNegateModeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeNegateModeAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeNegateModeAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeNegateModeAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeXConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeXConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeXConstraintAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeXConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeXConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeXConstraintAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeYConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeYConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeYConstraintAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeYConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeYConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeYConstraintAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeZConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeZConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeZConstraintAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeZConstraintAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeZConstraintAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeZConstraintAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeResetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeResetAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeResetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeResetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeResetAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bb900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeResetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleCursorLockAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleCursorLockAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4bbbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleCursorLockAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleCursorLockAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleCursorLockAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4bbb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleCursorLockAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleDevicePositionTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleDevicePositionTargetAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4bbd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleDevicePositionTargetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleDevicePositionTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleDevicePositionTargetAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4bbca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleDevicePositionTargetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeTogglePrimary2DAxisTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeTogglePrimary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4bbef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeTogglePrimary2DAxisTargetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeTogglePrimary2DAxisTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeTogglePrimary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4bbe44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeTogglePrimary2DAxisTargetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeToggleSecondary2DAxisTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleSecondary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4bc090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleSecondary2DAxisTargetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeToggleSecondary2DAxisTargetAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleSecondary2DAxisTargetAction)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4bbfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleSecondary2DAxisTargetAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeAxis2DAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeAxis2DAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bc264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeAxis2DAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeAxis2DAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeAxis2DAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bc17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeAxis2DAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeRestingHandAxis2DAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeRestingHandAxis2DAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bc470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeRestingHandAxis2DAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeRestingHandAxis2DAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeRestingHandAxis2DAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bc388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeRestingHandAxis2DAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeGripAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeGripAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bc67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeGripAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeGripAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeGripAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bc594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeGripAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeTriggerAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeTriggerAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bc888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeTriggerAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeTriggerAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeTriggerAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bc7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeTriggerAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribePrimaryButtonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimaryButtonAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bca94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribePrimaryButtonAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribePrimaryButtonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimaryButtonAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bc9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribePrimaryButtonAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeSecondaryButtonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondaryButtonAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bcca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeSecondaryButtonAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeSecondaryButtonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondaryButtonAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bcbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeSecondaryButtonAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeMenuAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMenuAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bceac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeMenuAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeMenuAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMenuAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bcdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeMenuAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribePrimary2DAxisClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimary2DAxisClickAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bd0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribePrimary2DAxisClickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribePrimary2DAxisClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimary2DAxisClickAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bcfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribePrimary2DAxisClickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeSecondary2DAxisClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondary2DAxisClickAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bd2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeSecondary2DAxisClickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeSecondary2DAxisClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondary2DAxisClickAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bd1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeSecondary2DAxisClickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribePrimary2DAxisTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bd4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribePrimary2DAxisTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribePrimary2DAxisTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bd3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribePrimary2DAxisTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeSecondary2DAxisTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bd6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeSecondary2DAxisTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeSecondary2DAxisTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondary2DAxisTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bd5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeSecondary2DAxisTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribePrimaryTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimaryTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bd8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribePrimaryTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribePrimaryTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimaryTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bd800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribePrimaryTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.SubscribeSecondaryTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondaryTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bdaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeSecondaryTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.UnsubscribeSecondaryTouchAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondaryTouchAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4bda0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeSecondaryTouchAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardXTranslatePerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardXTranslatePerformed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c0da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardXTranslatePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardXTranslateCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardXTranslateCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c0e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardXTranslateCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardYTranslatePerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardYTranslatePerformed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c0e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardYTranslatePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardYTranslateCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardYTranslateCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c0e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardYTranslateCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardZTranslatePerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardZTranslatePerformed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c0e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardZTranslatePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnKeyboardZTranslateCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardZTranslateCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c0ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardZTranslateCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateLeftPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateLeftPerformed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4c0ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateLeftPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateLeftCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateLeftCanceled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4c0ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateLeftCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateRightPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateRightPerformed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4c0f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateRightPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateRightCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateRightCanceled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4c0f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateRightCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleManipulateLeftPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateLeftPerformed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb4c0f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleManipulateLeftPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleManipulateRightPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateRightPerformed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb4c0fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleManipulateRightPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleManipulateBodyPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateBodyPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c0ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleManipulateBodyPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateHeadPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateHeadPerformed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4c1008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateHeadPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnManipulateHeadCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateHeadCanceled)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4c102c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateHeadCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnHandControllerModePerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnHandControllerModePerformed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4c1050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnHandControllerModePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnCycleDevicesPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnCycleDevicesPerformed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c10c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnCycleDevicesPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnStopManipulationPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnStopManipulationPerformed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c1120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnStopManipulationPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMouseDeltaPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseDeltaPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4c1128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMouseDeltaPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMouseDeltaCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseDeltaCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4c1188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMouseDeltaCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMouseScrollPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseScrollPerformed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4c11dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMouseScrollPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMouseScrollCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseScrollCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4c123c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMouseScrollCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnRotateModeOverridePerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRotateModeOverridePerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c1290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnRotateModeOverridePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnRotateModeOverrideCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRotateModeOverrideCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c129c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnRotateModeOverrideCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleMouseTransformationModePerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleMouseTransformationModePerformed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4c12a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleMouseTransformationModePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnNegateModePerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnNegateModePerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c12b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnNegateModePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnNegateModeCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnNegateModeCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c12c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnNegateModeCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnXConstraintPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnXConstraintPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c12cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnXConstraintPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnXConstraintCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnXConstraintCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c12d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnXConstraintCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnYConstraintPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnYConstraintPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c12e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnYConstraintPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnYConstraintCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnYConstraintCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c12ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnYConstraintCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnZConstraintPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnZConstraintPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c12f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnZConstraintPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnZConstraintCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnZConstraintCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c1300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnZConstraintCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnResetPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnResetPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c1308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnResetPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnResetCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnResetCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c1314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnResetCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleCursorLockPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleCursorLockPerformed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4c131c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleCursorLockPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleDevicePositionTargetPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleDevicePositionTargetPerformed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4c1348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleDevicePositionTargetPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnTogglePrimary2DAxisTargetPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTogglePrimary2DAxisTargetPerformed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4c1368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnTogglePrimary2DAxisTargetPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnToggleSecondary2DAxisTargetPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleSecondary2DAxisTargetPerformed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4c1388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleSecondary2DAxisTargetPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnAxis2DPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnAxis2DPerformed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb4c13a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnAxis2DPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnAxis2DCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnAxis2DCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4c147c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnAxis2DCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnRestingHandAxis2DPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRestingHandAxis2DPerformed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb4c14d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnRestingHandAxis2DPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnRestingHandAxis2DCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRestingHandAxis2DCanceled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4c15a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnRestingHandAxis2DCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnGripPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnGripPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c15f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnGripPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnGripCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnGripCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c1604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnGripCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnTriggerPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTriggerPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c160c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnTriggerPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnTriggerCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTriggerCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c1618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnTriggerCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimaryButtonPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryButtonPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c1620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimaryButtonPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimaryButtonCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryButtonCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c162c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimaryButtonCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondaryButtonPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryButtonPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c1634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondaryButtonPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondaryButtonCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryButtonCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c1640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondaryButtonCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMenuPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMenuPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c1648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMenuPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnMenuCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMenuCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c1654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMenuCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimary2DAxisClickPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisClickPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c165c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimary2DAxisClickPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimary2DAxisClickCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisClickCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c1668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimary2DAxisClickCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondary2DAxisClickPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisClickPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c1670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondary2DAxisClickPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondary2DAxisClickCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisClickCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c167c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondary2DAxisClickCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimary2DAxisTouchPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisTouchPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c1684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimary2DAxisTouchPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimary2DAxisTouchCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisTouchCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c1690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimary2DAxisTouchCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondary2DAxisTouchPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisTouchPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c1698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondary2DAxisTouchPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondary2DAxisTouchCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisTouchCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c16a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondary2DAxisTouchCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimaryTouchPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryTouchPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c16ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimaryTouchPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnPrimaryTouchCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryTouchCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c16b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimaryTouchCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondaryTouchPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryTouchPerformed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c16c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondaryTouchPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.OnSecondaryTouchCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryTouchCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c16cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondaryTouchCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_simulatedHandExpressions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_simulatedHandExpressions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c16d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_simulatedHandExpressions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_removeOtherHMDDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_removeOtherHMDDevices)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb4c16dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_removeOtherHMDDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_removeOtherHMDDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_removeOtherHMDDevices)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb4c1764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_removeOtherHMDDevices", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_handTrackingCapability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_handTrackingCapability)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb4c17ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_handTrackingCapability", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.set_handTrackingCapability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_handTrackingCapability)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb4c1874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_handTrackingCapability", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.get_deviceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRDeviceSimulator_DeviceMode (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb4c18fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_deviceMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.AddDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::AddDevices)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4c197c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.RemoveDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::RemoveDevices)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4c1a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.InitializeHandExpressions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::InitializeHandExpressions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4bed88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"InitializeHandExpressions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator.ToggleHandExpressionDeprecated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ToggleHandExpressionDeprecated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4c1b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"ToggleHandExpressionDeprecated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::_ctor)> {
  constexpr static std::size_t size = 0x1300;
  constexpr static std::size_t addrs = 0xb4c1b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceSimulatorActionAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceSimulatorActionAsset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceSimulatorActionAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceSimulatorActionAsset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_DeviceSimulatorActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeviceSimulatorActionAsset = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ControllerActionAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerActionAsset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ControllerActionAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerActionAsset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ControllerActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerActionAsset = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardXTranslateAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardXTranslateAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardXTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardXTranslateAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardYTranslateAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardYTranslateAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardYTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardYTranslateAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardZTranslateAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardZTranslateAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardZTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardZTranslateAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateLeftAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulateLeftAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateLeftAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulateLeftAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ManipulateLeftAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulateLeftAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateRightAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulateRightAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateRightAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulateRightAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ManipulateRightAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulateRightAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateLeftAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateLeftAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateLeftAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateLeftAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleManipulateLeftAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleManipulateLeftAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateRightAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateRightAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateRightAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateRightAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleManipulateRightAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleManipulateRightAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateBodyAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateBodyAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleManipulateBodyAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateBodyAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleManipulateBodyAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleManipulateBodyAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateHeadAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulateHeadAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulateHeadAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulateHeadAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ManipulateHeadAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulateHeadAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HandControllerModeAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandControllerModeAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HandControllerModeAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandControllerModeAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HandControllerModeAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandControllerModeAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CycleDevicesAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CycleDevicesAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CycleDevicesAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CycleDevicesAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_CycleDevicesAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CycleDevicesAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_StopManipulationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StopManipulationAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_StopManipulationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StopManipulationAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_StopManipulationAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StopManipulationAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseDeltaAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseDeltaAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseDeltaAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseDeltaAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseDeltaAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseDeltaAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseScrollAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseScrollAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RotateModeOverrideAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateModeOverrideAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RotateModeOverrideAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateModeOverrideAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RotateModeOverrideAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateModeOverrideAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleMouseTransformationModeAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleMouseTransformationModeAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleMouseTransformationModeAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleMouseTransformationModeAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleMouseTransformationModeAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleMouseTransformationModeAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_NegateModeAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NegateModeAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_NegateModeAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NegateModeAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_NegateModeAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NegateModeAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_XConstraintAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XConstraintAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_XConstraintAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XConstraintAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_XConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XConstraintAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_YConstraintAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YConstraintAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_YConstraintAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YConstraintAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_YConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YConstraintAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ZConstraintAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZConstraintAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ZConstraintAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZConstraintAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ZConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ZConstraintAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ResetAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ResetAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ResetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResetAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleCursorLockAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleCursorLockAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleCursorLockAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleCursorLockAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleCursorLockAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleCursorLockAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleDevicePositionTargetAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleDevicePositionTargetAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleDevicePositionTargetAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleDevicePositionTargetAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleDevicePositionTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleDevicePositionTargetAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TogglePrimary2DAxisTargetAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TogglePrimary2DAxisTargetAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TogglePrimary2DAxisTargetAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TogglePrimary2DAxisTargetAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TogglePrimary2DAxisTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TogglePrimary2DAxisTargetAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleSecondary2DAxisTargetAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleSecondary2DAxisTargetAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ToggleSecondary2DAxisTargetAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleSecondary2DAxisTargetAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ToggleSecondary2DAxisTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleSecondary2DAxisTargetAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Axis2DAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis2DAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Axis2DAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis2DAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Axis2DAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Axis2DAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandAxis2DAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestingHandAxis2DAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandAxis2DAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestingHandAxis2DAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RestingHandAxis2DAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RestingHandAxis2DAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_GripAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GripAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TriggerAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriggerAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryButtonAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryButtonAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryButtonAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryButtonAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_PrimaryButtonAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrimaryButtonAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryButtonAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryButtonAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryButtonAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryButtonAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_SecondaryButtonAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SecondaryButtonAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MenuAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MenuAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MenuAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MenuAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisClickAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisClickAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisClickAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Primary2DAxisClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Primary2DAxisClickAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisClickAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisClickAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisClickAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Secondary2DAxisClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Secondary2DAxisClickAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisTouchAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisTouchAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisTouchAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisTouchAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Primary2DAxisTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Primary2DAxisTouchAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisTouchAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisTouchAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisTouchAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisTouchAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Secondary2DAxisTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Secondary2DAxisTouchAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryTouchAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryTouchAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryTouchAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryTouchAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_PrimaryTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrimaryTouchAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryTouchAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryTouchAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryTouchAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryTouchAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_SecondaryTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SecondaryTouchAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HandActionAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandActionAsset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HandActionAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandActionAsset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HandActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandActionAsset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CameraTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CameraTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_CameraTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraTransform = value;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_Space& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardTranslateSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardTranslateSpace;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_Space const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardTranslateSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardTranslateSpace;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardTranslateSpace(::GlobalNamespace::XRDeviceSimulator_Space  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardTranslateSpace = value;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_Space& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseTranslateSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseTranslateSpace;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_Space const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseTranslateSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseTranslateSpace;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseTranslateSpace(::GlobalNamespace::XRDeviceSimulator_Space  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseTranslateSpace = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardXTranslateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardXTranslateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardXTranslateSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardXTranslateSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardYTranslateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardYTranslateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardYTranslateSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardYTranslateSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardZTranslateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardZTranslateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardZTranslateSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardZTranslateSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardBodyTranslateMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardBodyTranslateMultiplier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardBodyTranslateMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardBodyTranslateMultiplier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardBodyTranslateMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardBodyTranslateMultiplier = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseXTranslateSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseXTranslateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseXTranslateSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseXTranslateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseXTranslateSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseXTranslateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYTranslateSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseYTranslateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYTranslateSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseYTranslateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseYTranslateSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseYTranslateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollTranslateSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollTranslateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollTranslateSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollTranslateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseScrollTranslateSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseScrollTranslateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseXRotateSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseXRotateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseXRotateSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseXRotateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseXRotateSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseXRotateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYRotateSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseYRotateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYRotateSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseYRotateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseYRotateSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseYRotateSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollRotateSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollRotateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollRotateSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollRotateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseScrollRotateSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseScrollRotateSensitivity = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYRotateInvert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseYRotateInvert;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseYRotateInvert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseYRotateInvert;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseYRotateInvert(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseYRotateInvert = value;
}
constexpr ::UnityEngine::CursorLockMode& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DesiredCursorLockMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DesiredCursorLockMode;
}
constexpr ::UnityEngine::CursorLockMode const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DesiredCursorLockMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DesiredCursorLockMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_DesiredCursorLockMode(::UnityEngine::CursorLockMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DesiredCursorLockMode = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceSimulatorUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceSimulatorUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceSimulatorUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceSimulatorUI;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_DeviceSimulatorUI(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeviceSimulatorUI = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_GripAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GripAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TriggerAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriggerAmount = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HMDIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HMDIsTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDTrackingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDTrackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDTrackingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDTrackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HMDTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HMDTrackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftControllerIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftControllerIsTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerTrackingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerTrackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerTrackingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerTrackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftControllerTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftControllerTrackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightControllerIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightControllerIsTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerTrackingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerTrackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerTrackingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerTrackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightControllerTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightControllerTrackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftHandIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftHandIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftHandIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftHandIsTracked = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightHandIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightHandIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightHandIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightHandIsTracked = value;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_TransformationMode& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__mouseTransformationMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseTransformationMode_k__BackingField;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_TransformationMode const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__mouseTransformationMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseTransformationMode_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set__mouseTransformationMode_k__BackingField(::GlobalNamespace::XRDeviceSimulator_TransformationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mouseTransformationMode_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__negateMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negateMode_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__negateMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____negateMode_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set__negateMode_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____negateMode_k__BackingField = value;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__axis2DTargets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2DTargets_k__BackingField;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get__axis2DTargets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2DTargets_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set__axis2DTargets_k__BackingField(::GlobalNamespace::XRDeviceSimulator_Axis2DTargets  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis2DTargets_k__BackingField = value;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_TargetedDevices& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TargetedDeviceInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetedDeviceInput;
}
constexpr ::GlobalNamespace::XRDeviceSimulator_TargetedDevices const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TargetedDeviceInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetedDeviceInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TargetedDeviceInput(::GlobalNamespace::XRDeviceSimulator_TargetedDevices  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetedDeviceInput = value;
}
constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CachedCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedCamera;
}
constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CachedCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedCamera;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_CachedCamera(::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedCamera = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardXTranslateInput;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardXTranslateInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardXTranslateInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardXTranslateInput(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardXTranslateInput = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardYTranslateInput;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardYTranslateInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardYTranslateInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardYTranslateInput(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardYTranslateInput = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardZTranslateInput;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_KeyboardZTranslateInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardZTranslateInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_KeyboardZTranslateInput(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardZTranslateInput = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseDeltaInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseDeltaInput;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseDeltaInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseDeltaInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseDeltaInput(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseDeltaInput = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollInput;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MouseScrollInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MouseScrollInput(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseScrollInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RotateModeOverrideInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateModeOverrideInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RotateModeOverrideInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateModeOverrideInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RotateModeOverrideInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateModeOverrideInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_XConstraintInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XConstraintInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_XConstraintInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XConstraintInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_XConstraintInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XConstraintInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_YConstraintInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YConstraintInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_YConstraintInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YConstraintInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_YConstraintInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YConstraintInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ZConstraintInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZConstraintInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ZConstraintInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZConstraintInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ZConstraintInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ZConstraintInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ResetInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ResetInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ResetInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResetInput = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Axis2DInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis2DInput;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Axis2DInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis2DInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Axis2DInput(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Axis2DInput = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandAxis2DInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestingHandAxis2DInput;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandAxis2DInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestingHandAxis2DInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RestingHandAxis2DInput(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RestingHandAxis2DInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_GripInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_GripInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GripInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_TriggerInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_TriggerInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriggerInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryButtonInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryButtonInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryButtonInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryButtonInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_PrimaryButtonInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrimaryButtonInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryButtonInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryButtonInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryButtonInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryButtonInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_SecondaryButtonInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SecondaryButtonInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MenuInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_MenuInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_MenuInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MenuInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisClickInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisClickInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisClickInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisClickInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Primary2DAxisClickInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Primary2DAxisClickInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisClickInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisClickInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisClickInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisClickInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Secondary2DAxisClickInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Secondary2DAxisClickInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Primary2DAxisTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Primary2DAxisTouchInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Primary2DAxisTouchInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_Secondary2DAxisTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_Secondary2DAxisTouchInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Secondary2DAxisTouchInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_PrimaryTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_PrimaryTouchInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrimaryTouchInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SecondaryTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_SecondaryTouchInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SecondaryTouchInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulatedRestingHandAxis2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulatedRestingHandAxis2D;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_ManipulatedRestingHandAxis2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulatedRestingHandAxis2D;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_ManipulatedRestingHandAxis2D(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulatedRestingHandAxis2D = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerEuler;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerEuler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftControllerEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftControllerEuler = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerEuler;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerEuler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightControllerEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightControllerEuler = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CenterEyeEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CenterEyeEuler;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_CenterEyeEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CenterEyeEuler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_CenterEyeEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CenterEyeEuler = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HMDState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HMDState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HMDState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftControllerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftControllerState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightControllerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightControllerState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftHandState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_LeftHandState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_LeftHandState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftHandState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightHandState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RightHandState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RightHandState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightHandState = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceLifecycleManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceLifecycleManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_DeviceLifecycleManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceLifecycleManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_DeviceLifecycleManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeviceLifecycleManager = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HandExpressionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandExpressionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_HandExpressionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandExpressionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_HandExpressionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandExpressionManager = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandExpressionCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestingHandExpressionCapture;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_RestingHandExpressionCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestingHandExpressionCapture;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_RestingHandExpressionCapture(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RestingHandExpressionCapture = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SimulatedHandExpressions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SimulatedHandExpressions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_get_m_SimulatedHandExpressions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SimulatedHandExpressions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::__cordl_internal_set_m_SimulatedHandExpressions(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SimulatedHandExpressions = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::setStaticF__instance_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>, "<instance>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(std::forward<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>>(value));
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>, "<instance>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::setStaticF_instanceChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "instanceChanged", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::getStaticF_instanceChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "instanceChanged", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>();
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceSimulatorActionAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_deviceSimulatorActionAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_deviceSimulatorActionAsset(::UnityEngine::InputSystem::InputActionAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_deviceSimulatorActionAsset", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_controllerActionAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_controllerActionAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_controllerActionAsset(::UnityEngine::InputSystem::InputActionAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_controllerActionAsset", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardXTranslateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardXTranslateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardXTranslateAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardXTranslateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardYTranslateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardYTranslateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardYTranslateAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardYTranslateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardZTranslateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardZTranslateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardZTranslateAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardZTranslateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateLeftAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulateLeftAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateLeftAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_manipulateLeftAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateRightAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulateRightAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateRightAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_manipulateRightAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateLeftAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleManipulateLeftAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateLeftAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleManipulateLeftAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateRightAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleManipulateRightAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateRightAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleManipulateRightAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleManipulateBodyAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleManipulateBodyAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleManipulateBodyAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleManipulateBodyAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulateHeadAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulateHeadAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_manipulateHeadAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_manipulateHeadAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_handControllerModeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_handControllerModeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_handControllerModeAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_handControllerModeAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_cycleDevicesAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_cycleDevicesAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_cycleDevicesAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_cycleDevicesAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_stopManipulationAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_stopManipulationAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_stopManipulationAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_stopManipulationAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseDeltaAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseDeltaAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseDeltaAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseDeltaAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseScrollAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseScrollAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rotateModeOverrideAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_rotateModeOverrideAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rotateModeOverrideAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_rotateModeOverrideAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleMouseTransformationModeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleMouseTransformationModeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleMouseTransformationModeAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleMouseTransformationModeAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_negateModeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_negateModeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_negateModeAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_negateModeAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_xConstraintAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_xConstraintAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_xConstraintAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_xConstraintAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_yConstraintAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_yConstraintAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_yConstraintAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_yConstraintAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_zConstraintAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_zConstraintAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_zConstraintAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_zConstraintAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_resetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_resetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_resetAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_resetAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleCursorLockAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleCursorLockAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleCursorLockAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleCursorLockAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleDevicePositionTargetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleDevicePositionTargetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleDevicePositionTargetAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleDevicePositionTargetAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_togglePrimary2DAxisTargetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_togglePrimary2DAxisTargetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_togglePrimary2DAxisTargetAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_togglePrimary2DAxisTargetAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_toggleSecondary2DAxisTargetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_toggleSecondary2DAxisTargetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_toggleSecondary2DAxisTargetAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_toggleSecondary2DAxisTargetAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_axis2DAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_axis2DAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_axis2DAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_axis2DAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_restingHandAxis2DAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_restingHandAxis2DAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_restingHandAxis2DAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_restingHandAxis2DAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_gripAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_gripAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_gripAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_gripAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_triggerAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_triggerAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_triggerAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_triggerAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primaryButtonAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_primaryButtonAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primaryButtonAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_primaryButtonAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondaryButtonAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_secondaryButtonAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondaryButtonAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_secondaryButtonAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_menuAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_menuAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_menuAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_menuAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primary2DAxisClickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_primary2DAxisClickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primary2DAxisClickAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_primary2DAxisClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondary2DAxisClickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_secondary2DAxisClickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondary2DAxisClickAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_secondary2DAxisClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primary2DAxisTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_primary2DAxisTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primary2DAxisTouchAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_primary2DAxisTouchAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondary2DAxisTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_secondary2DAxisTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondary2DAxisTouchAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_secondary2DAxisTouchAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_primaryTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_primaryTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_primaryTouchAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_primaryTouchAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_secondaryTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_secondaryTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_secondaryTouchAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_secondaryTouchAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_handActionAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_handActionAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_handActionAsset(::UnityEngine::InputSystem::InputActionAsset*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_handActionAsset", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_cameraTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_cameraTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_cameraTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_cameraTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRDeviceSimulator_Space UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardTranslateSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardTranslateSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRDeviceSimulator_Space>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardTranslateSpace(::GlobalNamespace::XRDeviceSimulator_Space  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardTranslateSpace", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRDeviceSimulator_Space UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseTranslateSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseTranslateSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRDeviceSimulator_Space>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseTranslateSpace(::GlobalNamespace::XRDeviceSimulator_Space  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseTranslateSpace", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardXTranslateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardXTranslateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardXTranslateSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardXTranslateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardYTranslateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardYTranslateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardYTranslateSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardYTranslateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardZTranslateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardZTranslateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardZTranslateSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardZTranslateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_keyboardBodyTranslateMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_keyboardBodyTranslateMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_keyboardBodyTranslateMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_keyboardBodyTranslateMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseXTranslateSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseXTranslateSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseXTranslateSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseXTranslateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYTranslateSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseYTranslateSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYTranslateSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseYTranslateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollTranslateSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseScrollTranslateSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollTranslateSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseScrollTranslateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseXRotateSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseXRotateSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseXRotateSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseXRotateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYRotateSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseYRotateSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYRotateSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseYRotateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseScrollRotateSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseScrollRotateSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseScrollRotateSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseScrollRotateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseYRotateInvert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseYRotateInvert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseYRotateInvert(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseYRotateInvert", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::CursorLockMode UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_desiredCursorLockMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_desiredCursorLockMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::CursorLockMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_desiredCursorLockMode(::UnityEngine::CursorLockMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_desiredCursorLockMode", {}, {::i2c::type_of<::UnityEngine::CursorLockMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceSimulatorUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_deviceSimulatorUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_deviceSimulatorUI(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_deviceSimulatorUI", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_gripAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_gripAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_gripAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_gripAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_triggerAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_triggerAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_triggerAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_triggerAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_hmdIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_hmdIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_hmdIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_hmdIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_hmdTrackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_hmdTrackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_hmdTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_hmdTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftControllerIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_leftControllerIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftControllerIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_leftControllerIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftControllerTrackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_leftControllerTrackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftControllerTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_leftControllerTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightControllerIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_rightControllerIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightControllerIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_rightControllerIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightControllerTrackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_rightControllerTrackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightControllerTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_rightControllerTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_leftHandIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_leftHandIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_leftHandIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_leftHandIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_rightHandIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_rightHandIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_rightHandIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_rightHandIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRDeviceSimulator_TransformationMode UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_mouseTransformationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_mouseTransformationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRDeviceSimulator_TransformationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_mouseTransformationMode(::GlobalNamespace::XRDeviceSimulator_TransformationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_mouseTransformationMode", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TransformationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_negateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_negateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_negateMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_negateMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_axis2DTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_axis2DTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRDeviceSimulator_Axis2DTargets>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_axis2DTargets(::GlobalNamespace::XRDeviceSimulator_Axis2DTargets  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_axis2DTargets", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_Axis2DTargets>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingLeftDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingLeftDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingRightDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingRightDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingLeftController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingLeftController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingRightController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingRightController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingRightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingRightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_manipulatingFPS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_manipulatingFPS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_instance(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_instance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GlobalNamespace::XRDeviceSimulator_TargetedDevices UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_targetedDeviceInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_targetedDeviceInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_targetedDeviceInput(::GlobalNamespace::XRDeviceSimulator_TargetedDevices  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_targetedDeviceInput", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessPoseInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessControlInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessHandExpressionInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"ProcessHandExpressionInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ToggleHandExpression(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*  simulatedExpression)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"ToggleHandExpression", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulatedExpression);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessAxis2DControlInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessButtonControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ProcessAnalogButtonControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::GetResetScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"GetResetScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::GlobalNamespace::XRDeviceSimulator_TransformationMode UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Negate(::GlobalNamespace::XRDeviceSimulator_TransformationMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"Negate", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TransformationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRDeviceSimulator_TransformationMode>(nullptr, ___internal_method, mode);
}
inline ::UnityEngine::CursorLockMode UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::Negate(::UnityEngine::CursorLockMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"Negate", {}, {::i2c::type_of<::UnityEngine::CursorLockMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::CursorLockMode>(this, ___internal_method, mode);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardXTranslateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeKeyboardXTranslateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardXTranslateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeKeyboardXTranslateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardYTranslateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeKeyboardYTranslateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardYTranslateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeKeyboardYTranslateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeKeyboardZTranslateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeKeyboardZTranslateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeKeyboardZTranslateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeKeyboardZTranslateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateLeftAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeManipulateLeftAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateLeftAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeManipulateLeftAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateRightAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeManipulateRightAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateRightAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeManipulateRightAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateLeftAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleManipulateLeftAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateLeftAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleManipulateLeftAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateRightAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleManipulateRightAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateRightAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleManipulateRightAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleManipulateBodyAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleManipulateBodyAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleManipulateBodyAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleManipulateBodyAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeManipulateHeadAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeManipulateHeadAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeManipulateHeadAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeManipulateHeadAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeHandControllerModeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeHandControllerModeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeHandControllerModeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeHandControllerModeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeCycleDevicesAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeCycleDevicesAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeCycleDevicesAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeCycleDevicesAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeStopManipulationAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeStopManipulationAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeStopManipulationAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeStopManipulationAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMouseDeltaAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeMouseDeltaAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMouseDeltaAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeMouseDeltaAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMouseScrollAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeMouseScrollAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMouseScrollAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeMouseScrollAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeRotateModeOverrideAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeRotateModeOverrideAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeRotateModeOverrideAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeRotateModeOverrideAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleMouseTransformationModeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleMouseTransformationModeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleMouseTransformationModeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleMouseTransformationModeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeNegateModeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeNegateModeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeNegateModeAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeNegateModeAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeXConstraintAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeXConstraintAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeXConstraintAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeXConstraintAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeYConstraintAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeYConstraintAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeYConstraintAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeYConstraintAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeZConstraintAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeZConstraintAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeZConstraintAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeZConstraintAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeResetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeResetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeResetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeResetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleCursorLockAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleCursorLockAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleCursorLockAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleCursorLockAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleDevicePositionTargetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleDevicePositionTargetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleDevicePositionTargetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleDevicePositionTargetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeTogglePrimary2DAxisTargetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeTogglePrimary2DAxisTargetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeTogglePrimary2DAxisTargetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeTogglePrimary2DAxisTargetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeToggleSecondary2DAxisTargetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeToggleSecondary2DAxisTargetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeToggleSecondary2DAxisTargetAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeToggleSecondary2DAxisTargetAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeAxis2DAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeAxis2DAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeAxis2DAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeAxis2DAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeRestingHandAxis2DAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeRestingHandAxis2DAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeRestingHandAxis2DAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeRestingHandAxis2DAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeGripAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeGripAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeGripAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeGripAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeTriggerAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeTriggerAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeTriggerAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeTriggerAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimaryButtonAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribePrimaryButtonAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimaryButtonAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribePrimaryButtonAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondaryButtonAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeSecondaryButtonAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondaryButtonAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeSecondaryButtonAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeMenuAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeMenuAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeMenuAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeMenuAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimary2DAxisClickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribePrimary2DAxisClickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimary2DAxisClickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribePrimary2DAxisClickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondary2DAxisClickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeSecondary2DAxisClickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondary2DAxisClickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeSecondary2DAxisClickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimary2DAxisTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribePrimary2DAxisTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimary2DAxisTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribePrimary2DAxisTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondary2DAxisTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeSecondary2DAxisTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondary2DAxisTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeSecondary2DAxisTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribePrimaryTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribePrimaryTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribePrimaryTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribePrimaryTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::SubscribeSecondaryTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"SubscribeSecondaryTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::UnsubscribeSecondaryTouchAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"UnsubscribeSecondaryTouchAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardXTranslatePerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardXTranslatePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardXTranslateCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardXTranslateCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardYTranslatePerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardYTranslatePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardYTranslateCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardYTranslateCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardZTranslatePerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardZTranslatePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnKeyboardZTranslateCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnKeyboardZTranslateCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateLeftPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateLeftPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateLeftCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateLeftCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateRightPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateRightPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateRightCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateRightCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateLeftPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleManipulateLeftPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateRightPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleManipulateRightPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleManipulateBodyPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleManipulateBodyPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateHeadPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateHeadPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnManipulateHeadCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnManipulateHeadCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnHandControllerModePerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnHandControllerModePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnCycleDevicesPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnCycleDevicesPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnStopManipulationPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnStopManipulationPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseDeltaPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMouseDeltaPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseDeltaCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMouseDeltaCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseScrollPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMouseScrollPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMouseScrollCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMouseScrollCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRotateModeOverridePerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnRotateModeOverridePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRotateModeOverrideCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnRotateModeOverrideCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleMouseTransformationModePerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleMouseTransformationModePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnNegateModePerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnNegateModePerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnNegateModeCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnNegateModeCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnXConstraintPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnXConstraintPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnXConstraintCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnXConstraintCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnYConstraintPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnYConstraintPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnYConstraintCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnYConstraintCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnZConstraintPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnZConstraintPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnZConstraintCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnZConstraintCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnResetPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnResetPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnResetCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnResetCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleCursorLockPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleCursorLockPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleDevicePositionTargetPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleDevicePositionTargetPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTogglePrimary2DAxisTargetPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnTogglePrimary2DAxisTargetPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnToggleSecondary2DAxisTargetPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnToggleSecondary2DAxisTargetPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnAxis2DPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnAxis2DPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnAxis2DCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnAxis2DCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRestingHandAxis2DPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnRestingHandAxis2DPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnRestingHandAxis2DCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnRestingHandAxis2DCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnGripPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnGripPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnGripCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnGripCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTriggerPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnTriggerPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnTriggerCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnTriggerCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryButtonPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimaryButtonPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryButtonCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimaryButtonCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryButtonPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondaryButtonPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryButtonCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondaryButtonCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMenuPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMenuPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnMenuCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnMenuCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisClickPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimary2DAxisClickPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisClickCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimary2DAxisClickCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisClickPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondary2DAxisClickPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisClickCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondary2DAxisClickCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisTouchPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimary2DAxisTouchPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimary2DAxisTouchCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimary2DAxisTouchCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisTouchPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondary2DAxisTouchPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondary2DAxisTouchCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondary2DAxisTouchCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryTouchPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimaryTouchPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnPrimaryTouchCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnPrimaryTouchCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryTouchPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondaryTouchPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::OnSecondaryTouchCanceled(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"OnSecondaryTouchCanceled", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_simulatedHandExpressions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_simulatedHandExpressions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>*>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_removeOtherHMDDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_removeOtherHMDDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_removeOtherHMDDevices(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_removeOtherHMDDevices", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_handTrackingCapability()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_handTrackingCapability", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::set_handTrackingCapability(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"set_handTrackingCapability", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRDeviceSimulator_DeviceMode UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::get_deviceMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"get_deviceMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRDeviceSimulator_DeviceMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::AddDevices()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::RemoveDevices()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::InitializeHandExpressions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"InitializeHandExpressions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::ToggleHandExpressionDeprecated(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*  simulatedExpression)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {"ToggleHandExpressionDeprecated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulatedExpression);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator::XRDeviceSimulator()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_name)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4c2e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.get_toggleAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_toggleAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c2eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_toggleAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.get_capture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_capture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c2eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_capture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.set_capture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::set_capture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c2ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"set_capture", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.get_expressionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_expressionName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c2ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_expressionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.set_expressionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::set_expressionName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"set_expressionName", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.get_icon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_icon)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4c2edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_icon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.add_performed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)(::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::add_performed)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb4c2ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"add_performed", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.remove_performed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)(::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::remove_performed)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb4c3034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"remove_performed", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4c3170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4c31ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression.OnActionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)(::GlobalNamespace::InputAction_CallbackContext)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::OnActionPerformed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4c3280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"OnActionPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c32ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_set_m_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Name = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_ToggleAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_ToggleAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_set_m_ToggleAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleAction = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_Capture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Capture;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_Capture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Capture;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_set_m_Capture(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Capture = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_ExpressionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpressionName;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_ExpressionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExpressionName;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_set_m_ExpressionName(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExpressionName = value;
}
constexpr ::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_Performed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Performed;
}
constexpr ::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_Performed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Performed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_set_m_Performed(::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Performed = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_Subscribed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Subscribed;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_get_m_Subscribed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Subscribed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::__cordl_internal_set_m_Subscribed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Subscribed = value;
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_toggleAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_toggleAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_capture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_capture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::set_capture(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"set_capture", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_expressionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_expressionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::set_expressionName(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"set_expressionName", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::get_icon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"get_icon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::add_performed(::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"add_performed", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::remove_performed(::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"remove_performed", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::OnActionPerformed(::GlobalNamespace::InputAction_CallbackContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {"OnActionPerformed", {}, {::i2c::type_of<::GlobalNamespace::InputAction_CallbackContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression::XRDeviceSimulator_SimulatedHandExpression()   {
}
