#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_SphereData.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_SphereData_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_SphereData::CommandBuilder_SphereData(::Unity::Mathematics::float3  center, float_t  radius) noexcept  {
this->center = center;
this->radius = radius;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_SphereData::CommandBuilder_SphereData()   {
}
