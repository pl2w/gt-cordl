#pragma once
// IWYU pragma private; include "Drawing/DrawingData_MeshWithType.hpp"
#include "Drawing/zzzz__DrawingData_MeshType_impl.hpp"
#include "Drawing/zzzz__DrawingData_MeshWithType_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::DrawingData_MeshType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_MeshWithType::DrawingData_MeshWithType(::UnityW<::UnityEngine::Mesh>  mesh, ::GlobalNamespace::DrawingData_MeshType  type) noexcept  {
this->mesh = mesh;
this->type = type;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_MeshWithType::DrawingData_MeshWithType()   {
}
