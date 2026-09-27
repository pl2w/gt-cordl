#pragma once
// IWYU pragma private; include "GorillaTagScripts/LurkerGhost_ghostState.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_ghostState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LurkerGhost_ghostState::LurkerGhost_ghostState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LurkerGhost_ghostState::LurkerGhost_ghostState()   {
}
constexpr ::GlobalNamespace::LurkerGhost_ghostState  GlobalNamespace::LurkerGhost_ghostState::patrol{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LurkerGhost_ghostState  GlobalNamespace::LurkerGhost_ghostState::seek{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LurkerGhost_ghostState  GlobalNamespace::LurkerGhost_ghostState::charge{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LurkerGhost_ghostState  GlobalNamespace::LurkerGhost_ghostState::possess{static_cast<int32_t>(0x3)};
