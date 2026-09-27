#pragma once
// IWYU pragma private; include "GlobalNamespace/GTVertexDataStream1.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "GlobalNamespace/zzzz__GTVertexDataStream1_def.hpp"
// Ctor Parameters [CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tangent", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTVertexDataStream1::GTVertexDataStream1(::Unity::Mathematics::float3  normal, ::UnityEngine::Color32  tangent) noexcept  {
this->normal = normal;
this->tangent = tangent;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTVertexDataStream1::GTVertexDataStream1()   {
}
