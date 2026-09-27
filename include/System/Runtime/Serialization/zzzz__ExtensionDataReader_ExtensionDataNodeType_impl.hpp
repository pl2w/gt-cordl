#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ExtensionDataReader_ExtensionDataNodeType.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataReader_ExtensionDataNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType::ExtensionDataReader_ExtensionDataNodeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType::ExtensionDataReader_ExtensionDataNodeType()   {
}
constexpr ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType  GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType  GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType::Element{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType  GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType::EndElement{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType  GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType::Text{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType  GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType::Xml{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType  GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType::ReferencedElement{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType  GlobalNamespace::ExtensionDataReader_ExtensionDataNodeType::NullElement{static_cast<int32_t>(0x6)};
