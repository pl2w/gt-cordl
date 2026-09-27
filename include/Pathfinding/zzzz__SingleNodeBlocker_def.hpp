#pragma once
// IWYU pragma private; include "Pathfinding/SingleNodeBlocker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SingleNodeBlocker)
namespace Pathfinding {
class BlockManager;
}
namespace Pathfinding {
class GraphNode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class SingleNodeBlocker;
}
// Write type traits
MARK_REF_T(::Pathfinding::SingleNodeBlocker*);
DEFINE_IL2CPP_CLASS(::Pathfinding::SingleNodeBlocker*, "Pathfinding", "SingleNodeBlocker");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_single_node_blocker.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.SingleNodeBlocker
class CORDL_TYPE SingleNodeBlocker : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field <lastBlocked>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastBlocked_k__BackingField, put=__cordl_internal_set__lastBlocked_k__BackingField)) ::Pathfinding::GraphNode*  _lastBlocked_k__BackingField;

 __declspec(property(get=get_lastBlocked, put=set_lastBlocked)) ::Pathfinding::GraphNode*  lastBlocked;

/// @brief Field manager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::Pathfinding::BlockManager>  manager;

/// @brief Method Block, addr 0x5eb31e4, size 0x88, virtual false, abstract: false, final false
inline void Block(::Pathfinding::GraphNode*  node) ;

/// @brief Method BlockAt, addr 0x5eb30c8, size 0xc8, virtual false, abstract: false, final false
inline void BlockAt(::UnityEngine::Vector3  position) ;

/// @brief Method BlockAtCurrentPosition, addr 0x5eb309c, size 0x2c, virtual false, abstract: false, final false
inline void BlockAtCurrentPosition() ;

static inline ::Pathfinding::SingleNodeBlocker* New_ctor() ;

/// @brief Method Unblock, addr 0x5eb3190, size 0x54, virtual false, abstract: false, final false
inline void Unblock() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get__lastBlocked_k__BackingField() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get__lastBlocked_k__BackingField() ;

constexpr ::UnityW<::Pathfinding::BlockManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::Pathfinding::BlockManager>& __cordl_internal_get_manager() ;

constexpr void __cordl_internal_set__lastBlocked_k__BackingField(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_manager(::UnityW<::Pathfinding::BlockManager>  value) ;

/// @brief Method .ctor, addr 0x5eb326c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_lastBlocked, addr 0x5eb308c, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* get_lastBlocked() ;

/// [CompilerGenerated]
/// @brief Method set_lastBlocked, addr 0x5eb3094, size 0x8, virtual false, abstract: false, final false
inline void set_lastBlocked(::Pathfinding::GraphNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleNodeBlocker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleNodeBlocker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleNodeBlocker(SingleNodeBlocker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleNodeBlocker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleNodeBlocker(SingleNodeBlocker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21408};

/// [CompilerGenerated]
/// @brief Field <lastBlocked>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ____lastBlocked_k__BackingField;

/// @brief Field manager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Pathfinding::BlockManager>  ___manager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::SingleNodeBlocker, ____lastBlocked_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::SingleNodeBlocker, ___manager) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::SingleNodeBlocker) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
