#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabTarget_GrabAnchor.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabTarget_GrabAnchor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandGrabTarget_GrabAnchor::HandGrabTarget_GrabAnchor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandGrabTarget_GrabAnchor::HandGrabTarget_GrabAnchor()   {
}
constexpr ::GlobalNamespace::HandGrabTarget_GrabAnchor  GlobalNamespace::HandGrabTarget_GrabAnchor::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HandGrabTarget_GrabAnchor  GlobalNamespace::HandGrabTarget_GrabAnchor::Wrist{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HandGrabTarget_GrabAnchor  GlobalNamespace::HandGrabTarget_GrabAnchor::Pinch{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HandGrabTarget_GrabAnchor  GlobalNamespace::HandGrabTarget_GrabAnchor::Palm{static_cast<int32_t>(0x3)};
