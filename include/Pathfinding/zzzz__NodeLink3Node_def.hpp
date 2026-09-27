#pragma once
// IWYU pragma private; include "Pathfinding/NodeLink3Node.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__PointNode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(NodeLink3Node)
namespace GlobalNamespace {
class AstarPath;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class NodeLink3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class NodeLink3Node;
}
// Write type traits
MARK_REF_T(::Pathfinding::NodeLink3Node*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NodeLink3Node*, "Pathfinding", "NodeLink3Node");
// Dependencies Pathfinding.PointNode, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NodeLink3Node
class CORDL_TYPE NodeLink3Node : public ::Pathfinding::PointNode {
public:
// Declarations
/// @brief Field link, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_link, put=__cordl_internal_set_link)) ::UnityW<::Pathfinding::NodeLink3>  link;

/// @brief Field portalA, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_portalA, put=__cordl_internal_set_portalA)) ::UnityEngine::Vector3  portalA;

/// @brief Field portalB, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_portalB, put=__cordl_internal_set_portalB)) ::UnityEngine::Vector3  portalB;

/// @brief Method GetOther, addr 0x5e607e0, size 0x160, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* GetOther(::Pathfinding::GraphNode*  a) ;

/// @brief Method GetOtherInternal, addr 0x5e60940, size 0x3c, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* GetOtherInternal(::Pathfinding::GraphNode*  a) ;

/// @brief Method GetPortal, addr 0x5e60618, size 0x1c8, virtual true, abstract: false, final false
inline bool GetPortal(::Pathfinding::GraphNode*  other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards) ;

static inline ::Pathfinding::NodeLink3Node* New_ctor(::GlobalNamespace::AstarPath*  active) ;

constexpr ::UnityW<::Pathfinding::NodeLink3> const& __cordl_internal_get_link() const;

constexpr ::UnityW<::Pathfinding::NodeLink3>& __cordl_internal_get_link() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_portalA() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_portalA() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_portalB() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_portalB() ;

constexpr void __cordl_internal_set_link(::UnityW<::Pathfinding::NodeLink3>  value) ;

constexpr void __cordl_internal_set_portalA(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_portalB(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5e60610, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  active) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeLink3Node() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeLink3Node", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeLink3Node(NodeLink3Node && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeLink3Node", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeLink3Node(NodeLink3Node const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21257};

/// @brief Field link, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Pathfinding::NodeLink3>  ___link;

/// @brief Field portalA, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___portalA;

/// @brief Field portalB, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___portalB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NodeLink3Node, ___link) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3Node, ___portalA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3Node, ___portalB) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NodeLink3Node) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding
