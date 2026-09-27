#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_QueryRendererGroupInstancesJob.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_QueryRendererGroupInstancesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob::*)(int32_t, int32_t)>(&::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb20599c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob::Execute(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr  GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob::operator ::Unity::Jobs::IJobParallelForBatch*()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob::i___Unity__Jobs__IJobParallelForBatch()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "rendererGroupInstanceMultiHash", ty: "::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rendererGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "atomicNonFoundInstancesCount", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob::InstanceDataSystem_QueryRendererGroupInstancesJob(::Unity::Collections::NativeParallelMultiHashMap_2<int32_t,::UnityEngine::Rendering::InstanceHandle>  rendererGroupInstanceMultiHash, ::Unity::Collections::NativeArray_1<int32_t>  rendererGroupIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32  atomicNonFoundInstancesCount) noexcept  {
this->rendererGroupInstanceMultiHash = rendererGroupInstanceMultiHash;
this->rendererGroupIDs = rendererGroupIDs;
this->instances = instances;
this->atomicNonFoundInstancesCount = atomicNonFoundInstancesCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_QueryRendererGroupInstancesJob::InstanceDataSystem_QueryRendererGroupInstancesJob()   {
}
