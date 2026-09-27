#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMeshJobs_TransformToUnitySpaceJob.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector4f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector4s_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__BoneWeight_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_TransformToUnitySpaceJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::*)(int32_t)>(&::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::Execute)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa667cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Normals", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UV", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BoneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MeshVerticesPosition", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MeshNormals", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MeshUV", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector2f>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MeshBoneWeights", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4f>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MeshBoneIndices", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4s>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::OVRMeshJobs_TransformToUnitySpaceJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Vertices, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  Normals, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  UV, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>  BoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>  MeshVerticesPosition, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector3f>  MeshNormals, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector2f>  MeshUV, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4f>  MeshBoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_Vector4s>  MeshBoneIndices) noexcept  {
this->Vertices = Vertices;
this->Normals = Normals;
this->UV = UV;
this->BoneWeights = BoneWeights;
this->MeshVerticesPosition = MeshVerticesPosition;
this->MeshNormals = MeshNormals;
this->MeshUV = MeshUV;
this->MeshBoneWeights = MeshBoneWeights;
this->MeshBoneIndices = MeshBoneIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMeshJobs_TransformToUnitySpaceJob::OVRMeshJobs_TransformToUnitySpaceJob()   {
}
