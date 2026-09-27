#pragma once
// IWYU pragma private; include "Pathfinding/Examples/MineBotAI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__AIPath_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MineBotAI)
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Pathfinding::Examples {
class MineBotAI;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::MineBotAI*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::MineBotAI*, "Pathfinding.Examples", "MineBotAI");
// [RequireComponent(typeof(Pathfinding.Seeker))]
// [Obsolete("This script has been replaced by Pathfinding.Examples.MineBotAnimation. Any uses of this script in the Unity editor will be automatically replaced by one AIPath component and one MineBotAnimation component.")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_mine_bot_a_i.php")]
// Dependencies Pathfinding.AIPath
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.MineBotAI
class CORDL_TYPE MineBotAI : public ::Pathfinding::AIPath {
public:
// Declarations
/// @brief Field anim, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field animationSpeed, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationSpeed, put=__cordl_internal_set_animationSpeed)) float_t  animationSpeed;

/// @brief Field endOfPathEffect, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_endOfPathEffect, put=__cordl_internal_set_endOfPathEffect)) ::UnityW<::UnityEngine::GameObject>  endOfPathEffect;

/// @brief Field sleepVelocity, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepVelocity, put=__cordl_internal_set_sleepVelocity)) float_t  sleepVelocity;

static inline ::Pathfinding::Examples::MineBotAI* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr float_t const& __cordl_internal_get_animationSpeed() const;

constexpr float_t& __cordl_internal_get_animationSpeed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_endOfPathEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_endOfPathEffect() ;

constexpr float_t const& __cordl_internal_get_sleepVelocity() const;

constexpr float_t& __cordl_internal_get_sleepVelocity() ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_animationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_endOfPathEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sleepVelocity(float_t  value) ;

/// @brief Method .ctor, addr 0x5efa950, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MineBotAI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MineBotAI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MineBotAI(MineBotAI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MineBotAI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MineBotAI(MineBotAI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21547};

/// @brief Field anim, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// @brief Field sleepVelocity, offset: 0x170, size: 0x4, def value: None
 float_t  ___sleepVelocity;

/// @brief Field animationSpeed, offset: 0x174, size: 0x4, def value: None
 float_t  ___animationSpeed;

/// @brief Field endOfPathEffect, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___endOfPathEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::MineBotAI, ___anim) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MineBotAI, ___sleepVelocity) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MineBotAI, ___animationSpeed) == 0x174, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::MineBotAI, ___endOfPathEffect) == 0x178, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::MineBotAI) == 0x180, "Size mismatch!");

} // namespace end def Pathfinding::Examples
