#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerAgeGateWarningStatus.hpp"
#include "GlobalNamespace/zzzz__EImageVisibility_impl.hpp"
#include "GlobalNamespace/zzzz__WarningButtonResult_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerAgeGateWarningStatus_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "header", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "body", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftButtonText", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightButtonText", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftButtonResult", ty: "::GlobalNamespace::WarningButtonResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightButtonResult", ty: "::GlobalNamespace::WarningButtonResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "noWarningResult", ty: "::GlobalNamespace::WarningButtonResult", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "showImage", ty: "::GlobalNamespace::EImageVisibility", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onLeftButtonPressedAction", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onRightButtonPressedAction", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayerAgeGateWarningStatus::PlayerAgeGateWarningStatus(::StringW  header, ::StringW  body, ::StringW  leftButtonText, ::StringW  rightButtonText, ::GlobalNamespace::WarningButtonResult  leftButtonResult, ::GlobalNamespace::WarningButtonResult  rightButtonResult, ::GlobalNamespace::WarningButtonResult  noWarningResult, ::GlobalNamespace::EImageVisibility  showImage, ::System::Action*  onLeftButtonPressedAction, ::System::Action*  onRightButtonPressedAction) noexcept  {
this->header = header;
this->body = body;
this->leftButtonText = leftButtonText;
this->rightButtonText = rightButtonText;
this->leftButtonResult = leftButtonResult;
this->rightButtonResult = rightButtonResult;
this->noWarningResult = noWarningResult;
this->showImage = showImage;
this->onLeftButtonPressedAction = onLeftButtonPressedAction;
this->onRightButtonPressedAction = onRightButtonPressedAction;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerAgeGateWarningStatus::PlayerAgeGateWarningStatus()   {
}
