#pragma once
// IWYU pragma private; include "System/Diagnostics/Process_State.hpp"
#include "System/Diagnostics/zzzz__Process_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Process_State::Process_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Process_State::Process_State()   {
}
constexpr ::GlobalNamespace::Process_State  GlobalNamespace::Process_State::HaveId{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Process_State  GlobalNamespace::Process_State::IsLocal{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Process_State  GlobalNamespace::Process_State::IsNt{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Process_State  GlobalNamespace::Process_State::HaveProcessInfo{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::Process_State  GlobalNamespace::Process_State::Exited{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::Process_State  GlobalNamespace::Process_State::Associated{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::Process_State  GlobalNamespace::Process_State::IsWin2k{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::Process_State  GlobalNamespace::Process_State::HaveNtProcessInfo{static_cast<int32_t>(0xc)};
