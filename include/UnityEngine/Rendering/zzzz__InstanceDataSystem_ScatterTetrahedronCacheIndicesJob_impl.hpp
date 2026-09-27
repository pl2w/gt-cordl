#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_ScatterTetrahedronCacheIndicesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_ScatterTetrahedronCacheIndicesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::*)(int32_t)>(&::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::Execute)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb205f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "probeInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "compactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  probeInstances, ::Unity::Collections::NativeArray_1<int32_t>  compactTetrahedronCache, ::UnityEngine::Rendering::CPUInstanceData  instanceData) noexcept  {
this->probeInstances = probeInstances;
this->compactTetrahedronCache = compactTetrahedronCache;
this->instanceData = instanceData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob::InstanceDataSystem_ScatterTetrahedronCacheIndicesJob()   {
}
