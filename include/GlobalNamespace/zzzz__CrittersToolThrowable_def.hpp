#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersToolThrowable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CrittersToolThrowable)
namespace GlobalNamespace {
class CrittersActor;
}
namespace GlobalNamespace {
class CrittersPawn;
}
namespace GlobalNamespace {
class DelayedDestroyObject;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersToolThrowable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersToolThrowable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersToolThrowable*, "", "CrittersToolThrowable");
// Dependencies CrittersActor
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersToolThrowable
class CORDL_TYPE CrittersToolThrowable : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
/// @brief Field _sqrActivationSpeed, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get__sqrActivationSpeed, put=__cordl_internal_set__sqrActivationSpeed)) float_t  _sqrActivationSpeed;

/// @brief Field debugImpactPrefab, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugImpactPrefab, put=__cordl_internal_set_debugImpactPrefab)) ::UnityW<::GlobalNamespace::DelayedDestroyObject>  debugImpactPrefab;

/// @brief Field destroyOnImpact, offset 0x191, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyOnImpact, put=__cordl_internal_set_destroyOnImpact)) bool  destroyOnImpact;

/// @brief Field hasBeenGrabbedByPlayer, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBeenGrabbedByPlayer, put=__cordl_internal_set_hasBeenGrabbedByPlayer)) bool  hasBeenGrabbedByPlayer;

/// @brief Field hasTriggeredSinceLastGrab, offset 0x1a2, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasTriggeredSinceLastGrab, put=__cordl_internal_set_hasTriggeredSinceLastGrab)) bool  hasTriggeredSinceLastGrab;

/// @brief Field onlyTriggerOnDirectCritterHit, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyTriggerOnDirectCritterHit, put=__cordl_internal_set_onlyTriggerOnDirectCritterHit)) bool  onlyTriggerOnDirectCritterHit;

/// @brief Field onlyTriggerOncePerGrab, offset 0x192, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyTriggerOncePerGrab, put=__cordl_internal_set_onlyTriggerOncePerGrab)) bool  onlyTriggerOncePerGrab;

/// @brief Field requiredActivationSpeed, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredActivationSpeed, put=__cordl_internal_set_requiredActivationSpeed)) float_t  requiredActivationSpeed;

/// @brief Field requiresPlayerGrabBeforeActivate, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get_requiresPlayerGrabBeforeActivate, put=__cordl_internal_set_requiresPlayerGrabBeforeActivate)) bool  requiresPlayerGrabBeforeActivate;

/// @brief Field shouldDisable, offset 0x1a1, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldDisable, put=__cordl_internal_set_shouldDisable)) bool  shouldDisable;

/// @brief Method GrabbedBy, addr 0x56f539c, size 0x34, virtual true, abstract: false, final false
inline void GrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing) ;

/// @brief Method Initialize, addr 0x56f47f4, size 0x2c, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::CrittersToolThrowable* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x56f53d0, size 0x24c, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnImpact, addr 0x56f561c, size 0x4, virtual true, abstract: false, final false
inline void OnImpact(::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitNormal) ;

/// @brief Method OnImpactCritter, addr 0x56f5620, size 0x4, virtual true, abstract: false, final false
inline void OnImpactCritter(::GlobalNamespace::CrittersPawn*  impactedCritter) ;

/// @brief Method OnPickedUp, addr 0x56f5624, size 0x4, virtual true, abstract: false, final false
inline void OnPickedUp() ;

/// @brief Method ProcessLocal, addr 0x56f57a0, size 0x48, virtual true, abstract: false, final false
inline bool ProcessLocal() ;

/// [Conditional("DRAW_DEBUG")]
/// @brief Method ShowDebugVisualization, addr 0x56f5628, size 0x178, virtual false, abstract: false, final false
inline void ShowDebugVisualization(::UnityEngine::Vector3  position, float_t  scale, float_t  duration) ;

/// @brief Method TogglePhysics, addr 0x56f57e8, size 0x70, virtual true, abstract: false, final false
inline void TogglePhysics(bool  enable) ;

constexpr float_t const& __cordl_internal_get__sqrActivationSpeed() const;

constexpr float_t& __cordl_internal_get__sqrActivationSpeed() ;

constexpr ::UnityW<::GlobalNamespace::DelayedDestroyObject> const& __cordl_internal_get_debugImpactPrefab() const;

constexpr ::UnityW<::GlobalNamespace::DelayedDestroyObject>& __cordl_internal_get_debugImpactPrefab() ;

constexpr bool const& __cordl_internal_get_destroyOnImpact() const;

