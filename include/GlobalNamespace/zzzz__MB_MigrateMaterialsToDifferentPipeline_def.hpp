#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_MigrateMaterialsToDifferentPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MB_MigrateMaterialsToDifferentPipeline)
// Forward declare root types
namespace GlobalNamespace {
class MB_MigrateMaterialsToDifferentPipeline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline*, "", "MB_MigrateMaterialsToDifferentPipeline");
// [ExecuteInEditMode]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_MigrateMaterialsToDifferentPipeline
class CORDL_TYPE MB_MigrateMaterialsToDifferentPipeline : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline* New_ctor() ;

/// @brief Method .ctor, addr 0x9dfd8e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_MigrateMaterialsToDifferentPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_MigrateMaterialsToDifferentPipeline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_MigrateMaterialsToDifferentPipeline(MB_MigrateMaterialsToDifferentPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_MigrateMaterialsToDifferentPipeline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_MigrateMaterialsToDifferentPipeline(MB_MigrateMaterialsToDifferentPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32364};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MB_MigrateMaterialsToDifferentPipeline) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
