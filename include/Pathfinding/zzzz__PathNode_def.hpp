#pragma once
// IWYU pragma private; include "Pathfinding/PathNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathNode)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class Path;
}
// Forward declare root types
namespace Pathfinding {
class PathNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::PathNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathNode*, "Pathfinding", "PathNode");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathNode
class CORDL_TYPE PathNode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_F)) uint32_t  F;

 __declspec(property(get=get_G, put=set_G)) uint32_t  G;

 __declspec(property(get=get_H, put=set_H)) uint32_t  H;

 __declspec(property(get=get_cost, put=set_cost)) uint32_t  cost;

 __declspec(property(get=get_flag1, put=set_flag1)) bool  flag1;

 __declspec(property(get=get_flag2, put=set_flag2)) bool  flag2;

/// @brief Field flags, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_flags, put=__cordl_internal_set_flags)) uint32_t  flags;

/// @brief Field g, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_g, put=__cordl_internal_set_g)) uint32_t  g;

/// @brief Field h, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_h, put=__cordl_internal_set_h)) uint32_t  h;

/// @brief Field heapIndex, offset 0x22, size 0x2 
 __declspec(property(get=__cordl_internal_get_heapIndex, put=__cordl_internal_set_heapIndex)) uint16_t  heapIndex;

/// @brief Field node, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::Pathfinding::GraphNode*  node;

/// @brief Field parent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Pathfinding::PathNode*  parent;

/// @brief Field pathID, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get_pathID, put=__cordl_internal_set_pathID)) uint16_t  pathID;

static inline ::Pathfinding::PathNode* New_ctor() ;

/// @brief Method UpdateG, addr 0x5e67de8, size 0x50, virtual false, abstract: false, final false
inline void UpdateG(::Pathfinding::Path*  path) ;

constexpr uint32_t const& __cordl_internal_get_flags() const;

constexpr uint32_t& __cordl_internal_get_flags() ;

constexpr uint32_t const& __cordl_internal_get_g() const;

constexpr uint32_t& __cordl_internal_get_g() ;

constexpr uint32_t const& __cordl_internal_get_h() const;

constexpr uint32_t& __cordl_internal_get_h() ;

constexpr uint16_t const& __cordl_internal_get_heapIndex() const;

constexpr uint16_t& __cordl_internal_get_heapIndex() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_node() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_node() ;

constexpr ::Pathfinding::PathNode* const& __cordl_internal_get_parent() const;

constexpr ::Pathfinding::PathNode*& __cordl_internal_get_parent() ;

constexpr uint16_t const& __cordl_internal_get_pathID() const;

constexpr uint16_t& __cordl_internal_get_pathID() ;

constexpr void __cordl_internal_set_flags(uint32_t  value) ;

constexpr void __cordl_internal_set_g(uint32_t  value) ;

constexpr void __cordl_internal_set_h(uint32_t  value) ;

constexpr void __cordl_internal_set_heapIndex(uint16_t  value) ;

constexpr void __cordl_internal_set_node(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_parent(::Pathfinding::PathNode*  value) ;

constexpr void __cordl_internal_set_pathID(uint16_t  value) ;

/// @brief Method .ctor, addr 0x5e6aca0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_F, addr 0x5e6ac94, size 0xc, virtual false, abstract: false, final false
inline uint32_t get_F() ;

/// @brief Method get_G, addr 0x5e6ac74, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_G() ;

/// @brief Method get_H, addr 0x5e6ac84, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_H() ;

/// @brief Method get_cost, addr 0x5e6abe4, size 0xc, virtual false, abstract: false, final false
inline uint32_t get_cost() ;

/// @brief Method get_flag1, addr 0x5e6ac04, size 0xc, virtual false, abstract: false, final false
inline bool get_flag1() ;

/// @brief Method get_flag2, addr 0x5e6ac3c, size 0xc, virtual false, abstract: false, final false
inline bool get_flag2() ;

/// @brief Method set_G, addr 0x5e6ac7c, size 0x8, virtual false, abstract: false, final false
inline void set_G(uint32_t  value) ;

/// @brief Method set_H, addr 0x5e6ac8c, size 0x8, virtual false, abstract: false, final false
inline void set_H(uint32_t  value) ;

/// @brief Method set_cost, addr 0x5e6abf0, size 0x14, virtual false, abstract: false, final false
inline void set_cost(uint32_t  value) ;

/// @brief Method set_flag1, addr 0x5e6ac10, size 0x2c, virtual false, abstract: false, final false
inline void set_flag1(bool  value) ;

/// @brief Method set_flag2, addr 0x5e6ac48, size 0x2c, virtual false, abstract: false, final false
inline void set_flag2(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathNode(PathNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathNode(PathNode const& ) = delete;

/// @brief Field CostMask offset 0xffffffff size 0x4
static constexpr uint32_t  CostMask{static_cast<uint32_t>(0xfffffffu)};

/// @brief Field Flag1Mask offset 0xffffffff size 0x4
static constexpr uint32_t  Flag1Mask{static_cast<uint32_t>(0x10000000u)};

/// @brief Field Flag1Offset offset 0xffffffff size 0x4
static constexpr int32_t  Flag1Offset{static_cast<int32_t>(0x1c)};

/// @brief Field Flag2Mask offset 0xffffffff size 0x4
static constexpr uint32_t  Flag2Mask{static_cast<uint32_t>(0x20000000u)};

/// @brief Field Flag2Offset offset 0xffffffff size 0x4
static constexpr int32_t  Flag2Offset{static_cast<int32_t>(0x1d)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21281};

/// @brief Field node, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___node;

/// @brief Field parent, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::PathNode*  ___parent;

/// @brief Field pathID, offset: 0x20, size: 0x2, def value: None
 uint16_t  ___pathID;

/// @brief Field heapIndex, offset: 0x22, size: 0x2, def value: None
 uint16_t  ___heapIndex;

/// @brief Field flags, offset: 0x24, size: 0x4, def value: None
 uint32_t  ___flags;

/// @brief Field g, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___g;

/// @brief Field h, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ___h;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathNode, ___node) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathNode, ___parent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathNode, ___pathID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathNode, ___heapIndex) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathNode, ___flags) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathNode, ___g) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathNode, ___h) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathNode) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
