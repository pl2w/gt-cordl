#pragma once
// IWYU pragma private; include "Pathfinding/Examples/MineBotAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(MineBotAnimation)
namespace Pathfinding {
class IAstarAI;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding::Examples {
class MineBotAnimation;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::MineBotAnimation*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::MineBotAnimation*, "Pathfinding.Examples", "MineBotAnimation");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_mine_bot_animation.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour, UnityEngine.Vector3
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.MineBotAnimation
class CORDL_TYPE MineBotAnimation : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field ai, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ai, put=__cordl_internal_set_ai)) ::Pathfinding::IAstarAI*  ai;

/// @brief Field anim, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animator>  anim;

/// @brief Field endOfPathEffect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_endOfPathEffect, put=__cordl_internal_set_endOfPathEffect)) ::UnityW<::UnityEngine::GameObject>  endOfPathEffect;

/// @brief Field isAtDestination, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAtDestination, put=__cordl_internal_set_isAtDestination)) bool  isAtDestination;

/// @brief Field lastTarget, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastTarget, put=__cordl_internal_set_lastTarget)) ::UnityEngine::Vector3  lastTarget;

/// @brief Field tr, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tr, put=__cordl_internal_set_tr)) ::UnityW<::UnityEngine::Transform>  tr;

/// @brief Method Awake, addr 0x5efa9b4, size 0x9c, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Pathfinding::Examples::MineBotAnimation* New_ctor() ;

/// @brief Method OnTargetReached, addr 0x5efaa50, size 0x1bc, virtual false, abstract: false, final false
inline void OnTargetReached() ;

/// @brief Method Update, addr 0x5efac0c, size 0x1ec, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Pathfinding::IAstarAI* const& __cordl_internal_get_ai() const;

constexpr ::Pathfinding::IAstarAI*& __cordl_internal_get_ai() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_anim() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_endOfPathEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_endOfPathEffect() ;

constexpr bool const& __cordl_internal_get_isAtDestination() const;

constexpr bool& __cordl_internal_get_isAtDestination() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastTarget() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tr() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tr() ;

constexpr void __cordl_internal_set_ai(::Pathfinding::IAstarAI*  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_endOfPathEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isAtDestination(bool  value) ;

constexpr void __cordl_internal_set_lastTarget(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5efadf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MineBotAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MineBotAnimation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MineBotAnimation(MineBotAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MineBotAnimation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MineBotAnimation(MineBotAnimation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21548};

/// @brief Field anim, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___anim;

/// @brief Field endOfPathEffect, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___endOfPathEffect;

/// @brief Field isAtDestination, offset: 0x38, size: 0x1, def value: None
 bool  ___isAtDestination;

/// @brief Field ai, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::IAstarAI*  ___ai;

/// @brief Field tr, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tr;

/// @brief Field lastTarget, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::MineBotAnimation, ___anim) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MineBotAnimation, ___endOfPathEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MineBotAnimation, ___isAtDestination) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MineBotAnimation, ___ai) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MineBotAnimation, ___tr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MineBotAnimation, ___lastTarget) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::MineBotAnimation) == 0x60, "Size mismatch!");

} // namespace end def Pathfinding::Examples
