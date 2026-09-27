#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryProcessor_MaskMesh.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryProcessor_MaskMesh_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indices", ty: "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EntryProcessor_MaskMesh::EntryProcessor_MaskMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  vertices, ::Unity::Collections::NativeSlice_1<uint16_t>  indices, int32_t  indexOffset) noexcept  {
this->vertices = vertices;
this->indices = indices;
this->indexOffset = indexOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EntryProcessor_MaskMesh::EntryProcessor_MaskMesh()   {
}
