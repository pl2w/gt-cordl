#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/TargetedDevicesExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__TargetedDevicesExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_TargetedDevices_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions.WithDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRDeviceSimulator_TargetedDevices (*)(::GlobalNamespace::XRDeviceSimulator_TargetedDevices, ::GlobalNamespace::XRDeviceSimulator_TargetedDevices)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::WithDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c32b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*>(),
                        {"WithDevice", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>(), ::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions.WithoutDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRDeviceSimulator_TargetedDevices (*)(::GlobalNamespace::XRDeviceSimulator_TargetedDevices, ::GlobalNamespace::XRDeviceSimulator_TargetedDevices)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::WithoutDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c32bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*>(),
                        {"WithoutDevice", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>(), ::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions.HasDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::XRDeviceSimulator_TargetedDevices, ::GlobalNamespace::XRDeviceSimulator_TargetedDevices)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::HasDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4c32c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*>(),
                        {"HasDevice", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>(), ::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::XRDeviceSimulator_TargetedDevices UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::WithDevice(::GlobalNamespace::XRDeviceSimulator_TargetedDevices  devices, ::GlobalNamespace::XRDeviceSimulator_TargetedDevices  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*>(),
                        {"WithDevice", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>(), ::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>(nullptr, ___internal_method, devices, device);
}
inline ::GlobalNamespace::XRDeviceSimulator_TargetedDevices UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::WithoutDevice(::GlobalNamespace::XRDeviceSimulator_TargetedDevices  devices, ::GlobalNamespace::XRDeviceSimulator_TargetedDevices  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*>(),
                        {"WithoutDevice", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>(), ::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>(nullptr, ___internal_method, devices, device);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::HasDevice(::GlobalNamespace::XRDeviceSimulator_TargetedDevices  devices, ::GlobalNamespace::XRDeviceSimulator_TargetedDevices  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions*>(),
                        {"HasDevice", {}, {::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>(), ::i2c::type_of<::GlobalNamespace::XRDeviceSimulator_TargetedDevices>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, devices, device);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevicesExtensions::TargetedDevicesExtensions()   {
}
