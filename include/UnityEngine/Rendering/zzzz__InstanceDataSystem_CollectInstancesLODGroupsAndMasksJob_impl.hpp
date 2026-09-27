#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_ReadOnly_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_ReadOnly_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::*)(int32_t)>(&::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::Execute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb2071fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceData", ty: "::GlobalNamespace::CPUInstanceData_ReadOnly", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sharedInstanceData", ty: "::GlobalNamespace::CPUSharedInstanceData_ReadOnly", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodGroupAndMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::GlobalNamespace::CPUInstanceData_ReadOnly  instanceData, ::GlobalNamespace::CPUSharedInstanceData_ReadOnly  sharedInstanceData, ::Unity::Collections::NativeArray_1<uint32_t>  lodGroupAndMasks) noexcept  {
this->instances = instances;
this->instanceData = instanceData;
this->sharedInstanceData = sharedInstanceData;
this->lodGroupAndMasks = lodGroupAndMasks;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob::InstanceDataSystem_CollectInstancesLODGroupsAndMasksJob()   {
}
