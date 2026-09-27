#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshTriangulation.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshTriangulation_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "vertices", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indices", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "areas", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::NavMeshTriangulation::NavMeshTriangulation(::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  indices, ::ArrayW<int32_t>  areas) noexcept  {
this->vertices = vertices;
this->indices = indices;
this->areas = areas;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshTriangulation::NavMeshTriangulation()   {
}
