#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapCosmeticItem.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GTObjectPlaceholder_ECustomMapCosmeticItem_impl.hpp"
#include "GorillaNetworking/Store/zzzz__HeadModel_CosmeticStand_BustType_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__CustomMapCosmeticItem_def.hpp"
// Ctor Parameters [CppParam { name: "customMapItemSlot", ty: "::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bustType", ty: "::GlobalNamespace::HeadModel_CosmeticStand_BustType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playFabID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem::CustomMapCosmeticItem(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  customMapItemSlot, ::GlobalNamespace::HeadModel_CosmeticStand_BustType  bustType, ::StringW  playFabID) noexcept  {
this->customMapItemSlot = customMapItemSlot;
this->bustType = bustType;
this->playFabID = playFabID;
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem::CustomMapCosmeticItem()   {
}
