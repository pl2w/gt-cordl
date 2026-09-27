#pragma once
// IWYU pragma private; include "Voxels/AssembleVertexDataJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Voxels/zzzz__MeshVertexData_impl.hpp"
#include "Voxels/zzzz__NativeCounter_impl.hpp"
#include "Voxels/zzzz__AssembleVertexDataJob_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "Voxels/zzzz__AssembleVertexDataJob_Key_def.hpp"
#include "Voxels/zzzz__MeshVertexData_def.hpp"
//  Writing Method size for method: ::Voxels::AssembleVertexDataJob.Sort3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int3 (*)(int32_t, int32_t, int32_t)>(&::Voxels::AssembleVertexDataJob::Sort3)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5db6168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::AssembleVertexDataJob>(),
                        {"Sort3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::AssembleVertexDataJob.MakeMatSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::int4 (*)(uint8_t, uint8_t, uint8_t)>(&::Voxels::AssembleVertexDataJob::MakeMatSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db6194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::AssembleVertexDataJob>(),
                        {"MakeMatSet", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::AssembleVertexDataJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::AssembleVertexDataJob::*)()>(&::Voxels::AssembleVertexDataJob::Execute)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5db61b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::AssembleVertexDataJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::AssembleVertexDataJob.GetOrCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Voxels::AssembleVertexDataJob::*)(int32_t, ::Unity::Mathematics::int4, ::Unity::Mathematics::float4, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::GlobalNamespace::AssembleVertexDataJob_Key,int32_t>>, ::by_ref<::Unity::Collections::NativeList_1<::Voxels::MeshVertexData>>)>(&::Voxels::AssembleVertexDataJob::GetOrCreate)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5db6510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::AssembleVertexDataJob>(),
                        {"GetOrCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::GlobalNamespace::AssembleVertexDataJob_Key,int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::Voxels::MeshVertexData>>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::int3 Voxels::AssembleVertexDataJob::Sort3(int32_t  a, int32_t  b, int32_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::AssembleVertexDataJob>(),
                        {"Sort3", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int3>(nullptr, ___internal_method, a, b, c);
}
inline ::Unity::Mathematics::int4 Voxels::AssembleVertexDataJob::MakeMatSet(uint8_t  m0, uint8_t  m1, uint8_t  m2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::AssembleVertexDataJob>(),
                        {"MakeMatSet", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::int4>(nullptr, ___internal_method, m0, m1, m2);
}
inline void Voxels::AssembleVertexDataJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::AssembleVertexDataJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint16_t Voxels::AssembleVertexDataJob::GetOrCreate(int32_t  srcIdx, ::Unity::Mathematics::int4  mats, ::Unity::Mathematics::float4  blend, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::GlobalNamespace::AssembleVertexDataJob_Key,int32_t>>  map, ::by_ref<::Unity::Collections::NativeList_1<::Voxels::MeshVertexData>>  vertsOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::AssembleVertexDataJob>(),
                        {"GetOrCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Mathematics::int4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelHashMap_2<::GlobalNamespace::AssembleVertexDataJob_Key,int32_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::Voxels::MeshVertexData>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, srcIdx, mats, blend, map, vertsOut);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  Voxels::AssembleVertexDataJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Voxels::AssembleVertexDataJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "vertexData", ty: "::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triangleData", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcVerts", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcMats", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcNorm", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcTris", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "triangleCounter", ty: "::Voxels::NativeCounter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::AssembleVertexDataJob::AssembleVertexDataJob(::Unity::Collections::NativeArray_1<::Voxels::MeshVertexData>  vertexData, ::Unity::Collections::NativeArray_1<uint16_t>  triangleData, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcVerts, ::Unity::Collections::NativeArray_1<uint8_t>  srcMats, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcNorm, ::Unity::Collections::NativeArray_1<int32_t>  srcTris, ::Voxels::NativeCounter  triangleCounter) noexcept  {
this->vertexData = vertexData;
this->triangleData = triangleData;
this->srcVerts = srcVerts;
this->srcMats = srcMats;
this->srcNorm = srcNorm;
this->srcTris = srcTris;
this->triangleCounter = triangleCounter;
}
// Ctor Parameters []
constexpr ::Voxels::AssembleVertexDataJob::AssembleVertexDataJob()   {
}
