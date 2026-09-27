#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/SteamFrameControllerProfile.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__SteamFrameControllerProfile_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__QuaternionControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__PoseControl_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__SteamFrameControllerProfile_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__HapticControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile.RegisterDeviceLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb93a7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile.UnregisterDeviceLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb93a928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile.GetDeviceLayoutName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb93a990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile.RegisterActionMapsWithRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x5508;
  constexpr static std::size_t addrs = 0xb93a9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb93fed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::RegisterDeviceLayout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::UnregisterDeviceLayout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::GetDeviceLayoutName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::RegisterActionMapsWithRuntime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile::SteamFrameControllerProfile()   {
}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_thumbstick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb93ff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_thumbstick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_thumbstick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_thumbstick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93ff38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_thumbstick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb93ff48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_grip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_grip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93ff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_grip", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_gripPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb93ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_gripPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_gripPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_gripPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93ff68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_gripPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_gripTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_gripTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb93ff78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_gripTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_gripTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_gripTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93ff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_gripTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_menu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb93ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_menu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_menu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_menu)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93ff98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_menu", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_menuTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_menuTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb93ffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_menuTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_menuTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_menuTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93ffb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_menuTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_bumper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_bumper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb93ffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_bumper", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_bumper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_bumper)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93ffc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_bumper", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_bumperTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_bumperTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb93ffd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_bumperTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_bumperTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_bumperTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93ffe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_bumperTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_faceButtonTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonTop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb93fff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonTop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_faceButtonTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonTop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb93fff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonTop", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_faceButtonOutside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonOutside)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonOutside", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_faceButtonOutside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonOutside)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonOutside", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_faceButtonBottom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonBottom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonBottom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_faceButtonBottom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonBottom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonBottom", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_faceButtonInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonInside)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonInside", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_faceButtonInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonInside)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonInside", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_faceButtonTopTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonTopTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonTopTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_faceButtonTopTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonTopTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonTopTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_faceButtonOutsideTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonOutsideTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonOutsideTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_faceButtonOutsideTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonOutsideTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonOutsideTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_faceButtonBottomTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonBottomTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonBottomTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_faceButtonBottomTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonBottomTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonBottomTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_faceButtonInsideTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonInsideTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonInsideTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_faceButtonInsideTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonInsideTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9400a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonInsideTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9400b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_trigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_trigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9400b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_trigger", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_triggerPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9400c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_triggerPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_triggerPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_triggerPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9400d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_triggerPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_triggerTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_triggerTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9400e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_triggerTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_triggerTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_triggerTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9400e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_triggerTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_thumbstickClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9400f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_thumbstickClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_thumbstickClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_thumbstickClicked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_thumbstickClicked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_thumbstickTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_thumbstickTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_thumbstickTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_thumbstickTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_thumbstickTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_devicePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_devicePose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_devicePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_devicePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::XR::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_devicePose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_devicePose", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_pointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::XR::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_pointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_pointer", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_isTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_isTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_isTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_isTracked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_isTracked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_trackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_trackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_trackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_trackingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_trackingState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_devicePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb940188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_devicePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_devicePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_devicePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb940190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_devicePosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_deviceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9401a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_deviceRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_deviceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_deviceRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9401a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_deviceRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_pointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_pointerPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9401b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_pointerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_pointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_pointerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9401c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_pointerPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_pointerRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_pointerRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9401d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_pointerRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_pointerRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_pointerRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9401d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_pointerRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.get_haptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Input::HapticControl* (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_haptic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9401e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_haptic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.set_haptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)(::UnityEngine::XR::OpenXR::Input::HapticControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_haptic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9401f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_haptic", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController.FinishSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::FinishSetup)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0xb940200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb94090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__thumbstick_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__thumbstick_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstick_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbstick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__grip_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__grip_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__gripPressed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__gripPressed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__gripTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__gripTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__gripTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__menu_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menu_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__menu_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menu_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menu_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__menuTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__menuTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____menuTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__menuTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____menuTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__bumper_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bumper_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__bumper_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bumper_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__bumper_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bumper_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__bumperTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bumperTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__bumperTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bumperTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__bumperTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bumperTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonTop_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonTop_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonTop_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonTop_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__faceButtonTop_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceButtonTop_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonOutside_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonOutside_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonOutside_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonOutside_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__faceButtonOutside_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceButtonOutside_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonBottom_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonBottom_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonBottom_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonBottom_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__faceButtonBottom_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceButtonBottom_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonInside_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonInside_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonInside_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonInside_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__faceButtonInside_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceButtonInside_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonTopTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonTopTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonTopTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonTopTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__faceButtonTopTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceButtonTopTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonOutsideTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonOutsideTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonOutsideTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonOutsideTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__faceButtonOutsideTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceButtonOutsideTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonBottomTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonBottomTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonBottomTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonBottomTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__faceButtonBottomTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceButtonBottomTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonInsideTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonInsideTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__faceButtonInsideTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceButtonInsideTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__faceButtonInsideTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceButtonInsideTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__trigger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__trigger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__triggerPressed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__triggerPressed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__triggerTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__triggerTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__triggerTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__thumbstickClicked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickClicked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__thumbstickClicked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickClicked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbstickClicked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__thumbstickTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__thumbstickTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbstickTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__devicePose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePose_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__devicePose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePose_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__devicePose_k__BackingField(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____devicePose_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__pointer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointer_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__pointer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointer_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__pointer_k__BackingField(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointer_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__isTracked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTracked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__isTracked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTracked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTracked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__trackingState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingState_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__trackingState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingState_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingState_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__devicePosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__devicePosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____devicePosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__deviceRotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__deviceRotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deviceRotation_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__pointerPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerPosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__pointerPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerPosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerPosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__pointerRotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__pointerRotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerRotation_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__haptic_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haptic_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const& UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_get__haptic_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haptic_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::__cordl_internal_set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____haptic_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_thumbstick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_thumbstick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_thumbstick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_grip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_grip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_grip(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_grip", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_gripPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_gripPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_gripPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_gripTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_gripTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_gripTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_gripTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_menu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_menu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_menu(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_menu", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_menuTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_menuTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_menuTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_menuTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_bumper()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_bumper", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_bumper(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_bumper", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_bumperTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_bumperTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_bumperTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_bumperTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonTop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonTop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonTop(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonTop", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonOutside()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonOutside", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonOutside(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonOutside", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonBottom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonBottom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonBottom(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonBottom", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonInside()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonInside", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonInside(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonInside", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonTopTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonTopTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonTopTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonTopTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonOutsideTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonOutsideTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonOutsideTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonOutsideTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonBottomTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonBottomTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonBottomTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonBottomTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_faceButtonInsideTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_faceButtonInsideTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_faceButtonInsideTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_faceButtonInsideTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_trigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_trigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_trigger(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_trigger", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_triggerPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_triggerPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_triggerPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_triggerTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_triggerTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_triggerTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_thumbstickClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_thumbstickClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_thumbstickClicked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_thumbstickTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_thumbstickTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_thumbstickTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_devicePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_devicePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_devicePose(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_devicePose", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_pointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_pointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_pointer(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_pointer", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_isTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_isTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_isTracked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_trackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_trackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_trackingState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_devicePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_devicePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_devicePosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_deviceRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_deviceRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_deviceRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_pointerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_pointerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_pointerPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_pointerRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_pointerRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_pointerRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::get_haptic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"get_haptic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::HapticControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {"set_haptic", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::FinishSetup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController* UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::SteamFrameControllerProfile_SteamFrameController::SteamFrameControllerProfile_SteamFrameController()   {
}
