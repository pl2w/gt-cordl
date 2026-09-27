#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticHoldableSlotAttachInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTSturdyEnum_1_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_EHandAndStowSlots_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticHoldableSlotAttachInfo)
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct CosmeticHoldableSlotAttachInfo;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::CosmeticHoldableSlotAttachInfo);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticHoldableSlotAttachInfo, "GorillaTag.CosmeticSystem", "CosmeticHoldableSlotAttachInfo");
// Dependencies GTSturdyEnum`1<TEnum>, GorillaTag.CosmeticSystem.GTHardCodedBones::EHandAndStowSlots, GorillaTag.XformOffset
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.CosmeticHoldableSlotAttachInfo
struct CORDL_TYPE CosmeticHoldableSlotAttachInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticHoldableSlotAttachInfo() ;

// Ctor Parameters [CppParam { name: "stowSlot", ty: "::GlobalNamespace::GTSturdyEnum_1<::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots>", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticHoldableSlotAttachInfo(::GlobalNamespace::GTSturdyEnum_1<::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots>  stowSlot, ::GorillaTag::XformOffset  offset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4748};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// [Tooltip("The anchor that this holdable cosmetic can attach to.")]
/// @brief Field stowSlot, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::GTSturdyEnum_1<::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots>  stowSlot;

/// @brief Field offset, offset: 0x10, size: 0x34, def value: None
 ::GorillaTag::XformOffset  offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticHoldableSlotAttachInfo, stowSlot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticHoldableSlotAttachInfo, offset) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticHoldableSlotAttachInfo) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
