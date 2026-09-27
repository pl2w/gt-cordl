#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetDashYoyo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetDashYoyo_EState_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetDashYoyo_StateMaterialsInfo_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetDashYoyo)
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
struct SIGadgetDashYoyo_EState;
}
namespace GlobalNamespace {
struct SIGadgetDashYoyo_StateMaterialsInfo;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GlobalNamespace {
class SuperInfectionGame;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Quaternion;
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
namespace GlobalNamespace {
class SIGadgetDashYoyo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetDashYoyo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetDashYoyo*, "", "SIGadgetDashYoyo");
// [RequireComponent(typeof(GameGrabbable))]
// [RequireComponent(typeof(GameSnappable))]
// [RequireComponent(typeof(GameButtonActivatable))]
// Dependencies SIGadget, SIGadgetDashYoyo::EState, SIGadgetDashYoyo::StateMaterialsInfo, System.Object, UnityEngine.AudioClip, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetDashYoyo
class CORDL_TYPE SIGadgetDashYoyo : public ::GlobalNamespace::SIGadget {
public:
// Declarations
using EState = ::GlobalNamespace::SIGadgetDashYoyo_EState;

using StateMaterialsInfo = ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo;

 __declspec(property(get=get__HandIndex)) int32_t  _HandIndex;

/// @brief Field _attachedNetPlayer, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachedNetPlayer, put=__cordl_internal_set__attachedNetPlayer)) ::GlobalNamespace::NetPlayer*  _attachedNetPlayer;

/// @brief Field _attachedPlayerActorNr, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get__attachedPlayerActorNr, put=__cordl_internal_set__attachedPlayerActorNr)) int32_t  _attachedPlayerActorNr;

/// @brief Field _attachedVRRig, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachedVRRig, put=__cordl_internal_set__attachedVRRig)) ::UnityW<::GlobalNamespace::VRRig>  _attachedVRRig;

/// @brief Field _cooldownDuration, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get__cooldownDuration, put=__cordl_internal_set__cooldownDuration)) float_t  _cooldownDuration;

/// @brief Field _hasStunUpgrade, offset 0x194, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasStunUpgrade, put=__cordl_internal_set__hasStunUpgrade)) bool  _hasStunUpgrade;

/// @brief Field _hasTagUpgrade, offset 0x195, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasTagUpgrade, put=__cordl_internal_set__hasTagUpgrade)) bool  _hasTagUpgrade;

/// @brief Field _isActivated, offset 0x196, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActivated, put=__cordl_internal_set__isActivated)) bool  _isActivated;

/// @brief Field _isRecheckingYank, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRecheckingYank, put=__cordl_internal_set__isRecheckingYank)) bool  _isRecheckingYank;

/// @brief Field _isTagged, offset 0x1d0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTagged, put=__cordl_internal_set__isTagged)) bool  _isTagged;

/// @brief Field _lastAttachedPlayerActorNr, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastAttachedPlayerActorNr, put=__cordl_internal_set__lastAttachedPlayerActorNr)) int32_t  _lastAttachedPlayerActorNr;

/// @brief Field _launchYoyoRPCArgs, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__launchYoyoRPCArgs, put=__cordl_internal_set__launchYoyoRPCArgs)) ::ArrayW<::System::Object*>  _launchYoyoRPCArgs;

/// @brief Field _maxDashSpeed, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDashSpeed, put=__cordl_internal_set__maxDashSpeed)) float_t  _maxDashSpeed;

/// @brief Field _maxEncounteredYankSpeed, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxEncounteredYankSpeed, put=__cordl_internal_set__maxEncounteredYankSpeed)) float_t  _maxEncounteredYankSpeed;

/// @brief Field _maxInfluenceAngle, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxInfluenceAngle, put=__cordl_internal_set__maxInfluenceAngle)) float_t  _maxInfluenceAngle;

/// @brief Field _state, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::SIGadgetDashYoyo_EState  _state;

/// @brief Field _stateMaterials, offset 0xa8, size 0x18 
 __declspec(property(get=__cordl_internal_get__stateMaterials, put=__cordl_internal_set__stateMaterials)) ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  _stateMaterials;

/// @brief Field _successfulYankTime, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get__successfulYankTime, put=__cordl_internal_set__successfulYankTime)) float_t  _successfulYankTime;

/// @brief Field _throwMultiplier, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__throwMultiplier, put=__cordl_internal_set__throwMultiplier)) float_t  _throwMultiplier;

/// @brief Field _timeLastThrown, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get__timeLastThrown, put=__cordl_internal_set__timeLastThrown)) float_t  _timeLastThrown;

/// @brief Field _wasActivated, offset 0x197, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasActivated, put=__cordl_internal_set__wasActivated)) bool  _wasActivated;

/// @brief Field _yankBeginPos, offset 0x1a4, size 0xc 
 __declspec(property(get=__cordl_internal_get__yankBeginPos, put=__cordl_internal_set__yankBeginPos)) ::UnityEngine::Vector3  _yankBeginPos;

/// @brief Field m_audioSource, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_audioSource, put=__cordl_internal_set_m_audioSource)) ::UnityW<::UnityEngine::AudioSource>  m_audioSource;

/// @brief Field m_baseStateMats, offset 0xc0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_baseStateMats, put=__cordl_internal_set_m_baseStateMats)) ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  m_baseStateMats;

/// @brief Field m_buttonActivatable, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_buttonActivatable, put=__cordl_internal_set_m_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  m_buttonActivatable;

/// @brief Field m_clipVolumes, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_clipVolumes, put=__cordl_internal_set_m_clipVolumes)) ::ArrayW<float_t>  m_clipVolumes;

/// @brief Field m_clips, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_clips, put=__cordl_internal_set_m_clips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  m_clips;

/// @brief Field m_cooldownDurationDefault, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cooldownDurationDefault, put=__cordl_internal_set_m_cooldownDurationDefault)) float_t  m_cooldownDurationDefault;

/// @brief Field m_cooldownDurationUpgrade, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cooldownDurationUpgrade, put=__cordl_internal_set_m_cooldownDurationUpgrade)) float_t  m_cooldownDurationUpgrade;

/// @brief Field m_inputActivateThreshold, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_inputActivateThreshold, put=__cordl_internal_set_m_inputActivateThreshold)) float_t  m_inputActivateThreshold;

/// @brief Field m_inputDeactivateThreshold, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_inputDeactivateThreshold, put=__cordl_internal_set_m_inputDeactivateThreshold)) float_t  m_inputDeactivateThreshold;

/// @brief Field m_maxDashSpeedDefault, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxDashSpeedDefault, put=__cordl_internal_set_m_maxDashSpeedDefault)) float_t  m_maxDashSpeedDefault;

/// @brief Field m_maxDashSpeedUpgraded, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxDashSpeedUpgraded, put=__cordl_internal_set_m_maxDashSpeedUpgraded)) float_t  m_maxDashSpeedUpgraded;

/// @brief Field m_maxInfluenceAngleDefault, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxInfluenceAngleDefault, put=__cordl_internal_set_m_maxInfluenceAngleDefault)) float_t  m_maxInfluenceAngleDefault;

/// @brief Field m_maxInfluenceAngleUpgrade, offset 0x184, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxInfluenceAngleUpgrade, put=__cordl_internal_set_m_maxInfluenceAngleUpgrade)) float_t  m_maxInfluenceAngleUpgrade;

/// @brief Field m_maxYankRecheckTime, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxYankRecheckTime, put=__cordl_internal_set_m_maxYankRecheckTime)) float_t  m_maxYankRecheckTime;

/// @brief Field m_minDashSpeed, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_minDashSpeed, put=__cordl_internal_set_m_minDashSpeed)) float_t  m_minDashSpeed;

/// @brief Field m_minThrowSpeed, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_minThrowSpeed, put=__cordl_internal_set_m_minThrowSpeed)) float_t  m_minThrowSpeed;

/// @brief Field m_postYankCooldown, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_postYankCooldown, put=__cordl_internal_set_m_postYankCooldown)) float_t  m_postYankCooldown;

/// @brief Field m_slipperySurfacesTime, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_slipperySurfacesTime, put=__cordl_internal_set_m_slipperySurfacesTime)) float_t  m_slipperySurfacesTime;

/// @brief Field m_snappable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_snappable, put=__cordl_internal_set_m_snappable)) ::UnityW<::GlobalNamespace::GameSnappable>  m_snappable;

/// @brief Field m_speedMappingCurve, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_speedMappingCurve, put=__cordl_internal_set_m_speedMappingCurve)) ::UnityEngine::AnimationCurve*  m_speedMappingCurve;

/// @brief Field m_tagUpgradeStateMatsWhileTagged, offset 0xd8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_tagUpgradeStateMatsWhileTagged, put=__cordl_internal_set_m_tagUpgradeStateMatsWhileTagged)) ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  m_tagUpgradeStateMatsWhileTagged;

/// @brief Field m_tagUpgradeStateMatsWhileUntagged, offset 0xf0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_tagUpgradeStateMatsWhileUntagged, put=__cordl_internal_set_m_tagUpgradeStateMatsWhileUntagged)) ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  m_tagUpgradeStateMatsWhileUntagged;

/// @brief Field m_tetherLineRenderer, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_tetherLineRenderer, put=__cordl_internal_set_m_tetherLineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  m_tetherLineRenderer;

/// @brief Field m_throwMultiplierDefault, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_throwMultiplierDefault, put=__cordl_internal_set_m_throwMultiplierDefault)) float_t  m_throwMultiplierDefault;

/// @brief Field m_throwMultiplierUpgrade, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_throwMultiplierUpgrade, put=__cordl_internal_set_m_throwMultiplierUpgrade)) float_t  m_throwMultiplierUpgrade;

/// @brief Field m_waitBeforeAutoReturn, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_waitBeforeAutoReturn, put=__cordl_internal_set_m_waitBeforeAutoReturn)) float_t  m_waitBeforeAutoReturn;

/// @brief Field m_yankMaxAngle, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yankMaxAngle, put=__cordl_internal_set_m_yankMaxAngle)) float_t  m_yankMaxAngle;

/// @brief Field m_yankMaxSpeed, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yankMaxSpeed, put=__cordl_internal_set_m_yankMaxSpeed)) float_t  m_yankMaxSpeed;

/// @brief Field m_yankMinDistance, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yankMinDistance, put=__cordl_internal_set_m_yankMinDistance)) float_t  m_yankMinDistance;

/// @brief Field m_yankMinSpeed, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yankMinSpeed, put=__cordl_internal_set_m_yankMinSpeed)) float_t  m_yankMinSpeed;

/// @brief Field m_yoyoDefaultPosXform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_yoyoDefaultPosXform, put=__cordl_internal_set_m_yoyoDefaultPosXform)) ::UnityW<::UnityEngine::Transform>  m_yoyoDefaultPosXform;

/// @brief Field m_yoyoRenderer, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_yoyoRenderer, put=__cordl_internal_set_m_yoyoRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  m_yoyoRenderer;

/// @brief Field m_yoyoTarget, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_yoyoTarget, put=__cordl_internal_set_m_yoyoTarget)) ::UnityW<::UnityEngine::Transform>  m_yoyoTarget;

/// @brief Field m_yoyoTargetRB, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_yoyoTargetRB, put=__cordl_internal_set_m_yoyoTargetRB)) ::UnityW<::UnityEngine::Rigidbody>  m_yoyoTargetRB;

/// @brief Method ApplyUpgradeNodes, addr 0x5800734, size 0xfc, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method LateUpdate, addr 0x57fe868, size 0xb8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SIGadgetDashYoyo* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57fe288, size 0x390, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnHitPlayer_Authority, addr 0x58005a0, size 0x108, virtual false, abstract: false, final false
inline void OnHitPlayer_Authority(::GlobalNamespace::SuperInfectionGame*  siTagGameManager, ::GlobalNamespace::NetPlayer*  victimNetPlayer) ;

/// @brief Method OnUpdateAuthority, addr 0x57fef9c, size 0x3ec, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x5800144, size 0x40, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method RemoteThrowYoYoTarget, addr 0x5800584, size 0x1c, virtual false, abstract: false, final false
inline void RemoteThrowYoYoTarget(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::UnityEngine::Vector3  targetPosition, ::UnityEngine::Quaternion  targetRotation) ;

/// @brief Method SetStateAuthority, addr 0x57fee90, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetDashYoyo_EState  newState) ;

/// @brief Method Start, addr 0x57fe020, size 0x268, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method _CalculateDashSpeed, addr 0x58006a8, size 0x8c, virtual false, abstract: false, final false
inline float_t _CalculateDashSpeed(float_t  currentYankSpeed) ;

/// @brief Method _CanChangeState, addr 0x58002a4, size 0xc, virtual false, abstract: false, final false
static inline bool _CanChangeState(int64_t  newStateIndex) ;

/// @brief Method _CheckInput, addr 0x57ff388, size 0x34, virtual false, abstract: false, final false
inline bool _CheckInput() ;

/// @brief Method _CheckYankProgression, addr 0x57ffae0, size 0x664, virtual false, abstract: false, final false
inline void _CheckYankProgression() ;

/// @brief Method _FreezeYoYo, addr 0x580037c, size 0x44, virtual false, abstract: false, final false
inline void _FreezeYoYo() ;

/// @brief Method _HandleStartInteraction, addr 0x57fe920, size 0x2bc, virtual false, abstract: false, final false
inline void _HandleStartInteraction() ;

/// @brief Method _HandleStopInteraction, addr 0x57fec88, size 0x208, virtual false, abstract: false, final false
inline void _HandleStopInteraction() ;

/// @brief Method _HandleVRRigMaterialIndexChanged, addr 0x57febdc, size 0xac, virtual false, abstract: false, final false
inline void _HandleVRRigMaterialIndexChanged(int32_t  oldMatIndex, int32_t  newMatIndex) ;

/// @brief Method _LaunchYoYoShared, addr 0x58003c0, size 0x1c4, virtual false, abstract: false, final false
inline void _LaunchYoYoShared(::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::UnityEngine::Vector3  targetPosition, ::UnityEngine::Quaternion  targetRotation) ;

/// @brief Method _OnTagStateOrUpgradesChanged, addr 0x57feec8, size 0xd4, virtual false, abstract: false, final false
inline void _OnTagStateOrUpgradesChanged() ;

/// @brief Method _PlayAudio, addr 0x58002b0, size 0x8c, virtual false, abstract: false, final false
inline void _PlayAudio(int32_t  index) ;

/// @brief Method _PlayHaptic, addr 0x57ff3bc, size 0x164, virtual false, abstract: false, final false
inline void _PlayHaptic(float_t  strengthMultiplier) ;

/// @brief Method _ResetYoYo, addr 0x57fe618, size 0x250, virtual false, abstract: false, final false
inline void _ResetYoYo() ;

/// @brief Method _SetMaterials, addr 0x580033c, size 0x40, virtual false, abstract: false, final false
inline void _SetMaterials(::UnityEngine::Material*  mat) ;

/// @brief Method _SetStateShared, addr 0x5800184, size 0x120, virtual false, abstract: false, final false
inline void _SetStateShared(::GlobalNamespace::SIGadgetDashYoyo_EState  newState) ;

/// @brief Method _ThrowYoYoTarget, addr 0x57ff520, size 0x5c0, virtual false, abstract: false, final false
inline bool _ThrowYoYoTarget() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get__attachedNetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get__attachedNetPlayer() ;

constexpr int32_t const& __cordl_internal_get__attachedPlayerActorNr() const;

constexpr int32_t& __cordl_internal_get__attachedPlayerActorNr() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__attachedVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__attachedVRRig() ;

constexpr float_t const& __cordl_internal_get__cooldownDuration() const;

constexpr float_t& __cordl_internal_get__cooldownDuration() ;

constexpr bool const& __cordl_internal_get__hasStunUpgrade() const;

constexpr bool& __cordl_internal_get__hasStunUpgrade() ;

constexpr bool const& __cordl_internal_get__hasTagUpgrade() const;

constexpr bool& __cordl_internal_get__hasTagUpgrade() ;

constexpr bool const& __cordl_internal_get__isActivated() const;

constexpr bool& __cordl_internal_get__isActivated() ;

constexpr bool const& __cordl_internal_get__isRecheckingYank() const;

constexpr bool& __cordl_internal_get__isRecheckingYank() ;

constexpr bool const& __cordl_internal_get__isTagged() const;

constexpr bool& __cordl_internal_get__isTagged() ;

constexpr int32_t const& __cordl_internal_get__lastAttachedPlayerActorNr() const;

constexpr int32_t& __cordl_internal_get__lastAttachedPlayerActorNr() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get__launchYoyoRPCArgs() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get__launchYoyoRPCArgs() ;

constexpr float_t const& __cordl_internal_get__maxDashSpeed() const;

constexpr float_t& __cordl_internal_get__maxDashSpeed() ;

constexpr float_t const& __cordl_internal_get__maxEncounteredYankSpeed() const;

constexpr float_t& __cordl_internal_get__maxEncounteredYankSpeed() ;

constexpr float_t const& __cordl_internal_get__maxInfluenceAngle() const;

constexpr float_t& __cordl_internal_get__maxInfluenceAngle() ;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState& __cordl_internal_get__state() ;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo const& __cordl_internal_get__stateMaterials() const;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo& __cordl_internal_get__stateMaterials() ;

constexpr float_t const& __cordl_internal_get__successfulYankTime() const;

constexpr float_t& __cordl_internal_get__successfulYankTime() ;

constexpr float_t const& __cordl_internal_get__throwMultiplier() const;

constexpr float_t& __cordl_internal_get__throwMultiplier() ;

constexpr float_t const& __cordl_internal_get__timeLastThrown() const;

constexpr float_t& __cordl_internal_get__timeLastThrown() ;

constexpr bool const& __cordl_internal_get__wasActivated() const;

constexpr bool& __cordl_internal_get__wasActivated() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__yankBeginPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__yankBeginPos() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_audioSource() ;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo const& __cordl_internal_get_m_baseStateMats() const;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo& __cordl_internal_get_m_baseStateMats() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_m_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_m_buttonActivatable() ;

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

constexpr float_t const& __cordl_internal_get_m_maxInfluenceAngleDefault() const;

constexpr float_t& __cordl_internal_get_m_maxInfluenceAngleDefault() ;

constexpr float_t const& __cordl_internal_get_m_maxInfluenceAngleUpgrade() const;

constexpr float_t& __cordl_internal_get_m_maxInfluenceAngleUpgrade() ;

constexpr float_t const& __cordl_internal_get_m_maxYankRecheckTime() const;

constexpr float_t& __cordl_internal_get_m_maxYankRecheckTime() ;

constexpr float_t const& __cordl_internal_get_m_minDashSpeed() const;

constexpr float_t& __cordl_internal_get_m_minDashSpeed() ;

constexpr float_t const& __cordl_internal_get_m_minThrowSpeed() const;

constexpr float_t& __cordl_internal_get_m_minThrowSpeed() ;

constexpr float_t const& __cordl_internal_get_m_postYankCooldown() const;

constexpr float_t& __cordl_internal_get_m_postYankCooldown() ;

constexpr float_t const& __cordl_internal_get_m_slipperySurfacesTime() const;

constexpr float_t& __cordl_internal_get_m_slipperySurfacesTime() ;

constexpr ::UnityW<::GlobalNamespace::GameSnappable> const& __cordl_internal_get_m_snappable() const;

constexpr ::UnityW<::GlobalNamespace::GameSnappable>& __cordl_internal_get_m_snappable() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_speedMappingCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_speedMappingCurve() ;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo const& __cordl_internal_get_m_tagUpgradeStateMatsWhileTagged() const;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo& __cordl_internal_get_m_tagUpgradeStateMatsWhileTagged() ;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo const& __cordl_internal_get_m_tagUpgradeStateMatsWhileUntagged() const;

constexpr ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo& __cordl_internal_get_m_tagUpgradeStateMatsWhileUntagged() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_m_tetherLineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_m_tetherLineRenderer() ;

constexpr float_t const& __cordl_internal_get_m_throwMultiplierDefault() const;

constexpr float_t& __cordl_internal_get_m_throwMultiplierDefault() ;

constexpr float_t const& __cordl_internal_get_m_throwMultiplierUpgrade() const;

constexpr float_t& __cordl_internal_get_m_throwMultiplierUpgrade() ;

constexpr float_t const& __cordl_internal_get_m_waitBeforeAutoReturn() const;

constexpr float_t& __cordl_internal_get_m_waitBeforeAutoReturn() ;

constexpr float_t const& __cordl_internal_get_m_yankMaxAngle() const;

constexpr float_t& __cordl_internal_get_m_yankMaxAngle() ;

constexpr float_t const& __cordl_internal_get_m_yankMaxSpeed() const;

constexpr float_t& __cordl_internal_get_m_yankMaxSpeed() ;

constexpr float_t const& __cordl_internal_get_m_yankMinDistance() const;

constexpr float_t& __cordl_internal_get_m_yankMinDistance() ;

constexpr float_t const& __cordl_internal_get_m_yankMinSpeed() const;

constexpr float_t& __cordl_internal_get_m_yankMinSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_yoyoDefaultPosXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_yoyoDefaultPosXform() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_m_yoyoRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_m_yoyoRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_yoyoTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_yoyoTarget() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_yoyoTargetRB() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_yoyoTargetRB() ;

constexpr void __cordl_internal_set__attachedNetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set__attachedPlayerActorNr(int32_t  value) ;

constexpr void __cordl_internal_set__attachedVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__cooldownDuration(float_t  value) ;

constexpr void __cordl_internal_set__hasStunUpgrade(bool  value) ;

constexpr void __cordl_internal_set__hasTagUpgrade(bool  value) ;

constexpr void __cordl_internal_set__isActivated(bool  value) ;

constexpr void __cordl_internal_set__isRecheckingYank(bool  value) ;

constexpr void __cordl_internal_set__isTagged(bool  value) ;

constexpr void __cordl_internal_set__lastAttachedPlayerActorNr(int32_t  value) ;

constexpr void __cordl_internal_set__launchYoyoRPCArgs(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set__maxDashSpeed(float_t  value) ;

constexpr void __cordl_internal_set__maxEncounteredYankSpeed(float_t  value) ;

constexpr void __cordl_internal_set__maxInfluenceAngle(float_t  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::SIGadgetDashYoyo_EState  value) ;

constexpr void __cordl_internal_set__stateMaterials(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  value) ;

constexpr void __cordl_internal_set__successfulYankTime(float_t  value) ;

constexpr void __cordl_internal_set__throwMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__timeLastThrown(float_t  value) ;

constexpr void __cordl_internal_set__wasActivated(bool  value) ;

constexpr void __cordl_internal_set__yankBeginPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_baseStateMats(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  value) ;

constexpr void __cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_m_clipVolumes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_clips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_m_cooldownDurationDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_cooldownDurationUpgrade(float_t  value) ;

constexpr void __cordl_internal_set_m_inputActivateThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_inputDeactivateThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_maxDashSpeedDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_maxDashSpeedUpgraded(float_t  value) ;

constexpr void __cordl_internal_set_m_maxInfluenceAngleDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_maxInfluenceAngleUpgrade(float_t  value) ;

constexpr void __cordl_internal_set_m_maxYankRecheckTime(float_t  value) ;

constexpr void __cordl_internal_set_m_minDashSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_minThrowSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_postYankCooldown(float_t  value) ;

constexpr void __cordl_internal_set_m_slipperySurfacesTime(float_t  value) ;

constexpr void __cordl_internal_set_m_snappable(::UnityW<::GlobalNamespace::GameSnappable>  value) ;

constexpr void __cordl_internal_set_m_speedMappingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_tagUpgradeStateMatsWhileTagged(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  value) ;

constexpr void __cordl_internal_set_m_tagUpgradeStateMatsWhileUntagged(::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  value) ;

constexpr void __cordl_internal_set_m_tetherLineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_m_throwMultiplierDefault(float_t  value) ;

constexpr void __cordl_internal_set_m_throwMultiplierUpgrade(float_t  value) ;

constexpr void __cordl_internal_set_m_waitBeforeAutoReturn(float_t  value) ;

constexpr void __cordl_internal_set_m_yankMaxAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_yankMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_yankMinDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_yankMinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_yoyoDefaultPosXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_yoyoRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_m_yoyoTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_yoyoTargetRB(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x5800830, size 0x70c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__HandIndex, addr 0x57fdf10, size 0x110, virtual false, abstract: false, final false
inline int32_t get__HandIndex() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetDashYoyo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetDashYoyo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetDashYoyo(SIGadgetDashYoyo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetDashYoyo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetDashYoyo(SIGadgetDashYoyo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{235};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SIGadgetDashYoyo]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SIGadgetDashYoyo]  "};

/// [SerializeField]
/// @brief Field m_snappable, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameSnappable>  ___m_snappable;

/// [SerializeField]
/// @brief Field m_yoyoDefaultPosXform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_yoyoDefaultPosXform;

/// [SerializeField]
/// @brief Field m_yoyoTarget, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_yoyoTarget;

/// [SerializeField]
/// @brief Field m_yoyoTargetRB, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___m_yoyoTargetRB;

/// [SerializeField]
/// @brief Field m_buttonActivatable, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___m_buttonActivatable;

/// [SerializeField]
/// @brief Field m_inputActivateThreshold, offset: 0xa0, size: 0x4, def value: None
 float_t  ___m_inputActivateThreshold;

/// [SerializeField]
/// @brief Field m_inputDeactivateThreshold, offset: 0xa4, size: 0x4, def value: None
 float_t  ___m_inputDeactivateThreshold;

/// @brief Field _stateMaterials, offset: 0xa8, size: 0x18, def value: None
 ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  ____stateMaterials;

/// [SerializeField]
/// @brief Field m_baseStateMats, offset: 0xc0, size: 0x18, def value: None
 ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  ___m_baseStateMats;

/// [SerializeField]
/// @brief Field m_tagUpgradeStateMatsWhileTagged, offset: 0xd8, size: 0x18, def value: None
 ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  ___m_tagUpgradeStateMatsWhileTagged;

/// [SerializeField]
/// @brief Field m_tagUpgradeStateMatsWhileUntagged, offset: 0xf0, size: 0x18, def value: None
 ::GlobalNamespace::SIGadgetDashYoyo_StateMaterialsInfo  ___m_tagUpgradeStateMatsWhileUntagged;

/// [SerializeField]
/// @brief Field m_yoyoRenderer, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___m_yoyoRenderer;

/// [SerializeField]
/// @brief Field m_audioSource, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_audioSource;

/// [SerializeField]
/// @brief Field m_clips, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___m_clips;

/// [SerializeField]
/// @brief Field m_clipVolumes, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_clipVolumes;

/// @brief Field _throwMultiplier, offset: 0x128, size: 0x4, def value: None
 float_t  ____throwMultiplier;

/// [SerializeField]
/// @brief Field m_throwMultiplierDefault, offset: 0x12c, size: 0x4, def value: None
 float_t  ___m_throwMultiplierDefault;

/// [SerializeField]
/// @brief Field m_throwMultiplierUpgrade, offset: 0x130, size: 0x4, def value: None
 float_t  ___m_throwMultiplierUpgrade;

/// [FormerlySerializedAs("m_tether")]
/// [SerializeField]
/// @brief Field m_tetherLineRenderer, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___m_tetherLineRenderer;

/// [SerializeField]
/// @brief Field m_minThrowSpeed, offset: 0x140, size: 0x4, def value: None
 float_t  ___m_minThrowSpeed;

/// [SerializeField]
/// @brief Field m_waitBeforeAutoReturn, offset: 0x144, size: 0x4, def value: None
 float_t  ___m_waitBeforeAutoReturn;

/// [SerializeField]
/// @brief Field m_postYankCooldown, offset: 0x148, size: 0x4, def value: None
 float_t  ___m_postYankCooldown;

/// [SerializeField]
/// @brief Field m_maxYankRecheckTime, offset: 0x14c, size: 0x4, def value: None
 float_t  ___m_maxYankRecheckTime;

/// [SerializeField]
/// @brief Field m_yankMinDistance, offset: 0x150, size: 0x4, def value: None
 float_t  ___m_yankMinDistance;

/// [SerializeField]
/// @brief Field m_yankMaxAngle, offset: 0x154, size: 0x4, def value: None
 float_t  ___m_yankMaxAngle;

/// [Tooltip("Yank min/max: How fast you have to be moving your hand for the yank to register and result in a dash.")]
/// [SerializeField]
/// @brief Field m_yankMinSpeed, offset: 0x158, size: 0x4, def value: None
 float_t  ___m_yankMinSpeed;

/// [Tooltip("Yank min/max: How fast you have to be moving your hand for the yank to register and result in a dash.")]
/// [SerializeField]
/// @brief Field m_yankMaxSpeed, offset: 0x15c, size: 0x4, def value: None
 float_t  ___m_yankMaxSpeed;

/// [Tooltip("Dash min/max speed: The fastest speed the player will move")]
/// [SerializeField]
/// @brief Field m_minDashSpeed, offset: 0x160, size: 0x4, def value: None
 float_t  ___m_minDashSpeed;

/// @brief Field _maxDashSpeed, offset: 0x164, size: 0x4, def value: None
 float_t  ____maxDashSpeed;

/// [SerializeField]
/// @brief Field m_maxDashSpeedDefault, offset: 0x168, size: 0x4, def value: None
 float_t  ___m_maxDashSpeedDefault;

/// [SerializeField]
/// @brief Field m_maxDashSpeedUpgraded, offset: 0x16c, size: 0x4, def value: None
 float_t  ___m_maxDashSpeedUpgraded;

/// [Tooltip("Maps yank speed to dash speed.\nX = Yank Speed (min to max)\nY = Dash Speed (min to max).")]
/// [SerializeField]
/// @brief Field m_speedMappingCurve, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_speedMappingCurve;

/// [SerializeField]
/// @brief Field m_slipperySurfacesTime, offset: 0x178, size: 0x4, def value: None
 float_t  ___m_slipperySurfacesTime;

/// @brief Field _maxInfluenceAngle, offset: 0x17c, size: 0x4, def value: None
 float_t  ____maxInfluenceAngle;

/// [SerializeField]
/// @brief Field m_maxInfluenceAngleDefault, offset: 0x180, size: 0x4, def value: None
 float_t  ___m_maxInfluenceAngleDefault;

/// [SerializeField]
/// @brief Field m_maxInfluenceAngleUpgrade, offset: 0x184, size: 0x4, def value: None
 float_t  ___m_maxInfluenceAngleUpgrade;

/// @brief Field _cooldownDuration, offset: 0x188, size: 0x4, def value: None
 float_t  ____cooldownDuration;

/// [SerializeField]
/// @brief Field m_cooldownDurationDefault, offset: 0x18c, size: 0x4, def value: None
 float_t  ___m_cooldownDurationDefault;

/// [SerializeField]
/// @brief Field m_cooldownDurationUpgrade, offset: 0x190, size: 0x4, def value: None
 float_t  ___m_cooldownDurationUpgrade;

/// @brief Field _hasStunUpgrade, offset: 0x194, size: 0x1, def value: None
 bool  ____hasStunUpgrade;

/// @brief Field _hasTagUpgrade, offset: 0x195, size: 0x1, def value: None
 bool  ____hasTagUpgrade;

/// @brief Field _isActivated, offset: 0x196, size: 0x1, def value: None
 bool  ____isActivated;

/// @brief Field _wasActivated, offset: 0x197, size: 0x1, def value: None
 bool  ____wasActivated;

/// @brief Field _timeLastThrown, offset: 0x198, size: 0x4, def value: None
 float_t  ____timeLastThrown;

/// @brief Field _successfulYankTime, offset: 0x19c, size: 0x4, def value: None
 float_t  ____successfulYankTime;

/// @brief Field _maxEncounteredYankSpeed, offset: 0x1a0, size: 0x4, def value: None
 float_t  ____maxEncounteredYankSpeed;

/// @brief Field _yankBeginPos, offset: 0x1a4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____yankBeginPos;

/// @brief Field _isRecheckingYank, offset: 0x1b0, size: 0x1, def value: None
 bool  ____isRecheckingYank;

/// @brief Field _attachedVRRig, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____attachedVRRig;

/// @brief Field _lastAttachedPlayerActorNr, offset: 0x1c0, size: 0x4, def value: None
 int32_t  ____lastAttachedPlayerActorNr;

/// @brief Field _attachedPlayerActorNr, offset: 0x1c4, size: 0x4, def value: None
 int32_t  ____attachedPlayerActorNr;

/// @brief Field _attachedNetPlayer, offset: 0x1c8, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ____attachedNetPlayer;

/// @brief Field _isTagged, offset: 0x1d0, size: 0x1, def value: None
 bool  ____isTagged;

/// @brief Field _launchYoyoRPCArgs, offset: 0x1d8, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ____launchYoyoRPCArgs;

/// @brief Field _state, offset: 0x1e0, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetDashYoyo_EState  ____state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_snappable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_yoyoDefaultPosXform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_yoyoTarget) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_yoyoTargetRB) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_buttonActivatable) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_inputActivateThreshold) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_inputDeactivateThreshold) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____stateMaterials) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_baseStateMats) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_tagUpgradeStateMatsWhileTagged) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_tagUpgradeStateMatsWhileUntagged) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_yoyoRenderer) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_audioSource) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_clips) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_clipVolumes) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____throwMultiplier) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_throwMultiplierDefault) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_throwMultiplierUpgrade) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_tetherLineRenderer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_minThrowSpeed) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_waitBeforeAutoReturn) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_postYankCooldown) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_maxYankRecheckTime) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_yankMinDistance) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_yankMaxAngle) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_yankMinSpeed) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_yankMaxSpeed) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_minDashSpeed) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____maxDashSpeed) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_maxDashSpeedDefault) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_maxDashSpeedUpgraded) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_speedMappingCurve) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_slipperySurfacesTime) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____maxInfluenceAngle) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_maxInfluenceAngleDefault) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_maxInfluenceAngleUpgrade) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____cooldownDuration) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_cooldownDurationDefault) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ___m_cooldownDurationUpgrade) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____hasStunUpgrade) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____hasTagUpgrade) == 0x195, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____isActivated) == 0x196, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____wasActivated) == 0x197, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____timeLastThrown) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____successfulYankTime) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____maxEncounteredYankSpeed) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____yankBeginPos) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____isRecheckingYank) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____attachedVRRig) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____lastAttachedPlayerActorNr) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____attachedPlayerActorNr) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____attachedNetPlayer) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____isTagged) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____launchYoyoRPCArgs) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetDashYoyo, ____state) == 0x1e0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetDashYoyo) == 0x1e8, "Size mismatch!");

} // namespace end def GlobalNamespace
