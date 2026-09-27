#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderItem_BuilderItemState.hpp"
#include "GorillaTagScripts/zzzz__BuilderItem_BuilderItemState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderItem_BuilderItemState::BuilderItem_BuilderItemState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderItem_BuilderItemState::BuilderItem_BuilderItemState()   {
}
constexpr ::GlobalNamespace::BuilderItem_BuilderItemState  GlobalNamespace::BuilderItem_BuilderItemState::isHeld{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderItem_BuilderItemState  GlobalNamespace::BuilderItem_BuilderItemState::dropped{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderItem_BuilderItemState  GlobalNamespace::BuilderItem_BuilderItemState::placed{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BuilderItem_BuilderItemState  GlobalNamespace::BuilderItem_BuilderItemState::unused0{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::BuilderItem_BuilderItemState  GlobalNamespace::BuilderItem_BuilderItemState::none{static_cast<int32_t>(0x10)};
