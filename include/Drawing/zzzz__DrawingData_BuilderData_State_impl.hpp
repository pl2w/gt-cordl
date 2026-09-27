#pragma once
// IWYU pragma private; include "Drawing/DrawingData_BuilderData_State.hpp"
#include "Drawing/zzzz__DrawingData_BuilderData_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderData_DrawingData_State::BuilderData_DrawingData_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderData_DrawingData_State::BuilderData_DrawingData_State()   {
}
constexpr ::GlobalNamespace::BuilderData_DrawingData_State  GlobalNamespace::BuilderData_DrawingData_State::Free{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderData_DrawingData_State  GlobalNamespace::BuilderData_DrawingData_State::Reserved{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderData_DrawingData_State  GlobalNamespace::BuilderData_DrawingData_State::Initialized{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderData_DrawingData_State  GlobalNamespace::BuilderData_DrawingData_State::WaitingForSplitter{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BuilderData_DrawingData_State  GlobalNamespace::BuilderData_DrawingData_State::WaitingForUserDefinedJob{static_cast<int32_t>(0x4)};
