#pragma once
// IWYU pragma private; include "Drawing/CommandBuilder_TextData3D.hpp"
#include "Drawing/zzzz__LabelAlignment_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "Drawing/zzzz__CommandBuilder_TextData3D_def.hpp"
// Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "alignment", ty: "::Drawing::LabelAlignment", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numCharacters", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandBuilder_TextData3D::CommandBuilder_TextData3D(::Unity::Mathematics::float3  center, ::Unity::Mathematics::quaternion  rotation, ::Drawing::LabelAlignment  alignment, float_t  size, int32_t  numCharacters) noexcept  {
this->center = center;
this->rotation = rotation;
this->alignment = alignment;
this->size = size;
this->numCharacters = numCharacters;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandBuilder_TextData3D::CommandBuilder_TextData3D()   {
}
