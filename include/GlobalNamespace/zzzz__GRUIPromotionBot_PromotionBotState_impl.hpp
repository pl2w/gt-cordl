#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIPromotionBot_PromotionBotState.hpp"
#include "GlobalNamespace/zzzz__GRUIPromotionBot_PromotionBotState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState::GRUIPromotionBot_PromotionBotState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState::GRUIPromotionBot_PromotionBotState()   {
}
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState  GlobalNamespace::GRUIPromotionBot_PromotionBotState::WaitingForLogin{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState  GlobalNamespace::GRUIPromotionBot_PromotionBotState::ChoosePromotion{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState  GlobalNamespace::GRUIPromotionBot_PromotionBotState::ChooseCreditIncrease{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState  GlobalNamespace::GRUIPromotionBot_PromotionBotState::ChoosePurchaseCredits{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState  GlobalNamespace::GRUIPromotionBot_PromotionBotState::ConfirmPurchaseCredits{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState  GlobalNamespace::GRUIPromotionBot_PromotionBotState::CelebratePromotion{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GRUIPromotionBot_PromotionBotState  GlobalNamespace::GRUIPromotionBot_PromotionBotState::TryingLogIn{static_cast<int32_t>(0x6)};
