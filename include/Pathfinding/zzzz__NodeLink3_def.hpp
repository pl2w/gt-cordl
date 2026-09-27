#pragma once
// IWYU pragma private; include "Pathfinding/NodeLink3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphModifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NodeLink3)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class MeshNode;
}
namespace Pathfinding {
class NodeLink3Node;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding {
class NodeLink3;
}
// Write type traits
MARK_REF_T(::Pathfinding::NodeLink3*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NodeLink3*, "Pathfinding", "NodeLink3");
// [AddComponentMenu("Pathfinding/Link3")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_node_link3.php")]
// Dependencies Pathfinding.GraphModifier, UnityEngine.Color, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NodeLink3
class CORDL_TYPE NodeLink3 : public ::Pathfinding::GraphModifier {
public:
// Declarations
 __declspec(property(get=get_EndNode)) ::Pathfinding::GraphNode*  EndNode;

 __declspec(property(get=get_EndTransform)) ::UnityW<::UnityEngine::Transform>  EndTransform;

/// @brief Field GizmosColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_GizmosColor, put=setStaticF_GizmosColor)) ::UnityEngine::Color  GizmosColor;

/// @brief Field GizmosColorSelected, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_GizmosColorSelected, put=setStaticF_GizmosColorSelected)) ::UnityEngine::Color  GizmosColorSelected;

 __declspec(property(get=get_StartNode)) ::Pathfinding::GraphNode*  StartNode;

