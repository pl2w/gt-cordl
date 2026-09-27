#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter_Attribute.hpp"
#include "System/Xml/zzzz__XmlCanonicalWriter_Attribute_def.hpp"
// Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localNameOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localNameLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nsOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nsLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlCanonicalWriter_Attribute::XmlCanonicalWriter_Attribute(int32_t  prefixOffset, int32_t  prefixLength, int32_t  localNameOffset, int32_t  localNameLength, int32_t  nsOffset, int32_t  nsLength, int32_t  offset, int32_t  length) noexcept  {
this->prefixOffset = prefixOffset;
this->prefixLength = prefixLength;
this->localNameOffset = localNameOffset;
this->localNameLength = localNameLength;
this->nsOffset = nsOffset;
this->nsLength = nsLength;
this->offset = offset;
this->length = length;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlCanonicalWriter_Attribute::XmlCanonicalWriter_Attribute()   {
}
