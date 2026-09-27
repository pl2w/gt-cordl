#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVH.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__BVHNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BVH)
namespace Fusion::LagCompensation {
struct BVHNode;
}
namespace Fusion::LagCompensation {
class IBoundsTraversalTest;
}
namespace Fusion::LagCompensation {
class ILagCompensationBroadphase;
}
namespace Fusion::LagCompensation {
class Mapper;
}
namespace Fusion {
class HitboxRoot;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
class BVH;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::BVH*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::BVH*, "Fusion.LagCompensation", "BVH");
// Dependencies Fusion.LagCompensation.BVHNode, System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.BVH
class CORDL_TYPE BVH : public ::System::Object {
public:
// Declarations
/// @brief Field ExpansionFactor, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExpansionFactor, put=__cordl_internal_set_ExpansionFactor)) float_t  ExpansionFactor;

/// @brief Field Mapper, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Mapper, put=__cordl_internal_set_Mapper)) ::Fusion::LagCompensation::Mapper*  Mapper;

/// @brief Field ParentsToExpand, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ParentsToExpand, put=__cordl_internal_set_ParentsToExpand)) int32_t  ParentsToExpand;

/// @brief Field ReusableList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReusableList, put=__cordl_internal_set_ReusableList)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  ReusableList;

 __declspec(property(get=get_UsedNodesCount)) int32_t  UsedNodesCount;

/// @brief Field _freeNodesHead, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__freeNodesHead, put=__cordl_internal_set__freeNodesHead)) int32_t  _freeNodesHead;

/// @brief Field _nodes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodes, put=__cordl_internal_set__nodes)) ::ArrayW<::Fusion::LagCompensation::BVHNode>  _nodes;

/// @brief Field _nodesCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__nodesCount, put=__cordl_internal_set__nodesCount)) int32_t  _nodesCount;

/// @brief Field _usedNodesCount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__usedNodesCount, put=__cordl_internal_set__usedNodesCount)) int32_t  _usedNodesCount;

/// @brief Field maxDepth, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDepth, put=__cordl_internal_set_maxDepth)) int32_t  maxDepth;

/// @brief Field refitNodes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_refitNodes, put=__cordl_internal_set_refitNodes)) ::System::Collections::Generic::HashSet_1<int32_t>*  refitNodes;

