#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InputHelpers_ButtonReadType.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_ButtonReadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputHelpers_ButtonReadType::InputHelpers_ButtonReadType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputHelpers_ButtonReadType::InputHelpers_ButtonReadType()   {
}
constexpr ::GlobalNamespace::InputHelpers_ButtonReadType  GlobalNamespace::InputHelpers_ButtonReadType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputHelpers_ButtonReadType  GlobalNamespace::InputHelpers_ButtonReadType::Binary{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputHelpers_ButtonReadType  GlobalNamespace::InputHelpers_ButtonReadType::Axis1D{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputHelpers_ButtonReadType  GlobalNamespace::InputHelpers_ButtonReadType::Axis2DUp{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::InputHelpers_ButtonReadType  GlobalNamespace::InputHelpers_ButtonReadType::Axis2DDown{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputHelpers_ButtonReadType  GlobalNamespace::InputHelpers_ButtonReadType::Axis2DLeft{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::InputHelpers_ButtonReadType  GlobalNamespace::InputHelpers_ButtonReadType::Axis2DRight{static_cast<int32_t>(0x6)};
