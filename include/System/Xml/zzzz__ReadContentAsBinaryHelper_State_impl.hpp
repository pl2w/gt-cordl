#pragma once
// IWYU pragma private; include "System/Xml/ReadContentAsBinaryHelper_State.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ReadContentAsBinaryHelper_State::ReadContentAsBinaryHelper_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReadContentAsBinaryHelper_State::ReadContentAsBinaryHelper_State()   {
}
constexpr ::GlobalNamespace::ReadContentAsBinaryHelper_State  GlobalNamespace::ReadContentAsBinaryHelper_State::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ReadContentAsBinaryHelper_State  GlobalNamespace::ReadContentAsBinaryHelper_State::InReadContent{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ReadContentAsBinaryHelper_State  GlobalNamespace::ReadContentAsBinaryHelper_State::InReadElementContent{static_cast<int32_t>(0x2)};
