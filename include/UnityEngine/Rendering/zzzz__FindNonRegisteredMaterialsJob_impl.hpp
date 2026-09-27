#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FindNonRegisteredMaterialsJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList`1_ParallelWriter_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FindNonRegisteredMaterialsJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::FindNonRegisteredMaterialsJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::FindNonRegisteredMaterialsJob::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::FindNonRegisteredMaterialsJob::Execute)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb1f6b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::FindNonRegisteredMaterialsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::FindNonRegisteredMaterialsJob::Execute(int32_t  startIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::FindNonRegisteredMaterialsJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
constexpr  UnityEngine::Rendering::FindNonRegisteredMaterialsJob::operator ::Unity::Jobs::IJobParallelForBatch*()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
constexpr ::Unity::Jobs::IJobParallelForBatch* UnityEngine::Rendering::FindNonRegisteredMaterialsJob::i___Unity__Jobs__IJobParallelForBatch()  {
return static_cast<::Unity::Jobs::IJobParallelForBatch*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "packedMaterialDatas", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hashMap", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMaterialID>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "outInstancesWriter", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "outPackedMaterialDatasWriter", ty: "::GlobalNamespace::NativeList_1_ParallelWriter<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::FindNonRegisteredMaterialsJob::FindNonRegisteredMaterialsJob(::Unity::Collections::NativeArray_1<int32_t>  instanceIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  packedMaterialDatas, ::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::BatchMaterialID>  hashMap, ::GlobalNamespace::NativeList_1_ParallelWriter<int32_t>  outInstancesWriter, ::GlobalNamespace::NativeList_1_ParallelWriter<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  outPackedMaterialDatasWriter) noexcept  {
this->instanceIDs = instanceIDs;
this->packedMaterialDatas = packedMaterialDatas;
this->hashMap = hashMap;
this->outInstancesWriter = outInstancesWriter;
this->outPackedMaterialDatasWriter = outPackedMaterialDatasWriter;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::FindNonRegisteredMaterialsJob::FindNonRegisteredMaterialsJob()   {
}
