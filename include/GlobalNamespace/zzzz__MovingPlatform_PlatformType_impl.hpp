#pragma once
// IWYU pragma private; include "GlobalNamespace/MovingPlatform_PlatformType.hpp"
#include "GlobalNamespace/zzzz__MovingPlatform_PlatformType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MovingPlatform_PlatformType::MovingPlatform_PlatformType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MovingPlatform_PlatformType::MovingPlatform_PlatformType()   {
}
constexpr ::GlobalNamespace::MovingPlatform_PlatformType  GlobalNamespace::MovingPlatform_PlatformType::PointToPoint{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MovingPlatform_PlatformType  GlobalNamespace::MovingPlatform_PlatformType::Arc{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MovingPlatform_PlatformType  GlobalNamespace::MovingPlatform_PlatformType::Rotation{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MovingPlatform_PlatformType  GlobalNamespace::MovingPlatform_PlatformType::Child{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MovingPlatform_PlatformType  GlobalNamespace::MovingPlatform_PlatformType::ContinuousRotation{static_cast<int32_t>(0x4)};
