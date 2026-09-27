#pragma once
// IWYU pragma private; include "Voxels/ChunkState.hpp"
#include "Voxels/zzzz__ChunkState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::ChunkState::ChunkState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Voxels::ChunkState::ChunkState()   {
}
constexpr ::Voxels::ChunkState  Voxels::ChunkState::UNINITIALIZED{static_cast<int32_t>(0x0)};
constexpr ::Voxels::ChunkState  Voxels::ChunkState::Created{static_cast<int32_t>(0x1)};
constexpr ::Voxels::ChunkState  Voxels::ChunkState::VoxelDataGenerated{static_cast<int32_t>(0x2)};
constexpr ::Voxels::ChunkState  Voxels::ChunkState::MeshDataGenerated{static_cast<int32_t>(0x3)};
constexpr ::Voxels::ChunkState  Voxels::ChunkState::MeshCreated{static_cast<int32_t>(0x4)};
constexpr ::Voxels::ChunkState  Voxels::ChunkState::CollisionBaked{static_cast<int32_t>(0x5)};
constexpr ::Voxels::ChunkState  Voxels::ChunkState::MeshAssigned{static_cast<int32_t>(0x6)};
