#pragma once
// IWYU pragma private; include "Oculus/Interaction/TubeRenderer_VertexLayout.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__TubeRenderer_VertexLayout_def.hpp"
// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uv", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TubeRenderer_VertexLayout::TubeRenderer_VertexLayout(::UnityEngine::Vector3  pos, ::UnityEngine::Color32  color, ::UnityEngine::Vector2  uv) noexcept  {
this->pos = pos;
this->color = color;
this->uv = uv;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeRenderer_VertexLayout::TubeRenderer_VertexLayout()   {
}
