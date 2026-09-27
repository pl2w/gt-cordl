#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_SplitVoxelMeshJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Voxels/zzzz__MeshUtilities_SplitVoxelMeshJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Voxels/zzzz__MeshUtilities_SplitVoxelMeshJob_Bucket_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshUtilities_SplitVoxelMeshJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MeshUtilities_SplitVoxelMeshJob::*)()>(&::GlobalNamespace::MeshUtilities_SplitVoxelMeshJob::Execute)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x5db4068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshUtilities_SplitVoxelMeshJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshUtilities_SplitVoxelMeshJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshUtilities_SplitVoxelMeshJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::MeshUtilities_SplitVoxelMeshJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::MeshUtilities_SplitVoxelMeshJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "CosThresh", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SrcVerts", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SrcMats", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SrcTris", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FaceN", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DstVerts", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DstMats", ty: "::Unity::Collections::NativeList_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DstTris", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MeshUtilities_SplitVoxelMeshJob::MeshUtilities_SplitVoxelMeshJob(float_t  CosThresh, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  SrcVerts, ::Unity::Collections::NativeArray_1<uint8_t>  SrcMats, ::Unity::Collections::NativeArray_1<int32_t>  SrcTris, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  FaceN, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  DstVerts, ::Unity::Collections::NativeList_1<uint8_t>  DstMats, ::Unity::Collections::NativeList_1<int32_t>  DstTris) noexcept  {
this->CosThresh = CosThresh;
this->SrcVerts = SrcVerts;
this->SrcMats = SrcMats;
this->SrcTris = SrcTris;
this->FaceN = FaceN;
this->DstVerts = DstVerts;
this->DstMats = DstMats;
this->DstTris = DstTris;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshUtilities_SplitVoxelMeshJob::MeshUtilities_SplitVoxelMeshJob()   {
}
