#pragma once
// IWYU pragma private; include "Pathfinding/Examples/Astar3DButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Astar3DButton)
namespace Pathfinding {
class GraphNode;
}
// Forward declare root types
namespace Pathfinding::Examples {
class Astar3DButton;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::Astar3DButton*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::Astar3DButton*, "Pathfinding.Examples", "Astar3DButton");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_astar3_d_button.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.Astar3DButton
class CORDL_TYPE Astar3DButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field node, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::Pathfinding::GraphNode*  node;

static inline ::Pathfinding::Examples::Astar3DButton* New_ctor() ;

/// @brief Method OnClick, addr 0x5ef4d48, size 0x4, virtual false, abstract: false, final false
inline void OnClick() ;

/// @brief Method OnHover, addr 0x5ef4d44, size 0x4, virtual false, abstract: false, final false
inline void OnHover(bool  hover) ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_node() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_node() ;

constexpr void __cordl_internal_set_node(::Pathfinding::GraphNode*  value) ;

/// @brief Method .ctor, addr 0x5ef4d4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Astar3DButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Astar3DButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Astar3DButton(Astar3DButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Astar3DButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Astar3DButton(Astar3DButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21530};

/// @brief Field node, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___node;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::Astar3DButton, ___node) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::Astar3DButton) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::Examples
