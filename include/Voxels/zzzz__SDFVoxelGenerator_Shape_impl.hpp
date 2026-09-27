#pragma once
// IWYU pragma private; include "Voxels/SDFVoxelGenerator_Shape.hpp"
#include "Voxels/zzzz__SDFVoxelGenerator_Shape_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SDFVoxelGenerator_Shape::SDFVoxelGenerator_Shape(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SDFVoxelGenerator_Shape::SDFVoxelGenerator_Shape()   {
}
constexpr ::GlobalNamespace::SDFVoxelGenerator_Shape  GlobalNamespace::SDFVoxelGenerator_Shape::Sphere{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SDFVoxelGenerator_Shape  GlobalNamespace::SDFVoxelGenerator_Shape::Cube{static_cast<int32_t>(0x1)};
