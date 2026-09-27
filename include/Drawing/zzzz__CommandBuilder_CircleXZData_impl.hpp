#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_CircleXZData.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_CircleXZData_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_CircleXZData::CommandBuilder_CircleXZData(::Unity::Mathematics::float3  center, float_t  radius, float_t  startAngle, float_t  endAngle) noexcept  {
this->center = center;
this->radius = radius;
this->startAngle = startAngle;
this->endAngle = endAngle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_CircleXZData::CommandBuilder_CircleXZData()   {
}
