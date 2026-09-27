#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticAttachInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StringEnum_1_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticAttachInfo)
namespace GlobalNamespace {
struct GTHardCodedBones_EBone;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
struct XformOffset;
}
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct CosmeticAttachInfo;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::CosmeticAttachInfo);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticAttachInfo, "GorillaTag.CosmeticSystem", "CosmeticAttachInfo");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, GorillaTag.CosmeticSystem.GTHardCodedBones::SturdyEBone, GorillaTag.XformOffset, StringEnum`1<TEnum>
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.CosmeticAttachInfo
struct CORDL_TYPE CosmeticAttachInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x5d46ea8, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  selectSide, ::GlobalNamespace::GTHardCodedBones_EBone  parentBone, ::GorillaTag::XformOffset  offset) ;

/// @brief Method get_Identity, addr 0x5d46dc0, size 0xe8, virtual false, abstract: false, final false
static inline ::GorillaTag::CosmeticSystem::CosmeticAttachInfo get_Identity() ;

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticAttachInfo() ;

// Ctor Parameters [CppParam { name: "selectSide", ty: "::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentBone", ty: "::GlobalNamespace::GTHardCodedBones_SturdyEBone", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticAttachInfo(::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>  selectSide, ::GlobalNamespace::GTHardCodedBones_SturdyEBone  parentBone, ::GorillaTag::XformOffset  offset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4745};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// [Tooltip("(Not used for holdables) Determines if the cosmetic part be shown depending on the hand that is used to press the in-game wardrobe \"EQUIP\" button.\n- Both: Show no matter what hand is used.\n- Left: Only show if the left hand selected.\n- Right: Only show if the right hand selected.\n")]
/// @brief Field selectSide, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::StringEnum_1<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>  selectSide;

/// @brief Field parentBone, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::GTHardCodedBones_SturdyEBone  parentBone;

/// @brief Field offset, offset: 0x18, size: 0x34, def value: None
 ::GorillaTag::XformOffset  offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAttachInfo, selectSide) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAttachInfo, parentBone) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAttachInfo, offset) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticAttachInfo) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
