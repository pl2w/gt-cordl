#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_UpdateCompactedInstanceVisibilityJob.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_UpdateCompactedInstanceVisibilityJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::*)(int32_t, int32_t)>(&::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::Execute)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb20755c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::Execute(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr  GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::operator ::Unity::Jobs::IJobParallelForBatch*()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::i___Unity__Jobs__IJobParallelForBatch()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "compactedVisibilityMasks", ty: "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob(::UnityEngine::Rendering::ParallelBitArray  compactedVisibilityMasks, ::UnityEngine::Rendering::CPUInstanceData  instanceData) noexcept  {
this->compactedVisibilityMasks = compactedVisibilityMasks;
this->instanceData = instanceData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob::InstanceDataSystem_UpdateCompactedInstanceVisibilityJob()   {
}
