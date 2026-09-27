#pragma once
// IWYU pragma private; include "Voxels/SDFVoxelGenerator_VoxelDataJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__int3_impl.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_SDFPrimitive_impl.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_VoxelDataJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_SDFPrimitive_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob::*)(int32_t)>(&::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob::Execute)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x5db0edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob.GetDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive, ::Unity::Mathematics::float3)>(&::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob::GetDistance)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5db1388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob>(),
                        {"GetDistance", {}, {::i2c::type_of<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SDFVoxelGenerator_VoxelDataJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline float_t GlobalNamespace::SDFVoxelGenerator_VoxelDataJob::GetDistance(::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive  primitive, ::Unity::Mathematics::float3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob>(),
                        {"GetDistance", {}, {::i2c::type_of<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, primitive, position);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::SDFVoxelGenerator_VoxelDataJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::SDFVoxelGenerator_VoxelDataJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "chunkPosition", ty: "::Unity::Mathematics::int3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dimension", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "blocky", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "noiseScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "heightScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "octaves", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "persistence", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "seed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "voxels", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materials", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fill", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "operations", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob::SDFVoxelGenerator_VoxelDataJob(::Unity::Mathematics::int3  chunkPosition, int32_t  chunkSize, int32_t  dimension, bool  blocky, float_t  noiseScale, float_t  heightScale, int32_t  octaves, float_t  persistence, int32_t  seed, ::Unity::Collections::NativeArray_1<uint8_t>  voxels, ::Unity::Collections::NativeArray_1<uint8_t>  materials, uint8_t  fill, ::Unity::Collections::NativeArray_1<::GlobalNamespace::SDFVoxelGenerator_SDFPrimitive>  operations) noexcept  {
this->chunkPosition = chunkPosition;
this->chunkSize = chunkSize;
this->dimension = dimension;
this->blocky = blocky;
this->noiseScale = noiseScale;
this->heightScale = heightScale;
this->octaves = octaves;
this->persistence = persistence;
this->seed = seed;
this->voxels = voxels;
this->materials = materials;
this->fill = fill;
this->operations = operations;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SDFVoxelGenerator_VoxelDataJob::SDFVoxelGenerator_VoxelDataJob()   {
}