 __declspec(property(get=get_StartTransform)) ::UnityW<::UnityEngine::Transform>  StartTransform;

/// @brief Field clamped1, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_clamped1, put=__cordl_internal_set_clamped1)) ::UnityEngine::Vector3  clamped1;

/// @brief Field clamped2, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_clamped2, put=__cordl_internal_set_clamped2)) ::UnityEngine::Vector3  clamped2;

/// @brief Field connectedNode1, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedNode1, put=__cordl_internal_set_connectedNode1)) ::Pathfinding::MeshNode*  connectedNode1;

/// @brief Field connectedNode2, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedNode2, put=__cordl_internal_set_connectedNode2)) ::Pathfinding::MeshNode*  connectedNode2;

/// @brief Field costFactor, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_costFactor, put=__cordl_internal_set_costFactor)) float_t  costFactor;

/// @brief Field end, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityW<::UnityEngine::Transform>  end;

/// @brief Field endNode, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_endNode, put=__cordl_internal_set_endNode)) ::Pathfinding::NodeLink3Node*  endNode;

/// @brief Field oneWay, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_oneWay, put=__cordl_internal_set_oneWay)) bool  oneWay;

/// @brief Field postScanCalled, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_postScanCalled, put=__cordl_internal_set_postScanCalled)) bool  postScanCalled;

/// @brief Field reference, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reference, put=setStaticF_reference)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink3>>*  reference;

/// @brief Field startNode, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_startNode, put=__cordl_internal_set_startNode)) ::Pathfinding::NodeLink3Node*  startNode;

/// @brief Method Apply, addr 0x5e60e80, size 0x1294, virtual false, abstract: false, final false
inline void Apply(bool  forceNewCheck) ;

/// [ContextMenu("Recalculate neighbours")]
/// @brief Method ContextApplyForce, addr 0x5e624e8, size 0x70, virtual false, abstract: false, final false
inline void ContextApplyForce() ;

/// @brief Method GetNodeLink, addr 0x5e6097c, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::Pathfinding::NodeLink3> GetNodeLink(::Pathfinding::GraphNode*  node) ;

/// @brief Method InternalOnPostScan, addr 0x5e60b48, size 0x338, virtual false, abstract: false, final false
inline void InternalOnPostScan() ;

static inline ::Pathfinding::NodeLink3* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e62354, size 0x174, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5e62af4, size 0x8, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmos, addr 0x5e62560, size 0x594, virtual false, abstract: false, final false
inline void OnDrawGizmos(bool  selected) ;

/// @brief Method OnDrawGizmosSelected, addr 0x5e62558, size 0x8, virtual true, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5e62210, size 0x144, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGraphsPostUpdate, addr 0x5e62114, size 0xfc, virtual true, abstract: false, final false
inline void OnGraphsPostUpdate() ;

/// @brief Method OnPostScan, addr 0x5e60a34, size 0x114, virtual true, abstract: false, final false
inline void OnPostScan() ;

/// @brief Method RemoveConnections, addr 0x5e624c8, size 0x20, virtual false, abstract: false, final false
inline void RemoveConnections(::Pathfinding::GraphNode*  node) ;

/// [CompilerGenerated]
/// @brief Method <OnPostScan>b__20_0, addr 0x5e62c1c, size 0x14, virtual false, abstract: false, final false
inline bool _OnPostScan_b__20_0(bool  force) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_clamped1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_clamped1() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_clamped2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_clamped2() ;

constexpr ::Pathfinding::MeshNode* const& __cordl_internal_get_connectedNode1() const;

constexpr ::Pathfinding::MeshNode*& __cordl_internal_get_connectedNode1() ;

constexpr ::Pathfinding::MeshNode* const& __cordl_internal_get_connectedNode2() const;

constexpr ::Pathfinding::MeshNode*& __cordl_internal_get_connectedNode2() ;

constexpr float_t const& __cordl_internal_get_costFactor() const;

constexpr float_t& __cordl_internal_get_costFactor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_end() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_end() ;

constexpr ::Pathfinding::NodeLink3Node* const& __cordl_internal_get_endNode() const;

constexpr ::Pathfinding::NodeLink3Node*& __cordl_internal_get_endNode() ;

constexpr bool const& __cordl_internal_get_oneWay() const;

constexpr bool& __cordl_internal_get_oneWay() ;

constexpr bool const& __cordl_internal_get_postScanCalled() const;

constexpr bool& __cordl_internal_get_postScanCalled() ;

constexpr ::Pathfinding::NodeLink3Node* const& __cordl_internal_get_startNode() const;

constexpr ::Pathfinding::NodeLink3Node*& __cordl_internal_get_startNode() ;

constexpr void __cordl_internal_set_clamped1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_clamped2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_connectedNode1(::Pathfinding::MeshNode*  value) ;

constexpr void __cordl_internal_set_connectedNode2(::Pathfinding::MeshNode*  value) ;

constexpr void __cordl_internal_set_costFactor(float_t  value) ;

constexpr void __cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_endNode(::Pathfinding::NodeLink3Node*  value) ;

constexpr void __cordl_internal_set_oneWay(bool  value) ;

constexpr void __cordl_internal_set_postScanCalled(bool  value) ;

constexpr void __cordl_internal_set_startNode(::Pathfinding::NodeLink3Node*  value) ;

/// @brief Method .ctor, addr 0x5e62afc, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_GizmosColor() ;

static inline ::UnityEngine::Color getStaticF_GizmosColorSelected() ;

static inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink3>>* getStaticF_reference() ;

/// @brief Method get_EndNode, addr 0x5e60a2c, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* get_EndNode() ;

/// @brief Method get_EndTransform, addr 0x5e60a1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_EndTransform() ;

/// @brief Method get_StartNode, addr 0x5e60a24, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* get_StartNode() ;

/// @brief Method get_StartTransform, addr 0x5e60a14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_StartTransform() ;

static inline void setStaticF_GizmosColor(::UnityEngine::Color  value) ;

static inline void setStaticF_GizmosColorSelected(::UnityEngine::Color  value) ;

static inline void setStaticF_reference(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink3>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeLink3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeLink3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeLink3(NodeLink3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeLink3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeLink3(NodeLink3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21258};

/// @brief Field end, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___end;

/// @brief Field costFactor, offset: 0x48, size: 0x4, def value: None
 float_t  ___costFactor;

/// @brief Field oneWay, offset: 0x4c, size: 0x1, def value: None
 bool  ___oneWay;

/// @brief Field startNode, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::NodeLink3Node*  ___startNode;

/// @brief Field endNode, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::NodeLink3Node*  ___endNode;

/// @brief Field connectedNode1, offset: 0x60, size: 0x8, def value: None
 ::Pathfinding::MeshNode*  ___connectedNode1;

/// @brief Field connectedNode2, offset: 0x68, size: 0x8, def value: None
 ::Pathfinding::MeshNode*  ___connectedNode2;

/// @brief Field clamped1, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___clamped1;

/// @brief Field clamped2, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___clamped2;

/// @brief Field postScanCalled, offset: 0x88, size: 0x1, def value: None
 bool  ___postScanCalled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NodeLink3, ___end) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3, ___costFactor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3, ___oneWay) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3, ___startNode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3, ___endNode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3, ___connectedNode1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3, ___connectedNode2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3, ___clamped1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3, ___clamped2) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink3, ___postScanCalled) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NodeLink3) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding
