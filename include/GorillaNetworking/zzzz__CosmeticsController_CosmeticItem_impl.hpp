#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController_CosmeticItem.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticCategory_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticCollectionParentLink_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticCollectionParentLink_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsController_CosmeticItem.get_IsCollectable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticsController_CosmeticItem::*)()>(&::GlobalNamespace::CosmeticsController_CosmeticItem::get_IsCollectable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c6775c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(),
                        {"get_IsCollectable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsController_CosmeticItem.IsCollectableOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticsController_CosmeticItem::*)(::StringW)>(&::GlobalNamespace::CosmeticsController_CosmeticItem::IsCollectableOf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c6777c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(),
                        {"IsCollectableOf", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsController_CosmeticItem.GetTargetSlotIndexForParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CosmeticsController_CosmeticItem::*)(::StringW)>(&::GlobalNamespace::CosmeticsController_CosmeticItem::GetTargetSlotIndexForParent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c677fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(),
                        {"GetTargetSlotIndexForParent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsController_CosmeticItem.GetSeriesIndexForParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CosmeticsController_CosmeticItem::*)(::StringW)>(&::GlobalNamespace::CosmeticsController_CosmeticItem::GetSeriesIndexForParent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c67898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(),
                        {"GetSeriesIndexForParent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::CosmeticsController_CosmeticItem::get_IsCollectable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(),
                        {"get_IsCollectable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticsController_CosmeticItem::IsCollectableOf(::StringW  parentPlayFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(),
                        {"IsCollectableOf", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, parentPlayFabID);
}
inline int32_t GlobalNamespace::CosmeticsController_CosmeticItem::GetTargetSlotIndexForParent(::StringW  parentPlayFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(),
                        {"GetTargetSlotIndexForParent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, parentPlayFabID);
}
inline int32_t GlobalNamespace::CosmeticsController_CosmeticItem::GetSeriesIndexForParent(::StringW  parentPlayFabID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsController_CosmeticItem>(),
                        {"GetSeriesIndexForParent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, parentPlayFabID);
}
// Ctor Parameters [CppParam { name: "itemName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "itemCategory", ty: "::GlobalNamespace::CosmeticsController_CosmeticCategory", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isHoldable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isThrowable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "itemPicture", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "itemPictureResourceString", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overrideDisplayName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cost", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bundledItems", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "canTryOn", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bothHandsHoldable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bLoadsFromResources", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bUsesMeshAtlas", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "positionOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshAtlasResourceString", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "meshResourceString", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialResourceString", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isNullItem", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collectionParentLinks", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collectionSlotCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collectionIsCycling", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collectionUsesIndexTargeting", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "appliedCosmeticPlayFabID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem::CosmeticsController_CosmeticItem(::StringW  itemName, ::GlobalNamespace::CosmeticsController_CosmeticCategory  itemCategory, bool  isHoldable, bool  isThrowable, ::UnityW<::UnityEngine::Sprite>  itemPicture, ::StringW  displayName, ::StringW  itemPictureResourceString, ::StringW  overrideDisplayName, int32_t  cost, ::ArrayW<::StringW>  bundledItems, bool  canTryOn, bool  bothHandsHoldable, bool  bLoadsFromResources, bool  bUsesMeshAtlas, ::UnityEngine::Vector3  rotationOffset, ::UnityEngine::Vector3  positionOffset, ::StringW  meshAtlasResourceString, ::StringW  meshResourceString, ::StringW  materialResourceString, bool  isNullItem, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink>  collectionParentLinks, int32_t  collectionSlotCount, bool  collectionIsCycling, bool  collectionUsesIndexTargeting, ::StringW  appliedCosmeticPlayFabID) noexcept  {
this->itemName = itemName;
this->itemCategory = itemCategory;
this->isHoldable = isHoldable;
this->isThrowable = isThrowable;
this->itemPicture = itemPicture;
this->displayName = displayName;
this->itemPictureResourceString = itemPictureResourceString;
this->overrideDisplayName = overrideDisplayName;
this->cost = cost;
this->bundledItems = bundledItems;
this->canTryOn = canTryOn;
this->bothHandsHoldable = bothHandsHoldable;
this->bLoadsFromResources = bLoadsFromResources;
this->bUsesMeshAtlas = bUsesMeshAtlas;
this->rotationOffset = rotationOffset;
this->positionOffset = positionOffset;
this->meshAtlasResourceString = meshAtlasResourceString;
this->meshResourceString = meshResourceString;
this->materialResourceString = materialResourceString;
this->isNullItem = isNullItem;
this->collectionParentLinks = collectionParentLinks;
this->collectionSlotCount = collectionSlotCount;
this->collectionIsCycling = collectionIsCycling;
this->collectionUsesIndexTargeting = collectionUsesIndexTargeting;
this->appliedCosmeticPlayFabID = appliedCosmeticPlayFabID;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem::CosmeticsController_CosmeticItem()   {
}
