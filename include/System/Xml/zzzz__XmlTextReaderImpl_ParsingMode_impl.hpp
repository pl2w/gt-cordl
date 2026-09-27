#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_ParsingMode.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_ParsingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlTextReaderImpl_ParsingMode::XmlTextReaderImpl_ParsingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlTextReaderImpl_ParsingMode::XmlTextReaderImpl_ParsingMode()   {
}
constexpr ::GlobalNamespace::XmlTextReaderImpl_ParsingMode  GlobalNamespace::XmlTextReaderImpl_ParsingMode::Full{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_ParsingMode  GlobalNamespace::XmlTextReaderImpl_ParsingMode::SkipNode{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_ParsingMode  GlobalNamespace::XmlTextReaderImpl_ParsingMode::SkipContent{static_cast<int32_t>(0x2)};
