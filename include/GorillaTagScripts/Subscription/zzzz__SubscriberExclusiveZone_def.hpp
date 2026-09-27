#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/SubscriberExclusiveZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SubscriberExclusiveZone)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts::Subscription {
class SubscriberExclusiveZone;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Subscription::SubscriberExclusiveZone*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::SubscriberExclusiveZone*, "GorillaTagScripts.Subscription", "SubscriberExclusiveZone");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.SubscriberExclusiveZone
class CORDL_TYPE SubscriberExclusiveZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnEnterRestrictedZone, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEnterRestrictedZone, put=__cordl_internal_set_OnEnterRestrictedZone)) ::UnityEngine::Events::UnityEvent*  OnEnterRestrictedZone;

/// @brief Field OnWarning, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnWarning, put=__cordl_internal_set_OnWarning)) ::UnityEngine::Events::UnityEvent*  OnWarning;

/// @brief Field bodyColliderWasDisabled, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_bodyColliderWasDisabled, put=__cordl_internal_set_bodyColliderWasDisabled)) bool  bodyColliderWasDisabled;

/// @brief Field driftSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_driftSpeed, put=__cordl_internal_set_driftSpeed)) float_t  driftSpeed;

/// @brief Field ejectionPoint, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ejectionPoint, put=__cordl_internal_set_ejectionPoint)) ::UnityW<::UnityEngine::Transform>  ejectionPoint;

/// @brief Field influenceZoneCollider, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_influenceZoneCollider, put=__cordl_internal_set_influenceZoneCollider)) ::UnityW<::UnityEngine::Collider>  influenceZoneCollider;

/// @brief Field insideInfluence, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get_insideInfluence, put=__cordl_internal_set_insideInfluence)) bool  insideInfluence;

/// @brief Field insideRestricted, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_insideRestricted, put=__cordl_internal_set_insideRestricted)) bool  insideRestricted;

/// @brief Field lastShoveTime, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastShoveTime, put=__cordl_internal_set_lastShoveTime)) float_t  lastShoveTime;

/// @brief Field nonSubscribeDoorObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonSubscribeDoorObject, put=__cordl_internal_set_nonSubscribeDoorObject)) ::UnityW<::UnityEngine::GameObject>  nonSubscribeDoorObject;

/// @brief Field obstacleLayers, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_obstacleLayers, put=__cordl_internal_set_obstacleLayers)) ::UnityEngine::LayerMask  obstacleLayers;

/// @brief Field restrictedZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_restrictedZone, put=__cordl_internal_set_restrictedZone)) ::UnityW<::UnityEngine::GameObject>  restrictedZone;

/// @brief Field restrictedZoneCollider, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_restrictedZoneCollider, put=__cordl_internal_set_restrictedZoneCollider)) ::UnityW<::UnityEngine::Collider>  restrictedZoneCollider;

/// @brief Field safetyCheckRadius, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_safetyCheckRadius, put=__cordl_internal_set_safetyCheckRadius)) float_t  safetyCheckRadius;

/// @brief Field shoveCooldown, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shoveCooldown, put=__cordl_internal_set_shoveCooldown)) float_t  shoveCooldown;

/// @brief Field showDebugInfo, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_showDebugInfo, put=__cordl_internal_set_showDebugInfo)) bool  showDebugInfo;

/// @brief Field subscriberDoorObject, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_subscriberDoorObject, put=__cordl_internal_set_subscriberDoorObject)) ::UnityW<::UnityEngine::GameObject>  subscriberDoorObject;

/// @brief Field tempEjectionObject, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempEjectionObject, put=__cordl_internal_set_tempEjectionObject)) ::UnityW<::UnityEngine::GameObject>  tempEjectionObject;

/// @brief Field warningZone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_warningZone, put=__cordl_internal_set_warningZone)) ::UnityW<::UnityEngine::GameObject>  warningZone;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5c0a924, size 0x374, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearAllRigOverrides, addr 0x5c0ae50, size 0x244, virtual false, abstract: false, final false
inline void ClearAllRigOverrides() ;

/// @brief Method DisplaceToward, addr 0x5c0b620, size 0x194, virtual false, abstract: false, final false
inline void DisplaceToward(::GorillaLocomotion::GTPlayer*  player, ::UnityEngine::Transform*  target, float_t  speed) ;

/// @brief Method FindSafeEjectionPosition, addr 0x5c0b7b4, size 0x38c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 FindSafeEjectionPosition(::UnityEngine::Vector3  playerPos) ;

/// @brief Method HandleZoneBehavior, addr 0x5c0b1bc, size 0x164, virtual false, abstract: false, final false
inline void HandleZoneBehavior() ;

static inline ::GorillaTagScripts::Subscription::SubscriberExclusiveZone* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c0c164, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5c0ade8, size 0x68, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5c0c1f4, size 0x1f0, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x5c0ad84, size 0x64, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnZoneEnter, addr 0x5c0b490, size 0xcc, virtual false, abstract: false, final false
inline void OnZoneEnter(bool  isRestricted) ;

/// @brief Method OnZoneExit, addr 0x5c0b55c, size 0xc4, virtual false, abstract: false, final false
inline void OnZoneExit(bool  isRestricted) ;

/// @brief Method SetBodyCollider, addr 0x5c0b320, size 0x170, virtual false, abstract: false, final false
inline void SetBodyCollider(::GorillaLocomotion::GTPlayer*  player, bool  enabled) ;

/// @brief Method SliceUpdate, addr 0x5c0bb40, size 0x624, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Update, addr 0x5c0b094, size 0x128, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDoor, addr 0x5c0ac98, size 0xec, virtual false, abstract: false, final false
inline void UpdateDoor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnEnterRestrictedZone() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnEnterRestrictedZone() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnWarning() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnWarning() ;

