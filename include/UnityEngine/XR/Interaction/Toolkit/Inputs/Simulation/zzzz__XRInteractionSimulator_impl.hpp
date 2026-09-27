#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRInteractionSimulator.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__XRSimulatedHandState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__Axis2DTargets_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__ControllerInputMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__Space_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__TargetedDevices_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMDState_impl.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRInteractionSimulator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__Axis2DTargets_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__ControllerInputMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedDeviceLifecycleManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedHandExpressionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedHandExpression_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__Space_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__TargetedDevices_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_cameraTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_cameraTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_cameraTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_cameraTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_cameraTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c353c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_cameraTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_deviceLifecycleManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_deviceLifecycleManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_deviceLifecycleManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_deviceLifecycleManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_deviceLifecycleManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c354c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_deviceLifecycleManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_handExpressionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_handExpressionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_handExpressionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_handExpressionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_handExpressionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c355c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_handExpressionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_interactionSimulatorUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_interactionSimulatorUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_interactionSimulatorUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_interactionSimulatorUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_interactionSimulatorUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c356c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_interactionSimulatorUI", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_hmdIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_hmdIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_hmdIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_hmdIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_hmdIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c357c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_hmdIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_hmdTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_hmdTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_hmdTrackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_hmdTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_hmdTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c358c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_hmdTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_leftControllerIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_leftControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_leftControllerIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_leftControllerIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_leftControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c359c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_leftControllerIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_leftControllerTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_leftControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_leftControllerTrackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_leftControllerTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_leftControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_leftControllerTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_rightControllerIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rightControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rightControllerIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_rightControllerIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rightControllerIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rightControllerIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_rightControllerTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputTrackingState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rightControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rightControllerTrackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_rightControllerTrackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::InputTrackingState)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rightControllerTrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rightControllerTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_leftHandIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_leftHandIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_leftHandIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_leftHandIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_leftHandIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_leftHandIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_rightHandIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rightHandIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rightHandIsTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_rightHandIsTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rightHandIsTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rightHandIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_translateXInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateXInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c35f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateXInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_translateXInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateXInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c35fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateXInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_translateYInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateYInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateYInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_translateYInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateYInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c3660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateYInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_translateZInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateZInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c36bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateZInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_translateZInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateZInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c36c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateZInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_toggleManipulateLeftInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleManipulateLeftInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleManipulateLeftInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_toggleManipulateLeftInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleManipulateLeftInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleManipulateLeftInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_toggleManipulateRightInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleManipulateRightInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleManipulateRightInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_toggleManipulateRightInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleManipulateRightInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleManipulateRightInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_leftDeviceActionsInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_leftDeviceActionsInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_leftDeviceActionsInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_leftDeviceActionsInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_leftDeviceActionsInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c387c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_leftDeviceActionsInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_cycleDevicesInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_cycleDevicesInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_cycleDevicesInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_cycleDevicesInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_cycleDevicesInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_cycleDevicesInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_keyboardRotationDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_keyboardRotationDeltaInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c389c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_keyboardRotationDeltaInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_keyboardRotationDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_keyboardRotationDeltaInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c38a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_keyboardRotationDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_toggleMouseInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleMouseInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleMouseInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_toggleMouseInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleMouseInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleMouseInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_mouseRotationDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_mouseRotationDeltaInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_mouseRotationDeltaInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_mouseRotationDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_mouseRotationDeltaInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c391c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_mouseRotationDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_mouseScrollInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_mouseScrollInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_mouseScrollInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_mouseScrollInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_mouseScrollInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c3980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_mouseScrollInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_gripInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_gripInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c39dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_gripInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_gripInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_gripInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c39e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_gripInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_triggerInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_triggerInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c39f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_triggerInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_triggerInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_triggerInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c39f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_triggerInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_primaryButtonInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_primaryButtonInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_primaryButtonInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_primaryButtonInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_primaryButtonInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_primaryButtonInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_secondaryButtonInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_secondaryButtonInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_secondaryButtonInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_secondaryButtonInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_secondaryButtonInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_secondaryButtonInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_menuInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_menuInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_menuInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_menuInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_menuInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_menuInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_primary2DAxisClickInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_primary2DAxisClickInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_primary2DAxisClickInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_primary2DAxisClickInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_primary2DAxisClickInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_primary2DAxisClickInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_secondary2DAxisClickInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_secondary2DAxisClickInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_secondary2DAxisClickInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_secondary2DAxisClickInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_secondary2DAxisClickInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_secondary2DAxisClickInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_primary2DAxisTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_primary2DAxisTouchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_primary2DAxisTouchInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_primary2DAxisTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_primary2DAxisTouchInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_primary2DAxisTouchInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_secondary2DAxisTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_secondary2DAxisTouchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_secondary2DAxisTouchInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_secondary2DAxisTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_secondary2DAxisTouchInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_secondary2DAxisTouchInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_primaryTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_primaryTouchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_primaryTouchInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_primaryTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_primaryTouchInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_primaryTouchInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_secondaryTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_secondaryTouchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_secondaryTouchInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_secondaryTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_secondaryTouchInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_secondaryTouchInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_xConstraintInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_xConstraintInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_xConstraintInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_xConstraintInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_xConstraintInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_xConstraintInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_yConstraintInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_yConstraintInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_yConstraintInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_yConstraintInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_yConstraintInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_yConstraintInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_zConstraintInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_zConstraintInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_zConstraintInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_zConstraintInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_zConstraintInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_zConstraintInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_resetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_resetInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_resetInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_resetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_resetInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_resetInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_axis2DInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_axis2DInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_axis2DInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_axis2DInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_axis2DInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c3b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_axis2DInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_togglePrimary2DAxisTargetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_togglePrimary2DAxisTargetInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_togglePrimary2DAxisTargetInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_togglePrimary2DAxisTargetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_togglePrimary2DAxisTargetInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_togglePrimary2DAxisTargetInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_toggleSecondary2DAxisTargetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleSecondary2DAxisTargetInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleSecondary2DAxisTargetInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_toggleSecondary2DAxisTargetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleSecondary2DAxisTargetInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleSecondary2DAxisTargetInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_cycleQuickActionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_cycleQuickActionInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_cycleQuickActionInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_cycleQuickActionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_cycleQuickActionInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_cycleQuickActionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_togglePerformQuickActionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_togglePerformQuickActionInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_togglePerformQuickActionInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_togglePerformQuickActionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_togglePerformQuickActionInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_togglePerformQuickActionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_toggleManipulateHeadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleManipulateHeadInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleManipulateHeadInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_toggleManipulateHeadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleManipulateHeadInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleManipulateHeadInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_gripAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_gripAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_gripAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_gripAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_gripAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_gripAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_triggerAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_triggerAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_triggerAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_triggerAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_triggerAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_triggerAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_translateXSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateXSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateXSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_translateXSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateXSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateXSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_translateYSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateYSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateYSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_translateYSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateYSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateYSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_translateZSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateZSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateZSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_translateZSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateZSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateZSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_bodyTranslateMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_bodyTranslateMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_bodyTranslateMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_bodyTranslateMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_bodyTranslateMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_bodyTranslateMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_rotateXSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rotateXSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rotateXSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_rotateXSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rotateXSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rotateXSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_rotateYSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rotateYSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rotateYSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_rotateYSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rotateYSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rotateYSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_mouseScrollRotateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_mouseScrollRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_mouseScrollRotateSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_mouseScrollRotateSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_mouseScrollRotateSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_mouseScrollRotateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_rotateYInvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rotateYInvert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rotateYInvert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_rotateYInvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rotateYInvert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rotateYInvert", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_translateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_translateSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateSpace", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_quickActionControllerInputModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_quickActionControllerInputModes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_quickActionControllerInputModes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_quickActionControllerInputModes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_quickActionControllerInputModes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c3c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_quickActionControllerInputModes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_targetedDeviceInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_targetedDeviceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_targetedDeviceInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_targetedDeviceInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_targetedDeviceInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_targetedDeviceInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_controllerInputMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_controllerInputMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_controllerInputMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_currentHandExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_currentHandExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_currentHandExpression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_axis2DTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_axis2DTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_axis2DTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_axis2DTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_axis2DTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c3cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_axis2DTargets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_manipulatingLeftDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingLeftDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingLeftDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_manipulatingRightDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingRightDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingRightDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_manipulatingLeftController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingLeftController)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4c3cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingLeftController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_manipulatingRightController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingRightController)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4c3d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingRightController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_manipulatingLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingLeftHand)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4c3d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_manipulatingRightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingRightHand)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4c3d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingRightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_manipulatingHMD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingHMD)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c3da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingHMD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_manipulatingFPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingFPS)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingFPS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator> (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4c3dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4c3e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_instance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::Awake)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0xb4c3e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::OnEnable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4c4598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4c49cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4c49d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::Update)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb4c4aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ProcessPoseInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessPoseInput)> {
  constexpr static std::size_t size = 0x11e8;
  constexpr static std::size_t addrs = 0xb4c51a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ProcessControlInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessControlInput)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb4c66b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ProcessHandExpressionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessHandExpressionInput)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4c519c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"ProcessHandExpressionInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ToggleHandExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*, bool, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ToggleHandExpression)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4c69c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"ToggleHandExpression", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ProcessAxis2DControlInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessAxis2DControlInput)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4c69c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ProcessButtonControlInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessButtonControlInput)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb4c69f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ProcessAnalogButtonControlInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessAnalogButtonControlInput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4c6f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.GetResetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::GetResetScale)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4c6f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"GetResetScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ReadInputValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ReadInputValues)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xb4c6ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.CycleQuickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::CycleQuickAction)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb4c502c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"CycleQuickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.PerformQuickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::PerformQuickAction)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4c5164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"PerformQuickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ToggleControllerButtonInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ToggleControllerButtonInput)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb4c727c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"ToggleControllerButtonInput", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.ClearControllerButtonInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ClearControllerButtonInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c7270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"ClearControllerButtonInput", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.SetTrackedStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::SetTrackedStates)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4c6388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"SetTrackedStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.CycleTargetDevices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::CycleTargetDevices)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4c4fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"CycleTargetDevices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.HandleLeftOrRightDeviceToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::HandleLeftOrRightDeviceToggle)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb4c4c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"HandleLeftOrRightDeviceToggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.HandleHMDToggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::HandleHMDToggle)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb4c5140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"HandleHMDToggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator.CycleQuickActionHandExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::CycleQuickActionHandExpression)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb4c48a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"CycleQuickActionHandExpression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xb4c73e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CameraTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CameraTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_CameraTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraTransform = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_DeviceLifecycleManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceLifecycleManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_DeviceLifecycleManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceLifecycleManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_DeviceLifecycleManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeviceLifecycleManager = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HandExpressionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandExpressionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HandExpressionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandExpressionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_HandExpressionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandExpressionManager = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_InteractionSimulatorUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionSimulatorUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_InteractionSimulatorUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionSimulatorUI;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_InteractionSimulatorUI(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionSimulatorUI = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HMDIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HMDIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_HMDIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HMDIsTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HMDTrackingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDTrackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HMDTrackingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDTrackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_HMDTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HMDTrackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftControllerIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftControllerIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_LeftControllerIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftControllerIsTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftControllerTrackingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerTrackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftControllerTrackingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerTrackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_LeftControllerTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftControllerTrackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightControllerIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightControllerIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RightControllerIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightControllerIsTracked = value;
}
constexpr ::UnityEngine::XR::InputTrackingState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightControllerTrackingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerTrackingState;
}
constexpr ::UnityEngine::XR::InputTrackingState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightControllerTrackingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerTrackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RightControllerTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightControllerTrackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftHandIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftHandIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_LeftHandIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftHandIsTracked = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightHandIsTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandIsTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightHandIsTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandIsTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RightHandIsTracked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightHandIsTracked = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateXInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateXInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateXInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateXInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateXInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateXInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateYInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateYInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateYInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateYInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateYInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateYInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateZInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateZInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateZInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateZInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateZInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateZInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleManipulateLeftInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateLeftInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleManipulateLeftInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateLeftInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ToggleManipulateLeftInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleManipulateLeftInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleManipulateRightInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateRightInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleManipulateRightInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateRightInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ToggleManipulateRightInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleManipulateRightInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftDeviceActionsInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftDeviceActionsInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftDeviceActionsInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftDeviceActionsInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_LeftDeviceActionsInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftDeviceActionsInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CycleDevicesInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CycleDevicesInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CycleDevicesInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CycleDevicesInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_CycleDevicesInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CycleDevicesInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_KeyboardRotationDeltaInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardRotationDeltaInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_KeyboardRotationDeltaInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeyboardRotationDeltaInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_KeyboardRotationDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeyboardRotationDeltaInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleMouseInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleMouseInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleMouseInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleMouseInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ToggleMouseInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleMouseInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MouseRotationDeltaInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseRotationDeltaInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MouseRotationDeltaInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseRotationDeltaInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_MouseRotationDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseRotationDeltaInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MouseScrollInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MouseScrollInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_MouseScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseScrollInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_GripInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_GripInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_GripInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GripInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TriggerInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TriggerInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TriggerInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriggerInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_PrimaryButtonInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryButtonInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_PrimaryButtonInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryButtonInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_PrimaryButtonInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrimaryButtonInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_SecondaryButtonInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryButtonInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_SecondaryButtonInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryButtonInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_SecondaryButtonInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SecondaryButtonInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MenuInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MenuInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MenuInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_MenuInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MenuInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Primary2DAxisClickInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisClickInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Primary2DAxisClickInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisClickInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_Primary2DAxisClickInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Primary2DAxisClickInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Secondary2DAxisClickInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisClickInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Secondary2DAxisClickInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisClickInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_Secondary2DAxisClickInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Secondary2DAxisClickInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Primary2DAxisTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisTouchInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Primary2DAxisTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Primary2DAxisTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_Primary2DAxisTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Primary2DAxisTouchInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Secondary2DAxisTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisTouchInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Secondary2DAxisTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Secondary2DAxisTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_Secondary2DAxisTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Secondary2DAxisTouchInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_PrimaryTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryTouchInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_PrimaryTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrimaryTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_PrimaryTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrimaryTouchInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_SecondaryTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryTouchInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_SecondaryTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_SecondaryTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SecondaryTouchInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_XConstraintInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XConstraintInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_XConstraintInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XConstraintInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_XConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XConstraintInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_YConstraintInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YConstraintInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_YConstraintInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YConstraintInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_YConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YConstraintInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ZConstraintInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZConstraintInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ZConstraintInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZConstraintInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ZConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ZConstraintInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ResetInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ResetInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ResetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResetInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Axis2DInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis2DInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Axis2DInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis2DInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_Axis2DInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Axis2DInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TogglePrimary2DAxisTargetInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TogglePrimary2DAxisTargetInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TogglePrimary2DAxisTargetInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TogglePrimary2DAxisTargetInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TogglePrimary2DAxisTargetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TogglePrimary2DAxisTargetInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleSecondary2DAxisTargetInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleSecondary2DAxisTargetInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleSecondary2DAxisTargetInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleSecondary2DAxisTargetInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ToggleSecondary2DAxisTargetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleSecondary2DAxisTargetInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CycleQuickActionInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CycleQuickActionInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CycleQuickActionInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CycleQuickActionInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_CycleQuickActionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CycleQuickActionInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TogglePerformQuickActionInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TogglePerformQuickActionInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TogglePerformQuickActionInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TogglePerformQuickActionInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TogglePerformQuickActionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TogglePerformQuickActionInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleManipulateHeadInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateHeadInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleManipulateHeadInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateHeadInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ToggleManipulateHeadInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleManipulateHeadInput = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_GripAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_GripAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GripAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_GripAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GripAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TriggerAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TriggerAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TriggerAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriggerAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateXSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateXSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateXSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateXSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateXSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateXSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateYSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateYSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateYSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateYSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateYSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateYSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateZSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateZSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateZSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateZSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateZSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateZSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_BodyTranslateMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BodyTranslateMultiplier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_BodyTranslateMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BodyTranslateMultiplier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_BodyTranslateMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BodyTranslateMultiplier = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RotateXSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateXSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RotateXSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateXSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RotateXSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateXSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RotateYSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateYSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RotateYSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateYSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RotateYSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateYSensitivity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MouseScrollRotateSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollRotateSensitivity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MouseScrollRotateSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollRotateSensitivity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_MouseScrollRotateSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseScrollRotateSensitivity = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RotateYInvert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateYInvert;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RotateYInvert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateYInvert;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RotateYInvert(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateYInvert = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateSpace;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateSpace;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateSpace(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateSpace = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_QuickActionControllerInputModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QuickActionControllerInputModes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_QuickActionControllerInputModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_QuickActionControllerInputModes;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_QuickActionControllerInputModes(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_QuickActionControllerInputModes = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TargetedDeviceInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetedDeviceInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TargetedDeviceInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetedDeviceInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TargetedDeviceInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetedDeviceInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ControllerInputMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerInputMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ControllerInputMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerInputMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ControllerInputMode(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerInputMode = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CurrentHandExpression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentHandExpression;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CurrentHandExpression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentHandExpression;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_CurrentHandExpression(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentHandExpression = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get__axis2DTargets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2DTargets_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get__axis2DTargets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis2DTargets_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set__axis2DTargets_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis2DTargets_k__BackingField = value;
}
constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CachedCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedCamera;
}
constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CachedCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedCamera;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_CachedCamera(::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedCamera = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateXValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateXValue;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateXValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateXValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateXValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateXValue = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateYValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateYValue;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateYValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateYValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateYValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateYValue = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateZValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateZValue;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_TranslateZValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateZValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_TranslateZValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateZValue = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RotationDeltaValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationDeltaValue;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RotationDeltaValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotationDeltaValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RotationDeltaValue(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotationDeltaValue = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MouseScrollValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollValue;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_MouseScrollValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseScrollValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_MouseScrollValue(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseScrollValue = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_XConstraintValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XConstraintValue;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_XConstraintValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XConstraintValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_XConstraintValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XConstraintValue = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_YConstraintValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YConstraintValue;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_YConstraintValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_YConstraintValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_YConstraintValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_YConstraintValue = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ZConstraintValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZConstraintValue;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ZConstraintValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ZConstraintValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ZConstraintValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ZConstraintValue = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ResetValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetValue;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ResetValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ResetValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ResetValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ResetValue = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Axis2DValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis2DValue;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_Axis2DValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Axis2DValue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_Axis2DValue(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Axis2DValue = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ControllerInputModeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerInputModeIndex;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ControllerInputModeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerInputModeIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ControllerInputModeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerInputModeIndex = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HandExpressionIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandExpressionIndex;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HandExpressionIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HandExpressionIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_HandExpressionIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HandExpressionIndex = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleManipulateWaitingForReleaseBoth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateWaitingForReleaseBoth;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_ToggleManipulateWaitingForReleaseBoth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleManipulateWaitingForReleaseBoth;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_ToggleManipulateWaitingForReleaseBoth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleManipulateWaitingForReleaseBoth = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftControllerEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerEuler;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftControllerEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerEuler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_LeftControllerEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftControllerEuler = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightControllerEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerEuler;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightControllerEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerEuler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RightControllerEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightControllerEuler = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CenterEyeEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CenterEyeEuler;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_CenterEyeEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CenterEyeEuler;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_CenterEyeEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CenterEyeEuler = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HMDState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_HMDState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HMDState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_HMDState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HMDState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftControllerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftControllerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftControllerState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_LeftControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftControllerState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightControllerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightControllerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightControllerState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RightControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightControllerState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftHandState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_LeftHandState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_LeftHandState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftHandState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightHandState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_RightHandState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_RightHandState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightHandState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_PreviousTargetedDevices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousTargetedDevices;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_get_m_PreviousTargetedDevices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousTargetedDevices;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::__cordl_internal_set_m_PreviousTargetedDevices(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousTargetedDevices = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::setStaticF__instance_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator>, "<instance>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(std::forward<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator>>(value));
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator>, "<instance>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::setStaticF_instanceChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "instanceChanged", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::getStaticF_instanceChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "instanceChanged", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>();
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_cameraTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_cameraTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_cameraTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_cameraTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_deviceLifecycleManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_deviceLifecycleManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_deviceLifecycleManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_deviceLifecycleManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_handExpressionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_handExpressionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_handExpressionManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_handExpressionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_interactionSimulatorUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_interactionSimulatorUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_interactionSimulatorUI(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_interactionSimulatorUI", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_hmdIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_hmdIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_hmdIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_hmdIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_hmdTrackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_hmdTrackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_hmdTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_hmdTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_leftControllerIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_leftControllerIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_leftControllerIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_leftControllerIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_leftControllerTrackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_leftControllerTrackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_leftControllerTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_leftControllerTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rightControllerIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rightControllerIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rightControllerIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rightControllerIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputTrackingState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rightControllerTrackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rightControllerTrackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputTrackingState>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rightControllerTrackingState(::UnityEngine::XR::InputTrackingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rightControllerTrackingState", {}, {::i2c::type_of<::UnityEngine::XR::InputTrackingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_leftHandIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_leftHandIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_leftHandIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_leftHandIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rightHandIsTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rightHandIsTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rightHandIsTracked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rightHandIsTracked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateXInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateXInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateXInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateXInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateYInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateYInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateYInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateYInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateZInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateZInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateZInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateZInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleManipulateLeftInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleManipulateLeftInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleManipulateLeftInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleManipulateLeftInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleManipulateRightInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleManipulateRightInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleManipulateRightInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleManipulateRightInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_leftDeviceActionsInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_leftDeviceActionsInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_leftDeviceActionsInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_leftDeviceActionsInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_cycleDevicesInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_cycleDevicesInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_cycleDevicesInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_cycleDevicesInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_keyboardRotationDeltaInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_keyboardRotationDeltaInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_keyboardRotationDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_keyboardRotationDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleMouseInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleMouseInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleMouseInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleMouseInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_mouseRotationDeltaInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_mouseRotationDeltaInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_mouseRotationDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_mouseRotationDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_mouseScrollInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_mouseScrollInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_mouseScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_mouseScrollInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_gripInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_gripInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_gripInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_gripInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_triggerInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_triggerInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_triggerInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_triggerInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_primaryButtonInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_primaryButtonInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_primaryButtonInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_primaryButtonInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_secondaryButtonInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_secondaryButtonInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_secondaryButtonInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_secondaryButtonInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_menuInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_menuInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_menuInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_menuInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_primary2DAxisClickInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_primary2DAxisClickInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_primary2DAxisClickInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_primary2DAxisClickInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_secondary2DAxisClickInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_secondary2DAxisClickInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_secondary2DAxisClickInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_secondary2DAxisClickInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_primary2DAxisTouchInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_primary2DAxisTouchInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_primary2DAxisTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_primary2DAxisTouchInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_secondary2DAxisTouchInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_secondary2DAxisTouchInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_secondary2DAxisTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_secondary2DAxisTouchInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_primaryTouchInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_primaryTouchInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_primaryTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_primaryTouchInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_secondaryTouchInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_secondaryTouchInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_secondaryTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_secondaryTouchInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_xConstraintInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_xConstraintInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_xConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_xConstraintInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_yConstraintInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_yConstraintInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_yConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_yConstraintInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_zConstraintInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_zConstraintInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_zConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_zConstraintInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_resetInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_resetInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_resetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_resetInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_axis2DInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_axis2DInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_axis2DInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_axis2DInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_togglePrimary2DAxisTargetInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_togglePrimary2DAxisTargetInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_togglePrimary2DAxisTargetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_togglePrimary2DAxisTargetInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleSecondary2DAxisTargetInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleSecondary2DAxisTargetInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleSecondary2DAxisTargetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleSecondary2DAxisTargetInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_cycleQuickActionInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_cycleQuickActionInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_cycleQuickActionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_cycleQuickActionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_togglePerformQuickActionInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_togglePerformQuickActionInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_togglePerformQuickActionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_togglePerformQuickActionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_toggleManipulateHeadInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_toggleManipulateHeadInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_toggleManipulateHeadInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_toggleManipulateHeadInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_gripAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_gripAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_gripAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_gripAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_triggerAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_triggerAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_triggerAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_triggerAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateXSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateXSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateXSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateXSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateYSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateYSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateYSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateYSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateZSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateZSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateZSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateZSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_bodyTranslateMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_bodyTranslateMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_bodyTranslateMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_bodyTranslateMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rotateXSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rotateXSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rotateXSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rotateXSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rotateYSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rotateYSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rotateYSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rotateYSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_mouseScrollRotateSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_mouseScrollRotateSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_mouseScrollRotateSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_mouseScrollRotateSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_rotateYInvert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_rotateYInvert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_rotateYInvert(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_rotateYInvert", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_translateSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_translateSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_translateSpace(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_translateSpace", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_quickActionControllerInputModes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_quickActionControllerInputModes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_quickActionControllerInputModes(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_quickActionControllerInputModes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_targetedDeviceInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_targetedDeviceInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_targetedDeviceInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_targetedDeviceInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_controllerInputMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_controllerInputMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_currentHandExpression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_currentHandExpression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_axis2DTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_axis2DTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_axis2DTargets(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_axis2DTargets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingLeftDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingLeftDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingRightDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingRightDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingLeftController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingLeftController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingRightController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingRightController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingRightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingRightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingHMD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingHMD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_manipulatingFPS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_manipulatingFPS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator>>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::set_instance(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"set_instance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessPoseInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessControlInput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessHandExpressionInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"ProcessHandExpressionInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ToggleHandExpression(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*  simulatedExpression, bool  leftHand, bool  rightHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"ToggleHandExpression", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simulatedExpression, leftHand, rightHand);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessAxis2DControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessButtonControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ProcessAnalogButtonControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::GetResetScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"GetResetScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ReadInputValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::CycleQuickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"CycleQuickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::PerformQuickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"PerformQuickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ToggleControllerButtonInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"ToggleControllerButtonInput", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::ClearControllerButtonInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"ClearControllerButtonInput", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::SetTrackedStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"SetTrackedStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::CycleTargetDevices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"CycleTargetDevices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::HandleLeftOrRightDeviceToggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"HandleLeftOrRightDeviceToggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::HandleHMDToggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"HandleHMDToggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::CycleQuickActionHandExpression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {"CycleQuickActionHandExpression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator::XRInteractionSimulator()   {
}
