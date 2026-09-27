#pragma once
// IWYU pragma private; include "Pathfinding/PathHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathHandler)
namespace Pathfinding {
class BinaryHeap;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class PathNode;
}
namespace Pathfinding {
class Path;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Pathfinding {
class PathHandler;
}
// Write type traits
MARK_REF_T(::Pathfinding::PathHandler*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathHandler*, "Pathfinding", "PathHandler");
// Dependencies Pathfinding.PathNode, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathHandler
class CORDL_TYPE PathHandler : public ::System::Object {
public:
// Declarations
/// @brief Field DebugStringBuilder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_DebugStringBuilder, put=__cordl_internal_set_DebugStringBuilder)) ::System::Text::StringBuilder*  DebugStringBuilder;

 __declspec(property(get=get_PathID)) uint16_t  PathID;

/// @brief Field heap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_heap, put=__cordl_internal_set_heap)) ::Pathfinding::BinaryHeap*  heap;

/// @brief Field nodes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::Pathfinding::PathNode*>  nodes;

/// @brief Field pathID, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_pathID, put=__cordl_internal_set_pathID)) uint16_t  pathID;

/// @brief Field threadID, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_threadID, put=__cordl_internal_set_threadID)) int32_t  threadID;

/// @brief Field totalThreadCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalThreadCount, put=__cordl_internal_set_totalThreadCount)) int32_t  totalThreadCount;

/// @brief Method ClearPathIDs, addr 0x5e6a870, size 0x54, virtual false, abstract: false, final false
inline void ClearPathIDs() ;

/// @brief Method DestroyNode, addr 0x5e64ecc, size 0x40, virtual false, abstract: false, final false
inline void DestroyNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method GetPathNode, addr 0x5e680f0, size 0x3c, virtual false, abstract: false, final false
inline ::Pathfinding::PathNode* GetPathNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method GetPathNode, addr 0x5e6acb8, size 0x30, virtual false, abstract: false, final false
inline ::Pathfinding::PathNode* GetPathNode(int32_t  nodeIndex) ;

/// @brief Method InitializeForPath, addr 0x5e6a8c4, size 0x2c, virtual false, abstract: false, final false
inline void InitializeForPath(::Pathfinding::Path*  p) ;

/// @brief Method InitializeNode, addr 0x5e64c3c, size 0x1d4, virtual false, abstract: false, final false
inline void InitializeNode(::Pathfinding::GraphNode*  node) ;

static inline ::Pathfinding::PathHandler* New_ctor(int32_t  threadID, int32_t  totalThreadCount) ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_DebugStringBuilder() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_DebugStringBuilder() ;

constexpr ::Pathfinding::BinaryHeap* const& __cordl_internal_get_heap() const;

constexpr ::Pathfinding::BinaryHeap*& __cordl_internal_get_heap() ;

constexpr ::ArrayW<::Pathfinding::PathNode*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::Pathfinding::PathNode*>& __cordl_internal_get_nodes() ;

constexpr uint16_t const& __cordl_internal_get_pathID() const;

constexpr uint16_t& __cordl_internal_get_pathID() ;

constexpr int32_t const& __cordl_internal_get_threadID() const;

constexpr int32_t& __cordl_internal_get_threadID() ;

constexpr int32_t const& __cordl_internal_get_totalThreadCount() const;

constexpr int32_t& __cordl_internal_get_totalThreadCount() ;

constexpr void __cordl_internal_set_DebugStringBuilder(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_heap(::Pathfinding::BinaryHeap*  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::Pathfinding::PathNode*>  value) ;

constexpr void __cordl_internal_set_pathID(uint16_t  value) ;

constexpr void __cordl_internal_set_threadID(int32_t  value) ;

constexpr void __cordl_internal_set_totalThreadCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e63cac, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(int32_t  threadID, int32_t  totalThreadCount) ;

/// @brief Method get_PathID, addr 0x5e6acb0, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_PathID() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathHandler(PathHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathHandler(PathHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21282};

/// @brief Field pathID, offset: 0x10, size: 0x2, def value: None
 uint16_t  ___pathID;

/// @brief Field threadID, offset: 0x14, size: 0x4, def value: None
 int32_t  ___threadID;

/// @brief Field totalThreadCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___totalThreadCount;

/// @brief Field heap, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::BinaryHeap*  ___heap;

/// @brief Field nodes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::PathNode*>  ___nodes;

/// @brief Field DebugStringBuilder, offset: 0x30, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___DebugStringBuilder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathHandler, ___pathID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathHandler, ___threadID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathHandler, ___totalThreadCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathHandler, ___heap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathHandler, ___nodes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathHandler, ___DebugStringBuilder) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathHandler) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
