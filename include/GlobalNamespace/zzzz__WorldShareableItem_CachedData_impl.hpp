#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldShareableItem_CachedData.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_impl.hpp"
#include "GlobalNamespace/zzzz__WorldShareableItem_CachedData_def.hpp"
// Ctor Parameters [CppParam { name: "cachedTransferableObjectState", ty: "::GlobalNamespace::TransferrableObject_PositionState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cachedTransferableObjectItemState", ty: "::GlobalNamespace::TransferrableObject_ItemStates", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WorldShareableItem_CachedData::WorldShareableItem_CachedData(::GlobalNamespace::TransferrableObject_PositionState  cachedTransferableObjectState, ::GlobalNamespace::TransferrableObject_ItemStates  cachedTransferableObjectItemState) noexcept  {
this->cachedTransferableObjectState = cachedTransferableObjectState;
this->cachedTransferableObjectItemState = cachedTransferableObjectItemState;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldShareableItem_CachedData::WorldShareableItem_CachedData()   {
}
