#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticAnchorAntiClipEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticAnchorAntiClipEntry)
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct CosmeticAnchorAntiClipEntry;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry, "GorillaTag.CosmeticSystem", "CosmeticAnchorAntiClipEntry");
// Dependencies GorillaTag.XformOffset
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.CosmeticAnchorAntiClipEntry
struct CORDL_TYPE CosmeticAnchorAntiClipEntry {
public:
// Declarations
/// @brief Field Identity, offset 0xffffffff, size 0x38 
 __declspec(property(get=getStaticF_Identity, put=setStaticF_Identity)) ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  Identity;

static inline ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry getStaticF_Identity() ;

static inline void setStaticF_Identity(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticAnchorAntiClipEntry() ;

// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "::GorillaTag::XformOffset", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticAnchorAntiClipEntry(bool  enabled, ::GorillaTag::XformOffset  offset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
 bool  enabled;

/// @brief Field offset, offset: 0x4, size: 0x34, def value: None
 ::GorillaTag::XformOffset  offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry, offset) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
