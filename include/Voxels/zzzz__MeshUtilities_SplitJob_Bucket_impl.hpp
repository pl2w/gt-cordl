#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_SplitJob_Bucket.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Voxels/zzzz__MeshUtilities_SplitJob_Bucket_def.hpp"
// Ctor Parameters [CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "newIdx", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "repN", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SplitJob_MeshUtilities_Bucket::SplitJob_MeshUtilities_Bucket(int32_t  next, int32_t  newIdx, ::Unity::Mathematics::float3  repN) noexcept  {
this->next = next;
this->newIdx = newIdx;
this->repN = repN;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplitJob_MeshUtilities_Bucket::SplitJob_MeshUtilities_Bucket()   {
}
