#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldron_CauldronState.hpp"
#include "GlobalNamespace/zzzz__MagicCauldron_CauldronState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MagicCauldron_CauldronState::MagicCauldron_CauldronState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MagicCauldron_CauldronState::MagicCauldron_CauldronState()   {
}
constexpr ::GlobalNamespace::MagicCauldron_CauldronState  GlobalNamespace::MagicCauldron_CauldronState::notReady{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MagicCauldron_CauldronState  GlobalNamespace::MagicCauldron_CauldronState::ready{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MagicCauldron_CauldronState  GlobalNamespace::MagicCauldron_CauldronState::recipeCollecting{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MagicCauldron_CauldronState  GlobalNamespace::MagicCauldron_CauldronState::recipeActivated{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MagicCauldron_CauldronState  GlobalNamespace::MagicCauldron_CauldronState::summoned{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MagicCauldron_CauldronState  GlobalNamespace::MagicCauldron_CauldronState::failed{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::MagicCauldron_CauldronState  GlobalNamespace::MagicCauldron_CauldronState::cooldown{static_cast<int32_t>(0x6)};
