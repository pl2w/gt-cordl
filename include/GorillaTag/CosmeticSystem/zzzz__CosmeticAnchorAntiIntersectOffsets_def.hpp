#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticAnchorAntiIntersectOffsets.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAnchorAntiClipEntry_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticAnchorAntiIntersectOffsets)
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct CosmeticAnchorAntiIntersectOffsets;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, "GorillaTag.CosmeticSystem", "CosmeticAnchorAntiIntersectOffsets");
// Dependencies GorillaTag.CosmeticSystem.CosmeticAnchorAntiClipEntry
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.CosmeticAnchorAntiIntersectOffsets
struct CORDL_TYPE CosmeticAnchorAntiIntersectOffsets {
public:
// Declarations
/// @brief Field Identity, offset 0xffffffff, size 0x1f8 
 __declspec(property(get=getStaticF_Identity, put=setStaticF_Identity)) ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  Identity;

static inline ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets getStaticF_Identity() ;

static inline void setStaticF_Identity(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticAnchorAntiIntersectOffsets() ;

// Ctor Parameters [CppParam { name: "nameTag", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftArm", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightArm", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "chest", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "huntComputer", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "badge", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "builderWatch", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "friendshipBraceletLeft", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry", modifiers: "", def_value: None, comment: None }, CppParam { name: "friendshipBraceletRight", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticAnchorAntiIntersectOffsets(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  nameTag, ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  leftArm, ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  rightArm, ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  chest, ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  huntComputer, ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  badge, ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  builderWatch, ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  friendshipBraceletLeft, ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  friendshipBraceletRight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4742};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1f8};

/// @brief Field nameTag, offset: 0x0, size: 0x38, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  nameTag;

/// @brief Field leftArm, offset: 0x38, size: 0x38, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  leftArm;

/// @brief Field rightArm, offset: 0x70, size: 0x38, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  rightArm;

/// @brief Field chest, offset: 0xa8, size: 0x38, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  chest;

/// @brief Field huntComputer, offset: 0xe0, size: 0x38, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  huntComputer;

/// @brief Field badge, offset: 0x118, size: 0x38, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  badge;

/// @brief Field builderWatch, offset: 0x150, size: 0x38, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  builderWatch;

/// @brief Field friendshipBraceletLeft, offset: 0x188, size: 0x38, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  friendshipBraceletLeft;

/// [FormerlySerializedAs("friendshipBradceletRight")]
/// @brief Field friendshipBraceletRight, offset: 0x1c0, size: 0x38, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  friendshipBraceletRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, nameTag) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, leftArm) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, rightArm) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, chest) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, huntComputer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, badge) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, builderWatch) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, friendshipBraceletLeft) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets, friendshipBraceletRight) == 0x1c0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets) == 0x1f8, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
