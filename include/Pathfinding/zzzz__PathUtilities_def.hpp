#pragma once
// IWYU pragma private; include "Pathfinding/PathUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PathUtilities)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class IRaycastableGraph;
}
namespace Pathfinding {
class PathUtilities___c__DisplayClass3_0;
}
namespace Pathfinding {
class PathUtilities___c__DisplayClass6_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class PathUtilities;
}
namespace Pathfinding {
class PathUtilities___c__DisplayClass3_0;
}
namespace Pathfinding {
class PathUtilities___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::PathUtilities*);
MARK_REF_T(::Pathfinding::PathUtilities___c__DisplayClass3_0*);
MARK_REF_T(::Pathfinding::PathUtilities___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathUtilities*, "Pathfinding", "PathUtilities");
DEFINE_IL2CPP_CLASS(::Pathfinding::PathUtilities___c__DisplayClass3_0*, "Pathfinding", "PathUtilities/<>c__DisplayClass3_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::PathUtilities___c__DisplayClass6_0*, "Pathfinding", "PathUtilities/<>c__DisplayClass6_0");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathUtilities
class CORDL_TYPE PathUtilities : public ::System::Object {
public:
// Declarations
using __c__DisplayClass3_0 = ::Pathfinding::PathUtilities___c__DisplayClass3_0;

using __c__DisplayClass6_0 = ::Pathfinding::PathUtilities___c__DisplayClass6_0;

/// @brief Field BFSMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BFSMap, put=setStaticF_BFSMap)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*  BFSMap;

/// @brief Field BFSQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BFSQueue, put=setStaticF_BFSQueue)) ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  BFSQueue;

/// @brief Method BFS, addr 0x5eb8830, size 0x398, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* BFS(::Pathfinding::GraphNode*  seed, int32_t  depth, int32_t  tagMask, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter) ;

/// @brief Method GetPointsAroundPoint, addr 0x5eb90d0, size 0x578, virtual false, abstract: false, final false
static inline void GetPointsAroundPoint(::UnityEngine::Vector3  center, ::Pathfinding::IRaycastableGraph*  g, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  previousPoints, float_t  radius, float_t  clearanceRadius) ;

/// @brief Method GetPointsAroundPointWorld, addr 0x5eb8f18, size 0x1b8, virtual false, abstract: false, final false
static inline void GetPointsAroundPointWorld(::UnityEngine::Vector3  p, ::Pathfinding::IRaycastableGraph*  g, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  previousPoints, float_t  radius, float_t  clearanceRadius) ;

/// @brief Method GetPointsOnNodes, addr 0x5eb9648, size 0x5e8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetPointsOnNodes(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  count, float_t  clearanceRadius) ;

/// @brief Method GetReachableNodes, addr 0x5eb857c, size 0x2ac, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetReachableNodes(::Pathfinding::GraphNode*  seed, int32_t  tagMask, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter) ;

/// @brief Method GetSpiralPoints, addr 0x5eb8bd0, size 0x2fc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetSpiralPoints(int32_t  count, float_t  clearance) ;

/// @brief Method InvoluteOfCircle, addr 0x5eb8ecc, size 0x4c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 InvoluteOfCircle(float_t  a, float_t  t) ;

/// @brief Method IsPathPossible, addr 0x5eb8384, size 0x70, virtual false, abstract: false, final false
static inline bool IsPathPossible(::Pathfinding::GraphNode*  node1, ::Pathfinding::GraphNode*  node2) ;

/// @brief Method IsPathPossible, addr 0x5eb8290, size 0xf4, virtual false, abstract: false, final false
static inline bool IsPathPossible(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes) ;

/// @brief Method IsPathPossible, addr 0x5eb83f4, size 0x188, virtual false, abstract: false, final false
static inline bool IsPathPossible(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  tagMask) ;

static inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>* getStaticF_BFSMap() ;

static inline ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>* getStaticF_BFSQueue() ;

static inline void setStaticF_BFSMap(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*  value) ;

static inline void setStaticF_BFSQueue(::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathUtilities(PathUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathUtilities(PathUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21418};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::PathUtilities) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathUtilities/<>c__DisplayClass6_0
class CORDL_TYPE PathUtilities___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field currentDist, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentDist, put=__cordl_internal_set_currentDist)) int32_t  currentDist;

/// @brief Field filter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_filter, put=__cordl_internal_set_filter)) ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter;

/// @brief Field map, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_map, put=__cordl_internal_set_map)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*  map;

/// @brief Field que, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_que, put=__cordl_internal_set_que)) ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  que;

/// @brief Field result, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  result;

/// @brief Field tagMask, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagMask, put=__cordl_internal_set_tagMask)) int32_t  tagMask;

static inline ::Pathfinding::PathUtilities___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <BFS>b__0, addr 0x5eb9ea0, size 0x16c, virtual false, abstract: false, final false
inline void _BFS_b__0(::Pathfinding::GraphNode*  node) ;

/// @brief Method <BFS>b__1, addr 0x5eba00c, size 0x184, virtual false, abstract: false, final false
inline void _BFS_b__1(::Pathfinding::GraphNode*  node) ;

constexpr int32_t const& __cordl_internal_get_currentDist() const;

constexpr int32_t& __cordl_internal_get_currentDist() ;

constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>* const& __cordl_internal_get_filter() const;

constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>*& __cordl_internal_get_filter() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>* const& __cordl_internal_get_map() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*& __cordl_internal_get_map() ;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_que() const;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_que() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_result() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_result() ;

constexpr int32_t const& __cordl_internal_get_tagMask() const;

constexpr int32_t& __cordl_internal_get_tagMask() ;

constexpr void __cordl_internal_set_currentDist(int32_t  value) ;

constexpr void __cordl_internal_set_filter(::System::Func_2<::Pathfinding::GraphNode*,bool>*  value) ;

constexpr void __cordl_internal_set_map(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*  value) ;

constexpr void __cordl_internal_set_que(::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_result(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_tagMask(int32_t  value) ;

/// @brief Method .ctor, addr 0x5eb8bc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathUtilities___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathUtilities___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathUtilities___c__DisplayClass6_0(PathUtilities___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathUtilities___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathUtilities___c__DisplayClass6_0(PathUtilities___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21417};

/// @brief Field map, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,int32_t>*  ___map;

/// @brief Field filter, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::Pathfinding::GraphNode*,bool>*  ___filter;

/// @brief Field currentDist, offset: 0x20, size: 0x4, def value: None
 int32_t  ___currentDist;

/// @brief Field result, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___result;

/// @brief Field que, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  ___que;

/// @brief Field tagMask, offset: 0x38, size: 0x4, def value: None
 int32_t  ___tagMask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass6_0, ___map) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass6_0, ___filter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass6_0, ___currentDist) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass6_0, ___result) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass6_0, ___que) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass6_0, ___tagMask) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathUtilities___c__DisplayClass6_0) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathUtilities/<>c__DisplayClass3_0
