#pragma once
// IWYU pragma private; include "Voxels/MarchingCubesMeshingJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Voxels/zzzz__MeshVertexData_impl.hpp"
#include "Voxels/zzzz__NativeCounter_impl.hpp"
#include "Voxels/zzzz__MarchingCubesMeshingJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
//  Writing Method size for method: ::Voxels::MarchingCubesMeshingJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::MarchingCubesMeshingJob::*)()>(&::Voxels::MarchingCubesMeshingJob::Execute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5daf100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MarchingCubesMeshingJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::MarchingCubesMeshingJob.ProcessCube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::MarchingCubesMeshingJob::*)(int32_t, int32_t, int32_t)>(&::Voxels::MarchingCubesMeshingJob::ProcessCube)> {
  constexpr static std::size_t size = 0x908;
  constexpr static std::size_t addrs = 0x5daf18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MarchingCubesMeshingJob>(),
                        {"ProcessCube", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::MarchingCubesMeshingJob.GetMaterialValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Voxels::MarchingCubesMeshingJob::*)(::Unity::Mathematics::int3)>(&::Voxels::MarchingCubesMeshingJob::GetMaterialValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dafa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MarchingCubesMeshingJob>(),
                        {"GetMaterialValue", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::MarchingCubesMeshingJob.GetVoxelValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Voxels::MarchingCubesMeshingJob::*)(::Unity::Mathematics::int3)>(&::Voxels::MarchingCubesMeshingJob::GetVoxelValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5dafab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MarchingCubesMeshingJob>(),
                        {"GetVoxelValue", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::MarchingCubesMeshingJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MarchingCubesMeshingJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Voxels::MarchingCubesMeshingJob::ProcessCube(int32_t  x, int32_t  y, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MarchingCubesMeshingJob>(),
                        {"ProcessCube", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, x, y, z);
}
inline uint8_t Voxels::MarchingCubesMeshingJob::GetMaterialValue(::Unity::Mathematics::int3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MarchingCubesMeshingJob>(),
                        {"GetMaterialValue", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, pos);
}
inline uint8_t Voxels::MarchingCubesMeshingJob::GetVoxelValue(::Unity::Mathematics::int3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MarchingCubesMeshingJob>(),
                        {"GetVoxelValue", {}, {::i2c::type_of<::Unity::Mathematics::int3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, pos);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  Voxels::MarchingCubesMeshingJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Voxels::MarchingCubesMeshingJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "voxels", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materials", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isoLevel", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triangleCounter", ty: "::Voxels::NativeCounter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexData", ty: "::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triangleData", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dimension", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::MarchingCubesMeshingJob::MarchingCubesMeshingJob(::Unity::Collections::NativeArray_1<uint8_t>  voxels, ::Unity::Collections::NativeArray_1<uint8_t>  materials, int32_t  chunkSize, uint8_t  isoLevel, ::Voxels::NativeCounter  triangleCounter, ::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  vertexData, ::Unity::Collections::NativeArray_1<uint16_t>  triangleData, int32_t  dimension) noexcept  {
this->voxels = voxels;
this->materials = materials;
this->chunkSize = chunkSize;
this->isoLevel = isoLevel;
this->triangleCounter = triangleCounter;
this->vertexData = vertexData;
this->triangleData = triangleData;
this->dimension = dimension;
}
// Ctor Parameters []
constexpr ::Voxels::MarchingCubesMeshingJob::MarchingCubesMeshingJob()   {
}
