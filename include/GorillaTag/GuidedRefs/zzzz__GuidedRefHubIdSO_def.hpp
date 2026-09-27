#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefHubIdSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefIdBaseSO_def.hpp"
CORDL_MODULE_EXPORT(GuidedRefHubIdSO)
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class GuidedRefHubIdSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::GuidedRefHubIdSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GuidedRefHubIdSO*, "GorillaTag.GuidedRefs", "GuidedRefHubIdSO");
// [CreateAssetMenu(fileName = "Unnamed_GuidedRefHubIdSO", menuName = "Gorilla Tag/GuidedRefHubIdSO")]
// Dependencies GorillaTag.GuidedRefs.GuidedRefIdBaseSO
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.GuidedRefHubIdSO
class CORDL_TYPE GuidedRefHubIdSO : public ::GorillaTag::GuidedRefs::GuidedRefIdBaseSO {
public:
// Declarations
static inline ::GorillaTag::GuidedRefs::GuidedRefHubIdSO* New_ctor() ;

/// @brief Method .ctor, addr 0x5d453f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefHubIdSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefHubIdSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidedRefHubIdSO(GuidedRefHubIdSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefHubIdSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidedRefHubIdSO(GuidedRefHubIdSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4721};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefHubIdSO) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
