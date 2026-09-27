#pragma once
// IWYU pragma private; include "Drawing/Text/SDFFont.hpp"
#include "Drawing/Text/zzzz__SDFCharacter_impl.hpp"
#include "Drawing/Text/zzzz__SDFFont_def.hpp"
#include "Drawing/Text/zzzz__SDFCharacter_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bold", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "italic", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "characters", ty: "::ArrayW<::Drawing::Text::SDFCharacter>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Drawing::Text::SDFFont::SDFFont(::StringW  name, int32_t  size, int32_t  width, int32_t  height, bool  bold, bool  italic, ::ArrayW<::Drawing::Text::SDFCharacter>  characters, ::UnityW<::UnityEngine::Material>  material) noexcept  {
this->name = name;
this->size = size;
this->width = width;
this->height = height;
this->bold = bold;
this->italic = italic;
this->characters = characters;
this->material = material;
}
// Ctor Parameters []
constexpr ::Drawing::Text::SDFFont::SDFFont()   {
}
