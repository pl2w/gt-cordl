#pragma once
// IWYU pragma private; include "Pathfinding/INavmesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INavmesh)
namespace Pathfinding {
class GraphNode;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Pathfinding {
class INavmesh;
}
// Write type traits
MARK_REF_T(::Pathfinding::INavmesh*);
DEFINE_IL2CPP_CLASS(::Pathfinding::INavmesh*, "Pathfinding", "INavmesh");
// Dependencies 
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.INavmesh
class CORDL_TYPE INavmesh {
public:
// Declarations
/// @brief Method GetNodes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  del) ;

// Ctor Parameters [CppParam { name: "", ty: "INavmesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
INavmesh(INavmesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
