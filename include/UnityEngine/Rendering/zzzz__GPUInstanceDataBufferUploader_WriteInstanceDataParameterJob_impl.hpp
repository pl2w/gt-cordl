#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::*)(int32_t)>(&::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::Execute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb1fd4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "gatherData", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parameterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uintPerParameter", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uintPerInstance", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "componentDataIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gatherIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "instanceData", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tmpDataBuffer", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob(bool  gatherData, int32_t  parameterIndex, int32_t  uintPerParameter, int32_t  uintPerInstance, ::Unity::Collections::NativeArray_1<int32_t>  componentDataIndex, ::Unity::Collections::NativeArray_1<int32_t>  gatherIndices, ::Unity::Collections::NativeArray_1<uint32_t>  instanceData, ::Unity::Collections::NativeArray_1<uint32_t>  tmpDataBuffer) noexcept  {
this->gatherData = gatherData;
this->parameterIndex = parameterIndex;
this->uintPerParameter = uintPerParameter;
this->uintPerInstance = uintPerInstance;
this->componentDataIndex = componentDataIndex;
this->gatherIndices = gatherIndices;
this->instanceData = instanceData;
this->tmpDataBuffer = tmpDataBuffer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob::GPUInstanceDataBufferUploader_WriteInstanceDataParameterJob()   {
}
