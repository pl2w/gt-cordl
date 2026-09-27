#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_DroppedPieceState.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_DroppedPieceState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTable_DroppedPieceState::BuilderTable_DroppedPieceState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTable_DroppedPieceState::BuilderTable_DroppedPieceState()   {
}
constexpr ::GlobalNamespace::BuilderTable_DroppedPieceState  GlobalNamespace::BuilderTable_DroppedPieceState::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::BuilderTable_DroppedPieceState  GlobalNamespace::BuilderTable_DroppedPieceState::Light{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderTable_DroppedPieceState  GlobalNamespace::BuilderTable_DroppedPieceState::Heavy{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderTable_DroppedPieceState  GlobalNamespace::BuilderTable_DroppedPieceState::Frozen{static_cast<int32_t>(0x2)};
