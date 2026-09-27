#pragma once
// IWYU pragma private; include "Voxels/PerlinVoxelGenerator_VoxelDataJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Voxels/zzzz__PerlinVoxelGenerator_VoxelDataJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob::*)(int32_t)>(&::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob::Execute)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5db0080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "chunkPosition", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dimension", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "noiseScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groundLevel", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "heightCompensation", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "octaves", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "persistence", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "seed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "voxels", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materials", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob::PerlinVoxelGenerator_VoxelDataJob(::Unity::Mathematics::int3  chunkPosition, int32_t  chunkSize, int32_t  dimension, float_t  noiseScale, float_t  groundLevel, float_t  heightScale, float_t  heightCompensation, int32_t  octaves, float_t  persistence, int32_t  seed, ::Unity::Collections::NativeArray_1<uint8_t>  voxels, ::Unity::Collections::NativeArray_1<uint8_t>  materials) noexcept  {
this->chunkPosition = chunkPosition;
this->chunkSize = chunkSize;
this->dimension = dimension;
this->noiseScale = noiseScale;
this->groundLevel = groundLevel;
this->heightScale = heightScale;
this->heightCompensation = heightCompensation;
this->octaves = octaves;
this->persistence = persistence;
this->seed = seed;
this->voxels = voxels;
this->materials = materials;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerlinVoxelGenerator_VoxelDataJob::PerlinVoxelGenerator_VoxelDataJob()   {
}
