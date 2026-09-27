#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticCollectionParentLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticCollectionParentLink)
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct CosmeticCollectionParentLink;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink, "GorillaTag.CosmeticSystem", "CosmeticCollectionParentLink");
// Dependencies 
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.CosmeticCollectionParentLink
struct CORDL_TYPE CosmeticCollectionParentLink {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCollectionParentLink() ;

// Ctor Parameters [CppParam { name: "parentPlayFabID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetSlotIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "seriesIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticCollectionParentLink(::StringW  parentPlayFabID, int32_t  targetSlotIndex, int32_t  seriesIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4746};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("PlayFab ID of a parent (collection) cosmetic this sub-item attaches to. The sub-item will be shown on this parent whenever the parent is equipped.")]
/// @brief Field parentPlayFabID, offset: 0x0, size: 0x8, def value: None
 ::StringW  parentPlayFabID;

/// [Tooltip("Slot index (0-based) this sub-item occupies on this parent. Set to Any (-1) for interchangeable items that fill any open slot in acquisition order. The value can differ per parent, so the same sub-item may sit in slot 0 on one parent and slot 2 on another.")]
/// @brief Field targetSlotIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  targetSlotIndex;

/// [Tooltip("[Cycling parent with \'Use Series Order\' enabled] This sub-item\'s position in THIS parent\'s numbered series (start from 0). Items cycle in ascending order of this value and gaps are skipped. Leave at -1 if this parent does not use series ordering. May differ per parent.")]
/// @brief Field seriesIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  seriesIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink, parentPlayFabID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink, targetSlotIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink, seriesIndex) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
