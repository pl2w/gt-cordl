#pragma once
// IWYU pragma private; include "Voxels/VoxelWorld_WorldType.hpp"
#include "Voxels/zzzz__VoxelWorld_WorldType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoxelWorld_WorldType::VoxelWorld_WorldType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelWorld_WorldType::VoxelWorld_WorldType()   {
}
constexpr ::GlobalNamespace::VoxelWorld_WorldType  GlobalNamespace::VoxelWorld_WorldType::Infinite{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VoxelWorld_WorldType  GlobalNamespace::VoxelWorld_WorldType::Bounded{static_cast<int32_t>(0x1)};
