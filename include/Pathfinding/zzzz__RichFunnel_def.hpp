#pragma once
// IWYU pragma private; include "Pathfinding/RichFunnel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__RichPathPart_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RichFunnel)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class IRaycastableGraph;
}
namespace Pathfinding {
class NavmeshBase;
}
namespace Pathfinding {
class RichPath;
}
namespace Pathfinding {
class TriangleMeshNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class RichFunnel;
}
// Write type traits
MARK_REF_T(::Pathfinding::RichFunnel*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RichFunnel*, "Pathfinding", "RichFunnel");
// Dependencies Pathfinding.RichPathPart, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RichFunnel
class CORDL_TYPE RichFunnel : public ::Pathfinding::RichPathPart {
public:
// Declarations
 __declspec(property(get=get_CurrentNode)) ::Pathfinding::TriangleMeshNode*  CurrentNode;

 __declspec(property(get=get_DistanceToEndOfPath)) float_t  DistanceToEndOfPath;

/// @brief Field checkForDestroyedNodesCounter, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkForDestroyedNodesCounter, put=__cordl_internal_set_checkForDestroyedNodesCounter)) int32_t  checkForDestroyedNodesCounter;

/// @brief Field currentNode, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentNode, put=__cordl_internal_set_currentNode)) int32_t  currentNode;

/// @brief Field currentPosition, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentPosition, put=__cordl_internal_set_currentPosition)) ::UnityEngine::Vector3  currentPosition;

/// @brief Field exactEnd, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_exactEnd, put=__cordl_internal_set_exactEnd)) ::UnityEngine::Vector3  exactEnd;

/// @brief Field exactStart, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_exactStart, put=__cordl_internal_set_exactStart)) ::UnityEngine::Vector3  exactStart;

/// @brief Field funnelSimplification, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_funnelSimplification, put=__cordl_internal_set_funnelSimplification)) bool  funnelSimplification;

/// @brief Field graph, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::Pathfinding::NavmeshBase*  graph;

/// @brief Field left, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_left, put=__cordl_internal_set_left)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left;

/// @brief Field navmeshClampDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_navmeshClampDict, put=setStaticF_navmeshClampDict)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*  navmeshClampDict;

/// @brief Field navmeshClampList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_navmeshClampList, put=setStaticF_navmeshClampList)) ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*  navmeshClampList;

/// @brief Field navmeshClampQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_navmeshClampQueue, put=setStaticF_navmeshClampQueue)) ::System::Collections::Generic::Queue_1<::Pathfinding::TriangleMeshNode*>*  navmeshClampQueue;

/// @brief Field nodes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*  nodes;

/// @brief Field path, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::RichPath*  path;

/// @brief Field right, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_right, put=__cordl_internal_set_right)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right;

/// @brief Field triBuffer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_triBuffer, put=__cordl_internal_set_triBuffer)) ::ArrayW<int32_t>  triBuffer;

/// @brief Method BuildFunnelCorridor, addr 0x5e43054, size 0x6d0, virtual false, abstract: false, final false
inline void BuildFunnelCorridor(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  start, int32_t  end) ;

/// @brief Method CheckForDestroyedNodes, addr 0x5e44aa8, size 0xb8, virtual false, abstract: false, final false
inline bool CheckForDestroyedNodes() ;

/// @brief Method ClampToNavmesh, addr 0x5e421f4, size 0x198, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClampToNavmesh(::UnityEngine::Vector3  position) ;

/// @brief Method ClampToNavmeshInternal, addr 0x5e44c2c, size 0x630, virtual false, abstract: false, final false
inline bool ClampToNavmeshInternal(::by_ref<::UnityEngine::Vector3>  position) ;

/// @brief Method FindNextCorners, addr 0x5e4525c, size 0x9e0, virtual false, abstract: false, final false
inline bool FindNextCorners(::UnityEngine::Vector3  origin, int32_t  startIndex, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  funnelPath, int32_t  numCorners, ::by_ref<bool>  lastCorner) ;

/// @brief Method FindWalls, addr 0x5e45c3c, size 0x6f8, virtual false, abstract: false, final false
inline void FindWalls(int32_t  nodeIndex, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  wallBuffer, ::UnityEngine::Vector3  position, float_t  range) ;

/// @brief Method FindWalls, addr 0x5e41ad4, size 0x1c, virtual false, abstract: false, final false
inline void FindWalls(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  wallBuffer, float_t  range) ;

/// @brief Method Initialize, addr 0x5e42f54, size 0x100, virtual false, abstract: false, final false
inline ::Pathfinding::RichFunnel* Initialize(::Pathfinding::RichPath*  path, ::Pathfinding::NavmeshBase*  graph) ;

static inline ::Pathfinding::RichFunnel* New_ctor() ;

/// @brief Method OnEnterPool, addr 0x5e43920, size 0xb4, virtual true, abstract: false, final false
inline void OnEnterPool() ;

/// @brief Method SimplifyPath, addr 0x5e43a44, size 0xd60, virtual false, abstract: false, final false
inline void SimplifyPath(::Pathfinding::IRaycastableGraph*  graph, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, int32_t  start, int32_t  end, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  result, ::UnityEngine::Vector3  startPoint, ::UnityEngine::Vector3  endPoint) ;

/// @brief Method Update, addr 0x5e40774, size 0x43c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 Update(::UnityEngine::Vector3  position, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, int32_t  numCorners, ::by_ref<bool>  lastCorner, ::by_ref<bool>  requiresRepath) ;

/// @brief Method UpdateFunnelCorridor, addr 0x5e447a4, size 0x304, virtual false, abstract: false, final false
inline void UpdateFunnelCorridor(int32_t  splitIndex, ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*  prefix) ;

constexpr int32_t const& __cordl_internal_get_checkForDestroyedNodesCounter() const;

constexpr int32_t& __cordl_internal_get_checkForDestroyedNodesCounter() ;

constexpr int32_t const& __cordl_internal_get_currentNode() const;

constexpr int32_t& __cordl_internal_get_currentNode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_exactEnd() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_exactEnd() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_exactStart() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_exactStart() ;

constexpr bool const& __cordl_internal_get_funnelSimplification() const;

constexpr bool& __cordl_internal_get_funnelSimplification() ;

constexpr ::Pathfinding::NavmeshBase* const& __cordl_internal_get_graph() const;

constexpr ::Pathfinding::NavmeshBase*& __cordl_internal_get_graph() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_left() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_left() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>* const& __cordl_internal_get_nodes() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*& __cordl_internal_get_nodes() ;

constexpr ::Pathfinding::RichPath* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::RichPath*& __cordl_internal_get_path() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_right() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_right() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_triBuffer() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_triBuffer() ;

constexpr void __cordl_internal_set_checkForDestroyedNodesCounter(int32_t  value) ;

constexpr void __cordl_internal_set_currentNode(int32_t  value) ;

constexpr void __cordl_internal_set_currentPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_exactEnd(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_exactStart(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_funnelSimplification(bool  value) ;

constexpr void __cordl_internal_set_graph(::Pathfinding::NavmeshBase*  value) ;

constexpr void __cordl_internal_set_left(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_nodes(::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*  value) ;

constexpr void __cordl_internal_set_path(::Pathfinding::RichPath*  value) ;

constexpr void __cordl_internal_set_right(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_triBuffer(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x5e437e0, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>* getStaticF_navmeshClampDict() ;

static inline ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>* getStaticF_navmeshClampList() ;

static inline ::System::Collections::Generic::Queue_1<::Pathfinding::TriangleMeshNode*>* getStaticF_navmeshClampQueue() ;

/// @brief Method get_CurrentNode, addr 0x5e439d4, size 0x70, virtual false, abstract: false, final false
inline ::Pathfinding::TriangleMeshNode* get_CurrentNode() ;

/// @brief Method get_DistanceToEndOfPath, addr 0x5e44b60, size 0xcc, virtual false, abstract: false, final false
inline float_t get_DistanceToEndOfPath() ;

static inline void setStaticF_navmeshClampDict(::System::Collections::Generic::Dictionary_2<::Pathfinding::TriangleMeshNode*,::Pathfinding::TriangleMeshNode*>*  value) ;

static inline void setStaticF_navmeshClampList(::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*  value) ;

static inline void setStaticF_navmeshClampQueue(::System::Collections::Generic::Queue_1<::Pathfinding::TriangleMeshNode*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RichFunnel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RichFunnel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RichFunnel(RichFunnel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RichFunnel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RichFunnel(RichFunnel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21184};

/// @brief Field left, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___left;

/// @brief Field right, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___right;

/// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::TriangleMeshNode*>*  ___nodes;

/// @brief Field exactStart, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___exactStart;

/// @brief Field exactEnd, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___exactEnd;

/// @brief Field graph, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::NavmeshBase*  ___graph;

/// @brief Field currentNode, offset: 0x48, size: 0x4, def value: None
 int32_t  ___currentNode;

/// @brief Field currentPosition, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentPosition;

/// @brief Field checkForDestroyedNodesCounter, offset: 0x58, size: 0x4, def value: None
 int32_t  ___checkForDestroyedNodesCounter;

/// @brief Field path, offset: 0x60, size: 0x8, def value: None
 ::Pathfinding::RichPath*  ___path;

/// @brief Field triBuffer, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___triBuffer;

/// @brief Field funnelSimplification, offset: 0x70, size: 0x1, def value: None
 bool  ___funnelSimplification;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RichFunnel, ___left) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___right) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___nodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___exactStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___exactEnd) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___graph) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___currentNode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___currentPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___checkForDestroyedNodesCounter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___path) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___triBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RichFunnel, ___funnelSimplification) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RichFunnel) == 0x78, "Size mismatch!");

} // namespace end def Pathfinding
