#pragma once
// IWYU pragma private; include "Pathfinding/Examples/ExampleMover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ExampleMover)
namespace Pathfinding::Examples {
class RVOExampleAgent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding::Examples {
class ExampleMover;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::ExampleMover*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ExampleMover*, "Pathfinding.Examples", "ExampleMover");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_example_mover.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ExampleMover
class CORDL_TYPE ExampleMover : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field agent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::Pathfinding::Examples::RVOExampleAgent>  agent;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Method Awake, addr 0x5ef669c, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5ef672c, size 0x50, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Pathfinding::Examples::ExampleMover* New_ctor() ;

/// @brief Method Start, addr 0x5ef66f4, size 0x38, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Pathfinding::Examples::RVOExampleAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::Pathfinding::Examples::RVOExampleAgent>& __cordl_internal_get_agent() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_agent(::UnityW<::Pathfinding::Examples::RVOExampleAgent>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5ef677c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExampleMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExampleMover", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExampleMover(ExampleMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExampleMover", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExampleMover(ExampleMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21538};

/// @brief Field agent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::RVOExampleAgent>  ___agent;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ExampleMover, ___agent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ExampleMover, ___target) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ExampleMover) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::Examples
