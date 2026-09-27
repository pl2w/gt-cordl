#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBuffer_ReadOnly.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_ReadOnly_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::*)(::UnityEngine::Rendering::GPUInstanceDataBuffer*)>(&::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb1fba3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly.CPUInstanceToGPUInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GPUInstanceIndex (::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::*)(::UnityEngine::Rendering::InstanceHandle)>(&::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::CPUInstanceToGPUInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb1fba5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly>(),
                        {"CPUInstanceToGPUInstance", {}, {::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly.CPUInstanceArrayToGPUInstanceArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>)>(&::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::CPUInstanceArrayToGPUInstanceArray)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb1fba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly>(),
                        {"CPUInstanceArrayToGPUInstanceArray", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::_ctor(::UnityEngine::Rendering::GPUInstanceDataBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::GPUInstanceDataBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline ::UnityEngine::Rendering::GPUInstanceIndex GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::CPUInstanceToGPUInstance(::UnityEngine::Rendering::InstanceHandle  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly>(),
                        {"CPUInstanceToGPUInstance", {}, {::i2c::type_of<::UnityEngine::Rendering::InstanceHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GPUInstanceIndex>(*this, ___internal_method, instance);
}
inline void GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::CPUInstanceArrayToGPUInstanceArray(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly>(),
                        {"CPUInstanceArrayToGPUInstanceArray", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances, gpuInstanceIndices);
}
// Ctor Parameters [CppParam { name: "instancesNumPrefixSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::GPUInstanceDataBuffer_ReadOnly(::Unity::Collections::NativeArray_1<int32_t>  instancesNumPrefixSum) noexcept  {
this->instancesNumPrefixSum = instancesNumPrefixSum;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUInstanceDataBuffer_ReadOnly::GPUInstanceDataBuffer_ReadOnly()   {
}
