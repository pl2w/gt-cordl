#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/OpenXR/OpenXRHapticImpulseChannel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/OpenXR/zzzz__OpenXRHapticImpulseChannel_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannel_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel.get_hapticAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::get_hapticAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"get_hapticAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel.set_hapticAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::set_hapticAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"set_hapticAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel.get_device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"get_device", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel.set_device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ccca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"set_device", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::*)(float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb4ccca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4caed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::__cordl_internal_get__hapticAction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hapticAction_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::__cordl_internal_get__hapticAction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hapticAction_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::__cordl_internal_set__hapticAction_k__BackingField(::UnityEngine::InputSystem::InputAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hapticAction_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::__cordl_internal_get__device_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::InputDevice* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::__cordl_internal_get__device_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::__cordl_internal_set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____device_k__BackingField = value;
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::get_hapticAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"get_hapticAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::set_hapticAction(::UnityEngine::InputSystem::InputAction*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"set_hapticAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::get_device()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"get_device", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::set_device(::UnityEngine::InputSystem::InputDevice*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"set_device", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, amplitude, duration, frequency);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseChannel() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::OpenXR::OpenXRHapticImpulseChannel::OpenXRHapticImpulseChannel()   {
}
