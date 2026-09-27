#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/DestructibleMeshComponent_MeshSegment.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__DestructibleMeshComponent_MeshSegment_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "positions", ty: "::ArrayW<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "indices", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv", ty: "::ArrayW<::UnityEngine::Vector2>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tangents", ty: "::ArrayW<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colors", ty: "::ArrayW<::UnityEngine::Color>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DestructibleMeshComponent_MeshSegment::DestructibleMeshComponent_MeshSegment(::ArrayW<::UnityEngine::Vector3>  positions, ::ArrayW<int32_t>  indices, ::ArrayW<::UnityEngine::Vector2>  uv, ::ArrayW<::UnityEngine::Vector4>  tangents, ::ArrayW<::UnityEngine::Color>  colors) noexcept  {
this->positions = positions;
this->indices = indices;
this->uv = uv;
this->tangents = tangents;
this->colors = colors;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DestructibleMeshComponent_MeshSegment::DestructibleMeshComponent_MeshSegment()   {
}
