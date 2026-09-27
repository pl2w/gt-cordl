#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_TriangleMeshInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TriangleMeshInternal_def.hpp"
// Ctor Parameters [CppParam { name: "vertexCapacityInput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertexCountOutput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vertices", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indexCapacityInput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indexCountOutput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indices", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_TriangleMeshInternal::OVRPlugin_TriangleMeshInternal(int32_t  vertexCapacityInput, int32_t  vertexCountOutput, ::System::IntPtr  vertices, int32_t  indexCapacityInput, int32_t  indexCountOutput, ::System::IntPtr  indices) noexcept  {
this->vertexCapacityInput = vertexCapacityInput;
this->vertexCountOutput = vertexCountOutput;
this->vertices = vertices;
this->indexCapacityInput = indexCapacityInput;
this->indexCountOutput = indexCountOutput;
this->indices = indices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_TriangleMeshInternal::OVRPlugin_TriangleMeshInternal()   {
}
