#pragma once
// IWYU pragma private; include "Pathfinding/IRaycastableGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRaycastableGraph)
namespace Pathfinding {
struct GraphHitInfo;
}
namespace Pathfinding {
class GraphNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class IRaycastableGraph;
}
// Write type traits
MARK_REF_T(::Pathfinding::IRaycastableGraph*);
DEFINE_IL2CPP_CLASS(::Pathfinding::IRaycastableGraph*, "Pathfinding", "IRaycastableGraph");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.IRaycastableGraph
class CORDL_TYPE IRaycastableGraph {
public:
// Declarations
/// @brief Method Linecast, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

/// [Obsolete]
/// @brief Method Linecast, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint) ;

/// [Obsolete]
/// @brief Method Linecast, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit) ;

/// [Obsolete]
/// @brief Method Linecast, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace) ;

/// @brief Method Linecast, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter) ;

// Ctor Parameters [CppParam { name: "", ty: "IRaycastableGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRaycastableGraph(IRaycastableGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21200};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
