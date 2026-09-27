#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/VirtualStumpReturnWatchProps.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__VirtualStumpReturnWatchProps_def.hpp"
// Ctor Parameters [CppParam { name: "holdDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shouldTagPlayer", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shouldKickPlayer", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "infectionOverride", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "holdDuration_Infection", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shouldTagPlayer_Infection", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shouldKickPlayer_Infection", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "customModeOverride", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "holdDuration_Custom", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shouldTagPlayer_CustomMode", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shouldKickPlayer_CustomMode", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps::VirtualStumpReturnWatchProps(float_t  holdDuration, bool  shouldTagPlayer, bool  shouldKickPlayer, bool  infectionOverride, float_t  holdDuration_Infection, bool  shouldTagPlayer_Infection, bool  shouldKickPlayer_Infection, bool  customModeOverride, float_t  holdDuration_Custom, bool  shouldTagPlayer_CustomMode, bool  shouldKickPlayer_CustomMode) noexcept  {
this->holdDuration = holdDuration;
this->shouldTagPlayer = shouldTagPlayer;
this->shouldKickPlayer = shouldKickPlayer;
this->infectionOverride = infectionOverride;
this->holdDuration_Infection = holdDuration_Infection;
this->shouldTagPlayer_Infection = shouldTagPlayer_Infection;
this->shouldKickPlayer_Infection = shouldKickPlayer_Infection;
this->customModeOverride = customModeOverride;
this->holdDuration_Custom = holdDuration_Custom;
this->shouldTagPlayer_CustomMode = shouldTagPlayer_CustomMode;
this->shouldKickPlayer_CustomMode = shouldKickPlayer_CustomMode;
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps::VirtualStumpReturnWatchProps()   {
}
