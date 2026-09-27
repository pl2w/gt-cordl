#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_CircleData.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_CircleData_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_CircleData::CommandBuilder_CircleData(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  normal, float_t  radius) noexcept  {
this->center = center;
this->normal = normal;
this->radius = radius;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_CircleData::CommandBuilder_CircleData()   {
}
