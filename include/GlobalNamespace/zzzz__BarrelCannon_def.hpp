#pragma once
// IWYU pragma private; include "GlobalNamespace/BarrelCannon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonState_def.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonSyncedStateData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BarrelCannon)
namespace GlobalNamespace {
struct BarrelCannon_BarrelCannonState;
}
namespace GlobalNamespace {
struct BarrelCannon_BarrelCannonSyncedStateData;
}
namespace GlobalNamespace {
class BarrelCannon_BarrelCannonSyncedState;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BarrelCannon;
}
namespace GlobalNamespace {
class BarrelCannon_BarrelCannonSyncedState;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BarrelCannon*);
MARK_REF_T(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BarrelCannon*, "", "BarrelCannon");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*, "", "BarrelCannon/BarrelCannonSyncedState");
// [NetworkBehaviourWeaved(3)]
// Dependencies BarrelCannon::BarrelCannonSyncedStateData, NetworkComponent, UnityEngine.Collider, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BarrelCannon
class CORDL_TYPE BarrelCannon : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using BarrelCannonState = ::GlobalNamespace::BarrelCannon_BarrelCannonState;

using BarrelCannonSyncedState = ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState;

using BarrelCannonSyncedStateData = ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData;

/// [Networked]
/// @brief [NetworkedWeaved(0, 3)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData  Data;

/// @brief Field _Data, offset 0x120, size 0xc 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData  _Data;

/// @brief Field audioSource, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field cannonEntryDelayTime, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_cannonEntryDelayTime, put=__cordl_internal_set_cannonEntryDelayTime)) float_t  cannonEntryDelayTime;

/// @brief Field colliders, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliders;

/// @brief Field firePositionAnimationCurve, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_firePositionAnimationCurve, put=__cordl_internal_set_firePositionAnimationCurve)) ::UnityEngine::AnimationCurve*  firePositionAnimationCurve;

/// @brief Field fireRotationAnimationCurve, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireRotationAnimationCurve, put=__cordl_internal_set_fireRotationAnimationCurve)) ::UnityEngine::AnimationCurve*  fireRotationAnimationCurve;

/// @brief Field firingPositionOffset, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_firingPositionOffset, put=__cordl_internal_set_firingPositionOffset)) ::UnityEngine::Vector3  firingPositionOffset;

/// @brief Field firingRotationOffset, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_firingRotationOffset, put=__cordl_internal_set_firingRotationOffset)) ::UnityEngine::Vector3  firingRotationOffset;

/// @brief Field firingSpeed, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_firingSpeed, put=__cordl_internal_set_firingSpeed)) float_t  firingSpeed;

/// @brief Field localFiringPositionLerpValue, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_localFiringPositionLerpValue, put=__cordl_internal_set_localFiringPositionLerpValue)) float_t  localFiringPositionLerpValue;

/// @brief Field localPlayerInside, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_localPlayerInside, put=__cordl_internal_set_localPlayerInside)) bool  localPlayerInside;

/// @brief Field localPlayerRigidbody, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_localPlayerRigidbody, put=__cordl_internal_set_localPlayerRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  localPlayerRigidbody;

/// @brief Field moveToFiringPositionTime, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveToFiringPositionTime, put=__cordl_internal_set_moveToFiringPositionTime)) float_t  moveToFiringPositionTime;

/// @brief Field postFiringCooldownTime, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_postFiringCooldownTime, put=__cordl_internal_set_postFiringCooldownTime)) float_t  postFiringCooldownTime;

/// @brief Field preFiringDelayTime, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_preFiringDelayTime, put=__cordl_internal_set_preFiringDelayTime)) float_t  preFiringDelayTime;

/// @brief Field returnToIdlePositionTime, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnToIdlePositionTime, put=__cordl_internal_set_returnToIdlePositionTime)) float_t  returnToIdlePositionTime;

/// @brief Field stateStartTime, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) float_t  stateStartTime;

/// @brief Field syncedState, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncedState, put=__cordl_internal_set_syncedState)) ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*  syncedState;

/// @brief Field triggerCollider, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerCollider, put=__cordl_internal_set_triggerCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  triggerCollider;

/// @brief Field triggerOverlapResults, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerOverlapResults, put=__cordl_internal_set_triggerOverlapResults)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  triggerOverlapResults;

/// @brief Method AuthorityUpdate, addr 0x5bffe58, size 0x5e8, virtual false, abstract: false, final false
inline void AuthorityUpdate() ;

/// @brief Method ClientUpdate, addr 0x5c00440, size 0x34, virtual false, abstract: false, final false
inline void ClientUpdate() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5c0122c, size 0x24, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5c01250, size 0x28, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method FireBarrelCannonLocal, addr 0x5c00640, size 0x1c8, virtual false, abstract: false, final false
inline void FireBarrelCannonLocal(::UnityEngine::Vector3  cannonCenter, ::UnityEngine::Vector3  firingDirection) ;

/// @brief Method FireBarrelCannonRPC, addr 0x5c00808, size 0x4, virtual false, abstract: false, final false
inline void FireBarrelCannonRPC(::UnityEngine::Vector3  cannonCenter, ::UnityEngine::Vector3  firingDirection) ;

