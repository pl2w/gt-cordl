#pragma once
// IWYU pragma private; include "XNode/Node_ShowBackingValue.hpp"
#include "XNode/zzzz__Node_ShowBackingValue_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Node_ShowBackingValue::Node_ShowBackingValue(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Node_ShowBackingValue::Node_ShowBackingValue()   {
}
constexpr ::GlobalNamespace::Node_ShowBackingValue  GlobalNamespace::Node_ShowBackingValue::Never{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Node_ShowBackingValue  GlobalNamespace::Node_ShowBackingValue::Unconnected{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Node_ShowBackingValue  GlobalNamespace::Node_ShowBackingValue::Always{static_cast<int32_t>(0x2)};
