#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_PlaneData.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_PlaneData_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_PlaneData::CommandBuilder_PlaneData(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Unity::Mathematics::float2  size) noexcept  {
this->center = center;
this->rotation = rotation;
this->size = size;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_PlaneData::CommandBuilder_PlaneData()   {
}
