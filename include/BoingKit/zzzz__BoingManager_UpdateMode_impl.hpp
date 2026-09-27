#pragma once
// IWYU pragma private; include "BoingKit/BoingManager_UpdateMode.hpp"
#include "BoingKit/zzzz__BoingManager_UpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingManager_UpdateMode::BoingManager_UpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingManager_UpdateMode::BoingManager_UpdateMode()   {
}
constexpr ::GlobalNamespace::BoingManager_UpdateMode  GlobalNamespace::BoingManager_UpdateMode::FixedUpdate{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BoingManager_UpdateMode  GlobalNamespace::BoingManager_UpdateMode::EarlyUpdate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BoingManager_UpdateMode  GlobalNamespace::BoingManager_UpdateMode::LateUpdate{static_cast<int32_t>(0x2)};
