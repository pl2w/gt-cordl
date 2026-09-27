#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentScreen_PopupState.hpp"
#include "GlobalNamespace/zzzz__ConsentScreen_PopupState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConsentScreen_PopupState::ConsentScreen_PopupState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsentScreen_PopupState::ConsentScreen_PopupState()   {
}
constexpr ::GlobalNamespace::ConsentScreen_PopupState  GlobalNamespace::ConsentScreen_PopupState::Hidden{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ConsentScreen_PopupState  GlobalNamespace::ConsentScreen_PopupState::Prompt{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ConsentScreen_PopupState  GlobalNamespace::ConsentScreen_PopupState::Processing{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ConsentScreen_PopupState  GlobalNamespace::ConsentScreen_PopupState::Result{static_cast<int32_t>(0x3)};
