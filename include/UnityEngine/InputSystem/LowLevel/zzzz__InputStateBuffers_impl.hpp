#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputStateBuffers.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_DoubleBuffers_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBuffers_DoubleBuffers_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.GetDoubleBuffersFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateBuffers_DoubleBuffers (::UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetDoubleBuffersFor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaffaa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"GetDoubleBuffersFor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.GetFrontBufferForDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetFrontBufferForDevice)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaffaaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"GetFrontBufferForDevice", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.GetBackBufferForDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetBackBufferForDevice)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaffab78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"GetBackBufferForDevice", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.SwitchTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::SwitchTo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaffac0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"SwitchTo", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.AllocateAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)(::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::AllocateAll)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaffac70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"AllocateAll", {}, {::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.SetUpDeviceToBufferMappings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputStateBuffers_DoubleBuffers (*)(int32_t, ::by_ref<uint8_t*>, uint32_t, uint32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::SetUpDeviceToBufferMappings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaffad8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"SetUpDeviceToBufferMappings", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.FreeAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)()>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::FreeAll)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xaffae28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"FreeAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.MigrateAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputStateBuffers::*)(::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int32_t, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateAll)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xaffaee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"MigrateAll", {}, {::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.MigrateDoubleBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::InputStateBuffers_DoubleBuffers, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int32_t, ::GlobalNamespace::InputStateBuffers_DoubleBuffers)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateDoubleBuffer)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xaffb044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"MigrateDoubleBuffer", {}, {::i2c::type_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.MigrateSingleBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int32_t, void*)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateSingleBuffer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xaffb20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"MigrateSingleBuffer", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.ComputeSizeOfSingleStateBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<::UnityEngine::InputSystem::InputDevice*>, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::ComputeSizeOfSingleStateBuffer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xaffad20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"ComputeSizeOfSingleStateBuffer", {}, {::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputStateBuffers.NextDeviceOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::LowLevel::InputStateBuffers::NextDeviceOffset)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xaffb314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"NextDeviceOffset", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::setStaticF_s_DefaultStateBuffer(void*  value)  {
::cordl_internals::setStaticField<void*, "s_DefaultStateBuffer", ::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(std::forward<void*>(value));
}
inline void* UnityEngine::InputSystem::LowLevel::InputStateBuffers::getStaticF_s_DefaultStateBuffer()  {
return ::cordl_internals::getStaticField<void*, "s_DefaultStateBuffer", ::UnityEngine::InputSystem::LowLevel::InputStateBuffers>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::setStaticF_s_NoiseMaskBuffer(void*  value)  {
::cordl_internals::setStaticField<void*, "s_NoiseMaskBuffer", ::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(std::forward<void*>(value));
}
inline void* UnityEngine::InputSystem::LowLevel::InputStateBuffers::getStaticF_s_NoiseMaskBuffer()  {
return ::cordl_internals::getStaticField<void*, "s_NoiseMaskBuffer", ::UnityEngine::InputSystem::LowLevel::InputStateBuffers>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::setStaticF_s_ResetMaskBuffer(void*  value)  {
::cordl_internals::setStaticField<void*, "s_ResetMaskBuffer", ::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(std::forward<void*>(value));
}
inline void* UnityEngine::InputSystem::LowLevel::InputStateBuffers::getStaticF_s_ResetMaskBuffer()  {
return ::cordl_internals::getStaticField<void*, "s_ResetMaskBuffer", ::UnityEngine::InputSystem::LowLevel::InputStateBuffers>();
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::setStaticF_s_CurrentBuffers(::GlobalNamespace::InputStateBuffers_DoubleBuffers  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::InputStateBuffers_DoubleBuffers, "s_CurrentBuffers", ::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(std::forward<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(value));
}
inline ::GlobalNamespace::InputStateBuffers_DoubleBuffers UnityEngine::InputSystem::LowLevel::InputStateBuffers::getStaticF_s_CurrentBuffers()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::InputStateBuffers_DoubleBuffers, "s_CurrentBuffers", ::UnityEngine::InputSystem::LowLevel::InputStateBuffers>();
}
inline ::GlobalNamespace::InputStateBuffers_DoubleBuffers UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"GetDoubleBuffersFor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(*this, ___internal_method, updateType);
}
inline void* UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetFrontBufferForDevice(int32_t  deviceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"GetFrontBufferForDevice", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, deviceIndex);
}
inline void* UnityEngine::InputSystem::LowLevel::InputStateBuffers::GetBackBufferForDevice(int32_t  deviceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"GetBackBufferForDevice", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, deviceIndex);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers  buffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType  update)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"SwitchTo", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffers, update);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::AllocateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"AllocateAll", {}, {::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, devices, deviceCount);
}
inline ::GlobalNamespace::InputStateBuffers_DoubleBuffers UnityEngine::InputSystem::LowLevel::InputStateBuffers::SetUpDeviceToBufferMappings(int32_t  deviceCount, ::by_ref<uint8_t*>  bufferPtr, uint32_t  sizePerBuffer, uint32_t  mappingTableSizePerBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"SetUpDeviceToBufferMappings", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(nullptr, ___internal_method, deviceCount, bufferPtr, sizePerBuffer, mappingTableSizePerBuffer);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::FreeAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"FreeAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateAll(::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers  oldBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"MigrateAll", {}, {::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, devices, deviceCount, oldBuffers);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateDoubleBuffer(::GlobalNamespace::InputStateBuffers_DoubleBuffers  newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount, ::GlobalNamespace::InputStateBuffers_DoubleBuffers  oldBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"MigrateDoubleBuffer", {}, {::i2c::type_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::InputStateBuffers_DoubleBuffers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newBuffer, devices, deviceCount, oldBuffer);
}
inline void UnityEngine::InputSystem::LowLevel::InputStateBuffers::MigrateSingleBuffer(void*  newBuffer, ::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount, void*  oldBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"MigrateSingleBuffer", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newBuffer, devices, deviceCount, oldBuffer);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateBuffers::ComputeSizeOfSingleStateBuffer(::ArrayW<::UnityEngine::InputSystem::InputDevice*>  devices, int32_t  deviceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"ComputeSizeOfSingleStateBuffer", {}, {::i2c::type_of<::ArrayW<::UnityEngine::InputSystem::InputDevice*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, devices, deviceCount);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::InputStateBuffers::NextDeviceOffset(uint32_t  currentOffset, ::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputStateBuffers>(),
                        {"NextDeviceOffset", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, currentOffset, device);
}
// Ctor Parameters [CppParam { name: "sizePerBuffer", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "totalSize", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "defaultStateBuffer", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "noiseMaskBuffer", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resetMaskBuffer", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AllBuffers", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PlayerStateBuffers", ty: "::GlobalNamespace::InputStateBuffers_DoubleBuffers", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::InputStateBuffers(uint32_t  sizePerBuffer, uint32_t  totalSize, void*  defaultStateBuffer, void*  noiseMaskBuffer, void*  resetMaskBuffer, void*  m_AllBuffers, ::GlobalNamespace::InputStateBuffers_DoubleBuffers  m_PlayerStateBuffers) noexcept  {
this->sizePerBuffer = sizePerBuffer;
this->totalSize = totalSize;
this->defaultStateBuffer = defaultStateBuffer;
this->noiseMaskBuffer = noiseMaskBuffer;
this->resetMaskBuffer = resetMaskBuffer;
this->m_AllBuffers = m_AllBuffers;
this->m_PlayerStateBuffers = m_PlayerStateBuffers;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBuffers::InputStateBuffers()   {
}
