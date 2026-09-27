#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CellTreeNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_ENodeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CellTreeNode)
namespace GlobalNamespace {
struct CellTreeNode_ENodeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class CellTreeNode;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::CellTreeNode*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::CellTreeNode*, "Photon.Pun.UtilityScripts", "CellTreeNode");
// Dependencies Photon.Pun.UtilityScripts.CellTreeNode::ENodeType, System.Object, UnityEngine.Vector3
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.CellTreeNode
class CORDL_TYPE CellTreeNode : public ::System::Object {
public:
// Declarations
using ENodeType = ::GlobalNamespace::CellTreeNode_ENodeType;

/// @brief Field BottomRight, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_BottomRight, put=__cordl_internal_set_BottomRight)) ::UnityEngine::Vector3  BottomRight;

/// @brief Field Center, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_Center, put=__cordl_internal_set_Center)) ::UnityEngine::Vector3  Center;

/// @brief Field Childs, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Childs, put=__cordl_internal_set_Childs)) ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*  Childs;

/// @brief Field Id, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) uint8_t  Id;

/// @brief Field NodeType, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_NodeType, put=__cordl_internal_set_NodeType)) ::GlobalNamespace::CellTreeNode_ENodeType  NodeType;

/// @brief Field Parent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parent, put=__cordl_internal_set_Parent)) ::Photon::Pun::UtilityScripts::CellTreeNode*  Parent;

/// @brief Field Size, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_Size, put=__cordl_internal_set_Size)) ::UnityEngine::Vector3  Size;

/// @brief Field TopLeft, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_TopLeft, put=__cordl_internal_set_TopLeft)) ::UnityEngine::Vector3  TopLeft;

/// @brief Field maxDistance, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Method AddChild, addr 0xa72f6c0, size 0x104, virtual false, abstract: false, final false
inline void AddChild(::Photon::Pun::UtilityScripts::CellTreeNode*  child) ;

/// @brief Method Draw, addr 0xa72f7c4, size 0x4, virtual false, abstract: false, final false
inline void Draw() ;

/// @brief Method GetActiveCells, addr 0xa72f904, size 0x2a4, virtual false, abstract: false, final false
inline void GetActiveCells(::System::Collections::Generic::List_1<uint8_t>*  activeCells, bool  yIsUpAxis, ::UnityEngine::Vector3  position) ;

/// @brief Method IsPointInsideCell, addr 0xa72fd88, size 0x60, virtual false, abstract: false, final false
inline bool IsPointInsideCell(bool  yIsUpAxis, ::UnityEngine::Vector3  point) ;

/// @brief Method IsPointNearCell, addr 0xa72fd28, size 0x60, virtual false, abstract: false, final false
inline bool IsPointNearCell(bool  yIsUpAxis, ::UnityEngine::Vector3  point) ;

static inline ::Photon::Pun::UtilityScripts::CellTreeNode* New_ctor() ;

static inline ::Photon::Pun::UtilityScripts::CellTreeNode* New_ctor(uint8_t  id, ::GlobalNamespace::CellTreeNode_ENodeType  nodeType, ::Photon::Pun::UtilityScripts::CellTreeNode*  parent) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_BottomRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_BottomRight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Center() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>* const& __cordl_internal_get_Childs() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*& __cordl_internal_get_Childs() ;

constexpr uint8_t const& __cordl_internal_get_Id() const;

constexpr uint8_t& __cordl_internal_get_Id() ;

constexpr ::GlobalNamespace::CellTreeNode_ENodeType const& __cordl_internal_get_NodeType() const;

constexpr ::GlobalNamespace::CellTreeNode_ENodeType& __cordl_internal_get_NodeType() ;

constexpr ::Photon::Pun::UtilityScripts::CellTreeNode* const& __cordl_internal_get_Parent() const;

constexpr ::Photon::Pun::UtilityScripts::CellTreeNode*& __cordl_internal_get_Parent() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Size() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_TopLeft() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_TopLeft() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr void __cordl_internal_set_BottomRight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Childs(::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*  value) ;

constexpr void __cordl_internal_set_Id(uint8_t  value) ;

constexpr void __cordl_internal_set_NodeType(::GlobalNamespace::CellTreeNode_ENodeType  value) ;

constexpr void __cordl_internal_set_Parent(::Photon::Pun::UtilityScripts::CellTreeNode*  value) ;

constexpr void __cordl_internal_set_Size(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_TopLeft(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

/// @brief Method .ctor, addr 0xa72fd20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa72f3d8, size 0x48, virtual false, abstract: false, final false
inline void _ctor(uint8_t  id, ::GlobalNamespace::CellTreeNode_ENodeType  nodeType, ::Photon::Pun::UtilityScripts::CellTreeNode*  parent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CellTreeNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CellTreeNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CellTreeNode(CellTreeNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CellTreeNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CellTreeNode(CellTreeNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31203};

/// @brief Field Id, offset: 0x10, size: 0x1, def value: None
 uint8_t  ___Id;

/// @brief Field Center, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Center;

/// @brief Field Size, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Size;

/// @brief Field TopLeft, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___TopLeft;

/// @brief Field BottomRight, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___BottomRight;

/// @brief Field NodeType, offset: 0x44, size: 0x1, def value: None
 ::GlobalNamespace::CellTreeNode_ENodeType  ___NodeType;

/// @brief Field Parent, offset: 0x48, size: 0x8, def value: None
 ::Photon::Pun::UtilityScripts::CellTreeNode*  ___Parent;

/// @brief Field Childs, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*  ___Childs;

/// @brief Field maxDistance, offset: 0x58, size: 0x4, def value: None
 float_t  ___maxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Center) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___TopLeft) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___BottomRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___NodeType) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Parent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Childs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___maxDistance) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::CellTreeNode) == 0x60, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
