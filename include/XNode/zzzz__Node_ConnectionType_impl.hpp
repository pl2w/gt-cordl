#pragma once
// IWYU pragma private; include "XNode/Node_ConnectionType.hpp"
#include "XNode/zzzz__Node_ConnectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Node_ConnectionType::Node_ConnectionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Node_ConnectionType::Node_ConnectionType()   {
}
constexpr ::GlobalNamespace::Node_ConnectionType  GlobalNamespace::Node_ConnectionType::Multiple{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Node_ConnectionType  GlobalNamespace::Node_ConnectionType::Override{static_cast<int32_t>(0x1)};
