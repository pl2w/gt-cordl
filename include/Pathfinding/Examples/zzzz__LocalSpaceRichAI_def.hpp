#pragma once
// IWYU pragma private; include "Pathfinding/Examples/LocalSpaceRichAI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__RichAI_def.hpp"
CORDL_MODULE_EXPORT(LocalSpaceRichAI)
namespace Pathfinding {
class LocalSpaceGraph;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Examples {
class LocalSpaceRichAI;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::LocalSpaceRichAI*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::LocalSpaceRichAI*, "Pathfinding.Examples", "LocalSpaceRichAI");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_local_space_rich_a_i.php")]
// Dependencies Pathfinding.RichAI
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.LocalSpaceRichAI
class CORDL_TYPE LocalSpaceRichAI : public ::Pathfinding::RichAI {
public:
// Declarations
/// @brief Field graph, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::UnityW<::Pathfinding::LocalSpaceGraph>  graph;

/// @brief Method CalculatePathRequestEndpoints, addr 0x5ef4c44, size 0x8c, virtual true, abstract: false, final false
inline void CalculatePathRequestEndpoints(::by_ref<::UnityEngine::Vector3>  start, ::by_ref<::UnityEngine::Vector3>  end) ;

static inline ::Pathfinding::Examples::LocalSpaceRichAI* New_ctor() ;

/// @brief Method RefreshTransform, addr 0x5ef4bd4, size 0x54, virtual false, abstract: false, final false
inline void RefreshTransform() ;

/// @brief Method Start, addr 0x5ef4c28, size 0x1c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5ef4cd0, size 0x1c, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Pathfinding::LocalSpaceGraph> const& __cordl_internal_get_graph() const;

constexpr ::UnityW<::Pathfinding::LocalSpaceGraph>& __cordl_internal_get_graph() ;

constexpr void __cordl_internal_set_graph(::UnityW<::Pathfinding::LocalSpaceGraph>  value) ;

/// @brief Method .ctor, addr 0x5ef4cec, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalSpaceRichAI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalSpaceRichAI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalSpaceRichAI(LocalSpaceRichAI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalSpaceRichAI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalSpaceRichAI(LocalSpaceRichAI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21529};

/// @brief Field graph, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::Pathfinding::LocalSpaceGraph>  ___graph;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::LocalSpaceRichAI, ___graph) == 0x190, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::LocalSpaceRichAI) == 0x198, "Size mismatch!");

} // namespace end def Pathfinding::Examples
