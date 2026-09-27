#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaInference_InferenceOption.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInference_InferenceOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlSchemaInference_InferenceOption::XmlSchemaInference_InferenceOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlSchemaInference_InferenceOption::XmlSchemaInference_InferenceOption()   {
}
constexpr ::GlobalNamespace::XmlSchemaInference_InferenceOption  GlobalNamespace::XmlSchemaInference_InferenceOption::Restricted{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlSchemaInference_InferenceOption  GlobalNamespace::XmlSchemaInference_InferenceOption::Relaxed{static_cast<int32_t>(0x1)};