/// @brief Method GetCapsulePoints, addr 0x5c00b80, size 0x124, virtual false, abstract: false, final false
inline void GetCapsulePoints(::UnityEngine::CapsuleCollider*  capsule, ::by_ref<::UnityEngine::Vector3>  pointA, ::by_ref<::UnityEngine::Vector3>  pointB) ;

/// @brief Method IsLocalPlayerInCannon, addr 0x5c00a40, size 0x140, virtual false, abstract: false, final false
inline bool IsLocalPlayerInCannon() ;

/// @brief Method LocalPlayerTriggerFilter, addr 0x5c0084c, size 0x1b8, virtual false, abstract: false, final false
inline bool LocalPlayerTriggerFilter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Rigidbody*>  rb) ;

static inline ::GlobalNamespace::BarrelCannon* New_ctor() ;

/// @brief Method OnOwnershipRequest, addr 0x5c01098, size 0x28, virtual true, abstract: false, final false
inline void OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer) ;

/// @brief Method OnTriggerEnter, addr 0x5c0080c, size 0x40, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5c00a04, size 0x3c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method ReadDataFusion, addr 0x5c00dfc, size 0xa0, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5c00fc8, size 0xd0, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SharedUpdate, addr 0x5c00474, size 0x1cc, virtual false, abstract: false, final false
inline void SharedUpdate() ;

/// @brief Method Update, addr 0x5bffe24, size 0x34, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WriteDataFusion, addr 0x5c00d64, size 0x28, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5c00f14, size 0xb4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData& __cordl_internal_get__Data() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_cannonEntryDelayTime() const;

constexpr float_t& __cordl_internal_get_cannonEntryDelayTime() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliders() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_firePositionAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_firePositionAnimationCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_fireRotationAnimationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_fireRotationAnimationCurve() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_firingPositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_firingPositionOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_firingRotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_firingRotationOffset() ;

constexpr float_t const& __cordl_internal_get_firingSpeed() const;

constexpr float_t& __cordl_internal_get_firingSpeed() ;

constexpr float_t const& __cordl_internal_get_localFiringPositionLerpValue() const;

constexpr float_t& __cordl_internal_get_localFiringPositionLerpValue() ;

constexpr bool const& __cordl_internal_get_localPlayerInside() const;

constexpr bool& __cordl_internal_get_localPlayerInside() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_localPlayerRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_localPlayerRigidbody() ;

constexpr float_t const& __cordl_internal_get_moveToFiringPositionTime() const;

constexpr float_t& __cordl_internal_get_moveToFiringPositionTime() ;

constexpr float_t const& __cordl_internal_get_postFiringCooldownTime() const;

constexpr float_t& __cordl_internal_get_postFiringCooldownTime() ;

constexpr float_t const& __cordl_internal_get_preFiringDelayTime() const;

constexpr float_t& __cordl_internal_get_preFiringDelayTime() ;

constexpr float_t const& __cordl_internal_get_returnToIdlePositionTime() const;

constexpr float_t& __cordl_internal_get_returnToIdlePositionTime() ;

constexpr float_t const& __cordl_internal_get_stateStartTime() const;

constexpr float_t& __cordl_internal_get_stateStartTime() ;

constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState* const& __cordl_internal_get_syncedState() const;

constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*& __cordl_internal_get_syncedState() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_triggerCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_triggerCollider() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_triggerOverlapResults() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_triggerOverlapResults() ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_cannonEntryDelayTime(float_t  value) ;

constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_firePositionAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_fireRotationAnimationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_firingPositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_firingRotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_firingSpeed(float_t  value) ;

constexpr void __cordl_internal_set_localFiringPositionLerpValue(float_t  value) ;

constexpr void __cordl_internal_set_localPlayerInside(bool  value) ;

constexpr void __cordl_internal_set_localPlayerRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_moveToFiringPositionTime(float_t  value) ;

constexpr void __cordl_internal_set_postFiringCooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_preFiringDelayTime(float_t  value) ;

constexpr void __cordl_internal_set_returnToIdlePositionTime(float_t  value) ;

constexpr void __cordl_internal_set_stateStartTime(float_t  value) ;

constexpr void __cordl_internal_set_syncedState(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*  value) ;

constexpr void __cordl_internal_set_triggerCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_triggerOverlapResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

/// @brief Method .ctor, addr 0x5c010c0, size 0x164, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5c00ca4, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData get_Data() ;

/// @brief Method set_Data, addr 0x5c00d04, size 0x60, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BarrelCannon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BarrelCannon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BarrelCannon(BarrelCannon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BarrelCannon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BarrelCannon(BarrelCannon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{419};

/// [SerializeField]
/// @brief Field firingSpeed, offset: 0x9c, size: 0x4, def value: None
 float_t  ___firingSpeed;

/// [Header("Cannon\'s Movement Before Firing")]
/// [SerializeField]
/// @brief Field firingPositionOffset, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___firingPositionOffset;

/// [SerializeField]
/// @brief Field firingRotationOffset, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___firingRotationOffset;

