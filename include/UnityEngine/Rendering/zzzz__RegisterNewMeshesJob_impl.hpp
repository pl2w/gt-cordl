#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RegisterNewMeshesJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap`2_ParallelWriter_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RegisterNewMeshesJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RegisterNewMeshesJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RegisterNewMeshesJob::*)(int32_t)>(&::UnityEngine::Rendering::RegisterNewMeshesJob::Execute)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb1f6e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RegisterNewMeshesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RegisterNewMeshesJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::RegisterNewMeshesJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  UnityEngine::Rendering::RegisterNewMeshesJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::Rendering::RegisterNewMeshesJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "batchIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hashMap", ty: "::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<int32_t,::UnityEngine::Rendering::BatchMeshID>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::RegisterNewMeshesJob::RegisterNewMeshesJob(::Unity::Collections::NativeArray_1<int32_t>  instanceIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID>  batchIDs, ::GlobalNamespace::NativeParallelHashMap_2_ParallelWriter<int32_t,::UnityEngine::Rendering::BatchMeshID>  hashMap) noexcept  {
this->instanceIDs = instanceIDs;
this->batchIDs = batchIDs;
this->hashMap = hashMap;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RegisterNewMeshesJob::RegisterNewMeshesJob()   {
}
