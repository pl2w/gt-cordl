#pragma once
// IWYU pragma private; include "GlobalNamespace/SplineWalkerMode.hpp"
#include "GlobalNamespace/zzzz__SplineWalkerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SplineWalkerMode::SplineWalkerMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineWalkerMode::SplineWalkerMode()   {
}
constexpr ::GlobalNamespace::SplineWalkerMode  GlobalNamespace::SplineWalkerMode::Once{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SplineWalkerMode  GlobalNamespace::SplineWalkerMode::Loop{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SplineWalkerMode  GlobalNamespace::SplineWalkerMode::PingPong{static_cast<int32_t>(0x2)};
