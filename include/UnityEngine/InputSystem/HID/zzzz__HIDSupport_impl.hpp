#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_HIDPageUsage_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDSupport_HIDPageUsage_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.get_supportedHIDUsages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::HIDSupport_HIDPageUsage> (*)()>(&::UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xafe49e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(),
                        {"get_supportedHIDUsages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.set_supportedHIDUsages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::HIDSupport_HIDPageUsage>)>(&::UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xafe4a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(),
                        {"set_supportedHIDUsages", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::HIDSupport_HIDPageUsage>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDSupport.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::HID::HIDSupport::Initialize)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xafe4c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::HID::HIDSupport::setStaticF_s_SupportedHIDUsages(::ArrayW<::GlobalNamespace::HIDSupport_HIDPageUsage>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::HIDSupport_HIDPageUsage>, "s_SupportedHIDUsages", ::UnityEngine::InputSystem::HID::HIDSupport*>(std::forward<::ArrayW<::GlobalNamespace::HIDSupport_HIDPageUsage>>(value));
}
inline ::ArrayW<::GlobalNamespace::HIDSupport_HIDPageUsage> UnityEngine::InputSystem::HID::HIDSupport::getStaticF_s_SupportedHIDUsages()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::HIDSupport_HIDPageUsage>, "s_SupportedHIDUsages", ::UnityEngine::InputSystem::HID::HIDSupport*>();
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::HIDSupport_HIDPageUsage> UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(),
                        {"get_supportedHIDUsages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::HIDSupport_HIDPageUsage>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::HIDSupport_HIDPageUsage>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(),
                        {"set_supportedHIDUsages", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::HIDSupport_HIDPageUsage>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::HID::HIDSupport::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDSupport*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HIDSupport::HIDSupport()   {
}
