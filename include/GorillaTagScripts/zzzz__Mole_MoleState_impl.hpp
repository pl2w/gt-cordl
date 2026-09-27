#pragma once
// IWYU pragma private; include "GorillaTagScripts/Mole_MoleState.hpp"
#include "GorillaTagScripts/zzzz__Mole_MoleState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Mole_MoleState::Mole_MoleState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Mole_MoleState::Mole_MoleState()   {
}
constexpr ::GlobalNamespace::Mole_MoleState  GlobalNamespace::Mole_MoleState::Reset{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Mole_MoleState  GlobalNamespace::Mole_MoleState::Ready{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Mole_MoleState  GlobalNamespace::Mole_MoleState::TransitionToVisible{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Mole_MoleState  GlobalNamespace::Mole_MoleState::Visible{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Mole_MoleState  GlobalNamespace::Mole_MoleState::TransitionToHidden{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Mole_MoleState  GlobalNamespace::Mole_MoleState::Hidden{static_cast<int32_t>(0x5)};
