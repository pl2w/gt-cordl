#pragma once
// IWYU pragma private; include "Pathfinding/Examples/HexagonTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HexagonTrigger)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Pathfinding::Examples {
class HexagonTrigger;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::HexagonTrigger*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::HexagonTrigger*, "Pathfinding.Examples", "HexagonTrigger");
// [RequireComponent(typeof(UnityEngine.Animator))]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_hexagon_trigger.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.HexagonTrigger
class CORDL_TYPE HexagonTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field anim, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animator>  anim;

/// @brief Field button, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::UnityEngine::UI::Button>  button;

/// @brief Field visible, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_visible, put=__cordl_internal_set_visible)) bool  visible;

/// @brief Method Awake, addr 0x5ef4d54, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Pathfinding::Examples::HexagonTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5ef4dc4, size 0x164, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  coll) ;

/// @brief Method OnTriggerExit, addr 0x5ef4f28, size 0xec, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  coll) ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_anim() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get_button() ;

constexpr bool const& __cordl_internal_get_visible() const;

constexpr bool& __cordl_internal_get_visible() ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set_visible(bool  value) ;

/// @brief Method .ctor, addr 0x5ef5014, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HexagonTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HexagonTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HexagonTrigger(HexagonTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HexagonTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HexagonTrigger(HexagonTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21531};

/// @brief Field button, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ___button;

/// @brief Field anim, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___anim;

/// @brief Field visible, offset: 0x30, size: 0x1, def value: None
 bool  ___visible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::HexagonTrigger, ___button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::HexagonTrigger, ___anim) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::HexagonTrigger, ___visible) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::HexagonTrigger) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Examples
