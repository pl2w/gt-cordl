#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/HandMenu_UpDirection.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/BodyUI/zzzz__HandMenu_UpDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandMenu_UpDirection::HandMenu_UpDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandMenu_UpDirection::HandMenu_UpDirection()   {
}
constexpr ::GlobalNamespace::HandMenu_UpDirection  GlobalNamespace::HandMenu_UpDirection::WorldUp{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HandMenu_UpDirection  GlobalNamespace::HandMenu_UpDirection::TransformUp{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HandMenu_UpDirection  GlobalNamespace::HandMenu_UpDirection::CameraUp{static_cast<int32_t>(0x2)};
