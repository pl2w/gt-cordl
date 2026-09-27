#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticCollectionParentLink.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticCollectionParentLink_def.hpp"
// Ctor Parameters [CppParam { name: "parentPlayFabID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetSlotIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "seriesIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink::CosmeticCollectionParentLink(::StringW  parentPlayFabID, int32_t  targetSlotIndex, int32_t  seriesIndex) noexcept  {
this->parentPlayFabID = parentPlayFabID;
this->targetSlotIndex = targetSlotIndex;
this->seriesIndex = seriesIndex;
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink::CosmeticCollectionParentLink()   {
}
