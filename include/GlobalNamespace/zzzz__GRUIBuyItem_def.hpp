#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIBuyItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRUIBuyItem)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRUIBuyItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRUIBuyItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIBuyItem*, "", "GRUIBuyItem");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRUIBuyItem
class CORDL_TYPE GRUIBuyItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field buyItemButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_buyItemButton, put=__cordl_internal_set_buyItemButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  buyItemButton;

/// @brief Field entityPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityPrefab, put=__cordl_internal_set_entityPrefab)) ::UnityW<::GlobalNamespace::GameEntity>  entityPrefab;

/// @brief Field entityTypeId, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_entityTypeId, put=__cordl_internal_set_entityTypeId)) int32_t  entityTypeId;

/// @brief Field itemInfoLabel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemInfoLabel, put=__cordl_internal_set_itemInfoLabel)) ::UnityW<::UnityEngine::UI::Text>  itemInfoLabel;

/// @brief Field spawnMarker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnMarker, put=__cordl_internal_set_spawnMarker)) ::UnityW<::UnityEngine::Transform>  spawnMarker;

/// @brief Field standId, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_standId, put=__cordl_internal_set_standId)) int32_t  standId;

/// @brief Method GetSpawnMarker, addr 0x58d1664, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetSpawnMarker() ;

static inline ::GlobalNamespace::GRUIBuyItem* New_ctor() ;

/// @brief Method OnBuyItem, addr 0x58d1660, size 0x4, virtual false, abstract: false, final false
inline void OnBuyItem() ;

/// @brief Method Setup, addr 0x58d159c, size 0xc4, virtual false, abstract: false, final false
inline void Setup(int32_t  standId) ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_buyItemButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_buyItemButton() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entityPrefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entityPrefab() ;

constexpr int32_t const& __cordl_internal_get_entityTypeId() const;

constexpr int32_t& __cordl_internal_get_entityTypeId() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_itemInfoLabel() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_itemInfoLabel() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnMarker() ;

constexpr int32_t const& __cordl_internal_get_standId() const;

constexpr int32_t& __cordl_internal_get_standId() ;

constexpr void __cordl_internal_set_buyItemButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_entityPrefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_entityTypeId(int32_t  value) ;

constexpr void __cordl_internal_set_itemInfoLabel(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_spawnMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_standId(int32_t  value) ;

/// @brief Method .ctor, addr 0x58d166c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRUIBuyItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRUIBuyItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRUIBuyItem(GRUIBuyItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRUIBuyItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRUIBuyItem(GRUIBuyItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2098};

/// [SerializeField]
/// @brief Field buyItemButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___buyItemButton;

/// [SerializeField]
/// @brief Field itemInfoLabel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___itemInfoLabel;

/// [SerializeField]
/// @brief Field spawnMarker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnMarker;

/// [SerializeField]
/// @brief Field entityPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entityPrefab;

/// @brief Field entityTypeId, offset: 0x40, size: 0x4, def value: None
 int32_t  ___entityTypeId;

/// @brief Field standId, offset: 0x44, size: 0x4, def value: None
 int32_t  ___standId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIBuyItem, ___buyItemButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIBuyItem, ___itemInfoLabel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIBuyItem, ___spawnMarker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIBuyItem, ___entityPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIBuyItem, ___entityTypeId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRUIBuyItem, ___standId) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIBuyItem) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
