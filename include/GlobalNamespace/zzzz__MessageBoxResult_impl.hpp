#pragma once
// IWYU pragma private; include "GlobalNamespace/MessageBoxResult.hpp"
#include "GlobalNamespace/zzzz__MessageBoxResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MessageBoxResult::MessageBoxResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MessageBoxResult::MessageBoxResult()   {
}
constexpr ::GlobalNamespace::MessageBoxResult  GlobalNamespace::MessageBoxResult::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MessageBoxResult  GlobalNamespace::MessageBoxResult::Left{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MessageBoxResult  GlobalNamespace::MessageBoxResult::Right{static_cast<int32_t>(0x2)};
