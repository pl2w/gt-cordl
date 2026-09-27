#pragma once
// IWYU pragma private; include "GlobalNamespace/KinematicTestMotion_UpdateType.hpp"
#include "GlobalNamespace/zzzz__KinematicTestMotion_UpdateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KinematicTestMotion_UpdateType::KinematicTestMotion_UpdateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KinematicTestMotion_UpdateType::KinematicTestMotion_UpdateType()   {
}
constexpr ::GlobalNamespace::KinematicTestMotion_UpdateType  GlobalNamespace::KinematicTestMotion_UpdateType::Update{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::KinematicTestMotion_UpdateType  GlobalNamespace::KinematicTestMotion_UpdateType::LateUpdate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::KinematicTestMotion_UpdateType  GlobalNamespace::KinematicTestMotion_UpdateType::FixedUpdate{static_cast<int32_t>(0x2)};
