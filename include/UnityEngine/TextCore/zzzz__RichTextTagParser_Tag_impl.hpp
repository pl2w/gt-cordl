#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser_Tag.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_TagType_impl.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_Tag_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_def.hpp"
// Ctor Parameters [CppParam { name: "tagType", ty: "::GlobalNamespace::RichTextTagParser_TagType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isClosing", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "::UnityEngine::TextCore::RichTextTagParser_TagValue*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RichTextTagParser_Tag::RichTextTagParser_Tag(::GlobalNamespace::RichTextTagParser_TagType  tagType, bool  isClosing, int32_t  start, int32_t  end, ::UnityEngine::TextCore::RichTextTagParser_TagValue*  value) noexcept  {
this->tagType = tagType;
this->isClosing = isClosing;
this->start = start;
this->end = end;
this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RichTextTagParser_Tag::RichTextTagParser_Tag()   {
}
