#pragma once
// IWYU pragma private; include "Fusion/GameMode.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::GameMode::GameMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::GameMode::GameMode()   {
}
constexpr ::Fusion::GameMode  Fusion::GameMode::Single{static_cast<int32_t>(0x1)};
constexpr ::Fusion::GameMode  Fusion::GameMode::Shared{static_cast<int32_t>(0x2)};
constexpr ::Fusion::GameMode  Fusion::GameMode::Server{static_cast<int32_t>(0x3)};
constexpr ::Fusion::GameMode  Fusion::GameMode::Host{static_cast<int32_t>(0x4)};
constexpr ::Fusion::GameMode  Fusion::GameMode::Client{static_cast<int32_t>(0x5)};
constexpr ::Fusion::GameMode  Fusion::GameMode::AutoHostOrClient{static_cast<int32_t>(0x6)};
