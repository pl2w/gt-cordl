#pragma once
// IWYU pragma private; include "System/Xml/XmlCanonicalWriter_XmlnsAttribute.hpp"
#include "System/Xml/zzzz__XmlCanonicalWriter_XmlnsAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "prefixOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefixLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nsOffset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nsLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "referred", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute::XmlCanonicalWriter_XmlnsAttribute(int32_t  prefixOffset, int32_t  prefixLength, int32_t  nsOffset, int32_t  nsLength, bool  referred) noexcept  {
this->prefixOffset = prefixOffset;
this->prefixLength = prefixLength;
this->nsOffset = nsOffset;
this->nsLength = nsLength;
this->referred = referred;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlCanonicalWriter_XmlnsAttribute::XmlCanonicalWriter_XmlnsAttribute()   {
}
