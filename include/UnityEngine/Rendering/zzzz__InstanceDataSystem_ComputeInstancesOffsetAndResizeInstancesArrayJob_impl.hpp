#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::*)()>(&::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::Execute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb205914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instancesCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instancesOffset", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob(::Unity::Collections::NativeArray_1<int32_t>  instancesCount, ::Unity::Collections::NativeArray_1<int32_t>  instancesOffset, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::InstanceHandle>  instances) noexcept  {
this->instancesCount = instancesCount;
this->instancesOffset = instancesOffset;
this->instances = instances;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob::InstanceDataSystem_ComputeInstancesOffsetAndResizeInstancesArrayJob()   {
}
