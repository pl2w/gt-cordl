#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser_TagValueType.hpp"
#include "UnityEngine/TextCore/zzzz__RichTextTagParser_TagValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RichTextTagParser_TagValueType::RichTextTagParser_TagValueType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RichTextTagParser_TagValueType::RichTextTagParser_TagValueType()   {
}
constexpr ::GlobalNamespace::RichTextTagParser_TagValueType  GlobalNamespace::RichTextTagParser_TagValueType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RichTextTagParser_TagValueType  GlobalNamespace::RichTextTagParser_TagValueType::NumericalValue{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RichTextTagParser_TagValueType  GlobalNamespace::RichTextTagParser_TagValueType::StringValue{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RichTextTagParser_TagValueType  GlobalNamespace::RichTextTagParser_TagValueType::ColorValue{static_cast<int32_t>(0x4)};
