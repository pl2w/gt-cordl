#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticsController_CosmeticItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticCategory_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticCollectionParentLink_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsController_CosmeticItem)
namespace GorillaTag::CosmeticSystem {
struct CosmeticCollectionParentLink;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsController_CosmeticItem);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsController_CosmeticItem, "GorillaNetworking", "CosmeticsController/CosmeticItem");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticCategory, GorillaTag.CosmeticSystem.CosmeticCollectionParentLink, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.CosmeticsController/CosmeticItem
struct CORDL_TYPE CosmeticsController_CosmeticItem {
public:
// Declarations
 __declspec(property(get=get_IsCollectable)) bool  IsCollectable;

/// @brief Method GetSeriesIndexForParent, addr 0x5c67898, size 0x9c, virtual false, abstract: false, final false
inline int32_t GetSeriesIndexForParent(::StringW  parentPlayFabID) ;

/// @brief Method GetTargetSlotIndexForParent, addr 0x5c677fc, size 0x9c, virtual false, abstract: false, final false
inline int32_t GetTargetSlotIndexForParent(::StringW  parentPlayFabID) ;

/// @brief Method IsCollectableOf, addr 0x5c6777c, size 0x80, virtual false, abstract: false, final false
inline bool IsCollectableOf(::StringW  parentPlayFabID) ;

/// @brief Method get_IsCollectable, addr 0x5c6775c, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCollectable() ;

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsController_CosmeticItem() ;

// Ctor Parameters [CppParam { name: "itemName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "itemCategory", ty: "::GlobalNamespace::CosmeticsController_CosmeticCategory", modifiers: "", def_value: None, comment: None }, CppParam { name: "isHoldable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isThrowable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "itemPicture", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "itemPictureResourceString", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "overrideDisplayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "cost", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bundledItems", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "canTryOn", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "bothHandsHoldable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "bLoadsFromResources", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "bUsesMeshAtlas", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "positionOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshAtlasResourceString", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshResourceString", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialResourceString", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "isNullItem", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionParentLinks", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink>", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionSlotCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionIsCycling", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionUsesIndexTargeting", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "appliedCosmeticPlayFabID", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsController_CosmeticItem(::StringW  itemName, ::GlobalNamespace::CosmeticsController_CosmeticCategory  itemCategory, bool  isHoldable, bool  isThrowable, ::UnityW<::UnityEngine::Sprite>  itemPicture, ::StringW  displayName, ::StringW  itemPictureResourceString, ::StringW  overrideDisplayName, int32_t  cost, ::ArrayW<::StringW>  bundledItems, bool  canTryOn, bool  bothHandsHoldable, bool  bLoadsFromResources, bool  bUsesMeshAtlas, ::UnityEngine::Vector3  rotationOffset, ::UnityEngine::Vector3  positionOffset, ::StringW  meshAtlasResourceString, ::StringW  meshResourceString, ::StringW  materialResourceString, bool  isNullItem, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink>  collectionParentLinks, int32_t  collectionSlotCount, bool  collectionIsCycling, bool  collectionUsesIndexTargeting, ::StringW  appliedCosmeticPlayFabID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4278};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// [Tooltip("Should match the spreadsheet item name.")]
/// @brief Field itemName, offset: 0x0, size: 0x8, def value: None
 ::StringW  itemName;

/// [Tooltip("Determines what wardrobe section the item will show up in.")]
/// @brief Field itemCategory, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticCategory  itemCategory;

/// [Tooltip("If this is a holdable item.")]
/// @brief Field isHoldable, offset: 0xc, size: 0x1, def value: None
 bool  isHoldable;

/// [Tooltip("If this is a throwable item and hidden on the wardrobe.")]
/// @brief Field isThrowable, offset: 0xd, size: 0x1, def value: None
 bool  isThrowable;

/// [Tooltip("Icon shown in the store menus & hunt watch.")]
/// @brief Field itemPicture, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  itemPicture;

/// @brief Field displayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  displayName;

/// @brief Field itemPictureResourceString, offset: 0x20, size: 0x8, def value: None
 ::StringW  itemPictureResourceString;

/// [Tooltip("The name shown on the store checkout screen.")]
/// @brief Field overrideDisplayName, offset: 0x28, size: 0x8, def value: None
 ::StringW  overrideDisplayName;

/// [DebugReadout]
/// @brief Field cost, offset: 0x30, size: 0x4, def value: None
 int32_t  cost;

/// [DebugReadout]
/// @brief Field bundledItems, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  bundledItems;

/// [DebugReadout]
/// @brief Field canTryOn, offset: 0x40, size: 0x1, def value: None
 bool  canTryOn;

/// [Tooltip("Set to true if the item takes up both left and right wearable hand slots at the same time. Used for things like mittens/gloves.")]
/// @brief Field bothHandsHoldable, offset: 0x41, size: 0x1, def value: None
 bool  bothHandsHoldable;

/// @brief Field bLoadsFromResources, offset: 0x42, size: 0x1, def value: None
 bool  bLoadsFromResources;

/// @brief Field bUsesMeshAtlas, offset: 0x43, size: 0x1, def value: None
 bool  bUsesMeshAtlas;

/// @brief Field rotationOffset, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  rotationOffset;

/// @brief Field positionOffset, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  positionOffset;

/// @brief Field meshAtlasResourceString, offset: 0x60, size: 0x8, def value: None
 ::StringW  meshAtlasResourceString;

/// @brief Field meshResourceString, offset: 0x68, size: 0x8, def value: None
 ::StringW  meshResourceString;

/// @brief Field materialResourceString, offset: 0x70, size: 0x8, def value: None
 ::StringW  materialResourceString;

/// [HideInInspector]
/// @brief Field isNullItem, offset: 0x78, size: 0x1, def value: None
 bool  isNullItem;

/// @brief Field collectionParentLinks, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink>  collectionParentLinks;

/// @brief Field collectionSlotCount, offset: 0x88, size: 0x4, def value: None
 int32_t  collectionSlotCount;

/// @brief Field collectionIsCycling, offset: 0x8c, size: 0x1, def value: None
 bool  collectionIsCycling;

/// @brief Field collectionUsesIndexTargeting, offset: 0x8d, size: 0x1, def value: None
 bool  collectionUsesIndexTargeting;

/// @brief Field appliedCosmeticPlayFabID, offset: 0x90, size: 0x8, def value: None
 ::StringW  appliedCosmeticPlayFabID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, itemName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, itemCategory) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, isHoldable) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, isThrowable) == 0xd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, itemPicture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, itemPictureResourceString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, overrideDisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, cost) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, bundledItems) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, canTryOn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, bothHandsHoldable) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, bLoadsFromResources) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, bUsesMeshAtlas) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, rotationOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, positionOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, meshAtlasResourceString) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, meshResourceString) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, materialResourceString) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, isNullItem) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, collectionParentLinks) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, collectionSlotCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, collectionIsCycling) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, collectionUsesIndexTargeting) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsController_CosmeticItem, appliedCosmeticPlayFabID) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsController_CosmeticItem) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
