#pragma once
// IWYU pragma private; include "GlobalNamespace/NonCosmeticHandItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NonCosmeticHandItem)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class NonCosmeticHandItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NonCosmeticHandItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NonCosmeticHandItem*, "", "NonCosmeticHandItem");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticSlots, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NonCosmeticHandItem
class CORDL_TYPE NonCosmeticHandItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

/// @brief Field cosmeticSlots, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_cosmeticSlots, put=__cordl_internal_set_cosmeticSlots)) ::GlobalNamespace::CosmeticsController_CosmeticSlots  cosmeticSlots;

/// @brief Field itemPrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemPrefab, put=__cordl_internal_set_itemPrefab)) ::UnityW<::UnityEngine::GameObject>  itemPrefab;

/// @brief Method EnableItem, addr 0x570dd90, size 0xa0, virtual false, abstract: false, final false
inline void EnableItem(bool  enable) ;

static inline ::GlobalNamespace::NonCosmeticHandItem* New_ctor() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& __cordl_internal_get_cosmeticSlots() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& __cordl_internal_get_cosmeticSlots() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_itemPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_itemPrefab() ;

constexpr void __cordl_internal_set_cosmeticSlots(::GlobalNamespace::CosmeticsController_CosmeticSlots  value) ;

constexpr void __cordl_internal_set_itemPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x570dec0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsEnabled, addr 0x570de30, size 0x90, virtual false, abstract: false, final false
inline bool get_IsEnabled() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NonCosmeticHandItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NonCosmeticHandItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NonCosmeticHandItem(NonCosmeticHandItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NonCosmeticHandItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NonCosmeticHandItem(NonCosmeticHandItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1165};

/// @brief Field cosmeticSlots, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticSlots  ___cosmeticSlots;

/// @brief Field itemPrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___itemPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NonCosmeticHandItem, ___cosmeticSlots) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NonCosmeticHandItem, ___itemPrefab) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NonCosmeticHandItem) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
