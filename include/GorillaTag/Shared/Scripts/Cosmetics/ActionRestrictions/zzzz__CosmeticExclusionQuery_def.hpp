#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CosmeticExclusionQuery)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
class CosmeticExclusionQuery;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionQuery*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionQuery*, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "CosmeticExclusionQuery");
// Dependencies System.Object
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.CosmeticExclusionQuery
class CORDL_TYPE CosmeticExclusionQuery : public ::System::Object {
public:
// Declarations
/// @brief Method IsRestricted, addr 0x5d4db98, size 0x114, virtual false, abstract: false, final false
static inline bool IsRestricted(::GlobalNamespace::VRRig*  ownerRig, ::UnityEngine::GameObject*  effectSource) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticExclusionQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionQuery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticExclusionQuery(CosmeticExclusionQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionQuery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticExclusionQuery(CosmeticExclusionQuery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4770};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionQuery) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions
