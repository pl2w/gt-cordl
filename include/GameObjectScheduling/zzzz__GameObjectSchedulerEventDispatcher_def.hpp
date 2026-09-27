#pragma once
// IWYU pragma private; include "GameObjectScheduling/GameObjectSchedulerEventDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameObjectSchedulerEventDispatcher)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GameObjectScheduling {
class GameObjectSchedulerEventDispatcher;
}
// Write type traits
MARK_REF_T(::GameObjectScheduling::GameObjectSchedulerEventDispatcher*);
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::GameObjectSchedulerEventDispatcher*, "GameObjectScheduling", "GameObjectSchedulerEventDispatcher");
// Dependencies UnityEngine.MonoBehaviour
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.GameObjectSchedulerEventDispatcher
class CORDL_TYPE GameObjectSchedulerEventDispatcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_OnScheduledActivation)) ::UnityEngine::Events::UnityEvent*  OnScheduledActivation;

 __declspec(property(get=get_OnScheduledDeactivation)) ::UnityEngine::Events::UnityEvent*  OnScheduledDeactivation;

/// @brief Field onScheduledActivation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onScheduledActivation, put=__cordl_internal_set_onScheduledActivation)) ::UnityEngine::Events::UnityEvent*  onScheduledActivation;

/// @brief Field onScheduledDeactivation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onScheduledDeactivation, put=__cordl_internal_set_onScheduledDeactivation)) ::UnityEngine::Events::UnityEvent*  onScheduledDeactivation;

static inline ::GameObjectScheduling::GameObjectSchedulerEventDispatcher* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onScheduledActivation() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onScheduledActivation() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onScheduledDeactivation() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onScheduledDeactivation() ;

constexpr void __cordl_internal_set_onScheduledActivation(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onScheduledDeactivation(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5de0d94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnScheduledActivation, addr 0x5de0d84, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnScheduledActivation() ;

/// @brief Method get_OnScheduledDeactivation, addr 0x5de0d8c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_OnScheduledDeactivation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameObjectSchedulerEventDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSchedulerEventDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameObjectSchedulerEventDispatcher(GameObjectSchedulerEventDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectSchedulerEventDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameObjectSchedulerEventDispatcher(GameObjectSchedulerEventDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5129};

/// [SerializeField]
/// @brief Field onScheduledActivation, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onScheduledActivation;

/// [SerializeField]
/// @brief Field onScheduledDeactivation, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onScheduledDeactivation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::GameObjectSchedulerEventDispatcher, ___onScheduledActivation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::GameObjectSchedulerEventDispatcher, ___onScheduledDeactivation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::GameObjectSchedulerEventDispatcher) == 0x30, "Size mismatch!");

} // namespace end def GameObjectScheduling
