#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SphericalHarmonicsL2_impl.hpp"
#include "UnityEngine/zzzz__LightProbesQuery_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::*)(int32_t)>(&::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::Execute)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb205e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "probesCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightProbesQuery", ty: "::UnityEngine::LightProbesQuery", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "queryPostitions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "compactTetrahedronCache", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "probesSphericalHarmonics", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "probesOcclusion", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob(int32_t  probesCount, ::UnityEngine::LightProbesQuery  lightProbesQuery, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  queryPostitions, ::Unity::Collections::NativeArray_1<int32_t>  compactTetrahedronCache, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SphericalHarmonicsL2>  probesSphericalHarmonics, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  probesOcclusion) noexcept  {
this->probesCount = probesCount;
this->lightProbesQuery = lightProbesQuery;
this->queryPostitions = queryPostitions;
this->compactTetrahedronCache = compactTetrahedronCache;
this->probesSphericalHarmonics = probesSphericalHarmonics;
this->probesOcclusion = probesOcclusion;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob::InstanceDataSystem_CalculateInterpolatedLightAndOcclusionProbesBatchJob()   {
}
