#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelContour.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelContour_def.hpp"
// Ctor Parameters [CppParam { name: "nverts", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "verts", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rverts", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reg", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "area", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Voxels::VoxelContour::VoxelContour(int32_t  nverts, ::ArrayW<int32_t>  verts, ::ArrayW<int32_t>  rverts, int32_t  reg, int32_t  area) noexcept  {
this->nverts = nverts;
this->verts = verts;
this->rverts = rverts;
this->reg = reg;
this->area = area;
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::VoxelContour::VoxelContour()   {
}
