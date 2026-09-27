#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPrefFlags_Flag.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlags_Flag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag::PlayerPrefFlags_Flag(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag::PlayerPrefFlags_Flag()   {
}
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag  GlobalNamespace::PlayerPrefFlags_Flag::SHOW_1P_COSMETICS{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag  GlobalNamespace::PlayerPrefFlags_Flag::SWAP_HELD_COSMETICS{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag  GlobalNamespace::PlayerPrefFlags_Flag::GAME_MODE_SELECTOR_IS_SUPER{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag  GlobalNamespace::PlayerPrefFlags_Flag::GTV_MUTED{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag  GlobalNamespace::PlayerPrefFlags_Flag::ANTI_NAUSEA_ON{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag  GlobalNamespace::PlayerPrefFlags_Flag::GRAVDASH_FLIP_X{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag  GlobalNamespace::PlayerPrefFlags_Flag::GRAVDASH_FLIP_Y{static_cast<int32_t>(0x40)};
