#pragma once
// IWYU pragma private; include "System/Xml/XmlTextReaderImpl_EntityType.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_EntityType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType::XmlTextReaderImpl_EntityType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType::XmlTextReaderImpl_EntityType()   {
}
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType  GlobalNamespace::XmlTextReaderImpl_EntityType::CharacterDec{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType  GlobalNamespace::XmlTextReaderImpl_EntityType::CharacterHex{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType  GlobalNamespace::XmlTextReaderImpl_EntityType::CharacterNamed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType  GlobalNamespace::XmlTextReaderImpl_EntityType::Expanded{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType  GlobalNamespace::XmlTextReaderImpl_EntityType::Skipped{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType  GlobalNamespace::XmlTextReaderImpl_EntityType::FakeExpanded{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType  GlobalNamespace::XmlTextReaderImpl_EntityType::Unexpanded{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::XmlTextReaderImpl_EntityType  GlobalNamespace::XmlTextReaderImpl_EntityType::ExpandedInAttribute{static_cast<int32_t>(0x7)};
