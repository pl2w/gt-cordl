#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StoreItem)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class StoreItem;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StoreItem*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreItem*, "GorillaNetworking.Store", "StoreItem");
// Dependencies System.Object, UnityEngine.Vector3
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreItem
class CORDL_TYPE StoreItem : public ::System::Object {
public:
// Declarations
/// @brief Field AssetBundleName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_AssetBundleName, put=__cordl_internal_set_AssetBundleName)) ::StringW  AssetBundleName;

/// @brief Field MaterialResrouceName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaterialResrouceName, put=__cordl_internal_set_MaterialResrouceName)) ::StringW  MaterialResrouceName;

/// @brief Field MeshAtlasResourceName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_MeshAtlasResourceName, put=__cordl_internal_set_MeshAtlasResourceName)) ::StringW  MeshAtlasResourceName;

/// @brief Field MeshResourceName, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_MeshResourceName, put=__cordl_internal_set_MeshResourceName)) ::StringW  MeshResourceName;

/// @brief Field bUsesMeshAtlas, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_bUsesMeshAtlas, put=__cordl_internal_set_bUsesMeshAtlas)) bool  bUsesMeshAtlas;

/// @brief Field bothHandsHoldable, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_bothHandsHoldable, put=__cordl_internal_set_bothHandsHoldable)) bool  bothHandsHoldable;

/// @brief Field bundledItems, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bundledItems, put=__cordl_internal_set_bundledItems)) ::ArrayW<::StringW>  bundledItems;

/// @brief Field canTryOn, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_canTryOn, put=__cordl_internal_set_canTryOn)) bool  canTryOn;

/// @brief Field displayName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Field itemCategory, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_itemCategory, put=__cordl_internal_set_itemCategory)) int32_t  itemCategory;

/// @brief Field itemName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemName, put=__cordl_internal_set_itemName)) ::StringW  itemName;

/// @brief Field itemPictureResourceString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemPictureResourceString, put=__cordl_internal_set_itemPictureResourceString)) ::StringW  itemPictureResourceString;

/// @brief Field overrideDisplayName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideDisplayName, put=__cordl_internal_set_overrideDisplayName)) ::StringW  overrideDisplayName;

/// @brief Field rotationOffset, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationOffset, put=__cordl_internal_set_rotationOffset)) ::UnityEngine::Vector3  rotationOffset;

/// @brief Field scale, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) ::UnityEngine::Vector3  scale;

/// @brief Field translationOffset, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_translationOffset, put=__cordl_internal_set_translationOffset)) ::UnityEngine::Vector3  translationOffset;

/// @brief Method ConvertCosmeticItemToSToreItem, addr 0x5cb30cc, size 0x124, virtual false, abstract: false, final false
static inline void ConvertCosmeticItemToSToreItem(::GlobalNamespace::CosmeticsController_CosmeticItem  cosmeticItem, ::by_ref<::GorillaNetworking::Store::StoreItem*>  storeItem) ;

static inline ::GorillaNetworking::Store::StoreItem* New_ctor() ;

/// @brief Method SerializeItemsAsJSON, addr 0x5cb2f88, size 0x144, virtual false, abstract: false, final false
static inline void SerializeItemsAsJSON(::ArrayW<::GorillaNetworking::Store::StoreItem*>  items) ;

constexpr ::StringW const& __cordl_internal_get_AssetBundleName() const;

constexpr ::StringW& __cordl_internal_get_AssetBundleName() ;

constexpr ::StringW const& __cordl_internal_get_MaterialResrouceName() const;

constexpr ::StringW& __cordl_internal_get_MaterialResrouceName() ;

constexpr ::StringW const& __cordl_internal_get_MeshAtlasResourceName() const;

constexpr ::StringW& __cordl_internal_get_MeshAtlasResourceName() ;

constexpr ::StringW const& __cordl_internal_get_MeshResourceName() const;

constexpr ::StringW& __cordl_internal_get_MeshResourceName() ;

constexpr bool const& __cordl_internal_get_bUsesMeshAtlas() const;

constexpr bool& __cordl_internal_get_bUsesMeshAtlas() ;

constexpr bool const& __cordl_internal_get_bothHandsHoldable() const;

constexpr bool& __cordl_internal_get_bothHandsHoldable() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_bundledItems() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_bundledItems() ;

constexpr bool const& __cordl_internal_get_canTryOn() const;

constexpr bool& __cordl_internal_get_canTryOn() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr int32_t const& __cordl_internal_get_itemCategory() const;

constexpr int32_t& __cordl_internal_get_itemCategory() ;

constexpr ::StringW const& __cordl_internal_get_itemName() const;

constexpr ::StringW& __cordl_internal_get_itemName() ;

constexpr ::StringW const& __cordl_internal_get_itemPictureResourceString() const;

constexpr ::StringW& __cordl_internal_get_itemPictureResourceString() ;

constexpr ::StringW const& __cordl_internal_get_overrideDisplayName() const;

constexpr ::StringW& __cordl_internal_get_overrideDisplayName() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_scale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_scale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_translationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_translationOffset() ;

constexpr void __cordl_internal_set_AssetBundleName(::StringW  value) ;

constexpr void __cordl_internal_set_MaterialResrouceName(::StringW  value) ;

constexpr void __cordl_internal_set_MeshAtlasResourceName(::StringW  value) ;

constexpr void __cordl_internal_set_MeshResourceName(::StringW  value) ;

constexpr void __cordl_internal_set_bUsesMeshAtlas(bool  value) ;

constexpr void __cordl_internal_set_bothHandsHoldable(bool  value) ;

constexpr void __cordl_internal_set_bundledItems(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_canTryOn(bool  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

constexpr void __cordl_internal_set_itemCategory(int32_t  value) ;

constexpr void __cordl_internal_set_itemName(::StringW  value) ;

constexpr void __cordl_internal_set_itemPictureResourceString(::StringW  value) ;

constexpr void __cordl_internal_set_overrideDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_scale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_translationOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5cb31f0, size 0x188, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreItem(StoreItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreItem(StoreItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4447};

/// @brief Field itemName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___itemName;

/// @brief Field itemCategory, offset: 0x18, size: 0x4, def value: None
 int32_t  ___itemCategory;

/// @brief Field itemPictureResourceString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___itemPictureResourceString;

/// @brief Field displayName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___displayName;

/// @brief Field overrideDisplayName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___overrideDisplayName;

/// @brief Field bundledItems, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___bundledItems;

/// @brief Field canTryOn, offset: 0x40, size: 0x1, def value: None
 bool  ___canTryOn;

/// @brief Field bothHandsHoldable, offset: 0x41, size: 0x1, def value: None
 bool  ___bothHandsHoldable;

/// @brief Field AssetBundleName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___AssetBundleName;

/// @brief Field bUsesMeshAtlas, offset: 0x50, size: 0x1, def value: None
 bool  ___bUsesMeshAtlas;

/// @brief Field MeshAtlasResourceName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___MeshAtlasResourceName;

/// @brief Field MeshResourceName, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___MeshResourceName;

/// @brief Field MaterialResrouceName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___MaterialResrouceName;

/// @brief Field translationOffset, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___translationOffset;

/// @brief Field rotationOffset, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationOffset;

/// @brief Field scale, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___itemName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___itemCategory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___itemPictureResourceString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___displayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___overrideDisplayName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___bundledItems) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___canTryOn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___bothHandsHoldable) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___AssetBundleName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___bUsesMeshAtlas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___MeshAtlasResourceName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___MeshResourceName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___MaterialResrouceName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___translationOffset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___rotationOffset) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreItem, ___scale) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreItem) == 0x98, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
