#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_DroppedPieceData.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_DroppedPieceState_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_DroppedPieceData_def.hpp"
// Ctor Parameters [CppParam { name: "droppedState", ty: "::GlobalNamespace::BuilderTable_DroppedPieceState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "speedThreshCrossedTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filteredSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTable_DroppedPieceData::BuilderTable_DroppedPieceData(::GlobalNamespace::BuilderTable_DroppedPieceState  droppedState, float_t  speedThreshCrossedTime, float_t  filteredSpeed) noexcept  {
this->droppedState = droppedState;
this->speedThreshCrossedTime = speedThreshCrossedTime;
this->filteredSpeed = filteredSpeed;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTable_DroppedPieceData::BuilderTable_DroppedPieceData()   {
}
