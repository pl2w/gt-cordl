#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_QuerySortedMeshInstancesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_QuerySortedMeshInstancesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob::*)(int32_t, int32_t)>(&::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb205c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob::Execute(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr  GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob::operator ::Unity::Jobs::IJobParallelForBatch*()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob::i___Unity__Jobs__IJobParallelForBatch()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sortedMeshID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob::InstanceDataSystem_QuerySortedMeshInstancesJob(::UnityEngine::Rendering::CPUInstanceData  instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData, ::Unity::Collections::NativeArray_1<int32_t>  sortedMeshID, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) noexcept  {
this->instanceData = instanceData;
this->sharedInstanceData = sharedInstanceData;
this->sortedMeshID = sortedMeshID;
this->instances = instances;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_QuerySortedMeshInstancesJob::InstanceDataSystem_QuerySortedMeshInstancesJob()   {
}
