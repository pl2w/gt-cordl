#pragma once
// IWYU pragma private; include "GlobalNamespace/IndirectMeshGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(IndirectMeshGroup)
// Forward declare root types
namespace GlobalNamespace {
class IndirectMeshGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IndirectMeshGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IndirectMeshGroup*, "", "IndirectMeshGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: IndirectMeshGroup
class CORDL_TYPE IndirectMeshGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::IndirectMeshGroup* New_ctor() ;

/// @brief Method OnDisable, addr 0x56947fc, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x569444c, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x5694868, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndirectMeshGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndirectMeshGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IndirectMeshGroup(IndirectMeshGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndirectMeshGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndirectMeshGroup(IndirectMeshGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::IndirectMeshGroup) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
