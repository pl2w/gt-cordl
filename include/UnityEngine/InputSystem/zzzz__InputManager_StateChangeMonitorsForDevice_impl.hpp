#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_StateChangeMonitorsForDevice.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_BitRegion_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__DynamicBitfield_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_StateChangeMonitorListener_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_StateChangeMonitorsForDevice_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MemoryHelpers_BitRegion_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_StateChangeMonitorListener_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice.get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::*)()>(&::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafb6910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"get_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, uint32_t)>(&::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::Add)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xafb6918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, int64_t, bool)>(&::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::Remove)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xafb6af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::*)()>(&::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::Clear)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xafb6cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice.CompactArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::*)()>(&::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::CompactArrays)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xafb6d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"CompactArrays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice.RemoveAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::*)(int32_t)>(&::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::RemoveAt)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xafb6c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice.SortMonitorsByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::*)()>(&::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::SortMonitorsByIndex)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xafb6db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"SortMonitorsByIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::InputManager_StateChangeMonitorsForDevice::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputManager_StateChangeMonitorsForDevice::Add(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"Add", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, control, monitor, monitorIndex, groupIndex);
}
inline void GlobalNamespace::InputManager_StateChangeMonitorsForDevice::Remove(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, bool  deferRemoval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"Remove", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, monitor, monitorIndex, deferRemoval);
}
inline void GlobalNamespace::InputManager_StateChangeMonitorsForDevice::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InputManager_StateChangeMonitorsForDevice::CompactArrays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"CompactArrays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::InputManager_StateChangeMonitorsForDevice::RemoveAt(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
inline void GlobalNamespace::InputManager_StateChangeMonitorsForDevice::SortMonitorsByIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputManager_StateChangeMonitorsForDevice>(),
                        {"SortMonitorsByIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "memoryRegions", ty: "::ArrayW<::GlobalNamespace::MemoryHelpers_BitRegion>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "listeners", ty: "::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorListener>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "signalled", ty: "::UnityEngine::InputSystem::DynamicBitfield", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "needToUpdateOrderingOfMonitors", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "needToCompactArrays", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::InputManager_StateChangeMonitorsForDevice(::ArrayW<::GlobalNamespace::MemoryHelpers_BitRegion>  memoryRegions, ::ArrayW<::GlobalNamespace::InputManager_StateChangeMonitorListener>  listeners, ::UnityEngine::InputSystem::DynamicBitfield  signalled, bool  needToUpdateOrderingOfMonitors, bool  needToCompactArrays) noexcept  {
this->memoryRegions = memoryRegions;
this->listeners = listeners;
this->signalled = signalled;
this->needToUpdateOrderingOfMonitors = needToUpdateOrderingOfMonitors;
this->needToCompactArrays = needToCompactArrays;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputManager_StateChangeMonitorsForDevice::InputManager_StateChangeMonitorsForDevice()   {
}
