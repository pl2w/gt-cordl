#pragma once
// IWYU pragma private; include "Pathfinding/BBTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__BBTree_BBTreeBox_def.hpp"
#include "Pathfinding/zzzz__TriangleMeshNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BBTree)
namespace GlobalNamespace {
struct BBTree_BBTreeBox;
}
namespace Pathfinding::Util {
class IAstarPooledObject;
}
namespace Pathfinding {
struct IntRect;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
struct NNInfoInternal;
}
namespace Pathfinding {
class TriangleMeshNode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class BBTree;
}
// Write type traits
MARK_REF_T(::Pathfinding::BBTree*);
DEFINE_IL2CPP_CLASS(::Pathfinding::BBTree*, "Pathfinding", "BBTree");
// Dependencies Pathfinding.BBTree::BBTreeBox, Pathfinding.TriangleMeshNode, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.BBTree
class CORDL_TYPE BBTree : public ::System::Object {
public:
// Declarations
using BBTreeBox = ::GlobalNamespace::BBTree_BBTreeBox;

 __declspec(property(get=get_Size)) ::UnityEngine::Rect  Size;

/// @brief Field count, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field leafNodes, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_leafNodes, put=__cordl_internal_set_leafNodes)) int32_t  leafNodes;

/// @brief Field nodeLookup, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeLookup, put=__cordl_internal_set_nodeLookup)) ::ArrayW<::Pathfinding::TriangleMeshNode*>  nodeLookup;

/// @brief Field tree, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tree, put=__cordl_internal_set_tree)) ::ArrayW<::GlobalNamespace::BBTree_BBTreeBox>  tree;

/// @brief Convert operator to "::Pathfinding::Util::IAstarPooledObject"
constexpr operator  ::Pathfinding::Util::IAstarPooledObject*() noexcept;

/// @brief Method Clear, addr 0x5e94424, size 0x1a8, virtual false, abstract: false, final false
inline void Clear() ;

/// [Conditional("ASTARDEBUG")]
/// @brief Method DrawDebugNode, addr 0x5e94f08, size 0x3d4, virtual false, abstract: false, final false
static inline void DrawDebugNode(::Pathfinding::TriangleMeshNode*  node, float_t  yoffset, ::UnityEngine::Color  color) ;

/// [Conditional("ASTARDEBUG")]
/// @brief Method DrawDebugRect, addr 0x5e94de8, size 0x120, virtual false, abstract: false, final false
static inline void DrawDebugRect(::Pathfinding::IntRect  rect) ;

/// @brief Method EnsureCapacity, addr 0x5e945d0, size 0xe8, virtual false, abstract: false, final false
inline void EnsureCapacity(int32_t  c) ;

/// @brief Method EnsureNodeCapacity, addr 0x5e946b8, size 0xe8, virtual false, abstract: false, final false
inline void EnsureNodeCapacity(int32_t  c) ;

/// @brief Method GetBox, addr 0x5e947a0, size 0x8c, virtual false, abstract: false, final false
inline int32_t GetBox(::Pathfinding::IntRect  rect) ;

/// @brief Method GetOrderedChildren, addr 0x5e958b8, size 0xdc, virtual false, abstract: false, final false
inline void GetOrderedChildren(::by_ref<int32_t>  first, ::by_ref<int32_t>  second, ::by_ref<float_t>  firstDist, ::by_ref<float_t>  secondDist, ::UnityEngine::Vector3  p) ;

static inline ::Pathfinding::BBTree* New_ctor() ;

/// @brief Method NodeBounds, addr 0x5e94c80, size 0x168, virtual false, abstract: false, final false
static inline ::Pathfinding::IntRect NodeBounds(::ArrayW<int32_t>  permutation, ::ArrayW<::Pathfinding::IntRect>  nodeBounds, int32_t  from, int32_t  to) ;

/// @brief Method NodeIntersectsCircle, addr 0x5e9605c, size 0x8c, virtual false, abstract: false, final false
static inline bool NodeIntersectsCircle(::Pathfinding::TriangleMeshNode*  node, ::UnityEngine::Vector3  p, float_t  radius) ;

/// @brief Method OnDrawGizmos, addr 0x5e95ea0, size 0x44, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmos, addr 0x5e95ee4, size 0x178, virtual false, abstract: false, final false
inline void OnDrawGizmos(int32_t  boxi, int32_t  depth) ;

/// @brief Method Pathfinding.Util.IAstarPooledObject.OnEnterPool, addr 0x5e945cc, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_Util_IAstarPooledObject_OnEnterPool() ;

/// @brief Method QueryClosest, addr 0x5e952dc, size 0xbc, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfoInternal QueryClosest(::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint, ::by_ref<float_t>  distance) ;

/// @brief Method QueryClosest, addr 0x5e95398, size 0xe0, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfoInternal QueryClosest(::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint, ::by_ref<float_t>  distance, ::Pathfinding::NNInfoInternal  previous) ;

/// @brief Method QueryClosestXZ, addr 0x5e95478, size 0xe0, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfoInternal QueryClosestXZ(::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint, ::by_ref<float_t>  distance, ::Pathfinding::NNInfoInternal  previous) ;

/// @brief Method QueryInside, addr 0x5e95bc8, size 0xb0, virtual false, abstract: false, final false
inline ::Pathfinding::TriangleMeshNode* QueryInside(::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method RebuildFrom, addr 0x5e91e04, size 0x36c, virtual false, abstract: false, final false
inline void RebuildFrom(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes) ;

/// @brief Method RebuildFromInternal, addr 0x5e94844, size 0x314, virtual false, abstract: false, final false
inline int32_t RebuildFromInternal(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes, ::ArrayW<int32_t>  permutation, ::ArrayW<::Pathfinding::IntRect>  nodeBounds, int32_t  from, int32_t  to, bool  odd) ;

/// @brief Method RectIntersectsCircle, addr 0x5e960e8, size 0x10c, virtual false, abstract: false, final false
static inline bool RectIntersectsCircle(::Pathfinding::IntRect  r, ::UnityEngine::Vector3  p, float_t  radius) ;

/// @brief Method SearchBoxClosest, addr 0x5e95994, size 0x234, virtual false, abstract: false, final false
inline void SearchBoxClosest(int32_t  boxi, ::UnityEngine::Vector3  p, ::by_ref<float_t>  closestSqrDist, ::Pathfinding::NNConstraint*  constraint, ::by_ref<::Pathfinding::NNInfoInternal>  nnInfo) ;

/// @brief Method SearchBoxClosestXZ, addr 0x5e9563c, size 0x26c, virtual false, abstract: false, final false
inline void SearchBoxClosestXZ(int32_t  boxi, ::UnityEngine::Vector3  p, ::by_ref<float_t>  closestSqrDist, ::Pathfinding::NNConstraint*  constraint, ::by_ref<::Pathfinding::NNInfoInternal>  nnInfo) ;

/// @brief Method SearchBoxInside, addr 0x5e95ca8, size 0x1f8, virtual false, abstract: false, final false
inline ::Pathfinding::TriangleMeshNode* SearchBoxInside(int32_t  boxi, ::UnityEngine::Vector3  p, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method SplitByX, addr 0x5e94b58, size 0x94, virtual false, abstract: false, final false
static inline int32_t SplitByX(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes, ::ArrayW<int32_t>  permutation, int32_t  from, int32_t  to, int32_t  divider) ;

/// @brief Method SplitByZ, addr 0x5e94bec, size 0x94, virtual false, abstract: false, final false
static inline int32_t SplitByZ(::ArrayW<::Pathfinding::TriangleMeshNode*>  nodes, ::ArrayW<int32_t>  permutation, int32_t  from, int32_t  to, int32_t  divider) ;

/// @brief Method SquaredRectPointDistance, addr 0x5e95558, size 0xe4, virtual false, abstract: false, final false
static inline float_t SquaredRectPointDistance(::Pathfinding::IntRect  r, ::UnityEngine::Vector3  p) ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr int32_t const& __cordl_internal_get_leafNodes() const;

constexpr int32_t& __cordl_internal_get_leafNodes() ;

constexpr ::ArrayW<::Pathfinding::TriangleMeshNode*> const& __cordl_internal_get_nodeLookup() const;

constexpr ::ArrayW<::Pathfinding::TriangleMeshNode*>& __cordl_internal_get_nodeLookup() ;

constexpr ::ArrayW<::GlobalNamespace::BBTree_BBTreeBox> const& __cordl_internal_get_tree() const;

constexpr ::ArrayW<::GlobalNamespace::BBTree_BBTreeBox>& __cordl_internal_get_tree() ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_leafNodes(int32_t  value) ;

constexpr void __cordl_internal_set_nodeLookup(::ArrayW<::Pathfinding::TriangleMeshNode*>  value) ;

constexpr void __cordl_internal_set_tree(::ArrayW<::GlobalNamespace::BBTree_BBTreeBox>  value) ;

/// @brief Method .ctor, addr 0x5e91dfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Size, addr 0x5e943bc, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_Size() ;

/// @brief Convert to "::Pathfinding::Util::IAstarPooledObject"
constexpr ::Pathfinding::Util::IAstarPooledObject* i___Pathfinding__Util__IAstarPooledObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BBTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BBTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BBTree(BBTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BBTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BBTree(BBTree const& ) = delete;

/// @brief Field MaximumLeafSize offset 0xffffffff size 0x4
static constexpr int32_t  MaximumLeafSize{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21338};

/// @brief Field tree, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BBTree_BBTreeBox>  ___tree;

/// @brief Field nodeLookup, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::TriangleMeshNode*>  ___nodeLookup;

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field leafNodes, offset: 0x24, size: 0x4, def value: None
 int32_t  ___leafNodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::BBTree, ___tree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BBTree, ___nodeLookup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BBTree, ___count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::BBTree, ___leafNodes) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::BBTree) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
