#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter_Element.hpp"
#include "System/Xml/zzzz__XmlCanonicalWriter_Element_def.hpp"
// Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localNameOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localNameLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlCanonicalWriter_Element::XmlCanonicalWriter_Element(int32_t  prefixOffset, int32_t  prefixLength, int32_t  localNameOffset, int32_t  localNameLength) noexcept  {
this->prefixOffset = prefixOffset;
this->prefixLength = prefixLength;
this->localNameOffset = localNameOffset;
this->localNameLength = localNameLength;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlCanonicalWriter_Element::XmlCanonicalWriter_Element()   {
}
