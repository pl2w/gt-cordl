#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuildSourceShape.hpp"
#include "UnityEngine/AI/zzzz__NavMeshBuildSourceShape_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::NavMeshBuildSourceShape::NavMeshBuildSourceShape(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshBuildSourceShape::NavMeshBuildSourceShape()   {
}
constexpr ::UnityEngine::AI::NavMeshBuildSourceShape  UnityEngine::AI::NavMeshBuildSourceShape::Mesh{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AI::NavMeshBuildSourceShape  UnityEngine::AI::NavMeshBuildSourceShape::Terrain{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AI::NavMeshBuildSourceShape  UnityEngine::AI::NavMeshBuildSourceShape::Box{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::AI::NavMeshBuildSourceShape  UnityEngine::AI::NavMeshBuildSourceShape::Sphere{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::AI::NavMeshBuildSourceShape  UnityEngine::AI::NavMeshBuildSourceShape::Capsule{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::AI::NavMeshBuildSourceShape  UnityEngine::AI::NavMeshBuildSourceShape::ModifierBox{static_cast<int32_t>(0x5)};
