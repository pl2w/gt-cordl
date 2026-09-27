#pragma once
// IWYU pragma private; include "Pathfinding/NodeLink2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphModifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NodeLink2)
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class PointNode;
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
class NodeLink2;
}
// Write type traits
MARK_REF_T(::Pathfinding::NodeLink2*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NodeLink2*, "Pathfinding", "NodeLink2");
// [AddComponentMenu("Pathfinding/Link2")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_node_link2.php")]
// Dependencies Pathfinding.GraphModifier, UnityEngine.Color, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NodeLink2
class CORDL_TYPE NodeLink2 : public ::Pathfinding::GraphModifier {
public:
// Declarations
/// @brief [Obsolete("Use endNode instead (lowercase e)")]
 __declspec(property(get=get_EndNode)) ::Pathfinding::GraphNode*  EndNode;

 __declspec(property(get=get_EndTransform)) ::UnityW<::UnityEngine::Transform>  EndTransform;

/// @brief Field GizmosColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_GizmosColor, put=setStaticF_GizmosColor)) ::UnityEngine::Color  GizmosColor;

/// @brief Field GizmosColorSelected, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_GizmosColorSelected, put=setStaticF_GizmosColorSelected)) ::UnityEngine::Color  GizmosColorSelected;

/// @brief [Obsolete("Use startNode instead (lowercase s)")]
 __declspec(property(get=get_StartNode)) ::Pathfinding::GraphNode*  StartNode;

 __declspec(property(get=get_StartTransform)) ::UnityW<::UnityEngine::Transform>  StartTransform;

/// @brief Field <endNode>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__endNode_k__BackingField, put=__cordl_internal_set__endNode_k__BackingField)) ::Pathfinding::PointNode*  _endNode_k__BackingField;

/// @brief Field <startNode>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__startNode_k__BackingField, put=__cordl_internal_set__startNode_k__BackingField)) ::Pathfinding::PointNode*  _startNode_k__BackingField;

/// @brief Field clamped1, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_clamped1, put=__cordl_internal_set_clamped1)) ::UnityEngine::Vector3  clamped1;

/// @brief Field clamped2, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_clamped2, put=__cordl_internal_set_clamped2)) ::UnityEngine::Vector3  clamped2;

/// @brief Field connectedNode1, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedNode1, put=__cordl_internal_set_connectedNode1)) ::Pathfinding::GraphNode*  connectedNode1;

/// @brief Field connectedNode2, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedNode2, put=__cordl_internal_set_connectedNode2)) ::Pathfinding::GraphNode*  connectedNode2;

/// @brief Field costFactor, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_costFactor, put=__cordl_internal_set_costFactor)) float_t  costFactor;

/// @brief Field end, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) ::UnityW<::UnityEngine::Transform>  end;

 __declspec(property(get=get_endNode, put=set_endNode)) ::Pathfinding::PointNode*  endNode;

/// @brief Field oneWay, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_oneWay, put=__cordl_internal_set_oneWay)) bool  oneWay;

/// @brief Field postScanCalled, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_postScanCalled, put=__cordl_internal_set_postScanCalled)) bool  postScanCalled;

/// @brief Field reference, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reference, put=setStaticF_reference)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink2>>*  reference;

