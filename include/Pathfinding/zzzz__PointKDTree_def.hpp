#pragma once
// IWYU pragma private; include "Pathfinding/PointKDTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__PointKDTree_Node_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointKDTree)
namespace GlobalNamespace {
struct PointKDTree_Node;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
class PointKDTree_CompareX;
}
namespace Pathfinding {
class PointKDTree_CompareY;
}
namespace Pathfinding {
class PointKDTree_CompareZ;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace Pathfinding {
class PointKDTree;
}
namespace Pathfinding {
class PointKDTree_CompareX;
}
namespace Pathfinding {
class PointKDTree_CompareY;
}
namespace Pathfinding {
class PointKDTree_CompareZ;
}
// Write type traits
MARK_REF_T(::Pathfinding::PointKDTree*);
MARK_REF_T(::Pathfinding::PointKDTree_CompareX*);
MARK_REF_T(::Pathfinding::PointKDTree_CompareY*);
MARK_REF_T(::Pathfinding::PointKDTree_CompareZ*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PointKDTree*, "Pathfinding", "PointKDTree");
DEFINE_IL2CPP_CLASS(::Pathfinding::PointKDTree_CompareX*, "Pathfinding", "PointKDTree/CompareX");
DEFINE_IL2CPP_CLASS(::Pathfinding::PointKDTree_CompareY*, "Pathfinding", "PointKDTree/CompareY");
DEFINE_IL2CPP_CLASS(::Pathfinding::PointKDTree_CompareZ*, "Pathfinding", "PointKDTree/CompareZ");
// Dependencies Pathfinding.PointKDTree::Node, System.Collections.Generic.IComparer`1<T>, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PointKDTree
class CORDL_TYPE PointKDTree : public ::System::Object {
public:
// Declarations
using Node = ::GlobalNamespace::PointKDTree_Node;

using CompareX = ::Pathfinding::PointKDTree_CompareX;

using CompareY = ::Pathfinding::PointKDTree_CompareY;

using CompareZ = ::Pathfinding::PointKDTree_CompareZ;

/// @brief Field arrayCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_arrayCache, put=__cordl_internal_set_arrayCache)) ::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>*  arrayCache;

/// @brief Field comparers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_comparers, put=setStaticF_comparers)) ::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>  comparers;

/// @brief Field largeList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_largeList, put=__cordl_internal_set_largeList)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  largeList;

/// @brief Field numNodes, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_numNodes, put=__cordl_internal_set_numNodes)) int32_t  numNodes;

/// @brief Field tree, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tree, put=__cordl_internal_set_tree)) ::ArrayW<::GlobalNamespace::PointKDTree_Node>  tree;

/// @brief Method Add, addr 0x5e9a1c4, size 0x18, virtual false, abstract: false, final false
inline void Add(::Pathfinding::GraphNode*  node) ;

/// @brief Method Add, addr 0x5e9a1dc, size 0x1dc, virtual false, abstract: false, final false
inline void Add(::Pathfinding::GraphNode*  point, int32_t  index, int32_t  depth) ;

/// @brief Method Build, addr 0x5e9a578, size 0x478, virtual false, abstract: false, final false
inline void Build(int32_t  index, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  start, int32_t  end) ;

/// @brief Method CollectAndClear, addr 0x5e9aa70, size 0x17c, virtual false, abstract: false, final false
inline void CollectAndClear(int32_t  index, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  buffer) ;

/// @brief Method EnsureSize, addr 0x5e9acfc, size 0xdc, virtual false, abstract: false, final false
inline void EnsureSize(int32_t  index) ;

/// @brief Method GetInRange, addr 0x5e9b454, size 0x1c, virtual false, abstract: false, final false
inline void GetInRange(::Pathfinding::Int3  point, int64_t  sqrRadius, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  buffer) ;

/// @brief Method GetInRangeInternal, addr 0x5e9b470, size 0x21c, virtual false, abstract: false, final false
inline void GetInRangeInternal(int32_t  index, ::Pathfinding::Int3  point, int64_t  sqrRadius, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  buffer) ;

/// @brief Method GetNearest, addr 0x5e9add8, size 0x3c, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* GetNearest(::Pathfinding::Int3  point, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method GetNearestConnection, addr 0x5e9b008, size 0x54, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* GetNearestConnection(::Pathfinding::Int3  point, ::Pathfinding::NNConstraint*  constraint, int64_t  maximumSqrConnectionLength) ;

/// @brief Method GetNearestConnectionInternal, addr 0x5e9b05c, size 0x3f8, virtual false, abstract: false, final false
inline void GetNearestConnectionInternal(int32_t  index, ::Pathfinding::Int3  point, ::Pathfinding::NNConstraint*  constraint, ::by_ref<::Pathfinding::GraphNode*>  best, ::by_ref<int64_t>  bestSqrDist, int64_t  distanceThresholdOffset) ;

/// @brief Method GetNearestInternal, addr 0x5e9ae14, size 0x1f4, virtual false, abstract: false, final false
inline void GetNearestInternal(int32_t  index, ::Pathfinding::Int3  point, ::Pathfinding::NNConstraint*  constraint, ::by_ref<::Pathfinding::GraphNode*>  best, ::by_ref<int64_t>  bestSqrDist) ;

/// @brief Method GetOrCreateList, addr 0x5e9a134, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::Pathfinding::GraphNode*> GetOrCreateList() ;

/// @brief Method MaxAllowedSize, addr 0x5e9abec, size 0x88, virtual false, abstract: false, final false
static inline int32_t MaxAllowedSize(int32_t  numNodes, int32_t  depth) ;

static inline ::Pathfinding::PointKDTree* New_ctor() ;

/// @brief Method Rebalance, addr 0x5e9ac74, size 0x88, virtual false, abstract: false, final false
inline void Rebalance(int32_t  index) ;

/// @brief Method Rebuild, addr 0x5e9a3b8, size 0x1c0, virtual false, abstract: false, final false
inline void Rebuild(::ArrayW<::Pathfinding::GraphNode*>  nodes, int32_t  start, int32_t  end) ;

/// @brief Method Size, addr 0x5e9a9f0, size 0x80, virtual false, abstract: false, final false
inline int32_t Size(int32_t  index) ;

constexpr ::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>* const& __cordl_internal_get_arrayCache() const;

constexpr ::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>*& __cordl_internal_get_arrayCache() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_largeList() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_largeList() ;

constexpr int32_t const& __cordl_internal_get_numNodes() const;

constexpr int32_t& __cordl_internal_get_numNodes() ;

constexpr ::ArrayW<::GlobalNamespace::PointKDTree_Node> const& __cordl_internal_get_tree() const;

constexpr ::ArrayW<::GlobalNamespace::PointKDTree_Node>& __cordl_internal_get_tree() ;

constexpr void __cordl_internal_set_arrayCache(::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>*  value) ;

constexpr void __cordl_internal_set_largeList(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_numNodes(int32_t  value) ;

constexpr void __cordl_internal_set_tree(::ArrayW<::GlobalNamespace::PointKDTree_Node>  value) ;

/// @brief Method .ctor, addr 0x5e99fc8, size 0x16c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*> getStaticF_comparers() ;

static inline void setStaticF_comparers(::ArrayW<::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointKDTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointKDTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointKDTree(PointKDTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointKDTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointKDTree(PointKDTree const& ) = delete;

/// @brief Field LeafArraySize offset 0xffffffff size 0x4
static constexpr int32_t  LeafArraySize{static_cast<int32_t>(0x15)};

/// @brief Field LeafSize offset 0xffffffff size 0x4
static constexpr int32_t  LeafSize{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21353};

/// @brief Field tree, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PointKDTree_Node>  ___tree;

/// @brief Field numNodes, offset: 0x18, size: 0x4, def value: None
 int32_t  ___numNodes;

/// @brief Field largeList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___largeList;

/// @brief Field arrayCache, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::ArrayW<::Pathfinding::GraphNode*>>*  ___arrayCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PointKDTree, ___tree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointKDTree, ___numNodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointKDTree, ___largeList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointKDTree, ___arrayCache) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PointKDTree) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PointKDTree/CompareZ
class CORDL_TYPE PointKDTree_CompareZ : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*() noexcept;

/// @brief Method Compare, addr 0x5e9b898, size 0x28, virtual true, abstract: false, final true
inline int32_t Compare(::Pathfinding::GraphNode*  lhs, ::Pathfinding::GraphNode*  rhs) ;

static inline ::Pathfinding::PointKDTree_CompareZ* New_ctor() ;

/// @brief Method .ctor, addr 0x5e9b840, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>* i___System__Collections__Generic__IComparer_1___Pathfinding__GraphNode__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointKDTree_CompareZ() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointKDTree_CompareZ", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointKDTree_CompareZ(PointKDTree_CompareZ && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointKDTree_CompareZ", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointKDTree_CompareZ(PointKDTree_CompareZ const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21352};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::PointKDTree_CompareZ) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PointKDTree/CompareY
class CORDL_TYPE PointKDTree_CompareY : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*() noexcept;

/// @brief Method Compare, addr 0x5e9b870, size 0x28, virtual true, abstract: false, final true
inline int32_t Compare(::Pathfinding::GraphNode*  lhs, ::Pathfinding::GraphNode*  rhs) ;

static inline ::Pathfinding::PointKDTree_CompareY* New_ctor() ;

/// @brief Method .ctor, addr 0x5e9b838, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>* i___System__Collections__Generic__IComparer_1___Pathfinding__GraphNode__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointKDTree_CompareY() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointKDTree_CompareY", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointKDTree_CompareY(PointKDTree_CompareY && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointKDTree_CompareY", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointKDTree_CompareY(PointKDTree_CompareY const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21351};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::PointKDTree_CompareY) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PointKDTree/CompareX
class CORDL_TYPE PointKDTree_CompareX : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>*() noexcept;

/// @brief Method Compare, addr 0x5e9b848, size 0x28, virtual true, abstract: false, final true
inline int32_t Compare(::Pathfinding::GraphNode*  lhs, ::Pathfinding::GraphNode*  rhs) ;

static inline ::Pathfinding::PointKDTree_CompareX* New_ctor() ;

/// @brief Method .ctor, addr 0x5e9b830, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>"
constexpr ::System::Collections::Generic::IComparer_1<::Pathfinding::GraphNode*>* i___System__Collections__Generic__IComparer_1___Pathfinding__GraphNode__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointKDTree_CompareX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointKDTree_CompareX", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointKDTree_CompareX(PointKDTree_CompareX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointKDTree_CompareX", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointKDTree_CompareX(PointKDTree_CompareX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21350};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::PointKDTree_CompareX) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
