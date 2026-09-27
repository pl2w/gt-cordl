#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ExtractExistingFileAction.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ExtractExistingFileAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction::ExtractExistingFileAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction::ExtractExistingFileAction()   {
}
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  Pathfinding::Ionic::Zip::ExtractExistingFileAction::Throw{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  Pathfinding::Ionic::Zip::ExtractExistingFileAction::OverwriteSilently{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  Pathfinding::Ionic::Zip::ExtractExistingFileAction::DoNotOverwrite{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::Ionic::Zip::ExtractExistingFileAction  Pathfinding::Ionic::Zip::ExtractExistingFileAction::InvokeExtractProgressEvent{static_cast<int32_t>(0x3)};
