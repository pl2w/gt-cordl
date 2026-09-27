#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CosmeticExclusionSource)
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
class CosmeticExclusionSource;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource*, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "CosmeticExclusionSource");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.CosmeticExclusionSource
class CORDL_TYPE CosmeticExclusionSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method IsRestricted, addr 0x5d4dd7c, size 0x94, virtual false, abstract: false, final false
inline bool IsRestricted() ;

static inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource* New_ctor() ;

/// @brief Method .ctor, addr 0x5d4df9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticExclusionSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticExclusionSource(CosmeticExclusionSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticExclusionSource(CosmeticExclusionSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionSource) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions
