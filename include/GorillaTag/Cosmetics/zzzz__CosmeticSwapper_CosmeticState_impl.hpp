#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticSwapper_CosmeticState.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticSwapper_CosmeticState_def.hpp"
// Ctor Parameters [CppParam { name: "cosmeticId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "replacedItem", ty: "::GlobalNamespace::CosmeticsController_CosmeticItem", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slot", ty: "::GlobalNamespace::CosmeticsController_CosmeticSlots", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticSwapper_CosmeticState::CosmeticSwapper_CosmeticState(::StringW  cosmeticId, ::GlobalNamespace::CosmeticsController_CosmeticItem  replacedItem, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot, bool  isLeftHand) noexcept  {
this->cosmeticId = cosmeticId;
this->replacedItem = replacedItem;
this->slot = slot;
this->isLeftHand = isLeftHand;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticSwapper_CosmeticState::CosmeticSwapper_CosmeticState()   {
}
