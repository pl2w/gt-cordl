#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerPrefab_CopyMeshJob.hpp"
#include "GlobalNamespace/zzzz__GTVertexDataStream0_impl.hpp"
#include "GlobalNamespace/zzzz__GTVertexDataStream1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Mesh_MeshDataArray_impl.hpp"
#include "GorillaTag/Rendering/zzzz__EdMeshCombinerPrefab_CopyMeshJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob::*)()>(&::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob::Execute)> {
  constexpr static std::size_t size = 0xf0c;
  constexpr static std::size_t addrs = 0x5d58f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "meshDataArray", ty: "::GlobalNamespace::Mesh_MeshDataArray", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceSubmeshIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceTransforms", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightmapScaleOffsets", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseColors", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "atlasSlices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uvModifiersMinMax", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isCandleFlame", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "randSeed", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dst0", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream0>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dst1", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream1>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "idxDst32", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "idxDst16", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "use32BitIndices", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob::EdMeshCombinerPrefab_CopyMeshJob(::GlobalNamespace::Mesh_MeshDataArray  meshDataArray, ::Unity::Collections::NativeArray_1<int32_t>  sourceSubmeshIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  sourceTransforms, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  lightmapScaleOffsets, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  baseColors, ::Unity::Collections::NativeArray_1<int32_t>  atlasSlices, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>  uvModifiersMinMax, bool  isCandleFlame, uint32_t  randSeed, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream0>  dst0, ::Unity::Collections::NativeArray_1<::GlobalNamespace::GTVertexDataStream1>  dst1, ::Unity::Collections::NativeArray_1<int32_t>  idxDst32, ::Unity::Collections::NativeArray_1<uint16_t>  idxDst16, bool  use32BitIndices) noexcept  {
this->meshDataArray = meshDataArray;
this->sourceSubmeshIndices = sourceSubmeshIndices;
this->sourceTransforms = sourceTransforms;
this->lightmapScaleOffsets = lightmapScaleOffsets;
this->baseColors = baseColors;
this->atlasSlices = atlasSlices;
this->uvModifiersMinMax = uvModifiersMinMax;
this->isCandleFlame = isCandleFlame;
this->randSeed = randSeed;
this->dst0 = dst0;
this->dst1 = dst1;
this->idxDst32 = idxDst32;
this->idxDst16 = idxDst16;
this->use32BitIndices = use32BitIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EdMeshCombinerPrefab_CopyMeshJob::EdMeshCombinerPrefab_CopyMeshJob()   {
}
