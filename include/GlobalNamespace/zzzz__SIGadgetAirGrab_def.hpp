#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetAirGrab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ResettableUseCounter_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirGrab_EState_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetAirGrab)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class GameSnappable;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct SIGadgetAirGrab_EState;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetAirGrab;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetAirGrab*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetAirGrab*, "", "SIGadgetAirGrab");
// [RequireComponent(typeof(GameGrabbable))]
// [RequireComponent(typeof(GameSnappable))]
// [RequireComponent(typeof(GameButtonActivatable))]
// Dependencies ResettableUseCounter, SIGadget, SIGadgetAirGrab::EState, System.Object, UnityEngine.AudioClip, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetAirGrab
class CORDL_TYPE SIGadgetAirGrab : public ::GlobalNamespace::SIGadget {
public:
// Declarations
using EState = ::GlobalNamespace::SIGadgetAirGrab_EState;

 __declspec(property(get=get__HandIndex)) int32_t  _HandIndex;

/// @brief Field _airGrabTime, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get__airGrabTime, put=__cordl_internal_set__airGrabTime)) float_t  _airGrabTime;

/// @brief Field _airReleaseSpeed, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get__airReleaseSpeed, put=__cordl_internal_set__airReleaseSpeed)) float_t  _airReleaseSpeed;

/// @brief Field _airReleaseVector, offset 0x11c, size 0xc 
 __declspec(property(get=__cordl_internal_get__airReleaseVector, put=__cordl_internal_set__airReleaseVector)) ::UnityEngine::Vector3  _airReleaseVector;

/// @brief Field _attachedNetPlayer, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachedNetPlayer, put=__cordl_internal_set__attachedNetPlayer)) ::GlobalNamespace::NetPlayer*  _attachedNetPlayer;

/// @brief Field _attachedPlayerActorNr, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get__attachedPlayerActorNr, put=__cordl_internal_set__attachedPlayerActorNr)) int32_t  _attachedPlayerActorNr;

/// @brief Field _attachedVRRig, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachedVRRig, put=__cordl_internal_set__attachedVRRig)) ::UnityW<::GlobalNamespace::VRRig>  _attachedVRRig;

/// @brief Field _grabStartTime, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get__grabStartTime, put=__cordl_internal_set__grabStartTime)) float_t  _grabStartTime;

/// @brief Field _grabXformInitialScale, offset 0x178, size 0xc 
 __declspec(property(get=__cordl_internal_get__grabXformInitialScale, put=__cordl_internal_set__grabXformInitialScale)) ::UnityEngine::Vector3  _grabXformInitialScale;

/// @brief Field _groundedUseCounter, offset 0x158, size 0x18 
 __declspec(property(get=__cordl_internal_get__groundedUseCounter, put=__cordl_internal_set__groundedUseCounter)) ::GlobalNamespace::ResettableUseCounter  _groundedUseCounter;

/// @brief Field _isActivated, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActivated, put=__cordl_internal_set__isActivated)) bool  _isActivated;

/// @brief Field _isTagged, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTagged, put=__cordl_internal_set__isTagged)) bool  _isTagged;

/// @brief Field _lastAttachedPlayerActorNr, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastAttachedPlayerActorNr, put=__cordl_internal_set__lastAttachedPlayerActorNr)) int32_t  _lastAttachedPlayerActorNr;

/// @brief Field _launchYoyoRPCArgs, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchYoyoRPCArgs, put=__cordl_internal_set__launchYoyoRPCArgs)) ::ArrayW<::System::Object*>  _launchYoyoRPCArgs;

/// @brief Field _maxDashSpeed, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDashSpeed, put=__cordl_internal_set__maxDashSpeed)) float_t  _maxDashSpeed;

/// @brief Field _maxHoldTime, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxHoldTime, put=__cordl_internal_set__maxHoldTime)) float_t  _maxHoldTime;

/// @brief Field _state, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::SIGadgetAirGrab_EState  _state;

/// @brief Field _wasActivated, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasActivated, put=__cordl_internal_set__wasActivated)) bool  _wasActivated;

/// @brief Field hasGravityOverride, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasGravityOverride, put=__cordl_internal_set_hasGravityOverride)) bool  hasGravityOverride;

/// @brief Field lastRequestedPlayerPos, offset 0x184, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRequestedPlayerPos, put=__cordl_internal_set_lastRequestedPlayerPos)) ::UnityEngine::Vector3  lastRequestedPlayerPos;

/// @brief Field m_airGrabXform, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_airGrabXform, put=__cordl_internal_set_m_airGrabXform)) ::UnityW<::UnityEngine::Transform>  m_airGrabXform;

/// @brief Field m_audioSource, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_audioSource, put=__cordl_internal_set_m_audioSource)) ::UnityW<::UnityEngine::AudioSource>  m_audioSource;

/// @brief Field m_buttonActivatable, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_buttonActivatable, put=__cordl_internal_set_m_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  m_buttonActivatable;

/// @brief Field m_canActivateIndicator, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_canActivateIndicator, put=__cordl_internal_set_m_canActivateIndicator)) ::UnityW<::UnityEngine::GameObject>  m_canActivateIndicator;

/// @brief Field m_clipVolumes, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_clipVolumes, put=__cordl_internal_set_m_clipVolumes)) ::ArrayW<float_t>  m_clipVolumes;

/// @brief Field m_clips, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_clips, put=__cordl_internal_set_m_clips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  m_clips;

/// @brief Field m_cooldownDurationDefault, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cooldownDurationDefault, put=__cordl_internal_set_m_cooldownDurationDefault)) float_t  m_cooldownDurationDefault;

/// @brief Field m_cooldownDurationUpgrade, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cooldownDurationUpgrade, put=__cordl_internal_set_m_cooldownDurationUpgrade)) float_t  m_cooldownDurationUpgrade;

/// @brief Field m_inputActivateThreshold, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_inputActivateThreshold, put=__cordl_internal_set_m_inputActivateThreshold)) float_t  m_inputActivateThreshold;

/// @brief Field m_inputDeactivateThreshold, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_inputDeactivateThreshold, put=__cordl_internal_set_m_inputDeactivateThreshold)) float_t  m_inputDeactivateThreshold;

/// @brief Field m_maxDashSpeedDefault, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxDashSpeedDefault, put=__cordl_internal_set_m_maxDashSpeedDefault)) float_t  m_maxDashSpeedDefault;

/// @brief Field m_maxDashSpeedUpgraded, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxDashSpeedUpgraded, put=__cordl_internal_set_m_maxDashSpeedUpgraded)) float_t  m_maxDashSpeedUpgraded;

/// @brief Field m_maxHoldTimeDefault, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxHoldTimeDefault, put=__cordl_internal_set_m_maxHoldTimeDefault)) float_t  m_maxHoldTimeDefault;

/// @brief Field m_maxHoldTimeUpgraded, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxHoldTimeUpgraded, put=__cordl_internal_set_m_maxHoldTimeUpgraded)) float_t  m_maxHoldTimeUpgraded;

/// @brief Field m_maxInfluenceAngleDefault, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxInfluenceAngleDefault, put=__cordl_internal_set_m_maxInfluenceAngleDefault)) float_t  m_maxInfluenceAngleDefault;

/// @brief Field m_maxInfluenceAngleUpgrade, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxInfluenceAngleUpgrade, put=__cordl_internal_set_m_maxInfluenceAngleUpgrade)) float_t  m_maxInfluenceAngleUpgrade;

/// @brief Field m_maxSuperchargeUses, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxSuperchargeUses, put=__cordl_internal_set_m_maxSuperchargeUses)) int32_t  m_maxSuperchargeUses;

/// @brief Field m_minDashSpeed, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_minDashSpeed, put=__cordl_internal_set_m_minDashSpeed)) float_t  m_minDashSpeed;

/// @brief Field m_slipperySurfacesTime, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_slipperySurfacesTime, put=__cordl_internal_set_m_slipperySurfacesTime)) float_t  m_slipperySurfacesTime;

/// @brief Field m_snappable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_snappable, put=__cordl_internal_set_m_snappable)) ::UnityW<::GlobalNamespace::GameSnappable>  m_snappable;

/// @brief Field m_speedMappingCurve, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_speedMappingCurve, put=__cordl_internal_set_m_speedMappingCurve)) ::UnityEngine::AnimationCurve*  m_speedMappingCurve;

/// @brief Field m_yankMaxSpeed, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yankMaxSpeed, put=__cordl_internal_set_m_yankMaxSpeed)) float_t  m_yankMaxSpeed;

/// @brief Field m_yankMinSpeed, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yankMinSpeed, put=__cordl_internal_set_m_yankMinSpeed)) float_t  m_yankMinSpeed;

/// @brief Field onGrabSound, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_onGrabSound, put=__cordl_internal_set_onGrabSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  onGrabSound;

/// @brief Field rechargeSound, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rechargeSound, put=__cordl_internal_set_rechargeSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  rechargeSound;

/// @brief Method ApplyUpgradeNodes, addr 0x58d85ec, size 0x74, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method Awake, addr 0x58d6d08, size 0x380, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearGravityOverride, addr 0x58d7340, size 0xa4, virtual false, abstract: false, final false
inline void ClearGravityOverride() ;

/// @brief Method FixedUpdate, addr 0x58d7688, size 0x5d0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GravityOverrideFunction, addr 0x58d82e8, size 0x4, virtual false, abstract: false, final false
inline void GravityOverrideFunction(::GorillaLocomotion::GTPlayer*  player) ;

static inline ::GlobalNamespace::SIGadgetAirGrab* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58d70a8, size 0x298, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x58d73e4, size 0xcc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnRecharge, addr 0x58d7088, size 0x20, virtual false, abstract: false, final false
inline void OnRecharge(bool  recharged) ;

/// @brief Method OnUpdateRemote, addr 0x58d82ec, size 0x108, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetStateAuthority, addr 0x58d7650, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetAirGrab_EState  newState) ;

/// @brief Method UpdateUsageIndicator, addr 0x58d7c8c, size 0x38, virtual false, abstract: false, final false
inline void UpdateUsageIndicator() ;

/// @brief Method _CalculateDashSpeed, addr 0x58d8568, size 0x84, virtual false, abstract: false, final false
inline float_t _CalculateDashSpeed(float_t  currentYankSpeed) ;

/// @brief Method _CanChangeState, addr 0x58d84d0, size 0xc, virtual false, abstract: false, final false
static inline bool _CanChangeState(int64_t  newStateIndex) ;

/// @brief Method _CheckInput, addr 0x58d7c58, size 0x34, virtual false, abstract: false, final false
inline bool _CheckInput() ;

/// @brief Method _DoDash, addr 0x58d7e34, size 0x228, virtual false, abstract: false, final false
inline void _DoDash() ;

/// @brief Method _HandleStartInteraction, addr 0x58d74b0, size 0x108, virtual false, abstract: false, final false
inline void _HandleStartInteraction() ;

/// @brief Method _HandleStopInteraction, addr 0x58d75b8, size 0x98, virtual false, abstract: false, final false
inline void _HandleStopInteraction() ;

/// @brief Method _PlayAudio, addr 0x58d84dc, size 0x8c, virtual false, abstract: false, final false
inline void _PlayAudio(int32_t  index) ;

/// @brief Method _PlayHaptic, addr 0x58d7cc4, size 0x170, virtual false, abstract: false, final false
inline void _PlayHaptic(float_t  strengthMultiplier) ;

/// @brief Method _SetStateShared, addr 0x58d83f4, size 0x88, virtual false, abstract: false, final false
inline void _SetStateShared(::GlobalNamespace::SIGadgetAirGrab_EState  newState) ;

/// @brief Method _UpdateAirGrab, addr 0x58d805c, size 0x28c, virtual false, abstract: false, final false
inline void _UpdateAirGrab() ;

constexpr float_t const& __cordl_internal_get__airGrabTime() const;

constexpr float_t& __cordl_internal_get__airGrabTime() ;

constexpr float_t const& __cordl_internal_get__airReleaseSpeed() const;

constexpr float_t& __cordl_internal_get__airReleaseSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__airReleaseVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__airReleaseVector() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get__attachedNetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get__attachedNetPlayer() ;

constexpr int32_t const& __cordl_internal_get__attachedPlayerActorNr() const;

constexpr int32_t& __cordl_internal_get__attachedPlayerActorNr() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__attachedVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__attachedVRRig() ;

constexpr float_t const& __cordl_internal_get__grabStartTime() const;

constexpr float_t& __cordl_internal_get__grabStartTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__grabXformInitialScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__grabXformInitialScale() ;

constexpr ::GlobalNamespace::ResettableUseCounter const& __cordl_internal_get__groundedUseCounter() const;

constexpr ::GlobalNamespace::ResettableUseCounter& __cordl_internal_get__groundedUseCounter() ;

constexpr bool const& __cordl_internal_get__isActivated() const;

constexpr bool& __cordl_internal_get__isActivated() ;

constexpr bool const& __cordl_internal_get__isTagged() const;

constexpr bool& __cordl_internal_get__isTagged() ;

constexpr int32_t const& __cordl_internal_get__lastAttachedPlayerActorNr() const;

constexpr int32_t& __cordl_internal_get__lastAttachedPlayerActorNr() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get__launchYoyoRPCArgs() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get__launchYoyoRPCArgs() ;

constexpr float_t const& __cordl_internal_get__maxDashSpeed() const;

constexpr float_t& __cordl_internal_get__maxDashSpeed() ;

constexpr float_t const& __cordl_internal_get__maxHoldTime() const;

constexpr float_t& __cordl_internal_get__maxHoldTime() ;

constexpr ::GlobalNamespace::SIGadgetAirGrab_EState const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::SIGadgetAirGrab_EState& __cordl_internal_get__state() ;

constexpr bool const& __cordl_internal_get__wasActivated() const;

constexpr bool& __cordl_internal_get__wasActivated() ;

constexpr bool const& __cordl_internal_get_hasGravityOverride() const;

constexpr bool& __cordl_internal_get_hasGravityOverride() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRequestedPlayerPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRequestedPlayerPos() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_airGrabXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_airGrabXform() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_audioSource() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_m_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_m_buttonActivatable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_canActivateIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_canActivateIndicator() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_clipVolumes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_clipVolumes() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_m_clips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_m_clips() ;

constexpr float_t const& __cordl_internal_get_m_cooldownDurationDefault() const;

constexpr float_t& __cordl_internal_get_m_cooldownDurationDefault() ;

constexpr float_t const& __cordl_internal_get_m_cooldownDurationUpgrade() const;

constexpr float_t& __cordl_internal_get_m_cooldownDurationUpgrade() ;

constexpr float_t const& __cordl_internal_get_m_inputActivateThreshold() const;

constexpr float_t& __cordl_internal_get_m_inputActivateThreshold() ;

constexpr float_t const& __cordl_internal_get_m_inputDeactivateThreshold() const;

constexpr float_t& __cordl_internal_get_m_inputDeactivateThreshold() ;

constexpr float_t const& __cordl_internal_get_m_maxDashSpeedDefault() const;

constexpr float_t& __cordl_internal_get_m_maxDashSpeedDefault() ;

constexpr float_t const& __cordl_internal_get_m_maxDashSpeedUpgraded() const;

constexpr float_t& __cordl_internal_get_m_maxDashSpeedUpgraded() ;

constexpr float_t const& __cordl_internal_get_m_maxHoldTimeDefault() const;

constexpr float_t& __cordl_internal_get_m_maxHoldTimeDefault() ;

constexpr float_t const& __cordl_internal_get_m_maxHoldTimeUpgraded() const;

constexpr float_t& __cordl_internal_get_m_maxHoldTimeUpgraded() ;

constexpr float_t const& __cordl_internal_get_m_maxInfluenceAngleDefault() const;

constexpr float_t& __cordl_internal_get_m_maxInfluenceAngleDefault() ;

constexpr float_t const& __cordl_internal_get_m_maxInfluenceAngleUpgrade() const;

constexpr float_t& __cordl_internal_get_m_maxInfluenceAngleUpgrade() ;

constexpr int32_t const& __cordl_internal_get_m_maxSuperchargeUses() const;

constexpr int32_t& __cordl_internal_get_m_maxSuperchargeUses() ;

constexpr float_t const& __cordl_internal_get_m_minDashSpeed() const;

constexpr float_t& __cordl_internal_get_m_minDashSpeed() ;

constexpr float_t const& __cordl_internal_get_m_slipperySurfacesTime() const;

constexpr float_t& __cordl_internal_get_m_slipperySurfacesTime() ;

constexpr ::UnityW<::GlobalNamespace::GameSnappable> const& __cordl_internal_get_m_snappable() const;

constexpr ::UnityW<::GlobalNamespace::GameSnappable>& __cordl_internal_get_m_snappable() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_speedMappingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_speedMappingCurve() ;

constexpr float_t const& __cordl_internal_get_m_yankMaxSpeed() const;

constexpr float_t& __cordl_internal_get_m_yankMaxSpeed() ;

constexpr float_t const& __cordl_internal_get_m_yankMinSpeed() const;

constexpr float_t& __cordl_internal_get_m_yankMinSpeed() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_onGrabSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_onGrabSound() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_rechargeSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_rechargeSound() ;

constexpr void __cordl_internal_set__airGrabTime(float_t  value) ;

constexpr void __cordl_internal_set__airReleaseSpeed(float_t  value) ;

constexpr void __cordl_internal_set__airReleaseVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__attachedNetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set__attachedPlayerActorNr(int32_t  value) ;

constexpr void __cordl_internal_set__attachedVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__grabStartTime(float_t  value) ;

constexpr void __cordl_internal_set__grabXformInitialScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__groundedUseCounter(::GlobalNamespace::ResettableUseCounter  value) ;

constexpr void __cordl_internal_set__isActivated(bool  value) ;

constexpr void __cordl_internal_set__isTagged(bool  value) ;

constexpr void __cordl_internal_set__lastAttachedPlayerActorNr(int32_t  value) ;

constexpr void __cordl_internal_set__launchYoyoRPCArgs(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set__maxDashSpeed(float_t  value) ;

constexpr void __cordl_internal_set__maxHoldTime(float_t  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::SIGadgetAirGrab_EState  value) ;

constexpr void __cordl_internal_set__wasActivated(bool  value) ;

constexpr void __cordl_internal_set_hasGravityOverride(bool  value) ;

constexpr void __cordl_internal_set_lastRequestedPlayerPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_airGrabXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_m_canActivateIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_clipVolumes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_m_cooldownDurationDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_cooldownDurationUpgrade(float_t  value) ;

constexpr void __cordl_internal_set_m_inputActivateThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_inputDeactivateThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_maxDashSpeedDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_maxDashSpeedUpgraded(float_t  value) ;

constexpr void __cordl_internal_set_m_maxHoldTimeDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_maxHoldTimeUpgraded(float_t  value) ;

constexpr void __cordl_internal_set_m_maxInfluenceAngleDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_maxInfluenceAngleUpgrade(float_t  value) ;

constexpr void __cordl_internal_set_m_maxSuperchargeUses(int32_t  value) ;

constexpr void __cordl_internal_set_m_minDashSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_slipperySurfacesTime(float_t  value) ;

constexpr void __cordl_internal_set_m_snappable(::UnityW<::GlobalNamespace::GameSnappable>  value) ;

constexpr void __cordl_internal_set_m_speedMappingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_yankMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_yankMinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_onGrabSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_rechargeSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

/// @brief Method .ctor, addr 0x58d8660, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__HandIndex, addr 0x58d6bf8, size 0x110, virtual false, abstract: false, final false
inline int32_t get__HandIndex() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetAirGrab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetAirGrab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetAirGrab(SIGadgetAirGrab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetAirGrab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetAirGrab(SIGadgetAirGrab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{242};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SIGadgetAirGrab]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SIGadgetAirGrab]  "};

/// [SerializeField]
/// @brief Field m_snappable, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameSnappable>  ___m_snappable;

/// [SerializeField]
/// @brief Field m_buttonActivatable, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___m_buttonActivatable;

/// [SerializeField]
/// @brief Field m_inputActivateThreshold, offset: 0x88, size: 0x4, def value: None
 float_t  ___m_inputActivateThreshold;

/// [SerializeField]
/// @brief Field m_inputDeactivateThreshold, offset: 0x8c, size: 0x4, def value: None
 float_t  ___m_inputDeactivateThreshold;

/// [SerializeField]
/// @brief Field m_audioSource, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_audioSource;

/// [SerializeField]
/// @brief Field onGrabSound, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___onGrabSound;

/// [SerializeField]
/// @brief Field rechargeSound, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___rechargeSound;

/// [SerializeField]
/// @brief Field m_clips, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___m_clips;

/// [SerializeField]
/// @brief Field m_clipVolumes, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_clipVolumes;

/// [Tooltip("Yank min/max: How fast you have to be moving your hand for the yank to register and result in a dash.")]
/// [SerializeField]
/// @brief Field m_yankMinSpeed, offset: 0xb8, size: 0x4, def value: None
 float_t  ___m_yankMinSpeed;

/// [Tooltip("Yank min/max: How fast you have to be moving your hand for the yank to register and result in a dash.")]
/// [SerializeField]
/// @brief Field m_yankMaxSpeed, offset: 0xbc, size: 0x4, def value: None
 float_t  ___m_yankMaxSpeed;

/// [Tooltip("Dash min/max speed: The fastest speed the player will move")]
/// [SerializeField]
/// @brief Field m_minDashSpeed, offset: 0xc0, size: 0x4, def value: None
 float_t  ___m_minDashSpeed;

/// @brief Field _maxDashSpeed, offset: 0xc4, size: 0x4, def value: None
 float_t  ____maxDashSpeed;

/// [SerializeField]
/// @brief Field m_maxDashSpeedDefault, offset: 0xc8, size: 0x4, def value: None
 float_t  ___m_maxDashSpeedDefault;

/// [SerializeField]
/// @brief Field m_maxDashSpeedUpgraded, offset: 0xcc, size: 0x4, def value: None
 float_t  ___m_maxDashSpeedUpgraded;

/// @brief Field _maxHoldTime, offset: 0xd0, size: 0x4, def value: None
 float_t  ____maxHoldTime;

/// [SerializeField]
/// @brief Field m_maxHoldTimeDefault, offset: 0xd4, size: 0x4, def value: None
 float_t  ___m_maxHoldTimeDefault;

/// [SerializeField]
/// @brief Field m_maxHoldTimeUpgraded, offset: 0xd8, size: 0x4, def value: None
 float_t  ___m_maxHoldTimeUpgraded;

/// [Tooltip("Maps yank speed to dash speed.\nX = Yank Speed (min to max)\nY = Dash Speed (min to max).")]
/// [SerializeField]
/// @brief Field m_speedMappingCurve, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_speedMappingCurve;

/// [SerializeField]
/// @brief Field m_slipperySurfacesTime, offset: 0xe8, size: 0x4, def value: None
 float_t  ___m_slipperySurfacesTime;

/// [SerializeField]
/// @brief Field m_maxInfluenceAngleDefault, offset: 0xec, size: 0x4, def value: None
 float_t  ___m_maxInfluenceAngleDefault;

/// [SerializeField]
/// @brief Field m_maxInfluenceAngleUpgrade, offset: 0xf0, size: 0x4, def value: None
 float_t  ___m_maxInfluenceAngleUpgrade;

/// [SerializeField]
/// @brief Field m_cooldownDurationDefault, offset: 0xf4, size: 0x4, def value: None
 float_t  ___m_cooldownDurationDefault;

/// [SerializeField]
/// @brief Field m_cooldownDurationUpgrade, offset: 0xf8, size: 0x4, def value: None
 float_t  ___m_cooldownDurationUpgrade;

/// [SerializeField]
/// @brief Field m_maxSuperchargeUses, offset: 0xfc, size: 0x4, def value: None
 int32_t  ___m_maxSuperchargeUses;

/// [SerializeField]
/// @brief Field m_airGrabXform, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_airGrabXform;

/// [SerializeField]
/// @brief Field m_canActivateIndicator, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_canActivateIndicator;

/// @brief Field _isActivated, offset: 0x110, size: 0x1, def value: None
 bool  ____isActivated;

/// @brief Field _wasActivated, offset: 0x111, size: 0x1, def value: None
 bool  ____wasActivated;

/// @brief Field _airGrabTime, offset: 0x114, size: 0x4, def value: None
 float_t  ____airGrabTime;

/// @brief Field _airReleaseSpeed, offset: 0x118, size: 0x4, def value: None
 float_t  ____airReleaseSpeed;

/// @brief Field _airReleaseVector, offset: 0x11c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____airReleaseVector;

/// @brief Field _attachedVRRig, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____attachedVRRig;

/// @brief Field _lastAttachedPlayerActorNr, offset: 0x130, size: 0x4, def value: None
 int32_t  ____lastAttachedPlayerActorNr;

/// @brief Field _attachedPlayerActorNr, offset: 0x134, size: 0x4, def value: None
 int32_t  ____attachedPlayerActorNr;

/// @brief Field _attachedNetPlayer, offset: 0x138, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ____attachedNetPlayer;

/// @brief Field _isTagged, offset: 0x140, size: 0x1, def value: None
 bool  ____isTagged;

/// @brief Field _launchYoyoRPCArgs, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ____launchYoyoRPCArgs;

/// @brief Field _state, offset: 0x150, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetAirGrab_EState  ____state;

/// @brief Field _groundedUseCounter, offset: 0x158, size: 0x18, def value: None
 ::GlobalNamespace::ResettableUseCounter  ____groundedUseCounter;

/// @brief Field hasGravityOverride, offset: 0x170, size: 0x1, def value: None
 bool  ___hasGravityOverride;

/// @brief Field _grabStartTime, offset: 0x174, size: 0x4, def value: None
 float_t  ____grabStartTime;

/// @brief Field _grabXformInitialScale, offset: 0x178, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____grabXformInitialScale;

/// @brief Field lastRequestedPlayerPos, offset: 0x184, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRequestedPlayerPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_snappable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_buttonActivatable) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_inputActivateThreshold) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_inputDeactivateThreshold) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_audioSource) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___onGrabSound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___rechargeSound) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_clips) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_clipVolumes) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_yankMinSpeed) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_yankMaxSpeed) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_minDashSpeed) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____maxDashSpeed) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_maxDashSpeedDefault) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_maxDashSpeedUpgraded) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____maxHoldTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_maxHoldTimeDefault) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_maxHoldTimeUpgraded) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_speedMappingCurve) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_slipperySurfacesTime) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_maxInfluenceAngleDefault) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_maxInfluenceAngleUpgrade) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_cooldownDurationDefault) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_cooldownDurationUpgrade) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_maxSuperchargeUses) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_airGrabXform) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___m_canActivateIndicator) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____isActivated) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____wasActivated) == 0x111, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____airGrabTime) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____airReleaseSpeed) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____airReleaseVector) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____attachedVRRig) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____lastAttachedPlayerActorNr) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____attachedPlayerActorNr) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____attachedNetPlayer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____isTagged) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____launchYoyoRPCArgs) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____state) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____groundedUseCounter) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___hasGravityOverride) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____grabStartTime) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ____grabXformInitialScale) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetAirGrab, ___lastRequestedPlayerPos) == 0x184, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetAirGrab) == 0x190, "Size mismatch!");

} // namespace end def GlobalNamespace
