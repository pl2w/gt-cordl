#pragma once
// IWYU pragma private; include "Pathfinding/EuclideanEmbedding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__HeuristicOptimizationMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EuclideanEmbedding)
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass17_0;
}
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass18_0;
}
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass20_0;
}
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass20_1;
}
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass20_2;
}
namespace Pathfinding {
class FloodPath;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class OnPathDelegate;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding {
class EuclideanEmbedding;
}
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass17_0;
}
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass18_0;
}
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass20_0;
}
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass20_1;
}
namespace Pathfinding {
class EuclideanEmbedding___c__DisplayClass20_2;
}
// Write type traits
MARK_REF_T(::Pathfinding::EuclideanEmbedding*);
MARK_REF_T(::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0*);
MARK_REF_T(::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0*);
MARK_REF_T(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*);
MARK_REF_T(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*);
MARK_REF_T(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2*);
DEFINE_IL2CPP_CLASS(::Pathfinding::EuclideanEmbedding*, "Pathfinding", "EuclideanEmbedding");
DEFINE_IL2CPP_CLASS(::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0*, "Pathfinding", "EuclideanEmbedding/<>c__DisplayClass17_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0*, "Pathfinding", "EuclideanEmbedding/<>c__DisplayClass18_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*, "Pathfinding", "EuclideanEmbedding/<>c__DisplayClass20_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*, "Pathfinding", "EuclideanEmbedding/<>c__DisplayClass20_1");
DEFINE_IL2CPP_CLASS(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2*, "Pathfinding", "EuclideanEmbedding/<>c__DisplayClass20_2");
// Dependencies Pathfinding.GraphNode, Pathfinding.HeuristicOptimizationMode, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.EuclideanEmbedding
class CORDL_TYPE EuclideanEmbedding : public ::System::Object {
public:
// Declarations
using __c__DisplayClass17_0 = ::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0;

using __c__DisplayClass18_0 = ::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0;

using __c__DisplayClass20_0 = ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0;

using __c__DisplayClass20_1 = ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1;

using __c__DisplayClass20_2 = ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2;

/// @brief Field costs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_costs, put=__cordl_internal_set_costs)) ::ArrayW<uint32_t>  costs;

/// @brief Field dirty, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_dirty, put=__cordl_internal_set_dirty)) bool  dirty;

/// @brief Field lockObj, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lockObj, put=__cordl_internal_set_lockObj)) ::System::Object*  lockObj;

/// @brief Field maxNodeIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNodeIndex, put=__cordl_internal_set_maxNodeIndex)) int32_t  maxNodeIndex;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::Pathfinding::HeuristicOptimizationMode  mode;

/// @brief Field pivotCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_pivotCount, put=__cordl_internal_set_pivotCount)) int32_t  pivotCount;

/// @brief Field pivotPointRoot, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pivotPointRoot, put=__cordl_internal_set_pivotPointRoot)) ::UnityW<::UnityEngine::Transform>  pivotPointRoot;

/// @brief Field pivots, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_pivots, put=__cordl_internal_set_pivots)) ::ArrayW<::Pathfinding::GraphNode*>  pivots;

/// @brief Field rval, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_rval, put=__cordl_internal_set_rval)) uint32_t  rval;

/// @brief Field seed, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_seed, put=__cordl_internal_set_seed)) int32_t  seed;

/// @brief Field spreadOutCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_spreadOutCount, put=__cordl_internal_set_spreadOutCount)) int32_t  spreadOutCount;

/// @brief Method ApplyGridGraphEndpointSpecialCase, addr 0x5e973d8, size 0x4e0, virtual false, abstract: false, final false
inline void ApplyGridGraphEndpointSpecialCase() ;

/// @brief Method EnsureCapacity, addr 0x5e9622c, size 0x20c, virtual false, abstract: false, final false
inline void EnsureCapacity(int32_t  index) ;

/// @brief Method GetClosestWalkableNodesToChildrenRecursively, addr 0x5e96578, size 0x3fc, virtual false, abstract: false, final false
inline void GetClosestWalkableNodesToChildrenRecursively(::UnityEngine::Transform*  tr, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes) ;

/// @brief Method GetHeuristic, addr 0x5e96438, size 0x140, virtual false, abstract: false, final false
inline uint32_t GetHeuristic(int32_t  nodeIndex1, int32_t  nodeIndex2) ;

/// @brief Method GetRandom, addr 0x5e96208, size 0x24, virtual false, abstract: false, final false
inline uint32_t GetRandom() ;

static inline ::Pathfinding::EuclideanEmbedding* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5e978b8, size 0x164, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method PickAnyWalkableNode, addr 0x5e96b0c, size 0x178, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* PickAnyWalkableNode() ;

/// @brief Method PickNRandomNodes, addr 0x5e96974, size 0x190, virtual false, abstract: false, final false
inline void PickNRandomNodes(int32_t  count, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  buffer) ;

/// @brief Method RecalculateCosts, addr 0x5e970a0, size 0x330, virtual false, abstract: false, final false
inline void RecalculateCosts() ;

/// @brief Method RecalculatePivots, addr 0x5e96c8c, size 0x414, virtual false, abstract: false, final false
inline void RecalculatePivots() ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_costs() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get_costs() ;

constexpr bool const& __cordl_internal_get_dirty() const;

constexpr bool& __cordl_internal_get_dirty() ;

constexpr ::System::Object* const& __cordl_internal_get_lockObj() const;

constexpr ::System::Object*& __cordl_internal_get_lockObj() ;

constexpr int32_t const& __cordl_internal_get_maxNodeIndex() const;

constexpr int32_t& __cordl_internal_get_maxNodeIndex() ;

constexpr ::Pathfinding::HeuristicOptimizationMode const& __cordl_internal_get_mode() const;

constexpr ::Pathfinding::HeuristicOptimizationMode& __cordl_internal_get_mode() ;

constexpr int32_t const& __cordl_internal_get_pivotCount() const;

constexpr int32_t& __cordl_internal_get_pivotCount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pivotPointRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pivotPointRoot() ;

constexpr ::ArrayW<::Pathfinding::GraphNode*> const& __cordl_internal_get_pivots() const;

constexpr ::ArrayW<::Pathfinding::GraphNode*>& __cordl_internal_get_pivots() ;

constexpr uint32_t const& __cordl_internal_get_rval() const;

constexpr uint32_t& __cordl_internal_get_rval() ;

constexpr int32_t const& __cordl_internal_get_seed() const;

constexpr int32_t& __cordl_internal_get_seed() ;

constexpr int32_t const& __cordl_internal_get_spreadOutCount() const;

constexpr int32_t& __cordl_internal_get_spreadOutCount() ;

constexpr void __cordl_internal_set_costs(::ArrayW<uint32_t>  value) ;

constexpr void __cordl_internal_set_dirty(bool  value) ;

constexpr void __cordl_internal_set_lockObj(::System::Object*  value) ;

constexpr void __cordl_internal_set_maxNodeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_mode(::Pathfinding::HeuristicOptimizationMode  value) ;

constexpr void __cordl_internal_set_pivotCount(int32_t  value) ;

constexpr void __cordl_internal_set_pivotPointRoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pivots(::ArrayW<::Pathfinding::GraphNode*>  value) ;

constexpr void __cordl_internal_set_rval(uint32_t  value) ;

constexpr void __cordl_internal_set_seed(int32_t  value) ;

constexpr void __cordl_internal_set_spreadOutCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e97a1c, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EuclideanEmbedding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EuclideanEmbedding(EuclideanEmbedding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EuclideanEmbedding(EuclideanEmbedding const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21345};

/// @brief Field ra offset 0xffffffff size 0x4
static constexpr uint32_t  ra{static_cast<uint32_t>(0xc39ec3u)};

/// @brief Field rc offset 0xffffffff size 0x4
static constexpr uint32_t  rc{static_cast<uint32_t>(0x43fd43fdu)};

/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 ::Pathfinding::HeuristicOptimizationMode  ___mode;

/// @brief Field seed, offset: 0x14, size: 0x4, def value: None
 int32_t  ___seed;

/// @brief Field pivotPointRoot, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pivotPointRoot;

/// @brief Field spreadOutCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___spreadOutCount;

/// @brief Field dirty, offset: 0x24, size: 0x1, def value: None
 bool  ___dirty;

/// @brief Field costs, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ___costs;

/// @brief Field maxNodeIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___maxNodeIndex;

/// @brief Field pivotCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ___pivotCount;

/// @brief Field pivots, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::GraphNode*>  ___pivots;

/// @brief Field rval, offset: 0x40, size: 0x4, def value: None
 uint32_t  ___rval;

/// @brief Field lockObj, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ___lockObj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___seed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___pivotPointRoot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___spreadOutCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___dirty) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___costs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___maxNodeIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___pivotCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___pivots) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___rval) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding, ___lockObj) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::EuclideanEmbedding) == 0x50, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.EuclideanEmbedding/<>c__DisplayClass20_2
class CORDL_TYPE EuclideanEmbedding___c__DisplayClass20_2 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals2, put=__cordl_internal_set_CS$__8__locals2)) ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*  CS$__8__locals2;

/// @brief Field <>9__3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__3;

/// @brief Field costOffset, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_costOffset, put=__cordl_internal_set_costOffset)) uint32_t  costOffset;

static inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2* New_ctor() ;

/// @brief Method <RecalculateCosts>b__3, addr 0x5e983fc, size 0x1e8, virtual false, abstract: false, final false
inline void _RecalculateCosts_b__3(::Pathfinding::GraphNode*  node) ;

constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1* const& __cordl_internal_get_CS$__8__locals2() const;

constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*& __cordl_internal_get_CS$__8__locals2() ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get___9__3() ;

constexpr uint32_t const& __cordl_internal_get_costOffset() const;

constexpr uint32_t& __cordl_internal_get_costOffset() ;

constexpr void __cordl_internal_set_CS$__8__locals2(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_costOffset(uint32_t  value) ;

/// @brief Method .ctor, addr 0x5e983f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EuclideanEmbedding___c__DisplayClass20_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass20_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EuclideanEmbedding___c__DisplayClass20_2(EuclideanEmbedding___c__DisplayClass20_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass20_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EuclideanEmbedding___c__DisplayClass20_2(EuclideanEmbedding___c__DisplayClass20_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21344};

/// @brief Field costOffset, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___costOffset;

/// @brief Field CS$<>8__locals2, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1*  ___CS$__8__locals2;

/// @brief Field <>9__3, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  _____9__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2, ___costOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2, ___CS$__8__locals2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2, _____9__3) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_2) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.EuclideanEmbedding/<>c__DisplayClass20_1
class CORDL_TYPE EuclideanEmbedding___c__DisplayClass20_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*  CS$__8__locals1;

/// @brief Field floodPath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_floodPath, put=__cordl_internal_set_floodPath)) ::Pathfinding::FloodPath*  floodPath;

/// @brief Field pivot, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pivot, put=__cordl_internal_set_pivot)) ::Pathfinding::GraphNode*  pivot;

/// @brief Field pivotIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_pivotIndex, put=__cordl_internal_set_pivotIndex)) int32_t  pivotIndex;

static inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1* New_ctor() ;

/// @brief Method <RecalculateCosts>b__2, addr 0x5e97e50, size 0x5a4, virtual false, abstract: false, final false
inline void _RecalculateCosts_b__2(::Pathfinding::Path*  _p) ;

constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::Pathfinding::FloodPath* const& __cordl_internal_get_floodPath() const;

constexpr ::Pathfinding::FloodPath*& __cordl_internal_get_floodPath() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_pivot() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_pivot() ;

constexpr int32_t const& __cordl_internal_get_pivotIndex() const;

constexpr int32_t& __cordl_internal_get_pivotIndex() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*  value) ;

constexpr void __cordl_internal_set_floodPath(::Pathfinding::FloodPath*  value) ;

constexpr void __cordl_internal_set_pivot(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_pivotIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e97e48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EuclideanEmbedding___c__DisplayClass20_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass20_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EuclideanEmbedding___c__DisplayClass20_1(EuclideanEmbedding___c__DisplayClass20_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass20_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EuclideanEmbedding___c__DisplayClass20_1(EuclideanEmbedding___c__DisplayClass20_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21343};

/// @brief Field pivot, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___pivot;

/// @brief Field pivotIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___pivotIndex;

/// @brief Field floodPath, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::FloodPath*  ___floodPath;

/// @brief Field CS$<>8__locals1, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1, ___pivot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1, ___pivotIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1, ___floodPath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1, ___CS$__8__locals1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_1) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.EuclideanEmbedding/<>c__DisplayClass20_0
class CORDL_TYPE EuclideanEmbedding___c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::EuclideanEmbedding*  __4__this;

/// @brief Field numComplete, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_numComplete, put=__cordl_internal_set_numComplete)) int32_t  numComplete;

/// @brief Field onComplete, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::Pathfinding::OnPathDelegate*  onComplete;

/// @brief Field startCostCalculation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_startCostCalculation, put=__cordl_internal_set_startCostCalculation)) ::System::Action_1<int32_t>*  startCostCalculation;

static inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0* New_ctor() ;

/// @brief Method <RecalculateCosts>b__0, addr 0x5e97c90, size 0x34, virtual false, abstract: false, final false
inline void _RecalculateCosts_b__0(::Pathfinding::Path*  path) ;

/// @brief Method <RecalculateCosts>b__1, addr 0x5e97cc4, size 0x184, virtual false, abstract: false, final false
inline void _RecalculateCosts_b__1(int32_t  pivotIndex) ;

constexpr ::Pathfinding::EuclideanEmbedding* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::EuclideanEmbedding*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_numComplete() const;

constexpr int32_t& __cordl_internal_get_numComplete() ;

constexpr ::Pathfinding::OnPathDelegate* const& __cordl_internal_get_onComplete() const;

constexpr ::Pathfinding::OnPathDelegate*& __cordl_internal_get_onComplete() ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_startCostCalculation() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_startCostCalculation() ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::EuclideanEmbedding*  value) ;

constexpr void __cordl_internal_set_numComplete(int32_t  value) ;

constexpr void __cordl_internal_set_onComplete(::Pathfinding::OnPathDelegate*  value) ;

constexpr void __cordl_internal_set_startCostCalculation(::System::Action_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5e973d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EuclideanEmbedding___c__DisplayClass20_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass20_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EuclideanEmbedding___c__DisplayClass20_0(EuclideanEmbedding___c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass20_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EuclideanEmbedding___c__DisplayClass20_0(EuclideanEmbedding___c__DisplayClass20_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21342};

/// @brief Field numComplete, offset: 0x10, size: 0x4, def value: None
 int32_t  ___numComplete;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::EuclideanEmbedding*  _____4__this;

/// @brief Field onComplete, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::OnPathDelegate*  ___onComplete;

/// @brief Field startCostCalculation, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___startCostCalculation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0, ___numComplete) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0, ___onComplete) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0, ___startCostCalculation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::EuclideanEmbedding___c__DisplayClass20_0) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.EuclideanEmbedding/<>c__DisplayClass18_0
class CORDL_TYPE EuclideanEmbedding___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__0;

/// @brief Field first, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_first, put=__cordl_internal_set_first)) ::Pathfinding::GraphNode*  first;

static inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <PickAnyWalkableNode>b__0, addr 0x5e97c40, size 0x50, virtual false, abstract: false, final false
inline void _PickAnyWalkableNode_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get___9__0() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_first() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_first() ;

constexpr void __cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_first(::Pathfinding::GraphNode*  value) ;

/// @brief Method .ctor, addr 0x5e96c84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EuclideanEmbedding___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass18_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EuclideanEmbedding___c__DisplayClass18_0(EuclideanEmbedding___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass18_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EuclideanEmbedding___c__DisplayClass18_0(EuclideanEmbedding___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21341};

/// @brief Field first, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___first;

/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0, ___first) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::EuclideanEmbedding___c__DisplayClass18_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.EuclideanEmbedding/<>c__DisplayClass17_0
class CORDL_TYPE EuclideanEmbedding___c__DisplayClass17_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::EuclideanEmbedding*  __4__this;

/// @brief Field <>9__0, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__0;

/// @brief Field buffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  buffer;

/// @brief Field count, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

/// @brief Field n, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_n, put=__cordl_internal_set_n)) int32_t  n;

static inline ::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0* New_ctor() ;

/// @brief Method <PickNRandomNodes>b__0, addr 0x5e97ac8, size 0x178, virtual false, abstract: false, final false
inline void _PickNRandomNodes_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::Pathfinding::EuclideanEmbedding* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::EuclideanEmbedding*& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get___9__0() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_buffer() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_buffer() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr int32_t const& __cordl_internal_get_n() const;

constexpr int32_t& __cordl_internal_get_n() ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::EuclideanEmbedding*  value) ;

constexpr void __cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_buffer(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_n(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e96b04, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EuclideanEmbedding___c__DisplayClass17_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass17_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EuclideanEmbedding___c__DisplayClass17_0(EuclideanEmbedding___c__DisplayClass17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EuclideanEmbedding___c__DisplayClass17_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EuclideanEmbedding___c__DisplayClass17_0(EuclideanEmbedding___c__DisplayClass17_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21340};

/// @brief Field n, offset: 0x10, size: 0x4, def value: None
 int32_t  ___n;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::EuclideanEmbedding*  _____4__this;

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___buffer;

/// @brief Field <>9__0, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0, ___n) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0, ___count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0, ___buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0, _____9__0) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::EuclideanEmbedding___c__DisplayClass17_0) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
