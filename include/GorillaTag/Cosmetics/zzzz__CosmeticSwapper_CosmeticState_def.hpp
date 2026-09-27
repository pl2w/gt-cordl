#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticSwapper_CosmeticState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticSwapper_CosmeticState)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticSwapper_CosmeticState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticSwapper_CosmeticState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticSwapper_CosmeticState, "GorillaTag.Cosmetics", "CosmeticSwapper/CosmeticState");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, GorillaNetworking.CosmeticsController::CosmeticSlots
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.CosmeticSwapper/CosmeticState
struct CORDL_TYPE CosmeticSwapper_CosmeticState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticSwapper_CosmeticState() ;

// Ctor Parameters [CppParam { name: "cosmeticId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "replacedItem", ty: "::GlobalNamespace::CosmeticsController_CosmeticItem", modifiers: "", def_value: None, comment: None }, CppParam { name: "slot", ty: "::GlobalNamespace::CosmeticsController_CosmeticSlots", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticSwapper_CosmeticState(::StringW  cosmeticId, ::GlobalNamespace::CosmeticsController_CosmeticItem  replacedItem, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot, bool  isLeftHand) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4909};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field cosmeticId, offset: 0x0, size: 0x8, def value: None
 ::StringW  cosmeticId;

/// @brief Field replacedItem, offset: 0x8, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  replacedItem;

/// @brief Field slot, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot;

/// @brief Field isLeftHand, offset: 0xa4, size: 0x1, def value: None
 bool  isLeftHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticSwapper_CosmeticState, cosmeticId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticSwapper_CosmeticState, replacedItem) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticSwapper_CosmeticState, slot) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticSwapper_CosmeticState, isLeftHand) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticSwapper_CosmeticState) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
