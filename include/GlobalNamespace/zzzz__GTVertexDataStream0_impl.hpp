#pragma once
// IWYU pragma private; include "GlobalNamespace/GTVertexDataStream0.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__half2_impl.hpp"
#include "Unity/Mathematics/zzzz__half4_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "GlobalNamespace/zzzz__GTVertexDataStream0_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv1", ty: "::Unity::Mathematics::half4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightmapUv", ty: "::Unity::Mathematics::half2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTVertexDataStream0::GTVertexDataStream0(::Unity::Mathematics::float3  position, ::UnityEngine::Color32  color, ::Unity::Mathematics::half4  uv1, ::Unity::Mathematics::half2  lightmapUv) noexcept  {
this->position = position;
this->color = color;
this->uv1 = uv1;
this->lightmapUv = lightmapUv;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTVertexDataStream0::GTVertexDataStream0()   {
}
