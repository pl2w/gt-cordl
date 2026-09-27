#pragma once
// IWYU pragma private; include "Voxels/VoxelGenerator_MeshingParameters.hpp"
#include "Voxels/zzzz__MeshGenerationMode_impl.hpp"
#include "Voxels/zzzz__VoxelGenerator_MeshingParameters_def.hpp"
// Ctor Parameters [CppParam { name: "MeshGenerationMode", ty: "::Voxels::MeshGenerationMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NormalThreshold", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AreaWeightedNormals", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoxelGenerator_MeshingParameters::VoxelGenerator_MeshingParameters(::Voxels::MeshGenerationMode  MeshGenerationMode, float_t  NormalThreshold, bool  AreaWeightedNormals) noexcept  {
this->MeshGenerationMode = MeshGenerationMode;
this->NormalThreshold = NormalThreshold;
this->AreaWeightedNormals = AreaWeightedNormals;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoxelGenerator_MeshingParameters::VoxelGenerator_MeshingParameters()   {
}
