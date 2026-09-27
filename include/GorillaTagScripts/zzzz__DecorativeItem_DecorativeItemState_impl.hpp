#pragma once
// IWYU pragma private; include "GorillaTagScripts/DecorativeItem_DecorativeItemState.hpp"
#include "GorillaTagScripts/zzzz__DecorativeItem_DecorativeItemState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState::DecorativeItem_DecorativeItemState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState::DecorativeItem_DecorativeItemState()   {
}
constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState  GlobalNamespace::DecorativeItem_DecorativeItemState::isHeld{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState  GlobalNamespace::DecorativeItem_DecorativeItemState::dropped{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState  GlobalNamespace::DecorativeItem_DecorativeItemState::snapped{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState  GlobalNamespace::DecorativeItem_DecorativeItemState::respawn{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::DecorativeItem_DecorativeItemState  GlobalNamespace::DecorativeItem_DecorativeItemState::none{static_cast<int32_t>(0x10)};
