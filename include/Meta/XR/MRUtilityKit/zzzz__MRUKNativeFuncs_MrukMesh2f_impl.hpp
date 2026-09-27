#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukMesh2f.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukMesh2f_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::UnityEngine::Vector2*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numVertices", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indices", ty: "uint32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numIndices", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f::MRUKNativeFuncs_MrukMesh2f(::UnityEngine::Vector2*  vertices, uint32_t  numVertices, uint32_t*  indices, uint32_t  numIndices) noexcept  {
this->vertices = vertices;
this->numVertices = numVertices;
this->indices = indices;
this->numIndices = numIndices;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukMesh2f::MRUKNativeFuncs_MrukMesh2f()   {
}
