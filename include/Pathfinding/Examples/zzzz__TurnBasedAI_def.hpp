#pragma once
// IWYU pragma private; include "Pathfinding/Examples/TurnBasedAI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TurnBasedAI)
namespace Pathfinding {
class BlockManager_TraversalProvider;
}
namespace Pathfinding {
class BlockManager;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class SingleNodeBlocker;
}
// Forward declare root types
namespace Pathfinding::Examples {
class TurnBasedAI;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::TurnBasedAI*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::TurnBasedAI*, "Pathfinding.Examples", "TurnBasedAI");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_turn_based_a_i.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.TurnBasedAI
class CORDL_TYPE TurnBasedAI : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field blockManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blockManager, put=__cordl_internal_set_blockManager)) ::UnityW<::Pathfinding::BlockManager>  blockManager;

/// @brief Field blocker, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocker, put=__cordl_internal_set_blocker)) ::UnityW<::Pathfinding::SingleNodeBlocker>  blocker;

/// @brief Field movementPoints, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementPoints, put=__cordl_internal_set_movementPoints)) int32_t  movementPoints;

/// @brief Field targetNode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetNode, put=__cordl_internal_set_targetNode)) ::Pathfinding::GraphNode*  targetNode;

/// @brief Field traversalProvider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_traversalProvider, put=__cordl_internal_set_traversalProvider)) ::Pathfinding::BlockManager_TraversalProvider*  traversalProvider;

/// @brief Method Awake, addr 0x5eed91c, size 0x134, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Pathfinding::Examples::TurnBasedAI* New_ctor() ;

/// @brief Method Start, addr 0x5eed904, size 0x18, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Pathfinding::BlockManager> const& __cordl_internal_get_blockManager() const;

constexpr ::UnityW<::Pathfinding::BlockManager>& __cordl_internal_get_blockManager() ;

constexpr ::UnityW<::Pathfinding::SingleNodeBlocker> const& __cordl_internal_get_blocker() const;

constexpr ::UnityW<::Pathfinding::SingleNodeBlocker>& __cordl_internal_get_blocker() ;

constexpr int32_t const& __cordl_internal_get_movementPoints() const;

constexpr int32_t& __cordl_internal_get_movementPoints() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_targetNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_targetNode() ;

constexpr ::Pathfinding::BlockManager_TraversalProvider* const& __cordl_internal_get_traversalProvider() const;

constexpr ::Pathfinding::BlockManager_TraversalProvider*& __cordl_internal_get_traversalProvider() ;

constexpr void __cordl_internal_set_blockManager(::UnityW<::Pathfinding::BlockManager>  value) ;

constexpr void __cordl_internal_set_blocker(::UnityW<::Pathfinding::SingleNodeBlocker>  value) ;

constexpr void __cordl_internal_set_movementPoints(int32_t  value) ;

constexpr void __cordl_internal_set_targetNode(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_traversalProvider(::Pathfinding::BlockManager_TraversalProvider*  value) ;

/// @brief Method .ctor, addr 0x5eeda50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TurnBasedAI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedAI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnBasedAI(TurnBasedAI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedAI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnBasedAI(TurnBasedAI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21514};

/// @brief Field movementPoints, offset: 0x24, size: 0x4, def value: None
 int32_t  ___movementPoints;

/// @brief Field blockManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Pathfinding::BlockManager>  ___blockManager;

/// @brief Field blocker, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Pathfinding::SingleNodeBlocker>  ___blocker;

/// @brief Field targetNode, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___targetNode;

/// @brief Field traversalProvider, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::BlockManager_TraversalProvider*  ___traversalProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::TurnBasedAI, ___movementPoints) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedAI, ___blockManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedAI, ___blocker) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedAI, ___targetNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedAI, ___traversalProvider) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::TurnBasedAI) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Examples
