#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticPlacementInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticPlacementInfo)
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct CosmeticPlacementInfo;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::CosmeticPlacementInfo);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticPlacementInfo, "GorillaTag.CosmeticSystem", "CosmeticPlacementInfo");
// Dependencies GorillaTag.CosmeticSystem.GTHardCodedBones::SturdyEBone, GorillaTag.XformOffset
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.CosmeticPlacementInfo
struct CORDL_TYPE CosmeticPlacementInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticPlacementInfo() ;

// Ctor Parameters [CppParam { name: "parentBone", ty: "::GlobalNamespace::GTHardCodedBones_SturdyEBone", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticPlacementInfo(::GlobalNamespace::GTHardCodedBones_SturdyEBone  parentBone, ::GorillaTag::XformOffset  offset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4752};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// [Tooltip("The bone to attach the cosmetic to.")]
/// @brief Field parentBone, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::GTHardCodedBones_SturdyEBone  parentBone;

/// @brief Field offset, offset: 0x10, size: 0x34, def value: None
 ::GorillaTag::XformOffset  offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticPlacementInfo, parentBone) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticPlacementInfo, offset) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticPlacementInfo) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
