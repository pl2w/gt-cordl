#pragma once
// IWYU pragma private; include "GlobalNamespace/LckWallCameraSpawner_WallSpawnerState.hpp"
#include "GlobalNamespace/zzzz__LckWallCameraSpawner_WallSpawnerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState::LckWallCameraSpawner_WallSpawnerState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState::LckWallCameraSpawner_WallSpawnerState()   {
}
constexpr ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  GlobalNamespace::LckWallCameraSpawner_WallSpawnerState::CameraOnHook{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  GlobalNamespace::LckWallCameraSpawner_WallSpawnerState::CameraDragging{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckWallCameraSpawner_WallSpawnerState  GlobalNamespace::LckWallCameraSpawner_WallSpawnerState::CameraOffHook{static_cast<int32_t>(0x2)};
