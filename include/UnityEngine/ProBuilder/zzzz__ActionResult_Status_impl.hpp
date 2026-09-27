#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ActionResult_Status.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ActionResult_Status::ActionResult_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActionResult_Status::ActionResult_Status()   {
}
constexpr ::GlobalNamespace::ActionResult_Status  GlobalNamespace::ActionResult_Status::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ActionResult_Status  GlobalNamespace::ActionResult_Status::Failure{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ActionResult_Status  GlobalNamespace::ActionResult_Status::Canceled{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ActionResult_Status  GlobalNamespace::ActionResult_Status::NoChange{static_cast<int32_t>(0x3)};