constexpr bool const& __cordl_internal_get_bodyColliderWasDisabled() const;

constexpr bool& __cordl_internal_get_bodyColliderWasDisabled() ;

constexpr float_t const& __cordl_internal_get_driftSpeed() const;

constexpr float_t& __cordl_internal_get_driftSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ejectionPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ejectionPoint() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_influenceZoneCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_influenceZoneCollider() ;

constexpr bool const& __cordl_internal_get_insideInfluence() const;

constexpr bool& __cordl_internal_get_insideInfluence() ;

constexpr bool const& __cordl_internal_get_insideRestricted() const;

constexpr bool& __cordl_internal_get_insideRestricted() ;

constexpr float_t const& __cordl_internal_get_lastShoveTime() const;

constexpr float_t& __cordl_internal_get_lastShoveTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nonSubscribeDoorObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nonSubscribeDoorObject() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_obstacleLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_obstacleLayers() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_restrictedZone() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_restrictedZone() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_restrictedZoneCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_restrictedZoneCollider() ;

constexpr float_t const& __cordl_internal_get_safetyCheckRadius() const;

constexpr float_t& __cordl_internal_get_safetyCheckRadius() ;

constexpr float_t const& __cordl_internal_get_shoveCooldown() const;

constexpr float_t& __cordl_internal_get_shoveCooldown() ;

constexpr bool const& __cordl_internal_get_showDebugInfo() const;

constexpr bool& __cordl_internal_get_showDebugInfo() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_subscriberDoorObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_subscriberDoorObject() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_tempEjectionObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_tempEjectionObject() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_warningZone() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_warningZone() ;

constexpr void __cordl_internal_set_OnEnterRestrictedZone(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnWarning(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_bodyColliderWasDisabled(bool  value) ;

constexpr void __cordl_internal_set_driftSpeed(float_t  value) ;

constexpr void __cordl_internal_set_ejectionPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_influenceZoneCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_insideInfluence(bool  value) ;

constexpr void __cordl_internal_set_insideRestricted(bool  value) ;

constexpr void __cordl_internal_set_lastShoveTime(float_t  value) ;

constexpr void __cordl_internal_set_nonSubscribeDoorObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_obstacleLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_restrictedZone(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_restrictedZoneCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_safetyCheckRadius(float_t  value) ;

constexpr void __cordl_internal_set_shoveCooldown(float_t  value) ;

constexpr void __cordl_internal_set_showDebugInfo(bool  value) ;

constexpr void __cordl_internal_set_subscriberDoorObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_tempEjectionObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_warningZone(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5c0c3e4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriberExclusiveZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriberExclusiveZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriberExclusiveZone(SubscriberExclusiveZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriberExclusiveZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriberExclusiveZone(SubscriberExclusiveZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4091};

/// [Header("Zones")]
/// [Tooltip("Inner restricted zone - hard pushback")]
/// [SerializeField]
/// @brief Field restrictedZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___restrictedZone;

/// [Tooltip("Outer influence zone - gentle drift")]
/// [SerializeField]
/// @brief Field warningZone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___warningZone;

/// [Header("Safe Exit Point")]
/// [SerializeField]
/// @brief Field ejectionPoint, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ejectionPoint;

/// [Header("Tuning")]
/// [SerializeField]
/// @brief Field driftSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___driftSpeed;

/// [SerializeField]
/// @brief Field shoveCooldown, offset: 0x3c, size: 0x4, def value: None
 float_t  ___shoveCooldown;

/// [Header("Safety")]
/// [SerializeField]
/// @brief Field safetyCheckRadius, offset: 0x40, size: 0x4, def value: None
 float_t  ___safetyCheckRadius;

/// [SerializeField]
/// @brief Field obstacleLayers, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___obstacleLayers;

/// [Header("Door Visuals")]
/// [SerializeField]
/// @brief Field nonSubscribeDoorObject, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nonSubscribeDoorObject;

/// [SerializeField]
/// @brief Field subscriberDoorObject, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___subscriberDoorObject;

/// @brief Field OnWarning, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnWarning;

/// @brief Field OnEnterRestrictedZone, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnEnterRestrictedZone;

/// [Header("Debug")]
/// [SerializeField]
/// @brief Field showDebugInfo, offset: 0x68, size: 0x1, def value: None
 bool  ___showDebugInfo;

/// @brief Field insideRestricted, offset: 0x69, size: 0x1, def value: None
 bool  ___insideRestricted;

/// @brief Field insideInfluence, offset: 0x6a, size: 0x1, def value: None
 bool  ___insideInfluence;

/// @brief Field lastShoveTime, offset: 0x6c, size: 0x4, def value: None
 float_t  ___lastShoveTime;

/// @brief Field tempEjectionObject, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___tempEjectionObject;

/// @brief Field restrictedZoneCollider, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___restrictedZoneCollider;

/// @brief Field influenceZoneCollider, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___influenceZoneCollider;

/// @brief Field bodyColliderWasDisabled, offset: 0x88, size: 0x1, def value: None
 bool  ___bodyColliderWasDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___restrictedZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___warningZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___ejectionPoint) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___driftSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___shoveCooldown) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___safetyCheckRadius) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___obstacleLayers) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___nonSubscribeDoorObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___subscriberDoorObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___OnWarning) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___OnEnterRestrictedZone) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___showDebugInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___insideRestricted) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___insideInfluence) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___lastShoveTime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___tempEjectionObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___restrictedZoneCollider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___influenceZoneCollider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone, ___bodyColliderWasDisabled) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::SubscriberExclusiveZone) == 0x90, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
