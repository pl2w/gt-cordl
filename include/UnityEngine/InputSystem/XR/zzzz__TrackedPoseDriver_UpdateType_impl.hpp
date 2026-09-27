#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/TrackedPoseDriver_UpdateType.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_UpdateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TrackedPoseDriver_UpdateType::TrackedPoseDriver_UpdateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackedPoseDriver_UpdateType::TrackedPoseDriver_UpdateType()   {
}
constexpr ::GlobalNamespace::TrackedPoseDriver_UpdateType  GlobalNamespace::TrackedPoseDriver_UpdateType::UpdateAndBeforeRender{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TrackedPoseDriver_UpdateType  GlobalNamespace::TrackedPoseDriver_UpdateType::Update{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TrackedPoseDriver_UpdateType  GlobalNamespace::TrackedPoseDriver_UpdateType::BeforeRender{static_cast<int32_t>(0x2)};
