#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRSimulatorUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatorUtility_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_CallbackContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__XRSimulatedHandState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedDeviceLifecycleManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedHandExpressionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__Space_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMDState_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.FindCreateSimulatedDeviceLifecycleManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> (*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::FindCreateSimulatedDeviceLifecycleManager)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4c4288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"FindCreateSimulatedDeviceLifecycleManager", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.FindCreateSimulatedHandExpressionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> (*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::FindCreateSimulatedHandExpressionManager)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4c433c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"FindCreateSimulatedHandExpressionManager", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::Subscribe)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4c8168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::Unsubscribe)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4c8290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.GetInputAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetInputAction)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4c820c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetInputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.GetDeltaRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetDeltaRotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4c6500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetDeltaRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.GetDeltaRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetDeltaRotation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4c6598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetDeltaRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.GetDeltaRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetDeltaRotation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4c6628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetDeltaRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.GetAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetAxes)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xb4c8414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetAxes", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.GetDeltaRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space, ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetDeltaRotation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb4c8334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetDeltaRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.FindCameraTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>>, ::by_ref<::UnityEngine::Transform*>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::FindCameraTransform)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xb4c4674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"FindCameraTransform", {}, {::i2c::type_of<::by_ref<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.TryExecuteCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*, ::by_ref<int64_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::TryExecuteCommand)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4c7f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"TryExecuteCommand", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.GetTranslationInDeviceSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t, float_t, ::UnityEngine::Transform*, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetTranslationInDeviceSpace)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb4c63d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetTranslationInDeviceSpace", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility.GetTranslationInWorldSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t, float_t, ::UnityEngine::Transform*, ::UnityEngine::Quaternion)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetTranslationInWorldSpace)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb4c86f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetTranslationInWorldSpace", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::setStaticF_cameraMaxXAngle(float_t  value)  {
::cordl_internals::setStaticField<float_t, "cameraMaxXAngle", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::getStaticF_cameraMaxXAngle()  {
return ::cordl_internals::getStaticField<float_t, "cameraMaxXAngle", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::setStaticF_leftDeviceDefaultInitialPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "leftDeviceDefaultInitialPosition", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::getStaticF_leftDeviceDefaultInitialPosition()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "leftDeviceDefaultInitialPosition", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::setStaticF_rightDeviceDefaultInitialPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "rightDeviceDefaultInitialPosition", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::getStaticF_rightDeviceDefaultInitialPosition()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "rightDeviceDefaultInitialPosition", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>();
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::FindCreateSimulatedDeviceLifecycleManager(::UnityEngine::GameObject*  simulator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"FindCreateSimulatedDeviceLifecycleManager", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>>(nullptr, ___internal_method, simulator);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::FindCreateSimulatedHandExpressionManager(::UnityEngine::GameObject*  simulator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"FindCreateSimulatedHandExpressionManager", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>>(nullptr, ___internal_method, simulator);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::Subscribe(::UnityEngine::InputSystem::InputActionReference*  reference, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  performed, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  canceled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reference, performed, canceled);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::Unsubscribe(::UnityEngine::InputSystem::InputActionReference*  reference, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  performed, ::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*  canceled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reference, performed, canceled);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetInputAction(::UnityEngine::InputSystem::InputActionReference*  actionReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetInputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method, actionReference);
}
inline ::UnityEngine::Quaternion UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  state, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  inverseCameraParentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetDeltaRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, translateSpace, state, inverseCameraParentRotation);
}
inline ::UnityEngine::Quaternion UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState>  state, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  inverseCameraParentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetDeltaRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, translateSpace, state, inverseCameraParentRotation);
}
inline ::UnityEngine::Quaternion UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>  state, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  inverseCameraParentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetDeltaRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, translateSpace, state, inverseCameraParentRotation);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetAxes(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, ::UnityEngine::Transform*  cameraTransform, ::by_ref<::UnityEngine::Vector3>  right, ::by_ref<::UnityEngine::Vector3>  up, ::by_ref<::UnityEngine::Vector3>  forward)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetAxes", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, translateSpace, cameraTransform, right, up, forward);
}
inline ::UnityEngine::Quaternion UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetDeltaRotation(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace, ::UnityEngine::Quaternion  rotation, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  inverseCameraParentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetDeltaRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, translateSpace, rotation, inverseCameraParentRotation);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::FindCameraTransform(/* [TupleElementNames(new[] { "transform", "camera" })] */ ::by_ref<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>>  cachedCamera, ::by_ref<::UnityEngine::Transform*>  cameraTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"FindCameraTransform", {}, {::i2c::type_of<::by_ref<::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cachedCamera, cameraTransform);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::TryExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*  commandPtr, ::by_ref<int64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"TryExecuteCommand", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, commandPtr, result);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetTranslationInDeviceSpace(float_t  xTranslateInput, float_t  yTranslateInput, float_t  zTranslateInput, ::UnityEngine::Transform*  cameraTransform, ::UnityEngine::Quaternion  cameraParentRotation, ::UnityEngine::Quaternion  inverseCameraParentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetTranslationInDeviceSpace", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, xTranslateInput, yTranslateInput, zTranslateInput, cameraTransform, cameraParentRotation, inverseCameraParentRotation);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::GetTranslationInWorldSpace(float_t  xTranslateInput, float_t  yTranslateInput, float_t  zTranslateInput, ::UnityEngine::Transform*  cameraTransform, ::UnityEngine::Quaternion  cameraParentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility*>(),
                        {"GetTranslationInWorldSpace", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, xTranslateInput, yTranslateInput, zTranslateInput, cameraTransform, cameraParentRotation);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatorUtility::XRSimulatorUtility()   {
}
