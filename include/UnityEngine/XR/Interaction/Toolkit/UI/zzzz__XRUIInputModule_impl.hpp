#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__NavigationModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIInputModule_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_ActiveInputMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_ActiveInputMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_RegisteredInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_RegisteredTouch_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_activeInputMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRUIInputModule_ActiveInputMode (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_activeInputMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_activeInputMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_activeInputMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::GlobalNamespace::XRUIInputModule_ActiveInputMode)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_activeInputMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_activeInputMode", {}, {::i2c::type_of<::GlobalNamespace::XRUIInputModule_ActiveInputMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableXRInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableXRInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableXRInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableXRInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableXRInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableXRInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableMouseInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableMouseInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableMouseInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableMouseInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableMouseInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableMouseInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableTouchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableTouchInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableTouchInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableTouchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableTouchInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableGamepadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableGamepadInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableGamepadInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableGamepadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableGamepadInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableGamepadInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableJoystickInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableJoystickInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableJoystickInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableJoystickInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableJoystickInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableJoystickInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_pointAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_pointAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_pointAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_pointAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_pointAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43f14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_pointAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_leftClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_leftClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_leftClickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_leftClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_leftClickAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43f2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_leftClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_middleClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_middleClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_middleClickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_middleClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_middleClickAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43f2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_middleClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_rightClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_rightClickAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_rightClickAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_rightClickAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_rightClickAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43f2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_rightClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_scrollWheelAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_scrollWheelAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_scrollWheelAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_scrollWheelAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_scrollWheelAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43f2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_scrollWheelAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_navigateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_navigateAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_navigateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_navigateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_navigateAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_navigateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_submitAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_submitAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_submitAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_submitAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_submitAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43f324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_submitAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_cancelAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_cancelAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_cancelAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_cancelAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_cancelAction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb43f338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_cancelAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_enableBuiltinActionsAsFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableBuiltinActionsAsFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableBuiltinActionsAsFallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_enableBuiltinActionsAsFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableBuiltinActionsAsFallback)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb43f34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableBuiltinActionsAsFallback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_horizontalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_horizontalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_horizontalAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_horizontalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_horizontalAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb43f510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_horizontalAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_verticalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_verticalAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_verticalAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_verticalAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_verticalAxis)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb43f528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_verticalAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_submitButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_submitButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_submitButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_submitButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_submitButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb43f540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_submitButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_cancelButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_cancelButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_cancelButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_cancelButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_cancelButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb43f558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_cancelButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb43f568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb43f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.RegisterInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::RegisterInteractor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xb43326c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"RegisterInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.UnregisterInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::UnregisterInteractor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb4334c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"UnregisterInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.GetInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetInteractor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb4345e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"GetInteractor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.GetTrackedDeviceModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetTrackedDeviceModel)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb433738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"GetTrackedDeviceModel", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.DoProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DoProcess)> {
  constexpr static std::size_t size = 0x958;
  constexpr static std::size_t addrs = 0xb43f7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.GetPointerStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetPointerStates)> {
  constexpr static std::size_t size = 0xb48;
  constexpr static std::size_t addrs = 0xb4400f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"GetPointerStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.InputActionReferencesAreSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::InputActionReferencesAreSet)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb43f380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"InputActionReferencesAreSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.EnableAllActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::EnableAllActions)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb43f604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"EnableAllActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.DisableAllActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DisableAllActions)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb43f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"DisableAllActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.IsActionEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::IsActionEnabled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb440c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"IsActionEnabled", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.EnableInputAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::EnableInputAction)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb440d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"EnableInputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.DisableInputAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DisableInputAction)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb440e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"DisableInputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.SetInputAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::by_ref<::UnityEngine::InputSystem::InputActionReference*>, ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::SetInputAction)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb43f158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"SetInputAction", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionReference*>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.GetDisplayIndexFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetDisplayIndexFor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb440ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"GetDisplayIndexFor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.get_maxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb440ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_maxRaycastDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule.set_maxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb440ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_maxRaycastDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::_ctor)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xb440ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XRUIInputModule_ActiveInputMode& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_ActiveInputMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveInputMode;
}
constexpr ::GlobalNamespace::XRUIInputModule_ActiveInputMode const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_ActiveInputMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveInputMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_ActiveInputMode(::GlobalNamespace::XRUIInputModule_ActiveInputMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveInputMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableXRInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableXRInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableXRInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableXRInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableXRInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableXRInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableMouseInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableMouseInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableMouseInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableMouseInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableMouseInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableMouseInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableTouchInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableTouchInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableTouchInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableTouchInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableTouchInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableTouchInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableGamepadInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableGamepadInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableGamepadInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableGamepadInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableGamepadInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableGamepadInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableJoystickInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableJoystickInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableJoystickInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableJoystickInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableJoystickInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableJoystickInput = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_PointAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_PointAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PointAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_LeftClickAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_LeftClickAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftClickAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftClickAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_MiddleClickAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MiddleClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_MiddleClickAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MiddleClickAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MiddleClickAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RightClickAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RightClickAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightClickAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightClickAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_ScrollWheelAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScrollWheelAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_ScrollWheelAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScrollWheelAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScrollWheelAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_NavigateAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavigateAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_NavigateAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavigateAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_NavigateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NavigateAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_SubmitAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubmitAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_SubmitAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubmitAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SubmitAction = value;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_CancelAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancelAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_CancelAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancelAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CancelAction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableBuiltinActionsAsFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableBuiltinActionsAsFallback;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_EnableBuiltinActionsAsFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableBuiltinActionsAsFallback;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_EnableBuiltinActionsAsFallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableBuiltinActionsAsFallback = value;
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_HorizontalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalAxis;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_HorizontalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalAxis;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_HorizontalAxis(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HorizontalAxis = value;
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_VerticalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalAxis;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_VerticalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalAxis;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_VerticalAxis(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VerticalAxis = value;
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_SubmitButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubmitButton;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_SubmitButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubmitButton;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_SubmitButton(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SubmitButton = value;
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_CancelButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancelButton;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_CancelButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancelButton;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_CancelButton(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CancelButton = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RollingPointerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RollingPointerId;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RollingPointerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RollingPointerId;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_RollingPointerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RollingPointerId = value;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_DeletedPointerIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeletedPointerIds;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_DeletedPointerIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeletedPointerIds;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_DeletedPointerIds(::System::Collections::Generic::Stack_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeletedPointerIds = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_UseBuiltInInputSystemActions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseBuiltInInputSystemActions;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_UseBuiltInInputSystemActions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseBuiltInInputSystemActions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_UseBuiltInInputSystemActions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseBuiltInInputSystemActions = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_PointerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_PointerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointerState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_PointerState(::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PointerState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_NavigationState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavigationState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_NavigationState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NavigationState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_NavigationState(::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NavigationState = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredTouch>*& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RegisteredTouches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredTouches;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredTouch>* const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RegisteredTouches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredTouches;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_RegisteredTouches(::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredTouch>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredTouches = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>*& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RegisteredInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractors;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>* const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_RegisteredInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_RegisteredInteractors(::System::Collections::Generic::List_1<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredInteractors = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_UIHoverEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_get_m_UIHoverEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::__cordl_internal_set_m_UIHoverEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIHoverEventArgs = value;
}
inline ::GlobalNamespace::XRUIInputModule_ActiveInputMode UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_activeInputMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_activeInputMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRUIInputModule_ActiveInputMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_activeInputMode(::GlobalNamespace::XRUIInputModule_ActiveInputMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_activeInputMode", {}, {::i2c::type_of<::GlobalNamespace::XRUIInputModule_ActiveInputMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableXRInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableXRInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableXRInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableXRInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableMouseInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableMouseInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableMouseInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableMouseInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableTouchInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableTouchInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableTouchInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableTouchInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableGamepadInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableGamepadInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableGamepadInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableGamepadInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableJoystickInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableJoystickInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableJoystickInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableJoystickInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_pointAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_pointAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_pointAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_pointAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_leftClickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_leftClickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_leftClickAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_leftClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_middleClickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_middleClickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_middleClickAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_middleClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_rightClickAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_rightClickAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_rightClickAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_rightClickAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_scrollWheelAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_scrollWheelAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_scrollWheelAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_scrollWheelAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_navigateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_navigateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_navigateAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_navigateAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_submitAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_submitAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_submitAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_submitAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_cancelAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_cancelAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_cancelAction(::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_cancelAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_enableBuiltinActionsAsFallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_enableBuiltinActionsAsFallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_enableBuiltinActionsAsFallback(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_enableBuiltinActionsAsFallback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_horizontalAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_horizontalAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_horizontalAxis(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_horizontalAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_verticalAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_verticalAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_verticalAxis(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_verticalAxis", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_submitButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_submitButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_submitButton(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_submitButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_cancelButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_cancelButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_cancelButton(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_cancelButton", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"RegisterInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"UnregisterInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetInteractor(int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"GetInteractor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(this, ___internal_method, pointerId);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetTrackedDeviceModel(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"GetTrackedDeviceModel", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, model);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DoProcess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetPointerStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"GetPointerStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::InputActionReferencesAreSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"InputActionReferencesAreSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::EnableAllActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"EnableAllActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DisableAllActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"DisableAllActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::IsActionEnabled(::UnityEngine::InputSystem::InputActionReference*  inputAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"IsActionEnabled", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, inputAction);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::EnableInputAction(::UnityEngine::InputSystem::InputActionReference*  inputAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"EnableInputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputAction);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::DisableInputAction(::UnityEngine::InputSystem::InputActionReference*  inputAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"DisableInputAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputAction);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::SetInputAction(::by_ref<::UnityEngine::InputSystem::InputActionReference*>  inputAction, ::UnityEngine::InputSystem::InputActionReference*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"SetInputAction", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionReference*>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputAction, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::GetDisplayIndexFor(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"GetDisplayIndexFor", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::get_maxRaycastDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"get_maxRaycastDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::set_maxRaycastDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {"set_maxRaycastDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule* UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule::XRUIInputModule()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb441290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c.__ctor_b__107_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs* (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::__ctor_b__107_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb441298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>(),
                        {"<.ctor>b__107_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c* UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::setStaticF___9__107_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*, "<>9__107_0", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>* UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::getStaticF___9__107_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>*, "<>9__107_0", ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs* UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::__ctor_b__107_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>(),
                        {"<.ctor>b__107_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c* UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIInputModule___c::XRUIInputModule___c()   {
}
