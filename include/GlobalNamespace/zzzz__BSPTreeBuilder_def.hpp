#pragma once
// IWYU pragma private; include "GlobalNamespace/BSPTreeBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BoundsInt_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BSPTreeBuilder)
namespace GlobalNamespace {
class BSPTreeBuilder_BoxMetadata;
}
namespace GlobalNamespace {
class BSPTreeBuilder___c;
}
namespace GlobalNamespace {
struct BoundsInt;
}
namespace GlobalNamespace {
struct MatrixBSPNode;
}
namespace GlobalNamespace {
struct MatrixZonePair;
}
namespace GlobalNamespace {
struct SerializableBSPNode_Axis;
}
namespace GlobalNamespace {
struct SerializableBSPNode;
}
namespace GlobalNamespace {
class SerializableBSPTree;
}
namespace GlobalNamespace {
class ZoneDef;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BSPTreeBuilder;
}
namespace GlobalNamespace {
class BSPTreeBuilder_BoxMetadata;
}
namespace GlobalNamespace {
class BSPTreeBuilder___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BSPTreeBuilder*);
MARK_REF_T(::GlobalNamespace::BSPTreeBuilder_BoxMetadata*);
MARK_REF_T(::GlobalNamespace::BSPTreeBuilder___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BSPTreeBuilder*, "", "BSPTreeBuilder");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BSPTreeBuilder_BoxMetadata*, "", "BSPTreeBuilder/BoxMetadata");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BSPTreeBuilder___c*, "", "BSPTreeBuilder/<>c");
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BSPTreeBuilder
class CORDL_TYPE BSPTreeBuilder : public ::System::Object {
public:
// Declarations
using BoxMetadata = ::GlobalNamespace::BSPTreeBuilder_BoxMetadata;

using __c = ::GlobalNamespace::BSPTreeBuilder___c;

/// @brief Field testPoint, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_testPoint, put=setStaticF_testPoint)) ::UnityEngine::Vector3  testPoint;

/// @brief Method AddMatrixNodeWithCache, addr 0x5b49418, size 0x170, virtual false, abstract: false, final false
static inline int32_t AddMatrixNodeWithCache(::GlobalNamespace::MatrixBSPNode  matrixNode, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, /* [TupleElementNames(new[] { "matrixIndex", "outsideIndex" })] */ ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*  matrixNodeCache, ::by_ref<int32_t>  matrixNodeCacheHits) ;

/// @brief Method BuildTree, addr 0x5b44dac, size 0xe14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SerializableBSPTree* BuildTree(::ArrayW<::GlobalNamespace::ZoneDef*>  zones) ;

/// @brief Method BuildTreeRecursive, addr 0x5b45d9c, size 0xe48, virtual false, abstract: false, final false
static inline int32_t BuildTreeRecursive(::ArrayW<::GlobalNamespace::ZoneDef*>  zones, ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  bounds, int32_t  depth, ::GlobalNamespace::SerializableBSPNode_Axis  axis, ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableBSPNode>*  nodeList, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, /* [TupleElementNames(new[] { "matrixIndex", "outsideIndex" })] */ ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*  matrixNodeCache, ::by_ref<int32_t>  matrixNodeCacheHits) ;

/// @brief Method CalculateIntersectionVolume, addr 0x5b49344, size 0xd4, virtual false, abstract: false, final false
static inline float_t CalculateIntersectionVolume(::GlobalNamespace::BoundsInt  box, ::GlobalNamespace::BoundsInt  region) ;

/// @brief Method CalculateWorldBounds, addr 0x5b45c88, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BoundsInt CalculateWorldBounds(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes) ;

/// @brief Method CleanupUnreferencedMatrices, addr 0x5b46be4, size 0x53c, virtual false, abstract: false, final false
static inline void CleanupUnreferencedMatrices(::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixZonePair>*  matricesList) ;

/// @brief Method CreateMatrixNodeTree, addr 0x5b47130, size 0x794, virtual false, abstract: false, final false
static inline int32_t CreateMatrixNodeTree(::ArrayW<::GlobalNamespace::ZoneDef*>  zones, ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, ::GlobalNamespace::BoundsInt  bounds, /* [TupleElementNames(new[] { "matrixIndex", "outsideIndex" })] */ ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*  matrixNodeCache, ::by_ref<int32_t>  matrixNodeCacheHits) ;

/// @brief Method CreateSequentialMatrixNodes, addr 0x5b496d0, size 0x25c, virtual false, abstract: false, final false
static inline int32_t CreateSequentialMatrixNodes(::ArrayW<::GlobalNamespace::ZoneDef*>  zones, ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::System::Collections::Generic::List_1<::GlobalNamespace::MatrixBSPNode>*  matrixNodeList, int32_t  boxIndex, ::ArrayW<::GlobalNamespace::ZoneDef*>  allZones, /* [TupleElementNames(new[] { "matrixIndex", "outsideIndex" })] */ ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<int32_t,int32_t>,int32_t>*  matrixNodeCache, ::by_ref<int32_t>  matrixNodeCacheHits) ;

/// @brief Method EvaluateBestSplit, addr 0x5b48ae4, size 0x98, virtual false, abstract: false, final false
static inline int32_t EvaluateBestSplit(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  bounds, ::GlobalNamespace::SerializableBSPNode_Axis  axis, int32_t  splitValue) ;

/// @brief Method EvaluateSplit, addr 0x5b48b7c, size 0x38c, virtual false, abstract: false, final false
static inline int32_t EvaluateSplit(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, int32_t  splitValue, ::GlobalNamespace::SerializableBSPNode_Axis  axis, ::GlobalNamespace::BoundsInt  bounds) ;

/// @brief Method FindBestAxis, addr 0x5b478c4, size 0x370, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SerializableBSPNode_Axis FindBestAxis(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  bounds, ::GlobalNamespace::SerializableBSPNode_Axis  preferredAxis, ::by_ref<int32_t>  bestSplitValue) ;

/// @brief Method FindOptimalSplit, addr 0x5b4824c, size 0x898, virtual false, abstract: false, final false
static inline int32_t FindOptimalSplit(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  bounds, ::GlobalNamespace::SerializableBSPNode_Axis  axis, ::by_ref<int32_t>  bestScore) ;

/// @brief Method GetAxisValue, addr 0x5b48f08, size 0x2c, virtual false, abstract: false, final false
static inline int32_t GetAxisValue(::UnityEngine::Vector3Int  point, ::GlobalNamespace::SerializableBSPNode_Axis  axis) ;

/// @brief Method GetEffectiveBoxes, addr 0x5b47c34, size 0x598, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* GetEffectiveBoxes(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  region) ;

/// @brief Method GetEffectiveSpanningBoxes, addr 0x5b48f34, size 0x410, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* GetEffectiveSpanningBoxes(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes, ::GlobalNamespace::BoundsInt  leftBounds, ::GlobalNamespace::BoundsInt  rightBounds) ;

/// @brief Method GetFallbackSplit, addr 0x5b481ec, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetFallbackSplit(::GlobalNamespace::BoundsInt  bounds, ::GlobalNamespace::SerializableBSPNode_Axis  axis) ;

/// @brief Method GetNextAxis, addr 0x5b481cc, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SerializableBSPNode_Axis GetNextAxis(::GlobalNamespace::SerializableBSPNode_Axis  currentAxis) ;

/// @brief Method SortBoxesByPriority, addr 0x5b49588, size 0x148, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* SortBoxesByPriority(::System::Collections::Generic::List_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  boxes) ;

static inline ::UnityEngine::Vector3 getStaticF_testPoint() ;

static inline void setStaticF_testPoint(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BSPTreeBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BSPTreeBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BSPTreeBuilder(BSPTreeBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BSPTreeBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BSPTreeBuilder(BSPTreeBuilder const& ) = delete;

/// @brief Field MAX_DEPTH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DEPTH{static_cast<int32_t>(0xf)};

/// @brief Field MAX_NODES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_NODES{static_cast<int32_t>(0x28a)};

/// @brief Field MAX_ZONES_PER_LEAF offset 0xffffffff size 0x4
static constexpr int32_t  MAX_ZONES_PER_LEAF{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3733};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BSPTreeBuilder) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BSPTreeBuilder/<>c
class CORDL_TYPE BSPTreeBuilder___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::BSPTreeBuilder___c*  __9;

/// @brief Field <>9__21_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__21_0, put=setStaticF___9__21_0)) ::System::Comparison_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  __9__21_0;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<int32_t,int32_t>*  __9__9_0;

static inline ::GlobalNamespace::BSPTreeBuilder___c* New_ctor() ;

/// @brief Method <FindOptimalSplit>b__9_0, addr 0x5b49b00, size 0x8, virtual false, abstract: false, final false
inline int32_t _FindOptimalSplit_b__9_0(int32_t  x) ;

/// @brief Method <SortBoxesByPriority>b__21_0, addr 0x5b49b08, size 0x24, virtual false, abstract: false, final false
inline int32_t _SortBoxesByPriority_b__21_0(::GlobalNamespace::BSPTreeBuilder_BoxMetadata*  a, ::GlobalNamespace::BSPTreeBuilder_BoxMetadata*  b) ;

/// @brief Method .ctor, addr 0x5b49af8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::BSPTreeBuilder___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* getStaticF___9__21_0() ;

static inline ::System::Func_2<int32_t,int32_t>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::GlobalNamespace::BSPTreeBuilder___c*  value) ;

static inline void setStaticF___9__21_0(::System::Comparison_1<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<int32_t,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BSPTreeBuilder___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BSPTreeBuilder___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BSPTreeBuilder___c(BSPTreeBuilder___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BSPTreeBuilder___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BSPTreeBuilder___c(BSPTreeBuilder___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3732};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BSPTreeBuilder___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies BoundsInt, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BSPTreeBuilder/BoxMetadata
class CORDL_TYPE BSPTreeBuilder_BoxMetadata : public ::System::Object {
public:
// Declarations
/// @brief Field bounds, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::GlobalNamespace::BoundsInt  bounds;

/// @brief Field box, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_box, put=__cordl_internal_set_box)) ::UnityW<::UnityEngine::BoxCollider>  box;

/// @brief Field matrixIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_matrixIndex, put=__cordl_internal_set_matrixIndex)) int32_t  matrixIndex;

/// @brief Field priority, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) int32_t  priority;

/// @brief Field zone, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::UnityW<::GlobalNamespace::ZoneDef>  zone;

/// @brief Method ContainsPoint, addr 0x5b49984, size 0xf8, virtual false, abstract: false, final false
inline bool ContainsPoint(::UnityEngine::Vector3  worldPoint) ;

/// @brief Method GetWorldBounds, addr 0x5b49a7c, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::BoundsInt GetWorldBounds() ;

static inline ::GlobalNamespace::BSPTreeBuilder_BoxMetadata* New_ctor(::UnityEngine::BoxCollider*  boxCollider, ::GlobalNamespace::ZoneDef*  zoneData, int32_t  matrixIdx, int32_t  priority) ;

constexpr ::GlobalNamespace::BoundsInt const& __cordl_internal_get_bounds() const;

constexpr ::GlobalNamespace::BoundsInt& __cordl_internal_get_bounds() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_box() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_box() ;

constexpr int32_t const& __cordl_internal_get_matrixIndex() const;

constexpr int32_t& __cordl_internal_get_matrixIndex() ;

constexpr int32_t const& __cordl_internal_get_priority() const;

constexpr int32_t& __cordl_internal_get_priority() ;

constexpr ::UnityW<::GlobalNamespace::ZoneDef> const& __cordl_internal_get_zone() const;

constexpr ::UnityW<::GlobalNamespace::ZoneDef>& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_bounds(::GlobalNamespace::BoundsInt  value) ;

constexpr void __cordl_internal_set_box(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_matrixIndex(int32_t  value) ;

constexpr void __cordl_internal_set_priority(int32_t  value) ;

constexpr void __cordl_internal_set_zone(::UnityW<::GlobalNamespace::ZoneDef>  value) ;

/// @brief Method .ctor, addr 0x5b45bc0, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::BoxCollider*  boxCollider, ::GlobalNamespace::ZoneDef*  zoneData, int32_t  matrixIdx, int32_t  priority) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BSPTreeBuilder_BoxMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BSPTreeBuilder_BoxMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BSPTreeBuilder_BoxMetadata(BSPTreeBuilder_BoxMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BSPTreeBuilder_BoxMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BSPTreeBuilder_BoxMetadata(BSPTreeBuilder_BoxMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3731};

/// @brief Field box, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___box;

/// @brief Field zone, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneDef>  ___zone;

/// @brief Field matrixIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___matrixIndex;

/// @brief Field priority, offset: 0x24, size: 0x4, def value: None
 int32_t  ___priority;

/// @brief Field bounds, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::BoundsInt  ___bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BSPTreeBuilder_BoxMetadata, ___box) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BSPTreeBuilder_BoxMetadata, ___zone) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BSPTreeBuilder_BoxMetadata, ___matrixIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BSPTreeBuilder_BoxMetadata, ___priority) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BSPTreeBuilder_BoxMetadata, ___bounds) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BSPTreeBuilder_BoxMetadata) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