constexpr bool& __cordl_internal_get_destroyOnImpact() ;

constexpr bool const& __cordl_internal_get_hasBeenGrabbedByPlayer() const;

constexpr bool& __cordl_internal_get_hasBeenGrabbedByPlayer() ;

constexpr bool const& __cordl_internal_get_hasTriggeredSinceLastGrab() const;

constexpr bool& __cordl_internal_get_hasTriggeredSinceLastGrab() ;

constexpr bool const& __cordl_internal_get_onlyTriggerOnDirectCritterHit() const;

constexpr bool& __cordl_internal_get_onlyTriggerOnDirectCritterHit() ;

constexpr bool const& __cordl_internal_get_onlyTriggerOncePerGrab() const;

constexpr bool& __cordl_internal_get_onlyTriggerOncePerGrab() ;

constexpr float_t const& __cordl_internal_get_requiredActivationSpeed() const;

constexpr float_t& __cordl_internal_get_requiredActivationSpeed() ;

constexpr bool const& __cordl_internal_get_requiresPlayerGrabBeforeActivate() const;

constexpr bool& __cordl_internal_get_requiresPlayerGrabBeforeActivate() ;

constexpr bool const& __cordl_internal_get_shouldDisable() const;

constexpr bool& __cordl_internal_get_shouldDisable() ;

constexpr void __cordl_internal_set__sqrActivationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_debugImpactPrefab(::UnityW<::GlobalNamespace::DelayedDestroyObject>  value) ;

constexpr void __cordl_internal_set_destroyOnImpact(bool  value) ;

constexpr void __cordl_internal_set_hasBeenGrabbedByPlayer(bool  value) ;

constexpr void __cordl_internal_set_hasTriggeredSinceLastGrab(bool  value) ;

constexpr void __cordl_internal_set_onlyTriggerOnDirectCritterHit(bool  value) ;

constexpr void __cordl_internal_set_onlyTriggerOncePerGrab(bool  value) ;

constexpr void __cordl_internal_set_requiredActivationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_requiresPlayerGrabBeforeActivate(bool  value) ;

constexpr void __cordl_internal_set_shouldDisable(bool  value) ;

/// @brief Method .ctor, addr 0x56f502c, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersToolThrowable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersToolThrowable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersToolThrowable(CrittersToolThrowable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersToolThrowable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersToolThrowable(CrittersToolThrowable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{125};

/// [Header("Throwable")]
/// @brief Field requiresPlayerGrabBeforeActivate, offset: 0x188, size: 0x1, def value: None
 bool  ___requiresPlayerGrabBeforeActivate;

/// @brief Field requiredActivationSpeed, offset: 0x18c, size: 0x4, def value: None
 float_t  ___requiredActivationSpeed;

/// @brief Field onlyTriggerOnDirectCritterHit, offset: 0x190, size: 0x1, def value: None
 bool  ___onlyTriggerOnDirectCritterHit;

/// @brief Field destroyOnImpact, offset: 0x191, size: 0x1, def value: None
 bool  ___destroyOnImpact;

/// @brief Field onlyTriggerOncePerGrab, offset: 0x192, size: 0x1, def value: None
 bool  ___onlyTriggerOncePerGrab;

/// [Header("Debug")]
/// [SerializeField]
/// @brief Field debugImpactPrefab, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DelayedDestroyObject>  ___debugImpactPrefab;

/// @brief Field hasBeenGrabbedByPlayer, offset: 0x1a0, size: 0x1, def value: None
 bool  ___hasBeenGrabbedByPlayer;

/// @brief Field shouldDisable, offset: 0x1a1, size: 0x1, def value: None
 bool  ___shouldDisable;

/// @brief Field hasTriggeredSinceLastGrab, offset: 0x1a2, size: 0x1, def value: None
 bool  ___hasTriggeredSinceLastGrab;

/// @brief Field _sqrActivationSpeed, offset: 0x1a4, size: 0x4, def value: None
 float_t  ____sqrActivationSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ___requiresPlayerGrabBeforeActivate) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ___requiredActivationSpeed) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ___onlyTriggerOnDirectCritterHit) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ___destroyOnImpact) == 0x191, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ___onlyTriggerOncePerGrab) == 0x192, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ___debugImpactPrefab) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ___hasBeenGrabbedByPlayer) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ___shouldDisable) == 0x1a1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ___hasTriggeredSinceLastGrab) == 0x1a2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersToolThrowable, ____sqrActivationSpeed) == 0x1a4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersToolThrowable) == 0x1a8, "Size mismatch!");

} // namespace end def GlobalNamespace
