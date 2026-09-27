#pragma once
// IWYU pragma private; include "Drawing/GeometryBuilderJob_Vertex.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "Drawing/zzzz__GeometryBuilderJob_Vertex_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv2", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GeometryBuilderJob_Vertex::GeometryBuilderJob_Vertex(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  uv2, ::UnityEngine::Color32  color, ::Unity::Mathematics::float2  uv) noexcept  {
this->position = position;
this->uv2 = uv2;
this->color = color;
this->uv = uv;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GeometryBuilderJob_Vertex::GeometryBuilderJob_Vertex()   {
}
