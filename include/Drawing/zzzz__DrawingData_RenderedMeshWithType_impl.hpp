#pragma once
// IWYU pragma private; include "Drawing/DrawingData_RenderedMeshWithType.hpp"
#include "Drawing/zzzz__DrawingData_MeshType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "Drawing/zzzz__DrawingData_RenderedMeshWithType_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::DrawingData_MeshType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "drawingOrderIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DrawingData_RenderedMeshWithType::DrawingData_RenderedMeshWithType(::UnityW<::UnityEngine::Mesh>  mesh, ::GlobalNamespace::DrawingData_MeshType  type, int32_t  drawingOrderIndex, ::UnityEngine::Color  color, ::UnityEngine::Matrix4x4  matrix) noexcept  {
this->mesh = mesh;
this->type = type;
this->drawingOrderIndex = drawingOrderIndex;
this->color = color;
this->matrix = matrix;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DrawingData_RenderedMeshWithType::DrawingData_RenderedMeshWithType()   {
}
