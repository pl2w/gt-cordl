#pragma once
// IWYU pragma private; include "Pathfinding/Examples/ManualRVOAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ManualRVOAgent)
namespace Pathfinding::RVO {
class RVOController;
}
// Forward declare root types
namespace Pathfinding::Examples {
class ManualRVOAgent;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::ManualRVOAgent*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ManualRVOAgent*, "Pathfinding.Examples", "ManualRVOAgent");
// [RequireComponent(typeof(Pathfinding.RVO.RVOController))]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_manual_r_v_o_agent.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ManualRVOAgent
class CORDL_TYPE ManualRVOAgent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field rvo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rvo, put=__cordl_internal_set_rvo)) ::UnityW<::Pathfinding::RVO::RVOController>  rvo;

/// @brief Field speed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Method Awake, addr 0x5efa7d4, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Pathfinding::Examples::ManualRVOAgent* New_ctor() ;

/// @brief Method Update, addr 0x5efa82c, size 0x114, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Pathfinding::RVO::RVOController> const& __cordl_internal_get_rvo() const;

constexpr ::UnityW<::Pathfinding::RVO::RVOController>& __cordl_internal_get_rvo() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr void __cordl_internal_set_rvo(::UnityW<::Pathfinding::RVO::RVOController>  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

/// @brief Method .ctor, addr 0x5efa940, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManualRVOAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManualRVOAgent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ManualRVOAgent(ManualRVOAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManualRVOAgent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManualRVOAgent(ManualRVOAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21546};

/// @brief Field rvo, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RVO::RVOController>  ___rvo;

/// @brief Field speed, offset: 0x28, size: 0x4, def value: None
 float_t  ___speed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ManualRVOAgent, ___rvo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ManualRVOAgent, ___speed) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ManualRVOAgent) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::Examples