/// [SerializeField]
/// @brief Field firePositionAnimationCurve, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___firePositionAnimationCurve;

/// [SerializeField]
/// @brief Field fireRotationAnimationCurve, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___fireRotationAnimationCurve;

/// [Header("Cannon State Change Timing Parameters")]
/// [SerializeField]
/// @brief Field moveToFiringPositionTime, offset: 0xc8, size: 0x4, def value: None
 float_t  ___moveToFiringPositionTime;

/// [SerializeField]
/// [Tooltip("The minimum time to wait after a gorilla enters the cannon before it starts moving into the firing position.")]
/// @brief Field cannonEntryDelayTime, offset: 0xcc, size: 0x4, def value: None
 float_t  ___cannonEntryDelayTime;

/// [SerializeField]
/// [Tooltip("The minimum time to wait after a gorilla enters the cannon before it starts moving into the firing position.")]
/// @brief Field preFiringDelayTime, offset: 0xd0, size: 0x4, def value: None
 float_t  ___preFiringDelayTime;

/// [SerializeField]
/// [Tooltip("The minimum time to wait after the cannon fires before it starts moving back to the idle position.")]
/// @brief Field postFiringCooldownTime, offset: 0xd4, size: 0x4, def value: None
 float_t  ___postFiringCooldownTime;

/// [SerializeField]
/// @brief Field returnToIdlePositionTime, offset: 0xd8, size: 0x4, def value: None
 float_t  ___returnToIdlePositionTime;

/// [Header("Component References")]
/// [SerializeField]
/// @brief Field audioSource, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field triggerCollider, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___triggerCollider;

/// [SerializeField]
/// @brief Field colliders, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliders;

/// @brief Field syncedState, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*  ___syncedState;

/// @brief Field triggerOverlapResults, offset: 0x100, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___triggerOverlapResults;

/// @brief Field localPlayerInside, offset: 0x108, size: 0x1, def value: None
 bool  ___localPlayerInside;

/// @brief Field localPlayerRigidbody, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___localPlayerRigidbody;

/// @brief Field stateStartTime, offset: 0x118, size: 0x4, def value: None
 float_t  ___stateStartTime;

/// @brief Field localFiringPositionLerpValue, offset: 0x11c, size: 0x4, def value: None
 float_t  ___localFiringPositionLerpValue;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 3)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0x120, size: 0xc, def value: None
 ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___firingSpeed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___firingPositionOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___firingRotationOffset) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___firePositionAnimationCurve) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___fireRotationAnimationCurve) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___moveToFiringPositionTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___cannonEntryDelayTime) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___preFiringDelayTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___postFiringCooldownTime) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___returnToIdlePositionTime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___audioSource) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___triggerCollider) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___colliders) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___syncedState) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___triggerOverlapResults) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___localPlayerInside) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___localPlayerRigidbody) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___stateStartTime) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ___localFiringPositionLerpValue) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon, ____Data) == 0x120, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BarrelCannon) == 0x130, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies BarrelCannon::BarrelCannonState, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BarrelCannon/BarrelCannonSyncedState
class CORDL_TYPE BarrelCannon_BarrelCannonSyncedState : public ::System::Object {
public:
// Declarations
/// @brief Field currentState, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::BarrelCannon_BarrelCannonState  currentState;

/// @brief Field firingPositionLerpValue, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_firingPositionLerpValue, put=__cordl_internal_set_firingPositionLerpValue)) float_t  firingPositionLerpValue;

/// @brief Field hasAuthorityPassenger, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasAuthorityPassenger, put=__cordl_internal_set_hasAuthorityPassenger)) bool  hasAuthorityPassenger;

static inline ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState* New_ctor() ;

constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_firingPositionLerpValue() const;

constexpr float_t& __cordl_internal_get_firingPositionLerpValue() ;

constexpr bool const& __cordl_internal_get_hasAuthorityPassenger() const;

constexpr bool& __cordl_internal_get_hasAuthorityPassenger() ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::BarrelCannon_BarrelCannonState  value) ;

constexpr void __cordl_internal_set_firingPositionLerpValue(float_t  value) ;

constexpr void __cordl_internal_set_hasAuthorityPassenger(bool  value) ;

/// @brief Method .ctor, addr 0x5c01224, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BarrelCannon_BarrelCannonSyncedState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BarrelCannon_BarrelCannonSyncedState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BarrelCannon_BarrelCannonSyncedState(BarrelCannon_BarrelCannonSyncedState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BarrelCannon_BarrelCannonSyncedState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BarrelCannon_BarrelCannonSyncedState(BarrelCannon_BarrelCannonSyncedState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{417};

/// @brief Field currentState, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::BarrelCannon_BarrelCannonState  ___currentState;

/// @brief Field hasAuthorityPassenger, offset: 0x14, size: 0x1, def value: None
 bool  ___hasAuthorityPassenger;

/// @brief Field firingPositionLerpValue, offset: 0x18, size: 0x4, def value: None
 float_t  ___firingPositionLerpValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState, ___currentState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState, ___hasAuthorityPassenger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState, ___firingPositionLerpValue) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
