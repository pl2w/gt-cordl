#pragma once
// IWYU pragma private; include "Voxels/VoxelManager_RPC.hpp"
#include "Voxels/zzzz__VoxelManager_RPC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoxelManager_RPC::VoxelManager_RPC(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelManager_RPC::VoxelManager_RPC()   {
}
constexpr ::GlobalNamespace::VoxelManager_RPC  GlobalNamespace::VoxelManager_RPC::WorldRequest{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VoxelManager_RPC  GlobalNamespace::VoxelManager_RPC::OperationRequest{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VoxelManager_RPC  GlobalNamespace::VoxelManager_RPC::MineRequest{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::VoxelManager_RPC  GlobalNamespace::VoxelManager_RPC::StartChunk{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::VoxelManager_RPC  GlobalNamespace::VoxelManager_RPC::StartEmptyChunk{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::VoxelManager_RPC  GlobalNamespace::VoxelManager_RPC::ContinueChunk{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::VoxelManager_RPC  GlobalNamespace::VoxelManager_RPC::SetDensity{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::VoxelManager_RPC  GlobalNamespace::VoxelManager_RPC::MineCommand{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::VoxelManager_RPC  GlobalNamespace::VoxelManager_RPC::Count{static_cast<int32_t>(0x8)};
