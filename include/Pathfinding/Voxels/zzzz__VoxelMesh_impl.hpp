#pragma once
// IWYU pragma private; include "Pathfinding/Voxels/VoxelMesh.hpp"
#include "Pathfinding/zzzz__Int3_impl.hpp"
#include "Pathfinding/Voxels/zzzz__VoxelMesh_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
// Ctor Parameters [CppParam { name: "verts", ty: "::ArrayW<::Pathfinding::Int3>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tris", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "areas", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Voxels::VoxelMesh::VoxelMesh(::ArrayW<::Pathfinding::Int3>  verts, ::ArrayW<int32_t>  tris, ::ArrayW<int32_t>  areas) noexcept  {
this->verts = verts;
this->tris = tris;
this->areas = areas;
}
// Ctor Parameters []
constexpr ::Pathfinding::Voxels::VoxelMesh::VoxelMesh()   {
}
