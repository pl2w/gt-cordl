#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefTargetIdSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefIdBaseSO_def.hpp"
CORDL_MODULE_EXPORT(GuidedRefTargetIdSO)
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class GuidedRefTargetIdSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*, "GorillaTag.GuidedRefs", "GuidedRefTargetIdSO");
// [CreateAssetMenu(fileName = "Unnamed_GuidedRefTargetIdSO", menuName = "Gorilla Tag/GuidedRefTargetIdSO")]
// Dependencies GorillaTag.GuidedRefs.GuidedRefIdBaseSO
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.GuidedRefTargetIdSO
class CORDL_TYPE GuidedRefTargetIdSO : public ::GorillaTag::GuidedRefs::GuidedRefIdBaseSO {
public:
// Declarations
static inline ::GorillaTag::GuidedRefs::GuidedRefTargetIdSO* New_ctor() ;

/// @brief Method .ctor, addr 0x5d45414, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefTargetIdSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefTargetIdSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidedRefTargetIdSO(GuidedRefTargetIdSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefTargetIdSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidedRefTargetIdSO(GuidedRefTargetIdSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4726};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefTargetIdSO) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
