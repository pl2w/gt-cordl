#pragma once
// IWYU pragma private; include "FastSurfaceNets/FillChunkJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "FastSurfaceNets/zzzz__FillChunkJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::FastSurfaceNets::FillChunkJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::FillChunkJob::*)(int32_t)>(&::FastSurfaceNets::FillChunkJob::Execute)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5daac14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::FillChunkJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void FastSurfaceNets::FillChunkJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::FillChunkJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  FastSurfaceNets::FillChunkJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* FastSurfaceNets::FillChunkJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "sdf", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shape", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chunkPosition", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shapeMin", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shapeMax", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "noiseScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "min", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "max", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "strideY", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "strideZ", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::FastSurfaceNets::FillChunkJob::FillChunkJob(::Unity::Collections::NativeArray_1<uint8_t>  sdf, ::Unity::Mathematics::int3  shape, ::Unity::Mathematics::int3  chunkPosition, ::Unity::Mathematics::int3  shapeMin, ::Unity::Mathematics::int3  shapeMax, float_t  noiseScale, float_t  heightScale, ::Unity::Mathematics::int3  min, ::Unity::Mathematics::int3  max, int32_t  strideY, int32_t  strideZ) noexcept  {
this->sdf = sdf;
this->shape = shape;
this->chunkPosition = chunkPosition;
this->shapeMin = shapeMin;
this->shapeMax = shapeMax;
this->noiseScale = noiseScale;
this->heightScale = heightScale;
this->min = min;
this->max = max;
this->strideY = strideY;
this->strideZ = strideZ;
}
// Ctor Parameters []
constexpr ::FastSurfaceNets::FillChunkJob::FillChunkJob()   {
}
