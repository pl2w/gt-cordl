#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RegisterNewMaterialsJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap`2_ParallelWriter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RegisterNewMaterialsJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RegisterNewMaterialsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RegisterNewMaterialsJob::*)(int32_t)>(&::UnityEngine::Rendering::RegisterNewMaterialsJob::Execute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb1f6ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RegisterNewMaterialsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RegisterNewMaterialsJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RegisterNewMaterialsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  UnityEngine::Rendering::RegisterNewMaterialsJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::RegisterNewMaterialsJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "packedMaterialDatas", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "batchIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMaterialID>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "batchMaterialHashMap", ty: "::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<int32_t,::UnityEngine::Rendering::BatchMaterialID>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "packedMaterialHashMap", ty: "::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RegisterNewMaterialsJob::RegisterNewMaterialsJob(::Unity::Collections::NativeArray_1<int32_t>  instanceIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  packedMaterialDatas, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMaterialID>  batchIDs, ::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<int32_t,::UnityEngine::Rendering::BatchMaterialID>  batchMaterialHashMap, ::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  packedMaterialHashMap) noexcept  {
this->instanceIDs = instanceIDs;
this->packedMaterialDatas = packedMaterialDatas;
this->batchIDs = batchIDs;
this->batchMaterialHashMap = batchMaterialHashMap;
this->packedMaterialHashMap = packedMaterialHashMap;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RegisterNewMaterialsJob::RegisterNewMaterialsJob()   {
}
