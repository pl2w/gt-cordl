#pragma once
// IWYU pragma private; include "GlobalNamespace/OperationType.hpp"
#include "GlobalNamespace/zzzz__OperationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OperationType::OperationType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OperationType::OperationType()   {
}
constexpr ::GlobalNamespace::OperationType  GlobalNamespace::OperationType::Subtract{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::OperationType  GlobalNamespace::OperationType::Add{static_cast<uint8_t>(0x1u)};
