#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_BoxData.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_BoxData_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_BoxData::CommandBuilder_BoxData(::Unity::Mathematics::float3  center, ::Unity::Mathematics::float3  size) noexcept  {
this->center = center;
this->size = size;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_BoxData::CommandBuilder_BoxData()   {
}
