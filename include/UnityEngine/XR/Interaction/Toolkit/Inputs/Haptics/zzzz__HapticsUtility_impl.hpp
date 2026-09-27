#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticsUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticsUtility_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticControlActionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticImpulseCommandChannelGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticsUtility_Controller_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__XRInputDeviceHapticImpulseChannelGroup_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, ::GlobalNamespace::HapticsUtility_Controller, float_t, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb4cbdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::HapticsUtility_Controller>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility.SendHapticImpulseOpenXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputAction*, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::SendHapticImpulseOpenXR)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb4cc0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"SendHapticImpulseOpenXR", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*>, ::UnityEngine::InputSystem::InputDevice*, int32_t, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb4cc27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility.SendHapticImpulseLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*>, ::by_ref<::UnityEngine::XR::InputDevice>, ::UnityEngine::XR::InputDeviceCharacteristics, int32_t, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::SendHapticImpulseLegacy)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb4cc3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"SendHapticImpulseLegacy", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::InputDevice>>(), ::i2c::type_of<::UnityEngine::XR::InputDeviceCharacteristics>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility.GetLeftHapticAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::GetLeftHapticAction)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4cbfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"GetLeftHapticAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility.GetRightHapticAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::GetRightHapticAction)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4cc540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"GetRightHapticAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::setStaticF_s_LeftChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*, "s_LeftChannelGroup", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::getStaticF_s_LeftChannelGroup()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*, "s_LeftChannelGroup", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::setStaticF_s_RightChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*, "s_RightChannelGroup", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::getStaticF_s_RightChannelGroup()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*, "s_RightChannelGroup", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::setStaticF_s_LegacyLeftChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*, "s_LegacyLeftChannelGroup", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::getStaticF_s_LegacyLeftChannelGroup()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*, "s_LegacyLeftChannelGroup", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::setStaticF_s_LegacyRightChannelGroup(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*, "s_LegacyRightChannelGroup", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::getStaticF_s_LegacyRightChannelGroup()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*, "s_LegacyRightChannelGroup", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::setStaticF_s_LegacyLeftDevice(::UnityEngine::XR::InputDevice  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::InputDevice, "s_LegacyLeftDevice", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(std::forward<::UnityEngine::XR::InputDevice>(value));
}
inline ::UnityEngine::XR::InputDevice UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::getStaticF_s_LegacyLeftDevice()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::InputDevice, "s_LegacyLeftDevice", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::setStaticF_s_LegacyRightDevice(::UnityEngine::XR::InputDevice  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::InputDevice, "s_LegacyRightDevice", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(std::forward<::UnityEngine::XR::InputDevice>(value));
}
inline ::UnityEngine::XR::InputDevice UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::getStaticF_s_LegacyRightDevice()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::InputDevice, "s_LegacyRightDevice", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::setStaticF_s_HapticControlManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*, "s_HapticControlManager", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::getStaticF_s_HapticControlManager()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticControlActionManager*, "s_HapticControlManager", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::setStaticF_s_LeftHapticAction(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputAction*, "s_LeftHapticAction", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::getStaticF_s_LeftHapticAction()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputAction*, "s_LeftHapticAction", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::setStaticF_s_RightHapticAction(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputAction*, "s_RightHapticAction", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::getStaticF_s_RightHapticAction()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputAction*, "s_RightHapticAction", ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::SendHapticImpulse(float_t  amplitude, float_t  duration, ::GlobalNamespace::HapticsUtility_Controller  controller, float_t  frequency, int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::HapticsUtility_Controller>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, amplitude, duration, controller, frequency, channel);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::SendHapticImpulseOpenXR(::UnityEngine::InputSystem::InputAction*  hapticAction, float_t  amplitude, float_t  duration, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"SendHapticImpulseOpenXR", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hapticAction, amplitude, duration, frequency);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::SendHapticImpulse(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*>  channelGroup, ::UnityEngine::InputSystem::InputDevice*  device, int32_t  channel, float_t  amplitude, float_t  duration, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannelGroup*>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, channelGroup, device, channel, amplitude, duration, frequency);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::SendHapticImpulseLegacy(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*>  channelGroup, ::by_ref<::UnityEngine::XR::InputDevice>  device, ::UnityEngine::XR::InputDeviceCharacteristics  characteristics, int32_t  channel, float_t  amplitude, float_t  duration, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"SendHapticImpulseLegacy", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputDeviceHapticImpulseChannelGroup*>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::InputDevice>>(), ::i2c::type_of<::UnityEngine::XR::InputDeviceCharacteristics>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, channelGroup, device, characteristics, channel, amplitude, duration, frequency);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::GetLeftHapticAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"GetLeftHapticAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::GetRightHapticAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility*>(),
                        {"GetRightHapticAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticsUtility::HapticsUtility()   {
}
