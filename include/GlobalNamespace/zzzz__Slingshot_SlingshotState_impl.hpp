#pragma once
// IWYU pragma private; include "GlobalNamespace/Slingshot_SlingshotState.hpp"
#include "GlobalNamespace/zzzz__Slingshot_SlingshotState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Slingshot_SlingshotState::Slingshot_SlingshotState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Slingshot_SlingshotState::Slingshot_SlingshotState()   {
}
constexpr ::GlobalNamespace::Slingshot_SlingshotState  GlobalNamespace::Slingshot_SlingshotState::NoState{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Slingshot_SlingshotState  GlobalNamespace::Slingshot_SlingshotState::OnChest{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Slingshot_SlingshotState  GlobalNamespace::Slingshot_SlingshotState::LeftHandDrawing{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Slingshot_SlingshotState  GlobalNamespace::Slingshot_SlingshotState::RightHandDrawing{static_cast<int32_t>(0x8)};
