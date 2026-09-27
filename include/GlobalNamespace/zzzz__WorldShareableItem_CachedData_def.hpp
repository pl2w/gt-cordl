#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldShareableItem_CachedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WorldShareableItem_CachedData)
// Forward declare root types
namespace GlobalNamespace {
struct WorldShareableItem_CachedData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WorldShareableItem_CachedData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldShareableItem_CachedData, "", "WorldShareableItem/CachedData");
// Dependencies TransferrableObject::ItemStates, TransferrableObject::PositionState
namespace GlobalNamespace {
// Is value type: true
// CS Name: WorldShareableItem/CachedData
struct CORDL_TYPE WorldShareableItem_CachedData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WorldShareableItem_CachedData() ;

// Ctor Parameters [CppParam { name: "cachedTransferableObjectState", ty: "::GlobalNamespace::TransferrableObject_PositionState", modifiers: "", def_value: None, comment: None }, CppParam { name: "cachedTransferableObjectItemState", ty: "::GlobalNamespace::TransferrableObject_ItemStates", modifiers: "", def_value: None, comment: None }]
constexpr WorldShareableItem_CachedData(::GlobalNamespace::TransferrableObject_PositionState  cachedTransferableObjectState, ::GlobalNamespace::TransferrableObject_ItemStates  cachedTransferableObjectItemState) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1241};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field cachedTransferableObjectState, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  cachedTransferableObjectState;

/// @brief Field cachedTransferableObjectItemState, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_ItemStates  cachedTransferableObjectItemState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WorldShareableItem_CachedData, cachedTransferableObjectState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldShareableItem_CachedData, cachedTransferableObjectItemState) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WorldShareableItem_CachedData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
