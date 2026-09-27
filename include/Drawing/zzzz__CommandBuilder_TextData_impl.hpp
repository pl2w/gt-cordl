#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_TextData.hpp"
#include "Drawing/zzzz__LabelAlignment_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_TextData_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "alignment", ty: "::Drawing::LabelAlignment", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sizeInPixels", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numCharacters", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_TextData::CommandBuilder_TextData(::Unity::Mathematics::float3  center, ::Drawing::LabelAlignment  alignment, float_t  sizeInPixels, int32_t  numCharacters) noexcept  {
this->center = center;
this->alignment = alignment;
this->sizeInPixels = sizeInPixels;
this->numCharacters = numCharacters;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_TextData::CommandBuilder_TextData()   {
}
