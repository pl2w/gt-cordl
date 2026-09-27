#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser_Segment.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_Segment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_Tag_def.hpp"
// Ctor Parameters [CppParam { name: "tags", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RichTextTagParser_Segment::RichTextTagParser_Segment(::System::Collections::Generic::List_1<::GlobalNamespace::RichTextTagParser_Tag>*  tags, int32_t  start, int32_t  end) noexcept  {
this->tags = tags;
this->start = start;
this->end = end;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RichTextTagParser_Segment::RichTextTagParser_Segment()   {
}
