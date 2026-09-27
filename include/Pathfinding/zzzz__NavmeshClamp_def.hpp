#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshClamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(NavmeshClamp)
namespace Pathfinding {
class GraphNode;
}
// Forward declare root types
namespace Pathfinding {
class NavmeshClamp;
}
// Write type traits
MARK_REF_T(::Pathfinding::NavmeshClamp*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshClamp*, "Pathfinding", "NavmeshClamp");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_navmesh_clamp.php")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshClamp
class CORDL_TYPE NavmeshClamp : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field prevNode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevNode, put=__cordl_internal_set_prevNode)) ::Pathfinding::GraphNode*  prevNode;

/// @brief Field prevPos, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_prevPos, put=__cordl_internal_set_prevPos)) ::UnityEngine::Vector3  prevPos;

/// @brief Method LateUpdate, addr 0x5e6ae84, size 0x474, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Pathfinding::NavmeshClamp* New_ctor() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_prevNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_prevNode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_prevPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_prevPos() ;

constexpr void __cordl_internal_set_prevNode(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_prevPos(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5e6b2f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshClamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshClamp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshClamp(NavmeshClamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshClamp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshClamp(NavmeshClamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21284};

/// @brief Field prevNode, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___prevNode;

/// @brief Field prevPos, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___prevPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshClamp, ___prevNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshClamp, ___prevPos) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshClamp) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
