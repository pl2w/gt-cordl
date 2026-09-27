#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticImpulseCommandChannel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticImpulseCommandChannel_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__IXRHapticImpulseChannel_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel.get_motorChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::get_motorChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cb2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"get_motorChannel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel.set_motorChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::set_motorChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cb2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"set_motorChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel.get_device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::get_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cb2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"get_device", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel.set_device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::set_device)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cb2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"set_device", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::*)(float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb4cb2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cb3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::__cordl_internal_get__motorChannel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motorChannel_k__BackingField;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::__cordl_internal_get__motorChannel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motorChannel_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::__cordl_internal_set__motorChannel_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____motorChannel_k__BackingField = value;
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::__cordl_internal_get__device_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_k__BackingField;
}
constexpr ::UnityEngine::InputSystem::InputDevice* const& UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::__cordl_internal_get__device_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::__cordl_internal_set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____device_k__BackingField = value;
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::get_motorChannel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"get_motorChannel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::set_motorChannel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"set_motorChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::get_device()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"get_device", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::set_device(::UnityEngine::InputSystem::InputDevice*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"set_device", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, amplitude, duration, frequency);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::operator ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel* UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::i___UnityEngine__XR__Interaction__Toolkit__Inputs__Haptics__IXRHapticImpulseChannel() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulseCommandChannel::HapticImpulseCommandChannel()   {
}
