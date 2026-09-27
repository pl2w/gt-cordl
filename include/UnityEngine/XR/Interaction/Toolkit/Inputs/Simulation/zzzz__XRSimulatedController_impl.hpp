#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRSimulatedController.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedController_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_primary2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primary2DAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primary2DAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_primary2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primary2DAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primary2DAxis", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_trigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_trigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_trigger", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c79a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_grip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_grip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c79a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_grip", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_secondary2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondary2DAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c79b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondary2DAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_secondary2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondary2DAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondary2DAxis", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_primaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c79d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primaryButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_primaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primaryButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c79d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_primaryTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primaryTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c79e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primaryTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_primaryTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primaryTouch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c79f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primaryTouch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_secondaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondaryButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_secondaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondaryButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_secondaryTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondaryTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondaryTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_secondaryTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondaryTouch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondaryTouch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_gripButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_gripButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_gripButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_gripButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_gripButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_gripButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_triggerButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_triggerButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_triggerButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_triggerButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_triggerButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_triggerButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_menuButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_menuButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_menuButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_menuButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_menuButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_menuButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_primary2DAxisClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primary2DAxisClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primary2DAxisClick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_primary2DAxisClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primary2DAxisClick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primary2DAxisClick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_primary2DAxisTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primary2DAxisTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primary2DAxisTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_primary2DAxisTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primary2DAxisTouch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primary2DAxisTouch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_secondary2DAxisClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondary2DAxisClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondary2DAxisClick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_secondary2DAxisClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondary2DAxisClick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondary2DAxisClick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_secondary2DAxisTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondary2DAxisTouch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondary2DAxisTouch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_secondary2DAxisTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondary2DAxisTouch)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondary2DAxisTouch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_batteryLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_batteryLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_batteryLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_batteryLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_batteryLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_batteryLevel", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.get_userPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_userPresence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c7af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_userPresence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.set_userPresence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_userPresence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c7af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_userPresence", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.FinishSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::FinishSetup)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xb4c7b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController.ExecuteCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::ExecuteCommand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4c7f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c8008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primary2DAxis_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primary2DAxis_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primary2DAxis_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primary2DAxis_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__primary2DAxis_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primary2DAxis_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__trigger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__trigger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__grip_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__grip_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondary2DAxis_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondary2DAxis_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondary2DAxis_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondary2DAxis_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__secondary2DAxis_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondary2DAxis_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primaryButton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primaryButton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primaryTouch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTouch_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primaryTouch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTouch_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__primaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primaryTouch_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondaryButton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondaryButton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondaryTouch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryTouch_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondaryTouch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryTouch_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__secondaryTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondaryTouch_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__gripButton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__gripButton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripButton_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__gripButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__triggerButton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__triggerButton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerButton_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__triggerButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__menuButton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__menuButton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuButton_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__menuButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menuButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primary2DAxisClick_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primary2DAxisClick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primary2DAxisClick_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primary2DAxisClick_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__primary2DAxisClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primary2DAxisClick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primary2DAxisTouch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primary2DAxisTouch_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__primary2DAxisTouch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primary2DAxisTouch_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__primary2DAxisTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primary2DAxisTouch_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondary2DAxisClick_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondary2DAxisClick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondary2DAxisClick_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondary2DAxisClick_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__secondary2DAxisClick_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondary2DAxisClick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondary2DAxisTouch_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondary2DAxisTouch_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__secondary2DAxisTouch_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondary2DAxisTouch_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__secondary2DAxisTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondary2DAxisTouch_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__batteryLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____batteryLevel_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__batteryLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____batteryLevel_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__batteryLevel_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____batteryLevel_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__userPresence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userPresence_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_get__userPresence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userPresence_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::__cordl_internal_set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userPresence_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primary2DAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primary2DAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primary2DAxis(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primary2DAxis", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_trigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_trigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_trigger(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_trigger", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_grip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_grip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_grip(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_grip", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondary2DAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondary2DAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondary2DAxis(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondary2DAxis", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primaryButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primaryButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primaryTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primaryTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primaryTouch(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primaryTouch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondaryButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondaryButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondaryTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondaryTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondaryTouch(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondaryTouch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_gripButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_gripButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_gripButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_gripButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_triggerButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_triggerButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_triggerButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_triggerButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_menuButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_menuButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_menuButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_menuButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primary2DAxisClick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primary2DAxisClick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primary2DAxisClick(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primary2DAxisClick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_primary2DAxisTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_primary2DAxisTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_primary2DAxisTouch(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_primary2DAxisTouch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondary2DAxisClick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondary2DAxisClick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondary2DAxisClick(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondary2DAxisClick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_secondary2DAxisTouch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_secondary2DAxisTouch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_secondary2DAxisTouch(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_secondary2DAxisTouch", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_batteryLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_batteryLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_batteryLevel(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_batteryLevel", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::get_userPresence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"get_userPresence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {"set_userPresence", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::FinishSetup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::ExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*  commandPtr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, commandPtr);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController::XRSimulatedController()   {
}
