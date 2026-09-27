#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticHoldableSlotAttachInfo.hpp"
#include "GlobalNamespace/zzzz__GTSturdyEnum_1_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_EHandAndStowSlots_impl.hpp"
#include "GorillaTag/zzzz__XformOffset_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticHoldableSlotAttachInfo_def.hpp"
// Ctor Parameters [CppParam { name: "stowSlot", ty: "::GlobalNamespace::GTSturdyEnum_1<::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::CosmeticSystem::CosmeticHoldableSlotAttachInfo::CosmeticHoldableSlotAttachInfo(::GlobalNamespace::GTSturdyEnum_1<::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots>  stowSlot, ::GorillaTag::XformOffset  offset) noexcept  {
this->stowSlot = stowSlot;
this->offset = offset;
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::CosmeticHoldableSlotAttachInfo::CosmeticHoldableSlotAttachInfo()   {
}
