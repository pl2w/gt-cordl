#pragma once
// IWYU pragma private; include "TMPro/TMP_Text_TextProcessingElement.hpp"
#include "TMPro/zzzz__TextProcessingElementType_impl.hpp"
#include "TMPro/zzzz__TMP_Text_TextProcessingElement_def.hpp"
// Ctor Parameters [CppParam { name: "elementType", ty: "::TMPro::TextProcessingElementType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stringIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TMP_Text_TextProcessingElement::TMP_Text_TextProcessingElement(::TMPro::TextProcessingElementType  elementType, uint32_t  unicode, int32_t  stringIndex, int32_t  length) noexcept  {
this->elementType = elementType;
this->unicode = unicode;
this->stringIndex = stringIndex;
this->length = length;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TMP_Text_TextProcessingElement::TMP_Text_TextProcessingElement()   {
}
