#pragma once
// IWYU pragma private; include "GlobalNamespace/ManagedBy.hpp"
#include "GlobalNamespace/zzzz__ManagedBy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ManagedBy::ManagedBy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManagedBy::ManagedBy()   {
}
constexpr ::GlobalNamespace::ManagedBy  GlobalNamespace::ManagedBy::PLAYER{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ManagedBy  GlobalNamespace::ManagedBy::GUARDIAN{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ManagedBy  GlobalNamespace::ManagedBy::PROHIBITED{static_cast<int32_t>(0x3)};
