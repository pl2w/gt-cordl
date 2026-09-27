#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/TargetedDeviceExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__TargetedDeviceExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__TargetedDevices_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions.WithDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions::WithDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c73d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions*>(),
                        {"WithDevice", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions.WithoutDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions::WithoutDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c73d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions*>(),
                        {"WithoutDevice", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions.HasDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions::HasDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c3cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions*>(),
                        {"HasDevice", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions::WithDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  devices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions*>(),
                        {"WithDevice", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>(nullptr, ___internal_method, devices, device);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions::WithoutDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  devices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions*>(),
                        {"WithoutDevice", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>(nullptr, ___internal_method, devices, device);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions::HasDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  devices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions*>(),
                        {"HasDevice", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, devices, device);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions::TargetedDeviceExtensions()   {
}
