#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController_PurchaseItemStages.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_PurchaseItemStages_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages::CosmeticsController_PurchaseItemStages(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages::CosmeticsController_PurchaseItemStages()   {
}
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages  GlobalNamespace::CosmeticsController_PurchaseItemStages::Start{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages  GlobalNamespace::CosmeticsController_PurchaseItemStages::CheckoutButtonPressed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages  GlobalNamespace::CosmeticsController_PurchaseItemStages::ItemSelected{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages  GlobalNamespace::CosmeticsController_PurchaseItemStages::ItemOwned{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages  GlobalNamespace::CosmeticsController_PurchaseItemStages::FinalPurchaseAcknowledgement{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages  GlobalNamespace::CosmeticsController_PurchaseItemStages::Buying{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages  GlobalNamespace::CosmeticsController_PurchaseItemStages::Success{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::CosmeticsController_PurchaseItemStages  GlobalNamespace::CosmeticsController_PurchaseItemStages::Failure{static_cast<int32_t>(0x7)};
