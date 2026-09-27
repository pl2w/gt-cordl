#pragma once
// IWYU pragma private; include "Voxels/VoxelManager_VoxelOperationResult.hpp"
#include "UnityEngine/zzzz__BoundsInt_impl.hpp"
#include "Voxels/zzzz__VoxelManager_VoxelOperationResult_def.hpp"
// Ctor Parameters [CppParam { name: "worldId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bounds", ty: "::UnityEngine::BoundsInt", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoxelManager_VoxelOperationResult::VoxelManager_VoxelOperationResult(int32_t  worldId, ::UnityEngine::BoundsInt  bounds, ::ArrayW<uint8_t>  data) noexcept  {
this->worldId = worldId;
this->bounds = bounds;
this->data = data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelManager_VoxelOperationResult::VoxelManager_VoxelOperationResult()   {
}
