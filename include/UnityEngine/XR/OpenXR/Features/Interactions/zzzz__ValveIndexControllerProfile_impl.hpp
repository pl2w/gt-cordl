#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/ValveIndexControllerProfile.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__ValveIndexControllerProfile_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__QuaternionControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector3Control_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__PoseControl_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__ValveIndexControllerProfile_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__HapticControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile.RegisterDeviceLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb515a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile.UnregisterDeviceLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb515b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile.GetDeviceLayoutName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb515bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile.RegisterActionMapsWithRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x3340;
  constexpr static std::size_t addrs = 0xb515c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb518f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::RegisterDeviceLayout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::UnregisterDeviceLayout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::GetDeviceLayoutName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::RegisterActionMapsWithRuntime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile::ValveIndexControllerProfile()   {
}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_system
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_system)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb518fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_system", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_system
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_system)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb518fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_system", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_systemTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_systemTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb518fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_systemTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_systemTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_systemTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb518fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_systemTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_primaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_primaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb518fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_primaryButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_primaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_primaryButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb518fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_primaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_primaryTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_primaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb518ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_primaryTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_primaryTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_primaryTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb518ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_primaryTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_secondaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_secondaryButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51900c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_secondaryButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_secondaryButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_secondaryButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb519014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_secondaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_secondaryTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_secondaryTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb519024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_secondaryTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_secondaryTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_secondaryTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51902c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_secondaryTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_grip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51903c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_grip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_grip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_grip)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb519044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_grip", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_gripPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_gripPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb519054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_gripPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_gripPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_gripPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51905c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_gripPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_gripForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_gripForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51906c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_gripForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_gripForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_gripForce)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb519074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_gripForce", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb519084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trigger)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51908c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trigger", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_triggerPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_triggerPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51909c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_triggerPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_triggerPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_triggerPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5190a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_triggerPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_triggerTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_triggerTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5190b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_triggerTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_triggerTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_triggerTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5190bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_triggerTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_thumbstick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_thumbstick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5190cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_thumbstick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_thumbstick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_thumbstick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5190d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_thumbstick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_thumbstickClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_thumbstickClicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5190e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_thumbstickClicked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_thumbstickClicked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_thumbstickClicked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5190ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_thumbstickClicked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_thumbstickTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_thumbstickTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5190fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_thumbstickTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_thumbstickTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_thumbstickTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb519104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_thumbstickTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_trackpad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector2Control* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trackpad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb519114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trackpad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_trackpad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::Vector2Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trackpad)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51911c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trackpad", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_trackpadTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trackpadTouched)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51912c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trackpadTouched", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_trackpadTouched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trackpadTouched)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb519134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trackpadTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_trackpadForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trackpadForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb519144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trackpadForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_trackpadForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trackpadForce)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51914c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trackpadForce", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_devicePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_devicePose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51915c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_devicePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_devicePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::XR::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_devicePose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb519164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_devicePose", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::XR::PoseControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb519174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_pointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::XR::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_pointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51917c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_pointer", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_isTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_isTracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51918c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_isTracked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_isTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_isTracked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb519194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_isTracked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_trackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::IntegerControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5191a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trackingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_trackingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::IntegerControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trackingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5191ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trackingState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_devicePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_devicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5191bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_devicePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_devicePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_devicePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5191c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_devicePosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_deviceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_deviceRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5191d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_deviceRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_deviceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_deviceRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5191dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_deviceRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_pointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::Vector3Control* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_pointerPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5191ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_pointerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_pointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::Vector3Control*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_pointerPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb5191f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_pointerPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_pointerRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Controls::QuaternionControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_pointerRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb519204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_pointerRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_pointerRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::InputSystem::Controls::QuaternionControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_pointerRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb51920c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_pointerRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.get_haptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::Input::HapticControl* (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_haptic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51921c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_haptic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.set_haptic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)(::UnityEngine::XR::OpenXR::Input::HapticControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_haptic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb519224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_haptic", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController.FinishSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::FinishSetup)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0xb519234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                    {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5198a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__system_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____system_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__system_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____system_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__system_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____system_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__systemTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____systemTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__systemTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____systemTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__systemTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____systemTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__primaryButton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__primaryButton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__primaryTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__primaryTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____primaryTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__primaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____primaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__secondaryButton_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryButton_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__secondaryButton_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryButton_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondaryButton_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__secondaryTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__secondaryTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secondaryTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__secondaryTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secondaryTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__grip_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__grip_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grip_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__gripPressed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__gripPressed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__gripForce_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripForce_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__gripForce_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gripForce_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__gripForce_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gripForce_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trigger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trigger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trigger_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__triggerPressed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerPressed_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__triggerPressed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerPressed_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerPressed_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__triggerTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__triggerTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__triggerTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__thumbstick_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstick_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__thumbstick_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstick_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbstick_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__thumbstickClicked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickClicked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__thumbstickClicked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickClicked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbstickClicked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__thumbstickTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__thumbstickTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thumbstickTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__thumbstickTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thumbstickTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trackpad_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackpad_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trackpad_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackpad_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__trackpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackpad_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trackpadTouched_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackpadTouched_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trackpadTouched_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackpadTouched_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__trackpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackpadTouched_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trackpadForce_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackpadForce_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trackpadForce_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackpadForce_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__trackpadForce_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackpadForce_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__devicePose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePose_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__devicePose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePose_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__devicePose_k__BackingField(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____devicePose_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__pointer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointer_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::XR::PoseControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__pointer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointer_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__pointer_k__BackingField(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointer_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__isTracked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTracked_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__isTracked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTracked_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTracked_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trackingState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingState_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__trackingState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingState_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingState_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__devicePosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__devicePosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____devicePosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____devicePosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__deviceRotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__deviceRotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deviceRotation_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__pointerPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerPosition_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__pointerPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerPosition_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerPosition_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__pointerRotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerRotation_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__pointerRotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerRotation_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerRotation_k__BackingField = value;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__haptic_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haptic_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const& UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_get__haptic_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____haptic_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::__cordl_internal_set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____haptic_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_system()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_system", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_system(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_system", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_systemTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_systemTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_systemTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_systemTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_primaryButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_primaryButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_primaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_primaryTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_primaryTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_primaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_primaryTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_secondaryButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_secondaryButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_secondaryButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_secondaryTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_secondaryTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_secondaryTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_secondaryTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_grip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_grip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_grip(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_grip", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_gripPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_gripPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_gripPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_gripForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_gripForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_gripForce(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_gripForce", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trigger(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trigger", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_triggerPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_triggerPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_triggerPressed", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_triggerTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_triggerTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_triggerTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_triggerTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_thumbstick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_thumbstick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_thumbstick", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_thumbstickClicked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_thumbstickClicked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_thumbstickClicked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_thumbstickTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_thumbstickTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_thumbstickTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_thumbstickTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector2Control* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trackpad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trackpad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector2Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trackpad(::UnityEngine::InputSystem::Controls::Vector2Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trackpad", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector2Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trackpadTouched()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trackpadTouched", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trackpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trackpadTouched", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trackpadForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trackpadForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AxisControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trackpadForce(::UnityEngine::InputSystem::Controls::AxisControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trackpadForce", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::AxisControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_devicePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_devicePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_devicePose(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_devicePose", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::XR::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_pointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_pointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::PoseControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_pointer(::UnityEngine::InputSystem::XR::PoseControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_pointer", {}, {::i2c::type_of<::UnityEngine::InputSystem::XR::PoseControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_isTracked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_isTracked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_isTracked", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::ButtonControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_trackingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_trackingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::IntegerControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_trackingState", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::IntegerControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_devicePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_devicePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_devicePosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_deviceRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_deviceRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_deviceRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::Vector3Control* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_pointerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_pointerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::Vector3Control*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_pointerPosition", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::Vector3Control*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::QuaternionControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_pointerRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_pointerRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::QuaternionControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_pointerRotation", {}, {::i2c::type_of<::UnityEngine::InputSystem::Controls::QuaternionControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::get_haptic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"get_haptic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::HapticControl*>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {"set_haptic", {}, {::i2c::type_of<::UnityEngine::XR::OpenXR::Input::HapticControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::FinishSetup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController* UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::ValveIndexControllerProfile_ValveIndexController::ValveIndexControllerProfile_ValveIndexController()   {
}
