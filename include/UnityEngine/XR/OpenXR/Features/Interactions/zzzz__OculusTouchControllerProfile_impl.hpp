#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/OculusTouchControllerProfile.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__OculusTouchControllerProfile_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__QuaternionControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__PoseControl_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__OculusTouchControllerProfile_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__HapticControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile.RegisterDeviceLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb510bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile.UnregisterDeviceLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb510d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile.GetDeviceLayoutName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb510d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile.RegisterActionMapsWithRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x3310;
  constexpr static std::size_t addrs = 0xb510dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb5140cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::RegisterDeviceLayout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::UnregisterDeviceLayout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::GetDeviceLayoutName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::RegisterActionMapsWithRuntime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile::OculusTouchControllerProfile()   {
}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_thumbstick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb514124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_thumbstick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_thumbstick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_thumbstick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51412c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_thumbstick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51413c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_grip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_grip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb514144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_grip", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_gripPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb514154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_gripPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_gripPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_gripPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51415c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_gripPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_menu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51416c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_menu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_menu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_menu)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb514174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_menu", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_primaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb514184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_primaryButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_primaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_primaryButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51418c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_primaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_primaryTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_primaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51419c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_primaryTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_primaryTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_primaryTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5141a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_primaryTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_secondaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5141b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_secondaryButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_secondaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_secondaryButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5141bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_secondaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_secondaryTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_secondaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5141cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_secondaryTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_secondaryTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_secondaryTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5141d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_secondaryTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5141e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_trigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_trigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5141ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_trigger", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_triggerPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5141fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_triggerPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_triggerPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_triggerPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb514204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_triggerPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_triggerTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_triggerTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb514214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_triggerTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_triggerTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_triggerTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51421c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_triggerTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_thumbstickClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51422c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_thumbstickClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_thumbstickClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_thumbstickClicked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb514234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_thumbstickClicked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_thumbstickTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb514244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_thumbstickTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_thumbstickTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_thumbstickTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_thumbstickTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_thumbrestTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_thumbrestTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51425c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_thumbrestTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_thumbrestTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_thumbrestTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb514264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_thumbrestTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_devicePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_devicePose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb514274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_devicePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_devicePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::XR::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_devicePose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51427c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_devicePose", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51428c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_pointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::XR::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_pointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb514294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_pointer", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_isTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5142a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_isTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_isTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_isTracked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5142ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_isTracked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_trackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5142bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_trackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_trackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_trackingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5142c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_trackingState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_devicePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5142d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_devicePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_devicePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_devicePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5142dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_devicePosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_deviceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5142ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_deviceRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_deviceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_deviceRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5142f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_deviceRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_pointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_pointerPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb514304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_pointerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_pointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_pointerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51430c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_pointerPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_pointerRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_pointerRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51431c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_pointerRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_pointerRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_pointerRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb514324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_pointerRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.get_haptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Input::HapticControl* (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_haptic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb514334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_haptic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.set_haptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)(::UnityEngine::XR::OpenXR::Input::HapticControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_haptic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51433c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_haptic", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController.FinishSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::FinishSetup)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0xb51434c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5148ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__thumbstick_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__thumbstick_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstick_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbstick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__grip_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__grip_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__gripPressed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__gripPressed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__menu_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menu_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__menu_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menu_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menu_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__primaryButton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__primaryButton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__primaryTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__primaryTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__primaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__secondaryButton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__secondaryButton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__secondaryTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__secondaryTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__secondaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__trigger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__trigger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__triggerPressed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__triggerPressed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__triggerTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__triggerTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__triggerTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__thumbstickClicked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickClicked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__thumbstickClicked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickClicked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbstickClicked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__thumbstickTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__thumbstickTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbstickTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__thumbrestTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbrestTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__thumbrestTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbrestTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__thumbrestTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbrestTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__devicePose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePose_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__devicePose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePose_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__devicePose_k__BackingField(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____devicePose_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__pointer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointer_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__pointer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointer_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__pointer_k__BackingField(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointer_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__isTracked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTracked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__isTracked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTracked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTracked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__trackingState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingState_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__trackingState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingState_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingState_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__devicePosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__devicePosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____devicePosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__deviceRotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__deviceRotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deviceRotation_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__pointerPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerPosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__pointerPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerPosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerPosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__pointerRotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__pointerRotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerRotation_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__haptic_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haptic_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const& UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_get__haptic_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haptic_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::__cordl_internal_set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____haptic_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_thumbstick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_thumbstick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_thumbstick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_grip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_grip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_grip(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_grip", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_gripPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_gripPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_gripPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_menu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_menu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_menu(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_menu", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_primaryButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_primaryButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_primaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_primaryTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_primaryTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_primaryTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_secondaryButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_secondaryButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_secondaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_secondaryTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_secondaryTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_secondaryTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_trigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_trigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_trigger(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_trigger", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_triggerPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_triggerPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_triggerPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_triggerTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_triggerTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_triggerTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_thumbstickClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_thumbstickClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_thumbstickClicked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_thumbstickTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_thumbstickTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_thumbstickTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_thumbrestTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_thumbrestTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_thumbrestTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_thumbrestTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_devicePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_devicePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_devicePose(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_devicePose", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_pointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_pointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_pointer(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_pointer", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_isTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_isTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_isTracked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_trackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_trackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_trackingState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_devicePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_devicePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_devicePosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_deviceRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_deviceRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_deviceRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_pointerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_pointerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_pointerPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_pointerRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_pointerRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_pointerRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::get_haptic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"get_haptic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::HapticControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {"set_haptic", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::FinishSetup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController* UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::OculusTouchControllerProfile_OculusTouchController::OculusTouchControllerProfile_OculusTouchController()   {
}
