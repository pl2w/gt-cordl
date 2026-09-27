#pragma once
// IWYU pragma private; include "GlobalNamespace/Voxel_Pickaxe_InteractionPoint.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Voxel_Pickaxe_InteractionPoint_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "previousPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Voxel_Pickaxe_InteractionPoint::Voxel_Pickaxe_InteractionPoint(::UnityW<::UnityEngine::Transform>  transform, ::UnityEngine::Vector3  previousPosition, ::UnityEngine::Vector3  position) noexcept  {
this->transform = transform;
this->previousPosition = previousPosition;
this->position = position;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Voxel_Pickaxe_InteractionPoint::Voxel_Pickaxe_InteractionPoint()   {
}
