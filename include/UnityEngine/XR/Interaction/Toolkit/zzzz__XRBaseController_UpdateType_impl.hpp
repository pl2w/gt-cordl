#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRBaseController_UpdateType.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_UpdateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRBaseController_UpdateType::XRBaseController_UpdateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRBaseController_UpdateType::XRBaseController_UpdateType()   {
}
constexpr ::GlobalNamespace::XRBaseController_UpdateType  GlobalNamespace::XRBaseController_UpdateType::UpdateAndBeforeRender{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XRBaseController_UpdateType  GlobalNamespace::XRBaseController_UpdateType::Update{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XRBaseController_UpdateType  GlobalNamespace::XRBaseController_UpdateType::BeforeRender{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XRBaseController_UpdateType  GlobalNamespace::XRBaseController_UpdateType::Fixed{static_cast<int32_t>(0x3)};
