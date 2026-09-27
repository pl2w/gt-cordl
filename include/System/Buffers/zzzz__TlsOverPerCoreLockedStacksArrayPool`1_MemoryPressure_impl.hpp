#pragma once
// IWYU pragma private; include "System/Buffers/TlsOverPerCoreLockedStacksArrayPool`1_MemoryPressure.hpp"
#include "System/Buffers/zzzz__TlsOverPerCoreLockedStacksArrayPool`1_MemoryPressure_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure()   {
}
template<typename T>
constexpr ::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>  GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::Low{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>  GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::Medium{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>  GlobalNamespace::TlsOverPerCoreLockedStacksArrayPool_1_MemoryPressure<T>::High{static_cast<int32_t>(0x2)};
