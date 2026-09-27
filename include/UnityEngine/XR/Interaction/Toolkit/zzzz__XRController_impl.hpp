#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRController.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_Axis2D_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_Button_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRController_def.hpp"
#include "UnityEngine/Experimental/XR/Interaction/zzzz__BasePoseProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_Axis2D_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_Button_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerState_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_controllerNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRNode (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_controllerNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4011c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_controllerNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_controllerNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::XRNode)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_controllerNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4011d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_controllerNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_selectUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputHelpers_Button (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_selectUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4011d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_selectUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_selectUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Button)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_selectUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4011e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_selectUsage", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_activateUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputHelpers_Button (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_activateUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4011e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_activateUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_activateUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Button)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_activateUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4011f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_activateUsage", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_uiPressUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputHelpers_Button (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_uiPressUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4011f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_uiPressUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_uiPressUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Button)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_uiPressUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_uiPressUsage", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_axisToPressThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_axisToPressThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_axisToPressThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_axisToPressThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_axisToPressThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_axisToPressThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_rotateObjectLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputHelpers_Button (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_rotateObjectLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_rotateObjectLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Button)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_rotateObjectLeft", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_rotateObjectRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputHelpers_Button (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_rotateObjectRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_rotateObjectRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Button)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_rotateObjectRight", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_moveObjectIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputHelpers_Button (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_moveObjectIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_moveObjectIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Button)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_moveObjectIn", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_moveObjectOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputHelpers_Button (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_moveObjectOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_moveObjectOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Button)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_moveObjectOut", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_directionalAnchorRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputHelpers_Axis2D (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_directionalAnchorRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_directionalAnchorRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_directionalAnchorRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Axis2D)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_directionalAnchorRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_directionalAnchorRotation", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Axis2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_poseProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_poseProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_poseProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.set_poseProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::set_poseProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb401270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_poseProvider", {}, {::i2c::type_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.get_inputDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::InputDevice (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::get_inputDevice)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb401278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_inputDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4012c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.UpdateTrackingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::UpdateTrackingInput)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xb4012c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.UpdateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::UpdateInput)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb401528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.IsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Button)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::IsPressed)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb40167c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers_Button)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::ReadValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb401720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRController::*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRController::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4017ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRController::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb401844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::XRNode& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_ControllerNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerNode;
}
constexpr ::UnityEngine::XR::XRNode const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_ControllerNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerNode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_ControllerNode(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerNode = value;
}
constexpr ::UnityEngine::XR::XRNode& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_InputDeviceControllerNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputDeviceControllerNode;
}
constexpr ::UnityEngine::XR::XRNode const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_InputDeviceControllerNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputDeviceControllerNode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_InputDeviceControllerNode(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputDeviceControllerNode = value;
}
constexpr ::GlobalNamespace::InputHelpers_Button& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_SelectUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectUsage;
}
constexpr ::GlobalNamespace::InputHelpers_Button const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_SelectUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectUsage;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_SelectUsage(::GlobalNamespace::InputHelpers_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectUsage = value;
}
constexpr ::GlobalNamespace::InputHelpers_Button& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_ActivateUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateUsage;
}
constexpr ::GlobalNamespace::InputHelpers_Button const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_ActivateUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateUsage;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_ActivateUsage(::GlobalNamespace::InputHelpers_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateUsage = value;
}
constexpr ::GlobalNamespace::InputHelpers_Button& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_UIPressUsage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressUsage;
}
constexpr ::GlobalNamespace::InputHelpers_Button const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_UIPressUsage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressUsage;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_UIPressUsage(::GlobalNamespace::InputHelpers_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIPressUsage = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_AxisToPressThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AxisToPressThreshold;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_AxisToPressThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AxisToPressThreshold;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_AxisToPressThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AxisToPressThreshold = value;
}
constexpr ::GlobalNamespace::InputHelpers_Button& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_RotateAnchorLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateAnchorLeft;
}
constexpr ::GlobalNamespace::InputHelpers_Button const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_RotateAnchorLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateAnchorLeft;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_RotateAnchorLeft(::GlobalNamespace::InputHelpers_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateAnchorLeft = value;
}
constexpr ::GlobalNamespace::InputHelpers_Button& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_RotateAnchorRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateAnchorRight;
}
constexpr ::GlobalNamespace::InputHelpers_Button const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_RotateAnchorRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateAnchorRight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_RotateAnchorRight(::GlobalNamespace::InputHelpers_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateAnchorRight = value;
}
constexpr ::GlobalNamespace::InputHelpers_Button& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_MoveObjectIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveObjectIn;
}
constexpr ::GlobalNamespace::InputHelpers_Button const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_MoveObjectIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveObjectIn;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_MoveObjectIn(::GlobalNamespace::InputHelpers_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MoveObjectIn = value;
}
constexpr ::GlobalNamespace::InputHelpers_Button& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_MoveObjectOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveObjectOut;
}
constexpr ::GlobalNamespace::InputHelpers_Button const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_MoveObjectOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveObjectOut;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_MoveObjectOut(::GlobalNamespace::InputHelpers_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MoveObjectOut = value;
}
constexpr ::GlobalNamespace::InputHelpers_Axis2D& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_DirectionalAnchorRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DirectionalAnchorRotation;
}
constexpr ::GlobalNamespace::InputHelpers_Axis2D const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_DirectionalAnchorRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DirectionalAnchorRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_DirectionalAnchorRotation(::GlobalNamespace::InputHelpers_Axis2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DirectionalAnchorRotation = value;
}
constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_PoseProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PoseProvider;
}
constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_PoseProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PoseProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_PoseProvider(::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PoseProvider = value;
}
constexpr ::UnityEngine::XR::InputDevice& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_InputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_get_m_InputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputDevice;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRController::__cordl_internal_set_m_InputDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputDevice = value;
}
inline ::UnityEngine::XR::XRNode UnityEngine::XR::Interaction::Toolkit::XRController::get_controllerNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_controllerNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_controllerNode(::UnityEngine::XR::XRNode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_controllerNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InputHelpers_Button UnityEngine::XR::Interaction::Toolkit::XRController::get_selectUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_selectUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputHelpers_Button>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_selectUsage(::GlobalNamespace::InputHelpers_Button  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_selectUsage", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InputHelpers_Button UnityEngine::XR::Interaction::Toolkit::XRController::get_activateUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_activateUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputHelpers_Button>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_activateUsage(::GlobalNamespace::InputHelpers_Button  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_activateUsage", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InputHelpers_Button UnityEngine::XR::Interaction::Toolkit::XRController::get_uiPressUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_uiPressUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputHelpers_Button>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_uiPressUsage(::GlobalNamespace::InputHelpers_Button  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_uiPressUsage", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRController::get_axisToPressThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_axisToPressThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_axisToPressThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_axisToPressThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InputHelpers_Button UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_rotateObjectLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputHelpers_Button>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectLeft(::GlobalNamespace::InputHelpers_Button  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_rotateObjectLeft", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InputHelpers_Button UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_rotateObjectRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputHelpers_Button>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectRight(::GlobalNamespace::InputHelpers_Button  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_rotateObjectRight", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InputHelpers_Button UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_moveObjectIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputHelpers_Button>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectIn(::GlobalNamespace::InputHelpers_Button  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_moveObjectIn", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InputHelpers_Button UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_moveObjectOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputHelpers_Button>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectOut(::GlobalNamespace::InputHelpers_Button  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_moveObjectOut", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::InputHelpers_Axis2D UnityEngine::XR::Interaction::Toolkit::XRController::get_directionalAnchorRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_directionalAnchorRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputHelpers_Axis2D>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_directionalAnchorRotation(::GlobalNamespace::InputHelpers_Axis2D  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_directionalAnchorRotation", {}, {::i2c::type_of<::GlobalNamespace::InputHelpers_Axis2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> UnityEngine::XR::Interaction::Toolkit::XRController::get_poseProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_poseProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::set_poseProvider(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"set_poseProvider", {}, {::i2c::type_of<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::InputDevice UnityEngine::XR::Interaction::Toolkit::XRController::get_inputDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {"get_inputDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputDevice>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  controllerState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerState);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRController::IsPressed(::GlobalNamespace::InputHelpers_Button  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRController::ReadValue(::GlobalNamespace::InputHelpers_Button  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, button);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRController::SendHapticImpulse(float_t  amplitude, float_t  duration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, amplitude, duration);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRController* UnityEngine::XR::Interaction::Toolkit::XRController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRController::XRController()   {
}
