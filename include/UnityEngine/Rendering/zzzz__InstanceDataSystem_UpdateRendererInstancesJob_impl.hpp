#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_UpdateRendererInstancesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_UpdateRendererInstancesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob::*)(int32_t)>(&::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob::Execute)> {
  constexpr static std::size_t size = 0x84c;
  constexpr static std::size_t addrs = 0xb2069b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "implicitInstanceIndices", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rendererData", ty: "::UnityEngine::Rendering::GPUDrivenRendererGroupData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lodGroupDataMap", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "perCameraInstanceData", ty: "::UnityEngine::Rendering::CPUPerCameraInstanceData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob::InstanceDataSystem_UpdateRendererInstancesJob(bool  implicitInstanceIndices, ::UnityEngine::Rendering::GPUDrivenRendererGroupData  rendererData, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>  lodGroupDataMap, ::UnityEngine::Rendering::CPUInstanceData  instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData  sharedInstanceData, ::UnityEngine::Rendering::CPUPerCameraInstanceData  perCameraInstanceData) noexcept  {
this->implicitInstanceIndices = implicitInstanceIndices;
this->rendererData = rendererData;
this->instances = instances;
this->lodGroupDataMap = lodGroupDataMap;
this->instanceData = instanceData;
this->sharedInstanceData = sharedInstanceData;
this->perCameraInstanceData = perCameraInstanceData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_UpdateRendererInstancesJob::InstanceDataSystem_UpdateRendererInstancesJob()   {
}