 __declspec(property(get=get_rootBVH)) ::Fusion::LagCompensation::BVHNode  rootBVH;

/// @brief Convert operator to "::Fusion::LagCompensation::ILagCompensationBroadphase"
constexpr operator  ::Fusion::LagCompensation::ILagCompensationBroadphase*() noexcept;

/// @brief Method Add, addr 0x600d230, size 0xe0, virtual true, abstract: false, final true
inline void Add(::Fusion::HitboxRoot*  root) ;

/// @brief Method BoundsFromSphere, addr 0x600db68, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds BoundsFromSphere(::UnityEngine::Vector3  pos, float_t  radius) ;

/// @brief Method BuildNodesLog, addr 0x600e384, size 0x18c, virtual false, abstract: false, final false
inline void BuildNodesLog(::System::Text::StringBuilder*  builder) ;

/// @brief Method CopyFrom, addr 0x600c920, size 0xec, virtual true, abstract: false, final true
inline void CopyFrom(::Fusion::LagCompensation::ILagCompensationBroadphase*  other) ;

/// @brief Method DisposeNode, addr 0x600cc2c, size 0xc4, virtual false, abstract: false, final false
inline void DisposeNode(int32_t  index) ;

/// @brief Method GetNextNode, addr 0x600cb18, size 0x114, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::LagCompensation::BVHNode> GetNextNode(::by_ref<int32_t>  index) ;

/// @brief Method GetNode, addr 0x600ccf0, size 0x34, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::LagCompensation::BVHNode> GetNode(int32_t  index) ;

static inline ::Fusion::LagCompensation::BVH* New_ctor(::Fusion::LagCompensation::Mapper*  mapper, int32_t  nodesCapacity, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialEntries, float_t  expansionFactor, int32_t  parentsToExpand) ;

/// @brief Method PosUpdateRefit, addr 0x600d044, size 0x1ec, virtual false, abstract: false, final false
inline void PosUpdateRefit() ;

/// @brief Method Remove, addr 0x600dbdc, size 0xec, virtual true, abstract: false, final true
inline bool Remove(::Fusion::HitboxRoot*  root) ;

/// @brief Method ResizeNodesArray, addr 0x600ca0c, size 0x104, virtual false, abstract: false, final false
inline void ResizeNodesArray(int32_t  minimumIncrease) ;

/// @brief Method Traverse, addr 0x600ce1c, size 0x44, virtual true, abstract: false, final true
inline void Traverse(::Fusion::LagCompensation::IBoundsTraversalTest*  hitTest, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  candidateRoots, int32_t  layerMask) ;

/// @brief Method TraverseInternal, addr 0x600ce60, size 0x1e4, virtual false, abstract: false, final false
inline void TraverseInternal(::by_ref<::Fusion::LagCompensation::BVHNode>  curNode, ::Fusion::LagCompensation::IBoundsTraversalTest*  hitTest, ::System::Collections::Generic::HashSet_1<::UnityW<::Fusion::HitboxRoot>>*  candidateRoots, int32_t  layermask) ;

/// @brief Method Update, addr 0x600cd24, size 0xf8, virtual true, abstract: false, final true
inline void Update(::Fusion::HitboxRoot*  changed, int32_t  tick) ;

constexpr float_t const& __cordl_internal_get_ExpansionFactor() const;

constexpr float_t& __cordl_internal_get_ExpansionFactor() ;

constexpr ::Fusion::LagCompensation::Mapper* const& __cordl_internal_get_Mapper() const;

constexpr ::Fusion::LagCompensation::Mapper*& __cordl_internal_get_Mapper() ;

constexpr int32_t const& __cordl_internal_get_ParentsToExpand() const;

constexpr int32_t& __cordl_internal_get_ParentsToExpand() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>* const& __cordl_internal_get_ReusableList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*& __cordl_internal_get_ReusableList() ;

constexpr int32_t const& __cordl_internal_get__freeNodesHead() const;

constexpr int32_t& __cordl_internal_get__freeNodesHead() ;

constexpr ::ArrayW<::Fusion::LagCompensation::BVHNode> const& __cordl_internal_get__nodes() const;

constexpr ::ArrayW<::Fusion::LagCompensation::BVHNode>& __cordl_internal_get__nodes() ;

constexpr int32_t const& __cordl_internal_get__nodesCount() const;

constexpr int32_t& __cordl_internal_get__nodesCount() ;

constexpr int32_t const& __cordl_internal_get__usedNodesCount() const;

constexpr int32_t& __cordl_internal_get__usedNodesCount() ;

constexpr int32_t const& __cordl_internal_get_maxDepth() const;

constexpr int32_t& __cordl_internal_get_maxDepth() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_refitNodes() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_refitNodes() ;

constexpr void __cordl_internal_set_ExpansionFactor(float_t  value) ;

constexpr void __cordl_internal_set_Mapper(::Fusion::LagCompensation::Mapper*  value) ;

constexpr void __cordl_internal_set_ParentsToExpand(int32_t  value) ;

constexpr void __cordl_internal_set_ReusableList(::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  value) ;

constexpr void __cordl_internal_set__freeNodesHead(int32_t  value) ;

constexpr void __cordl_internal_set__nodes(::ArrayW<::Fusion::LagCompensation::BVHNode>  value) ;

constexpr void __cordl_internal_set__nodesCount(int32_t  value) ;

constexpr void __cordl_internal_set__usedNodesCount(int32_t  value) ;

constexpr void __cordl_internal_set_maxDepth(int32_t  value) ;

constexpr void __cordl_internal_set_refitNodes(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x600deb4, size 0x1ec, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::Mapper*  mapper, int32_t  nodesCapacity, ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  initialEntries, float_t  expansionFactor, int32_t  parentsToExpand) ;

/// @brief Method get_UsedNodesCount, addr 0x600cb10, size 0x8, virtual false, abstract: false, final false
inline int32_t get_UsedNodesCount() ;

/// @brief Method get_rootBVH, addr 0x600c8f4, size 0x2c, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::LagCompensation::BVHNode> get_rootBVH() ;

/// @brief Convert to "::Fusion::LagCompensation::ILagCompensationBroadphase"
constexpr ::Fusion::LagCompensation::ILagCompensationBroadphase* i___Fusion__LagCompensation__ILagCompensationBroadphase() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BVH() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BVH", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BVH(BVH && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BVH", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BVH(BVH const& ) = delete;

/// @brief Field DEFAULT_EXPANSION_FACTOR offset 0xffffffff size 0x4
static constexpr float_t  DEFAULT_EXPANSION_FACTOR{static_cast<float_t>(0.15f)};

/// @brief Field DEFAULT_PARENTS_TO_EXPAND offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_PARENTS_TO_EXPAND{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19386};

/// @brief Field _nodes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Fusion::LagCompensation::BVHNode>  ____nodes;

/// @brief Field Mapper, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::Mapper*  ___Mapper;

/// @brief Field maxDepth, offset: 0x20, size: 0x4, def value: None
 int32_t  ___maxDepth;

/// @brief Field refitNodes, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___refitNodes;

/// @brief Field ReusableList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::HitboxRoot>>*  ___ReusableList;

/// @brief Field _nodesCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____nodesCount;

/// @brief Field _usedNodesCount, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____usedNodesCount;

/// @brief Field _freeNodesHead, offset: 0x40, size: 0x4, def value: None
 int32_t  ____freeNodesHead;

/// @brief Field ExpansionFactor, offset: 0x44, size: 0x4, def value: None
 float_t  ___ExpansionFactor;

/// @brief Field ParentsToExpand, offset: 0x48, size: 0x4, def value: None
 int32_t  ___ParentsToExpand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::BVH, ____nodes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVH, ___Mapper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVH, ___maxDepth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVH, ___refitNodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVH, ___ReusableList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVH, ____nodesCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVH, ____usedNodesCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVH, ____freeNodesHead) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVH, ___ExpansionFactor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVH, ___ParentsToExpand) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::BVH) == 0x50, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
