#pragma once
// IWYU pragma private; include "GorillaTag/StaticLodGroupExcluder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StaticLodGroupExcluder)
// Forward declare root types
namespace GorillaTag {
class StaticLodGroupExcluder;
}
// Write type traits
MARK_REF_T(::GorillaTag::StaticLodGroupExcluder*);
DEFINE_IL2CPP_CLASS(::GorillaTag::StaticLodGroupExcluder*, "GorillaTag", "StaticLodGroupExcluder");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.StaticLodGroupExcluder
class CORDL_TYPE StaticLodGroupExcluder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GorillaTag::StaticLodGroupExcluder* New_ctor() ;

/// @brief Method .ctor, addr 0x5d24cec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticLodGroupExcluder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticLodGroupExcluder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticLodGroupExcluder(StaticLodGroupExcluder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticLodGroupExcluder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticLodGroupExcluder(StaticLodGroupExcluder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::StaticLodGroupExcluder) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag
