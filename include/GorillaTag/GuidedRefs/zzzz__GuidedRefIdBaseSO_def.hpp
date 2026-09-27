#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefIdBaseSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GuidedRefIdBaseSO)
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class GuidedRefIdBaseSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GuidedRefIdBaseSO*, "GorillaTag.GuidedRefs", "GuidedRefIdBaseSO");
// Dependencies UnityEngine.ScriptableObject
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.GuidedRefIdBaseSO
class CORDL_TYPE GuidedRefIdBaseSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID, addr 0x5d4540c, size 0x8, virtual true, abstract: false, final true
inline int32_t GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID() ;

/// @brief Method GuidedRefInitialize, addr 0x5d45408, size 0x4, virtual true, abstract: false, final false
inline void GuidedRefInitialize() ;

static inline ::GorillaTag::GuidedRefs::GuidedRefIdBaseSO* New_ctor() ;

/// @brief Method .ctor, addr 0x5d45400, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GuidedRefIdBaseSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefIdBaseSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GuidedRefIdBaseSO(GuidedRefIdBaseSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GuidedRefIdBaseSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GuidedRefIdBaseSO(GuidedRefIdBaseSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4722};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefIdBaseSO) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
