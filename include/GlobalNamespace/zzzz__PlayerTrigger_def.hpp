#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerTrigger)
namespace GlobalNamespace {
class CompositeTriggerEvents;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerTrigger*, "", "PlayerTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerTrigger
class CORDL_TYPE PlayerTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field isPlayerCollided, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlayerCollided, put=__cordl_internal_set_isPlayerCollided)) bool  isPlayerCollided;

/// @brief Field playerCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCollider, put=__cordl_internal_set_playerCollider)) ::UnityW<::UnityEngine::Collider>  playerCollider;

/// @brief Field triggerCollisionEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerCollisionEvents, put=__cordl_internal_set_triggerCollisionEvents)) ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  triggerCollisionEvents;

/// @brief Method Awake, addr 0x5abbe34, size 0xd8, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::PlayerTrigger* New_ctor() ;

/// @brief Method OnCompositeTriggerEnter, addr 0x5abbf0c, size 0x110, virtual false, abstract: false, final false
inline void OnCompositeTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnCompositeTriggerExit, addr 0x5abc01c, size 0x8c, virtual false, abstract: false, final false
inline void OnCompositeTriggerExit(::UnityEngine::Collider*  collider) ;

/// @brief Method PlayerEnter, addr 0x5abc0a8, size 0xc, virtual true, abstract: false, final false
inline void PlayerEnter() ;

/// @brief Method PlayerExit, addr 0x5abc0b4, size 0x24, virtual true, abstract: false, final false
inline void PlayerExit() ;

constexpr bool const& __cordl_internal_get_isPlayerCollided() const;

constexpr bool& __cordl_internal_get_isPlayerCollided() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_playerCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_playerCollider() ;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& __cordl_internal_get_triggerCollisionEvents() const;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& __cordl_internal_get_triggerCollisionEvents() ;

constexpr void __cordl_internal_set_isPlayerCollided(bool  value) ;

constexpr void __cordl_internal_set_playerCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_triggerCollisionEvents(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value) ;

/// @brief Method .ctor, addr 0x5abc0d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTrigger(PlayerTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTrigger(PlayerTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3311};

/// @brief Field isPlayerCollided, offset: 0x20, size: 0x1, def value: None
 bool  ___isPlayerCollided;

/// @brief Field playerCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___playerCollider;

/// [SerializeField]
/// @brief Field triggerCollisionEvents, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  ___triggerCollisionEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTrigger, ___isPlayerCollided) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTrigger, ___playerCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTrigger, ___triggerCollisionEvents) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerTrigger) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