class CORDL_TYPE PathUtilities___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field dfsStack, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_dfsStack, put=__cordl_internal_set_dfsStack)) ::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*  dfsStack;

/// @brief Field filter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_filter, put=__cordl_internal_set_filter)) ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter;

/// @brief Field map, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_map, put=__cordl_internal_set_map)) ::System::Collections::Generic::HashSet_1<::Pathfinding::GraphNode*>*  map;

/// @brief Field reachable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_reachable, put=__cordl_internal_set_reachable)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  reachable;

/// @brief Field tagMask, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagMask, put=__cordl_internal_set_tagMask)) int32_t  tagMask;

static inline ::Pathfinding::PathUtilities___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <GetReachableNodes>b__0, addr 0x5eb9c30, size 0x11c, virtual false, abstract: false, final false
inline void _GetReachableNodes_b__0(::Pathfinding::GraphNode*  node) ;

/// @brief Method <GetReachableNodes>b__1, addr 0x5eb9d4c, size 0x154, virtual false, abstract: false, final false
inline void _GetReachableNodes_b__1(::Pathfinding::GraphNode*  node) ;

constexpr ::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_dfsStack() const;

constexpr ::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_dfsStack() ;

constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>* const& __cordl_internal_get_filter() const;

constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>*& __cordl_internal_get_filter() ;

constexpr ::System::Collections::Generic::HashSet_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_map() const;

constexpr ::System::Collections::Generic::HashSet_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_map() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_reachable() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_reachable() ;

constexpr int32_t const& __cordl_internal_get_tagMask() const;

constexpr int32_t& __cordl_internal_get_tagMask() ;

constexpr void __cordl_internal_set_dfsStack(::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_filter(::System::Func_2<::Pathfinding::GraphNode*,bool>*  value) ;

constexpr void __cordl_internal_set_map(::System::Collections::Generic::HashSet_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_reachable(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_tagMask(int32_t  value) ;

/// @brief Method .ctor, addr 0x5eb8828, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathUtilities___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathUtilities___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathUtilities___c__DisplayClass3_0(PathUtilities___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathUtilities___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathUtilities___c__DisplayClass3_0(PathUtilities___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21416};

/// @brief Field map, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Pathfinding::GraphNode*>*  ___map;

/// @brief Field reachable, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___reachable;

/// @brief Field dfsStack, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::Pathfinding::GraphNode*>*  ___dfsStack;

/// @brief Field tagMask, offset: 0x28, size: 0x4, def value: None
 int32_t  ___tagMask;

/// @brief Field filter, offset: 0x30, size: 0x8, def value: None
 ::System::Func_2<::Pathfinding::GraphNode*,bool>*  ___filter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass3_0, ___map) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass3_0, ___reachable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass3_0, ___dfsStack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass3_0, ___tagMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathUtilities___c__DisplayClass3_0, ___filter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathUtilities___c__DisplayClass3_0) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
