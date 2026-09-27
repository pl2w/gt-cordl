#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleMode.hpp"
#include "GlobalNamespace/zzzz__ConsoleMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConsoleMode::ConsoleMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsoleMode::ConsoleMode()   {
}
constexpr ::GlobalNamespace::ConsoleMode  GlobalNamespace::ConsoleMode::Console{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ConsoleMode  GlobalNamespace::ConsoleMode::Inspector{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ConsoleMode  GlobalNamespace::ConsoleMode::ComponentInspector{static_cast<int32_t>(0x2)};
