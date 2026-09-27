#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderSetManager_BuilderSetStoreItem.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playfabID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "setID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cost", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasPrice", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "setRef", ty: "::UnityW<::GlobalNamespace::BuilderPieceSet>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "displayModel", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isNullItem", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem::BuilderSetManager_BuilderSetStoreItem(::StringW  displayName, ::StringW  playfabID, int32_t  setID, uint32_t  cost, bool  hasPrice, ::UnityW<::GlobalNamespace::BuilderPieceSet>  setRef, ::UnityW<::UnityEngine::GameObject>  displayModel, bool  isNullItem) noexcept  {
this->displayName = displayName;
this->playfabID = playfabID;
this->setID = setID;
this->cost = cost;
this->hasPrice = hasPrice;
this->setRef = setRef;
this->displayModel = displayModel;
this->isNullItem = isNullItem;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem::BuilderSetManager_BuilderSetStoreItem()   {
}
