#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPatrolPathNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRPatrolPathNode)
// Forward declare root types
namespace GlobalNamespace {
class GRPatrolPathNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRPatrolPathNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPatrolPathNode*, "", "GRPatrolPathNode");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRPatrolPathNode
class CORDL_TYPE GRPatrolPathNode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GRPatrolPathNode* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x58a0254, size 0x100, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method .ctor, addr 0x58a0354, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRPatrolPathNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRPatrolPathNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRPatrolPathNode(GRPatrolPathNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRPatrolPathNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRPatrolPathNode(GRPatrolPathNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1998};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRPatrolPathNode) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
