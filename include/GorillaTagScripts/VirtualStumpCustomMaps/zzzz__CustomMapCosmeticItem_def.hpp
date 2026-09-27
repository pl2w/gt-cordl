#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapCosmeticItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__GTObjectPlaceholder_ECustomMapCosmeticItem_def.hpp"
#include "GorillaNetworking/Store/zzzz__HeadModel_CosmeticStand_BustType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CustomMapCosmeticItem)
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct CustomMapCosmeticItem;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapCosmeticItem");
// Dependencies GT_CustomMapSupportRuntime.GTObjectPlaceholder::ECustomMapCosmeticItem, GorillaNetworking.Store.HeadModel_CosmeticStand::BustType
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: true
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapCosmeticItem
struct CORDL_TYPE CustomMapCosmeticItem {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapCosmeticItem() ;

// Ctor Parameters [CppParam { name: "customMapItemSlot", ty: "::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem", modifiers: "", def_value: None, comment: None }, CppParam { name: "bustType", ty: "::GlobalNamespace::HeadModel_CosmeticStand_BustType", modifiers: "", def_value: None, comment: None }, CppParam { name: "playFabID", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapCosmeticItem(::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  customMapItemSlot, ::GlobalNamespace::HeadModel_CosmeticStand_BustType  bustType, ::StringW  playFabID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field customMapItemSlot, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GTObjectPlaceholder_ECustomMapCosmeticItem  customMapItemSlot;

/// @brief Field bustType, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::HeadModel_CosmeticStand_BustType  bustType;

/// @brief Field playFabID, offset: 0x8, size: 0x8, def value: None
 ::StringW  playFabID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem, customMapItemSlot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem, bustType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem, playFabID) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapCosmeticItem) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
