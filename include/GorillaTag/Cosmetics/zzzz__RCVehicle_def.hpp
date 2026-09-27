#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCVehicle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_RCInput_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_State_def.hpp"
#include "GorillaTag/zzzz__BoneOffset_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RCVehicle)
namespace GlobalNamespace {
struct RCRemoteHoldable_RCInput;
}
namespace GlobalNamespace {
struct RCVehicle_State;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag::Cosmetics {
class RCCosmeticNetworkSync;
}
namespace GorillaTag::Cosmetics {
class RCRemoteHoldable;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class RCVehicle;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::RCVehicle*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::RCVehicle*, "GorillaTag.Cosmetics", "RCVehicle");
// Dependencies GorillaTag.BoneOffset, GorillaTag.CosmeticSystem.ECosmeticSelectSide, GorillaTag.Cosmetics.RCRemoteHoldable::RCInput, GorillaTag.Cosmetics.RCVehicle::State, UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.RCVehicle
class CORDL_TYPE RCVehicle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::RCVehicle_State;

 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

 __declspec(property(get=get_HasLocalAuthority)) bool  HasLocalAuthority;

/// @brief Field OnHitImpact, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHitImpact, put=__cordl_internal_set_OnHitImpact)) ::UnityEngine::Events::UnityEvent*  OnHitImpact;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field _vrRigBones, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__vrRigBones, put=__cordl_internal_set__vrRigBones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _vrRigBones;

/// @brief Field activeInput, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_activeInput, put=__cordl_internal_set_activeInput)) ::GlobalNamespace::RCRemoteHoldable_RCInput  activeInput;

/// @brief Field connectedRemote, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectedRemote, put=__cordl_internal_set_connectedRemote)) ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>  connectedRemote;

/// @brief Field crashOnHit, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_crashOnHit, put=__cordl_internal_set_crashOnHit)) bool  crashOnHit;

/// @brief Field crashOnHitSpeedThreshold, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_crashOnHitSpeedThreshold, put=__cordl_internal_set_crashOnHitSpeedThreshold)) float_t  crashOnHitSpeedThreshold;

/// @brief Field crashRespawnDelay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_crashRespawnDelay, put=__cordl_internal_set_crashRespawnDelay)) float_t  crashRespawnDelay;

/// @brief Field disconnectionTime, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_disconnectionTime, put=__cordl_internal_set_disconnectionTime)) float_t  disconnectionTime;

/// @brief Field dockLeftOffset, offset 0xb0, size 0x48 
 __declspec(property(get=__cordl_internal_get_dockLeftOffset, put=__cordl_internal_set_dockLeftOffset)) ::GorillaTag::BoneOffset  dockLeftOffset;

/// @brief Field dockRightOffset, offset 0xf8, size 0x48 
 __declspec(property(get=__cordl_internal_get_dockRightOffset, put=__cordl_internal_set_dockRightOffset)) ::GorillaTag::BoneOffset  dockRightOffset;

/// @brief Field hasNetworkSync, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasNetworkSync, put=__cordl_internal_set_hasNetworkSync)) bool  hasNetworkSync;

/// @brief Field hitMaxHitSpeed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitMaxHitSpeed, put=__cordl_internal_set_hitMaxHitSpeed)) float_t  hitMaxHitSpeed;

/// @brief Field hitVelocityTransfer, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitVelocityTransfer, put=__cordl_internal_set_hitVelocityTransfer)) float_t  hitVelocityTransfer;

/// @brief Field joystickDeadzone, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_joystickDeadzone, put=__cordl_internal_set_joystickDeadzone)) float_t  joystickDeadzone;

/// @brief Field leftDockParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftDockParent, put=__cordl_internal_set_leftDockParent)) ::UnityW<::UnityEngine::Transform>  leftDockParent;

/// @brief Field localState, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_localState, put=__cordl_internal_set_localState)) ::GlobalNamespace::RCVehicle_State  localState;

/// @brief Field localStatePrev, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_localStatePrev, put=__cordl_internal_set_localStatePrev)) ::GlobalNamespace::RCVehicle_State  localStatePrev;

/// @brief Field maxDisconnectionTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDisconnectionTime, put=__cordl_internal_set_maxDisconnectionTime)) float_t  maxDisconnectionTime;

/// @brief Field maxRange, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRange, put=__cordl_internal_set_maxRange)) float_t  maxRange;

/// @brief Field networkSync, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkSync, put=__cordl_internal_set_networkSync)) ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>  networkSync;

/// @brief Field networkSyncFollowRateExp, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_networkSyncFollowRateExp, put=__cordl_internal_set_networkSyncFollowRateExp)) float_t  networkSyncFollowRateExp;

/// @brief Field projectileVelocityTransfer, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileVelocityTransfer, put=__cordl_internal_set_projectileVelocityTransfer)) float_t  projectileVelocityTransfer;

/// @brief Field rb, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field rightDockParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightDockParent, put=__cordl_internal_set_rightDockParent)) ::UnityW<::UnityEngine::Transform>  rightDockParent;

/// @brief Field stateStartTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) float_t  stateStartTime;

/// @brief Field useLeftDock, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_useLeftDock, put=__cordl_internal_set_useLeftDock)) bool  useLeftDock;

/// @brief Field waitingForTriggerRelease, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingForTriggerRelease, put=__cordl_internal_set_waitingForTriggerRelease)) bool  waitingForTriggerRelease;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method AddScaledGravityCompensationForce, addr 0x5d6680c, size 0xe0, virtual false, abstract: false, final false
static inline void AddScaledGravityCompensationForce(::UnityEngine::Rigidbody*  rb, float_t  scaleFactor, float_t  gravityCompensation) ;

/// @brief Method ApplyRemoteControlInput, addr 0x5d6c804, size 0xe0, virtual false, abstract: false, final false
inline void ApplyRemoteControlInput(::GlobalNamespace::RCRemoteHoldable_RCInput  rcInput) ;

/// @brief Method AuthorityApplyImpact, addr 0x5d6d528, size 0x1a4, virtual true, abstract: false, final false
inline void AuthorityApplyImpact(::UnityEngine::Vector3  hitVelocity, bool  isProjectile) ;

/// @brief Method AuthorityBeginCrash, addr 0x5d6d060, size 0x90, virtual true, abstract: false, final false
inline void AuthorityBeginCrash() ;

/// @brief Method AuthorityBeginDocked, addr 0x5d65370, size 0x100, virtual true, abstract: false, final false
inline void AuthorityBeginDocked() ;

/// @brief Method AuthorityBeginMobilization, addr 0x5d69cd0, size 0xbc, virtual true, abstract: false, final false
inline void AuthorityBeginMobilization() ;

/// @brief Method AuthorityUpdate, addr 0x5d65670, size 0x278, virtual true, abstract: false, final false
inline void AuthorityUpdate(float_t  dt) ;

/// @brief Method Awake, addr 0x5d654c4, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method EndConnection, addr 0x5d6cddc, size 0x34, virtual true, abstract: false, final false
inline void EndConnection() ;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5d6d4a4, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5d6d1d0, size 0x2d4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5d6d1c0, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x5d6d1b0, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x5d6d1c8, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x5d6d1b8, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

static inline ::GorillaTag::Cosmetics::RCVehicle* New_ctor() ;

/// @brief Method NormalizeAngle180, addr 0x5d6ad18, size 0x48, virtual false, abstract: false, final false
inline float_t NormalizeAngle180(float_t  angle) ;

/// @brief Method OnDisable, addr 0x5d6553c, size 0x8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d6d1ac, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoteUpdate, addr 0x5d659a4, size 0x318, virtual true, abstract: false, final false
inline void RemoteUpdate(float_t  dt) ;

/// @brief Method ResetToSpawnPosition, addr 0x5d6ce10, size 0x250, virtual true, abstract: false, final false
inline void ResetToSpawnPosition() ;

/// @brief Method SetDisabledState, addr 0x5d6d0f0, size 0xbc, virtual true, abstract: false, final false
inline void SetDisabledState() ;

/// @brief Method SharedUpdate, addr 0x5d661bc, size 0x4, virtual true, abstract: false, final false
inline void SharedUpdate(float_t  dt) ;

/// @brief Method StartConnection, addr 0x5d6ccc8, size 0x114, virtual true, abstract: false, final false
inline void StartConnection(::GorillaTag::Cosmetics::RCRemoteHoldable*  remote, ::GorillaTag::Cosmetics::RCCosmeticNetworkSync*  sync) ;

/// @brief Method Update, addr 0x5d6d4a8, size 0x80, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WakeUpRemote, addr 0x5d6cbb0, size 0x118, virtual true, abstract: false, final false
inline void WakeUpRemote(::GorillaTag::Cosmetics::RCCosmeticNetworkSync*  sync) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnHitImpact() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnHitImpact() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__vrRigBones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__vrRigBones() ;

constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput const& __cordl_internal_get_activeInput() const;

constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput& __cordl_internal_get_activeInput() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable> const& __cordl_internal_get_connectedRemote() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>& __cordl_internal_get_connectedRemote() ;

constexpr bool const& __cordl_internal_get_crashOnHit() const;

constexpr bool& __cordl_internal_get_crashOnHit() ;

constexpr float_t const& __cordl_internal_get_crashOnHitSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_crashOnHitSpeedThreshold() ;

constexpr float_t const& __cordl_internal_get_crashRespawnDelay() const;

constexpr float_t& __cordl_internal_get_crashRespawnDelay() ;

constexpr float_t const& __cordl_internal_get_disconnectionTime() const;

constexpr float_t& __cordl_internal_get_disconnectionTime() ;

constexpr ::GorillaTag::BoneOffset const& __cordl_internal_get_dockLeftOffset() const;

constexpr ::GorillaTag::BoneOffset& __cordl_internal_get_dockLeftOffset() ;

constexpr ::GorillaTag::BoneOffset const& __cordl_internal_get_dockRightOffset() const;

constexpr ::GorillaTag::BoneOffset& __cordl_internal_get_dockRightOffset() ;

constexpr bool const& __cordl_internal_get_hasNetworkSync() const;

constexpr bool& __cordl_internal_get_hasNetworkSync() ;

constexpr float_t const& __cordl_internal_get_hitMaxHitSpeed() const;

constexpr float_t& __cordl_internal_get_hitMaxHitSpeed() ;

constexpr float_t const& __cordl_internal_get_hitVelocityTransfer() const;

constexpr float_t& __cordl_internal_get_hitVelocityTransfer() ;

constexpr float_t const& __cordl_internal_get_joystickDeadzone() const;

constexpr float_t& __cordl_internal_get_joystickDeadzone() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftDockParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftDockParent() ;

constexpr ::GlobalNamespace::RCVehicle_State const& __cordl_internal_get_localState() const;

constexpr ::GlobalNamespace::RCVehicle_State& __cordl_internal_get_localState() ;

constexpr ::GlobalNamespace::RCVehicle_State const& __cordl_internal_get_localStatePrev() const;

constexpr ::GlobalNamespace::RCVehicle_State& __cordl_internal_get_localStatePrev() ;

constexpr float_t const& __cordl_internal_get_maxDisconnectionTime() const;

constexpr float_t& __cordl_internal_get_maxDisconnectionTime() ;

constexpr float_t const& __cordl_internal_get_maxRange() const;

constexpr float_t& __cordl_internal_get_maxRange() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync> const& __cordl_internal_get_networkSync() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>& __cordl_internal_get_networkSync() ;

constexpr float_t const& __cordl_internal_get_networkSyncFollowRateExp() const;

constexpr float_t& __cordl_internal_get_networkSyncFollowRateExp() ;

constexpr float_t const& __cordl_internal_get_projectileVelocityTransfer() const;

constexpr float_t& __cordl_internal_get_projectileVelocityTransfer() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightDockParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightDockParent() ;

constexpr float_t const& __cordl_internal_get_stateStartTime() const;

constexpr float_t& __cordl_internal_get_stateStartTime() ;

constexpr bool const& __cordl_internal_get_useLeftDock() const;

constexpr bool& __cordl_internal_get_useLeftDock() ;

constexpr bool const& __cordl_internal_get_waitingForTriggerRelease() const;

constexpr bool& __cordl_internal_get_waitingForTriggerRelease() ;

constexpr void __cordl_internal_set_OnHitImpact(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__vrRigBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_activeInput(::GlobalNamespace::RCRemoteHoldable_RCInput  value) ;

constexpr void __cordl_internal_set_connectedRemote(::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>  value) ;

constexpr void __cordl_internal_set_crashOnHit(bool  value) ;

constexpr void __cordl_internal_set_crashOnHitSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_crashRespawnDelay(float_t  value) ;

constexpr void __cordl_internal_set_disconnectionTime(float_t  value) ;

constexpr void __cordl_internal_set_dockLeftOffset(::GorillaTag::BoneOffset  value) ;

constexpr void __cordl_internal_set_dockRightOffset(::GorillaTag::BoneOffset  value) ;

constexpr void __cordl_internal_set_hasNetworkSync(bool  value) ;

constexpr void __cordl_internal_set_hitMaxHitSpeed(float_t  value) ;

constexpr void __cordl_internal_set_hitVelocityTransfer(float_t  value) ;

constexpr void __cordl_internal_set_joystickDeadzone(float_t  value) ;

constexpr void __cordl_internal_set_leftDockParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_localState(::GlobalNamespace::RCVehicle_State  value) ;

constexpr void __cordl_internal_set_localStatePrev(::GlobalNamespace::RCVehicle_State  value) ;

constexpr void __cordl_internal_set_maxDisconnectionTime(float_t  value) ;

constexpr void __cordl_internal_set_maxRange(float_t  value) ;

constexpr void __cordl_internal_set_networkSync(::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>  value) ;

constexpr void __cordl_internal_set_networkSyncFollowRateExp(float_t  value) ;

constexpr void __cordl_internal_set_projectileVelocityTransfer(float_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rightDockParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stateStartTime(float_t  value) ;

constexpr void __cordl_internal_set_useLeftDock(bool  value) ;

constexpr void __cordl_internal_set_waitingForTriggerRelease(bool  value) ;

/// @brief Method .ctor, addr 0x5d66d70, size 0x12c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasLocalAuthority, addr 0x5d66740, size 0xcc, virtual false, abstract: false, final false
inline bool get_HasLocalAuthority() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RCVehicle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RCVehicle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RCVehicle(RCVehicle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RCVehicle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RCVehicle(RCVehicle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4841};

/// [SerializeField]
/// @brief Field leftDockParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftDockParent;

/// [SerializeField]
/// @brief Field rightDockParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightDockParent;

/// [SerializeField]
/// @brief Field maxRange, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxRange;

/// [SerializeField]
/// @brief Field maxDisconnectionTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___maxDisconnectionTime;

/// [SerializeField]
/// @brief Field crashRespawnDelay, offset: 0x38, size: 0x4, def value: None
 float_t  ___crashRespawnDelay;

/// [SerializeField]
/// @brief Field crashOnHit, offset: 0x3c, size: 0x1, def value: None
 bool  ___crashOnHit;

/// [SerializeField]
/// @brief Field crashOnHitSpeedThreshold, offset: 0x40, size: 0x4, def value: None
 float_t  ___crashOnHitSpeedThreshold;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field hitVelocityTransfer, offset: 0x44, size: 0x4, def value: None
 float_t  ___hitVelocityTransfer;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field projectileVelocityTransfer, offset: 0x48, size: 0x4, def value: None
 float_t  ___projectileVelocityTransfer;

/// [SerializeField]
/// @brief Field hitMaxHitSpeed, offset: 0x4c, size: 0x4, def value: None
 float_t  ___hitMaxHitSpeed;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field joystickDeadzone, offset: 0x50, size: 0x4, def value: None
 float_t  ___joystickDeadzone;

/// [Header("RCVehicle - Shared Event")]
/// @brief Field OnHitImpact, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnHitImpact;

/// @brief Field localState, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::RCVehicle_State  ___localState;

/// @brief Field localStatePrev, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::RCVehicle_State  ___localStatePrev;

/// @brief Field stateStartTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___stateStartTime;

/// @brief Field connectedRemote, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::RCRemoteHoldable>  ___connectedRemote;

/// @brief Field networkSync, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>  ___networkSync;

/// @brief Field hasNetworkSync, offset: 0x80, size: 0x1, def value: None
 bool  ___hasNetworkSync;

/// @brief Field activeInput, offset: 0x84, size: 0x10, def value: None
 ::GlobalNamespace::RCRemoteHoldable_RCInput  ___activeInput;

/// @brief Field rb, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field waitingForTriggerRelease, offset: 0xa0, size: 0x1, def value: None
 bool  ___waitingForTriggerRelease;

/// @brief Field disconnectionTime, offset: 0xa4, size: 0x4, def value: None
 float_t  ___disconnectionTime;

/// @brief Field useLeftDock, offset: 0xa8, size: 0x1, def value: None
 bool  ___useLeftDock;

/// @brief Field dockLeftOffset, offset: 0xb0, size: 0x48, def value: None
 ::GorillaTag::BoneOffset  ___dockLeftOffset;

/// @brief Field dockRightOffset, offset: 0xf8, size: 0x48, def value: None
 ::GorillaTag::BoneOffset  ___dockRightOffset;

/// @brief Field networkSyncFollowRateExp, offset: 0x140, size: 0x4, def value: None
 float_t  ___networkSyncFollowRateExp;

/// @brief Field _vrRigBones, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____vrRigBones;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x150, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x154, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___leftDockParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___rightDockParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___maxRange) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___maxDisconnectionTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___crashRespawnDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___crashOnHit) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___crashOnHitSpeedThreshold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___hitVelocityTransfer) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___projectileVelocityTransfer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___hitMaxHitSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___joystickDeadzone) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___OnHitImpact) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___localState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___localStatePrev) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___stateStartTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___connectedRemote) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___networkSync) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___hasNetworkSync) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___activeInput) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___rb) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___waitingForTriggerRelease) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___disconnectionTime) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___useLeftDock) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___dockLeftOffset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___dockRightOffset) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ___networkSyncFollowRateExp) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ____vrRigBones) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCVehicle, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x154, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::RCVehicle) == 0x158, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
