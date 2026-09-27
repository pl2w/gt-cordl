#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::*)(int32_t)>(&::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb1fbb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instancesNumPrefixSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gpuInstanceIndices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob(::Unity::Collections::NativeArray_1<int32_t>  instancesNumPrefixSum, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>  gpuInstanceIndices) noexcept  {
this->instancesNumPrefixSum = instancesNumPrefixSum;
this->instances = instances;
this->gpuInstanceIndices = gpuInstanceIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob::GPUInstanceDataBuffer_ConvertCPUInstancesToGPUInstancesJob()   {
}
