#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipErrorAction.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipErrorAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction::ZipErrorAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction::ZipErrorAction()   {
}
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction  Pathfinding::Ionic::Zip::ZipErrorAction::Throw{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction  Pathfinding::Ionic::Zip::ZipErrorAction::Skip{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction  Pathfinding::Ionic::Zip::ZipErrorAction::Retry{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::Ionic::Zip::ZipErrorAction  Pathfinding::Ionic::Zip::ZipErrorAction::InvokeErrorEvent{static_cast<int32_t>(0x3)};
