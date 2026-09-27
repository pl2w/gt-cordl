#pragma once
// IWYU pragma private; include "Pathfinding/LayerGridGraph_HeightSample.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_HeightSample_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hit", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "walkable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LayerGridGraph_HeightSample::LayerGridGraph_HeightSample(::UnityEngine::Vector3  position, ::UnityEngine::RaycastHit  hit, float_t  height, bool  walkable) noexcept  {
this->position = position;
this->hit = hit;
this->height = height;
this->walkable = walkable;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LayerGridGraph_HeightSample::LayerGridGraph_HeightSample()   {
}
