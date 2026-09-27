#pragma once
// IWYU pragma private; include "Voxels/PerlinVoxelGenerator_NoiseParameters.hpp"
#include "Voxels/zzzz__PerlinVoxelGenerator_NoiseParameters_def.hpp"
// Ctor Parameters [CppParam { name: "NoiseScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GroundLevel", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HeightScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HeightCompensation", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Octaves", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Persistence", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters::PerlinVoxelGenerator_NoiseParameters(float_t  NoiseScale, float_t  GroundLevel, float_t  HeightScale, float_t  HeightCompensation, int32_t  Octaves, float_t  Persistence) noexcept  {
this->NoiseScale = NoiseScale;
this->GroundLevel = GroundLevel;
this->HeightScale = HeightScale;
this->HeightCompensation = HeightCompensation;
this->Octaves = Octaves;
this->Persistence = Persistence;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerlinVoxelGenerator_NoiseParameters::PerlinVoxelGenerator_NoiseParameters()   {
}
