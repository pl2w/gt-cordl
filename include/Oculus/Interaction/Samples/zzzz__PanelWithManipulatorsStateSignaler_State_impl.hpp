#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PanelWithManipulatorsStateSignaler_State.hpp"
#include "Oculus/Interaction/Samples/zzzz__PanelWithManipulatorsStateSignaler_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State::PanelWithManipulatorsStateSignaler_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State::PanelWithManipulatorsStateSignaler_State()   {
}
constexpr ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  GlobalNamespace::PanelWithManipulatorsStateSignaler_State::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  GlobalNamespace::PanelWithManipulatorsStateSignaler_State::Selected{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PanelWithManipulatorsStateSignaler_State  GlobalNamespace::PanelWithManipulatorsStateSignaler_State::Idle{static_cast<int32_t>(0x2)};
