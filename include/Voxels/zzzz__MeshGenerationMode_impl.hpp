#pragma once
// IWYU pragma private; include "Voxels/MeshGenerationMode.hpp"
#include "Voxels/zzzz__MeshGenerationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::MeshGenerationMode::MeshGenerationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Voxels::MeshGenerationMode::MeshGenerationMode()   {
}
constexpr ::Voxels::MeshGenerationMode  Voxels::MeshGenerationMode::MarchingCubes{static_cast<int32_t>(0x0)};
constexpr ::Voxels::MeshGenerationMode  Voxels::MeshGenerationMode::SurfaceNets{static_cast<int32_t>(0x1)};
