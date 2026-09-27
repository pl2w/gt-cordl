#pragma once
// IWYU pragma private; include "Pathfinding/Examples/SnapToNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SnapToNode)
// Forward declare root types
namespace Pathfinding::Examples {
class SnapToNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::SnapToNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::SnapToNode*, "Pathfinding.Examples", "SnapToNode");
// [ExecuteInEditMode]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_snap_to_node.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.SnapToNode
class CORDL_TYPE SnapToNode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Pathfinding::Examples::SnapToNode* New_ctor() ;

/// @brief Method Update, addr 0x5efb4f0, size 0x194, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5efb684, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapToNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapToNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapToNode(SnapToNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapToNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapToNode(SnapToNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21551};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Examples::SnapToNode) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Examples
