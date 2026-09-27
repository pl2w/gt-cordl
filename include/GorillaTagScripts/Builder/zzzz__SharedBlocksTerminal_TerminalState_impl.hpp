#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksTerminal_TerminalState.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksTerminal_TerminalState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState::SharedBlocksTerminal_TerminalState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState::SharedBlocksTerminal_TerminalState()   {
}
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState  GlobalNamespace::SharedBlocksTerminal_TerminalState::NoStatus{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState  GlobalNamespace::SharedBlocksTerminal_TerminalState::Searching{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState  GlobalNamespace::SharedBlocksTerminal_TerminalState::NotFound{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState  GlobalNamespace::SharedBlocksTerminal_TerminalState::Found{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState  GlobalNamespace::SharedBlocksTerminal_TerminalState::Loading{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState  GlobalNamespace::SharedBlocksTerminal_TerminalState::LoadSuccess{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::SharedBlocksTerminal_TerminalState  GlobalNamespace::SharedBlocksTerminal_TerminalState::LoadFail{static_cast<int32_t>(0x6)};
