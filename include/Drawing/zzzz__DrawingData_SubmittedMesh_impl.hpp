#pragma once
// IWYU pragma private; include "Drawing/DrawingData_SubmittedMesh.hpp"
#include "Drawing/zzzz__DrawingData_SubmittedMesh_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "temporary", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_SubmittedMesh::DrawingData_SubmittedMesh(::UnityW<::UnityEngine::Mesh>  mesh, bool  temporary) noexcept  {
this->mesh = mesh;
this->temporary = temporary;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_SubmittedMesh::DrawingData_SubmittedMesh()   {
}