 __declspec(property(get=get_startNode, put=set_startNode)) ::Pathfinding::PointNode*  startNode;

/// @brief Method Apply, addr 0x5e5eb2c, size 0x844, virtual false, abstract: false, final false
inline void Apply(bool  forceNewCheck) ;

/// [ContextMenu("Recalculate neighbours")]
/// @brief Method ContextApplyForce, addr 0x5e5f7b8, size 0x70, virtual false, abstract: false, final false
inline void ContextApplyForce() ;

/// @brief Method DeserializeReferences, addr 0x5e60050, size 0x4a0, virtual false, abstract: false, final false
static inline void DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method GetNodeLink, addr 0x5e5e5b0, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::Pathfinding::NodeLink2> GetNodeLink(::Pathfinding::GraphNode*  node) ;

/// @brief Method InternalOnPostScan, addr 0x5e5e68c, size 0x4a0, virtual false, abstract: false, final false
inline void InternalOnPostScan() ;

static inline ::Pathfinding::NodeLink2* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e5f624, size 0x174, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5e5fdcc, size 0x8, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmos, addr 0x5e5f838, size 0x594, virtual false, abstract: false, final false
inline void OnDrawGizmos(bool  selected) ;

/// @brief Method OnDrawGizmosSelected, addr 0x5e5f830, size 0x8, virtual true, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5e5f46c, size 0x1b8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGraphsPostUpdate, addr 0x5e5f370, size 0xfc, virtual true, abstract: false, final false
inline void OnGraphsPostUpdate() ;

/// @brief Method OnPostScan, addr 0x5e5e688, size 0x4, virtual true, abstract: false, final false
inline void OnPostScan() ;

/// @brief Method RemoveConnections, addr 0x5e5f798, size 0x20, virtual false, abstract: false, final false
inline void RemoveConnections(::Pathfinding::GraphNode*  node) ;

/// @brief Method SerializeReferences, addr 0x5e5fdd4, size 0x27c, virtual false, abstract: false, final false
static inline void SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

constexpr ::Pathfinding::PointNode* const& __cordl_internal_get__endNode_k__BackingField() const;

constexpr ::Pathfinding::PointNode*& __cordl_internal_get__endNode_k__BackingField() ;

constexpr ::Pathfinding::PointNode* const& __cordl_internal_get__startNode_k__BackingField() const;

constexpr ::Pathfinding::PointNode*& __cordl_internal_get__startNode_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_clamped1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_clamped1() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_clamped2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_clamped2() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_connectedNode1() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_connectedNode1() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_connectedNode2() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_connectedNode2() ;

constexpr float_t const& __cordl_internal_get_costFactor() const;

constexpr float_t& __cordl_internal_get_costFactor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_end() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_end() ;

constexpr bool const& __cordl_internal_get_oneWay() const;

constexpr bool& __cordl_internal_get_oneWay() ;

constexpr bool const& __cordl_internal_get_postScanCalled() const;

constexpr bool& __cordl_internal_get_postScanCalled() ;

constexpr void __cordl_internal_set__endNode_k__BackingField(::Pathfinding::PointNode*  value) ;

constexpr void __cordl_internal_set__startNode_k__BackingField(::Pathfinding::PointNode*  value) ;

constexpr void __cordl_internal_set_clamped1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_clamped2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_connectedNode1(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_connectedNode2(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_costFactor(float_t  value) ;

constexpr void __cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_oneWay(bool  value) ;

constexpr void __cordl_internal_set_postScanCalled(bool  value) ;

/// @brief Method .ctor, addr 0x5e604f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_GizmosColor() ;

static inline ::UnityEngine::Color getStaticF_GizmosColorSelected() ;

static inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink2>>* getStaticF_reference() ;

/// @brief Method get_EndNode, addr 0x5e5e680, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* get_EndNode() ;

/// @brief Method get_EndTransform, addr 0x5e5e650, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_EndTransform() ;

/// @brief Method get_StartNode, addr 0x5e5e678, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* get_StartNode() ;

/// @brief Method get_StartTransform, addr 0x5e5e648, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_StartTransform() ;

/// [CompilerGenerated]
/// @brief Method get_endNode, addr 0x5e5e668, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::PointNode* get_endNode() ;

/// [CompilerGenerated]
/// @brief Method get_startNode, addr 0x5e5e658, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::PointNode* get_startNode() ;

static inline void setStaticF_GizmosColor(::UnityEngine::Color  value) ;

static inline void setStaticF_GizmosColorSelected(::UnityEngine::Color  value) ;

static inline void setStaticF_reference(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink2>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_endNode, addr 0x5e5e670, size 0x8, virtual false, abstract: false, final false
inline void set_endNode(::Pathfinding::PointNode*  value) ;

/// [CompilerGenerated]
/// @brief Method set_startNode, addr 0x5e5e660, size 0x8, virtual false, abstract: false, final false
inline void set_startNode(::Pathfinding::PointNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodeLink2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodeLink2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodeLink2(NodeLink2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodeLink2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodeLink2(NodeLink2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21256};

/// @brief Field end, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___end;

/// @brief Field costFactor, offset: 0x48, size: 0x4, def value: None
 float_t  ___costFactor;

/// @brief Field oneWay, offset: 0x4c, size: 0x1, def value: None
 bool  ___oneWay;

/// [CompilerGenerated]
/// @brief Field <startNode>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::PointNode*  ____startNode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <endNode>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::PointNode*  ____endNode_k__BackingField;

/// @brief Field connectedNode1, offset: 0x60, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___connectedNode1;

/// @brief Field connectedNode2, offset: 0x68, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___connectedNode2;

/// @brief Field clamped1, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___clamped1;

/// @brief Field clamped2, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___clamped2;

/// @brief Field postScanCalled, offset: 0x88, size: 0x1, def value: None
 bool  ___postScanCalled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NodeLink2, ___end) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink2, ___costFactor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink2, ___oneWay) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink2, ____startNode_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink2, ____endNode_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink2, ___connectedNode1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink2, ___connectedNode2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink2, ___clamped1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink2, ___clamped2) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NodeLink2, ___postScanCalled) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NodeLink2) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding
