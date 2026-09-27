#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVHNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__AABB_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BVHNode)
namespace Fusion::LagCompensation {
class BVH;
}
namespace Fusion {
class HitboxRoot_HitboxComparerX;
}
namespace Fusion {
class HitboxRoot_HitboxComparerY;
}
namespace Fusion {
class HitboxRoot_HitboxComparerZ;
}
namespace Fusion {
class HitboxRoot;
}
namespace GlobalNamespace {
struct BVHNode_Rot;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
struct BVHNode;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::BVHNode);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::BVHNode, "Fusion.LagCompensation", "BVHNode");
// Dependencies Fusion.LagCompensation.AABB, UnityEngine.Bounds
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.BVHNode
struct CORDL_TYPE BVHNode {
public:
// Declarations
using Rot = ::GlobalNamespace::BVHNode_Rot;

/// @brief Field ComparerX, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ComparerX, put=setStaticF_ComparerX)) ::Fusion::HitboxRoot_HitboxComparerX*  ComparerX;

/// @brief Field ComparerY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ComparerY, put=setStaticF_ComparerY)) ::Fusion::HitboxRoot_HitboxComparerY*  ComparerY;

/// @brief Field ComparerZ, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ComparerZ, put=setStaticF_ComparerZ)) ::Fusion::HitboxRoot_HitboxComparerZ*  ComparerZ;

 __declspec(property(get=get_HasLeft)) bool  HasLeft;

 __declspec(property(get=get_HasParent)) bool  HasParent;

 __declspec(property(get=get_HasRight)) bool  HasRight;

 __declspec(property(get=get_HasValidRoot)) bool  HasValidRoot;

 __declspec(property(get=get_Index)) int32_t  Index;

 __declspec(property(get=get_IsLeaf)) bool  IsLeaf;

 __declspec(property(get=get_IsRootNode)) bool  IsRootNode;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Method AABBofPair, addr 0x600fbc0, size 0xdc, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds AABBofPair(::by_ref<::Fusion::LagCompensation::BVHNode>  nodea, ::by_ref<::Fusion::LagCompensation::BVHNode>  nodeb) ;

/// @brief Method Add, addr 0x600d35c, size 0x80c, virtual false, abstract: false, final false
static inline void Add(::Fusion::LagCompensation::BVH*  bvh, ::by_ref<::Fusion::LagCompensation::BVHNode>  startNode, ::Fusion::HitboxRoot*  entry, ::by_ref<::UnityEngine::Bounds>  newObBox, float_t  newObSah) ;

/// @brief Method AddObjectPushdown, addr 0x6010394, size 0x228, virtual false, abstract: false, final false
static inline void AddObjectPushdown(::Fusion::LagCompensation::BVH*  bvh, ::by_ref<::Fusion::LagCompensation::BVHNode>  curNode, ::Fusion::HitboxRoot*  entry) ;

/// @brief Method AssignVolume, addr 0x600f2c8, size 0x84, virtual false, abstract: false, final false
inline void AssignVolume(::UnityEngine::Vector3  pos, float_t  radius, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method BoundsIntersectsSphere, addr 0x6010f40, size 0x70, virtual false, abstract: false, final false
inline bool BoundsIntersectsSphere(::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  origin, float_t  radius) ;

/// @brief Method BuildLog, addr 0x600e510, size 0x39c, virtual false, abstract: false, final false
inline void BuildLog(::System::Text::StringBuilder*  builder) ;

/// @brief Method ChildExpanded, addr 0x600ef48, size 0x380, virtual false, abstract: false, final false
inline void ChildExpanded(::Fusion::LagCompensation::BVH*  bvh, ::by_ref<::Fusion::LagCompensation::BVHNode>  child) ;

/// @brief Method ChildRefit, addr 0x600f4ac, size 0x360, virtual false, abstract: false, final false
static inline void ChildRefit(::Fusion::LagCompensation::BVH*  bvh, int32_t  nodeIndex, bool  propagate) ;

/// @brief Method ChildRefit, addr 0x6011280, size 0x6c, virtual false, abstract: false, final false
inline void ChildRefit(::Fusion::LagCompensation::BVH*  bvh, bool  propagate) ;

/// @brief Method ComputeMinVolume, addr 0x600f80c, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ComputeMinVolume(::Fusion::LagCompensation::BVH*  bvh) ;

/// @brief Method ComputeVolume, addr 0x600f34c, size 0x160, virtual false, abstract: false, final false
inline void ComputeVolume(::Fusion::LagCompensation::BVH*  bvh) ;

/// @brief Method ExpandVolume, addr 0x600ec1c, size 0x32c, virtual false, abstract: false, final false
inline void ExpandVolume(::Fusion::LagCompensation::BVH*  bvh, ::UnityEngine::Vector3  objectpos, float_t  radius, ::by_ref<::UnityEngine::Bounds>  bounds, bool  expandParent) ;

/// @brief Method FindOverlappingLeaves, addr 0x6010fb0, size 0x278, virtual false, abstract: false, final false
inline void FindOverlappingLeaves(::Fusion::LagCompensation::BVH*  bvh, ::UnityEngine::Bounds  aabb, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*  overlapList) ;

/// @brief Method FindOverlappingLeaves, addr 0x6010cd0, size 0x1f4, virtual false, abstract: false, final false
inline void FindOverlappingLeaves(::Fusion::LagCompensation::BVH*  bvh, ::UnityEngine::Vector3  origin, float_t  radius, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::BVHNode>*  overlapList) ;

/// @brief Method GetEntryBounds, addr 0x600fc9c, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetEntryBounds(::Fusion::HitboxRoot*  entry) ;

/// @brief Method GetLeft, addr 0x600e9f4, size 0x3c, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::LagCompensation::BVHNode> GetLeft(::Fusion::LagCompensation::BVH*  bvh) ;

/// @brief Method GetParent, addr 0x600e97c, size 0x3c, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::LagCompensation::BVHNode> GetParent(::Fusion::LagCompensation::BVH*  bvh) ;

/// @brief Method GetRight, addr 0x600e9b8, size 0x3c, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::LagCompensation::BVHNode> GetRight(::Fusion::LagCompensation::BVH*  bvh) ;

/// @brief Method InitNode, addr 0x600e0a0, size 0x2e4, virtual false, abstract: false, final false
static inline void InitNode(::by_ref<::Fusion::LagCompensation::BVHNode>  node, ::Fusion::LagCompensation::BVH*  bvh, int32_t  index, int32_t  parentIndex, int32_t  curDepth, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  entries) ;

/// @brief Method NodesCount, addr 0x60105bc, size 0xd8, virtual false, abstract: false, final false
inline int32_t NodesCount(::Fusion::LagCompensation::BVH*  bvh) ;

/// @brief Method RefitObjectChanged, addr 0x600eae0, size 0x13c, virtual false, abstract: false, final false
inline void RefitObjectChanged(::Fusion::LagCompensation::BVH*  bvh) ;

/// @brief Method RefitVolume, addr 0x600f974, size 0x1b4, virtual false, abstract: false, final false
inline bool RefitVolume(::Fusion::LagCompensation::BVH*  bvh) ;

/// @brief Method Remove, addr 0x600dcc8, size 0x1ec, virtual false, abstract: false, final false
inline void Remove(::Fusion::LagCompensation::BVH*  bvh, ::Fusion::HitboxRoot*  entry) ;

/// @brief Method RemoveLeaf, addr 0x6010694, size 0x518, virtual false, abstract: false, final false
inline void RemoveLeaf(::Fusion::LagCompensation::BVH*  bvh, int32_t  removeIndex) ;

/// @brief Method SA, addr 0x600fb28, size 0x4c, virtual false, abstract: false, final false
static inline float_t SA(::UnityEngine::Bounds  box) ;

/// @brief Method SA, addr 0x600d310, size 0x4c, virtual false, abstract: false, final false
static inline float_t SA(::by_ref<::UnityEngine::Bounds>  box) ;

/// @brief Method SA, addr 0x600fb74, size 0x4c, virtual false, abstract: false, final false
static inline float_t SA(::by_ref<::Fusion::LagCompensation::BVHNode>  node) ;

/// @brief Method SAofList, addr 0x600fce0, size 0x324, virtual false, abstract: false, final false
static inline float_t SAofList(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  entries) ;

/// @brief Method SetDepth, addr 0x6010bac, size 0x124, virtual false, abstract: false, final false
inline void SetDepth(::Fusion::LagCompensation::BVH*  bvh, int32_t  newdepth) ;

/// @brief Method SplitNode, addr 0x6010004, size 0x390, virtual false, abstract: false, final false
inline void SplitNode(::Fusion::LagCompensation::BVH*  bvh, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  entries) ;

/// @brief Method ToBounds, addr 0x6010ec4, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds ToBounds() ;

/// @brief Method ToString, addr 0x600ea30, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateBoundsCache, addr 0x6011228, size 0x58, virtual false, abstract: false, final false
inline void UpdateBoundsCache() ;

static inline ::Fusion::HitboxRoot_HitboxComparerX* getStaticF_ComparerX() ;

static inline ::Fusion::HitboxRoot_HitboxComparerY* getStaticF_ComparerY() ;

static inline ::Fusion::HitboxRoot_HitboxComparerZ* getStaticF_ComparerZ() ;

/// @brief Method get_HasLeft, addr 0x600e95c, size 0x10, virtual false, abstract: false, final false
inline bool get_HasLeft() ;

/// @brief Method get_HasParent, addr 0x600e94c, size 0x10, virtual false, abstract: false, final false
inline bool get_HasParent() ;

/// @brief Method get_HasRight, addr 0x600e96c, size 0x10, virtual false, abstract: false, final false
inline bool get_HasRight() ;

/// @brief Method get_HasValidRoot, addr 0x600eab0, size 0x30, virtual false, abstract: false, final false
inline bool get_HasValidRoot() ;

/// @brief Method get_Index, addr 0x600e924, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Index() ;

/// @brief Method get_IsLeaf, addr 0x600eaa8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLeaf() ;

/// @brief Method get_IsRootNode, addr 0x600e93c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsRootNode() ;

/// @brief Method get_IsValid, addr 0x600e92c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

static inline void setStaticF_ComparerX(::Fusion::HitboxRoot_HitboxComparerX*  value) ;

static inline void setStaticF_ComparerY(::Fusion::HitboxRoot_HitboxComparerY*  value) ;

static inline void setStaticF_ComparerZ(::Fusion::HitboxRoot_HitboxComparerZ*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BVHNode() ;

// Ctor Parameters [CppParam { name: "Box", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cachedBounds", ty: "::Fusion::LagCompensation::AABB", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nodeIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_parentIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_leftIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rightIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Active", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Depth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Used", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_root", ty: "::UnityW<::Fusion::HitboxRoot>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isLeaf", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr BVHNode(::UnityEngine::Bounds  Box, ::Fusion::LagCompensation::AABB  _cachedBounds, int32_t  _nodeIndex, int32_t  _parentIndex, int32_t  _leftIndex, int32_t  _rightIndex, bool  Active, int32_t  Depth, bool  Used, int32_t  Next, ::UnityW<::Fusion::HitboxRoot>  _root, bool  _isLeaf) noexcept;

/// @brief Field MaxEntriesPerNode offset 0xffffffff size 0x4
static constexpr int32_t  MaxEntriesPerNode{static_cast<int32_t>(0x1)};

/// @brief Field RootNodeIndex offset 0xffffffff size 0x4
static constexpr int32_t  RootNodeIndex{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19389};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field Box, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::Bounds  Box;

/// @brief Field _cachedBounds, offset: 0x18, size: 0x30, def value: None
 ::Fusion::LagCompensation::AABB  _cachedBounds;

/// @brief Field _nodeIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  _nodeIndex;

/// @brief Field _parentIndex, offset: 0x4c, size: 0x4, def value: None
 int32_t  _parentIndex;

/// @brief Field _leftIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  _leftIndex;

/// @brief Field _rightIndex, offset: 0x54, size: 0x4, def value: None
 int32_t  _rightIndex;

/// @brief Field Active, offset: 0x58, size: 0x1, def value: None
 bool  Active;

/// @brief Field Depth, offset: 0x5c, size: 0x4, def value: None
 int32_t  Depth;

/// @brief Field Used, offset: 0x60, size: 0x1, def value: None
 bool  Used;

/// @brief Field Next, offset: 0x64, size: 0x4, def value: None
 int32_t  Next;

/// @brief Field _root, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Fusion::HitboxRoot>  _root;

/// @brief Field _isLeaf, offset: 0x70, size: 0x1, def value: None
 bool  _isLeaf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::BVHNode, Box) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, _cachedBounds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, _nodeIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, _parentIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, _leftIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, _rightIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, Active) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, Depth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, Used) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, Next) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, _root) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNode, _isLeaf) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::BVHNode) == 0x78, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
