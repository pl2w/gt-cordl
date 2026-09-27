#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetSlipMitt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIGadgetSlipMitt_EState_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandState_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetSlipMitt)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class GameSnappable;
}
namespace GlobalNamespace {
struct SIGadgetSlipMitt_EState;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
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
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetSlipMitt;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetSlipMitt*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetSlipMitt*, "", "SIGadgetSlipMitt");
// [RequireComponent(typeof(GameGrabbable))]
// [RequireComponent(typeof(GameSnappable))]
// [RequireComponent(typeof(GameButtonActivatable))]
// Dependencies GorillaLocomotion.GTPlayer::HandState, SIGadget, SIGadgetSlipMitt::EState, UnityEngine.AudioClip, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetSlipMitt
class CORDL_TYPE SIGadgetSlipMitt : public ::GlobalNamespace::SIGadget {
public:
// Declarations
using EState = ::GlobalNamespace::SIGadgetSlipMitt_EState;

 __declspec(property(get=get__HandIndex)) int32_t  _HandIndex;

/// @brief Field _airGrabTime, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__airGrabTime, put=__cordl_internal_set__airGrabTime)) float_t  _airGrabTime;

/// @brief Field _airReleaseSpeed, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__airReleaseSpeed, put=__cordl_internal_set__airReleaseSpeed)) float_t  _airReleaseSpeed;

/// @brief Field _airReleaseVector, offset 0x104, size 0xc 
 __declspec(property(get=__cordl_internal_get__airReleaseVector, put=__cordl_internal_set__airReleaseVector)) ::UnityEngine::Vector3  _airReleaseVector;

/// @brief Field _attachedHandState, offset 0x118, size 0x120 
 __declspec(property(get=__cordl_internal_get__attachedHandState, put=__cordl_internal_set__attachedHandState)) ::GlobalNamespace::GTPlayer_HandState  _attachedHandState;

/// @brief Field _attachedPlayerActorNr, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get__attachedPlayerActorNr, put=__cordl_internal_set__attachedPlayerActorNr)) int32_t  _attachedPlayerActorNr;

/// @brief Field _attachedVRRig, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__attachedVRRig, put=__cordl_internal_set__attachedVRRig)) ::UnityW<::GlobalNamespace::VRRig>  _attachedVRRig;

/// @brief Field _isActivated, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActivated, put=__cordl_internal_set__isActivated)) bool  _isActivated;

/// @brief Field _isTagged, offset 0x240, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTagged, put=__cordl_internal_set__isTagged)) bool  _isTagged;

/// @brief Field _lastAttachedPlayerActorNr, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastAttachedPlayerActorNr, put=__cordl_internal_set__lastAttachedPlayerActorNr)) int32_t  _lastAttachedPlayerActorNr;

/// @brief Field _maxDashSpeed, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDashSpeed, put=__cordl_internal_set__maxDashSpeed)) float_t  _maxDashSpeed;

/// @brief Field _raycastHitResults, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastHitResults, put=__cordl_internal_set__raycastHitResults)) ::ArrayW<::UnityEngine::RaycastHit>  _raycastHitResults;

/// @brief Field _state, offset 0x244, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::GlobalNamespace::SIGadgetSlipMitt_EState  _state;

/// @brief Field _wasActivated, offset 0xf9, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasActivated, put=__cordl_internal_set__wasActivated)) bool  _wasActivated;

/// @brief Field m_airGrabXform, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_airGrabXform, put=__cordl_internal_set_m_airGrabXform)) ::UnityW<::UnityEngine::Transform>  m_airGrabXform;

/// @brief Field m_audioSource, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_audioSource, put=__cordl_internal_set_m_audioSource)) ::UnityW<::UnityEngine::AudioSource>  m_audioSource;

/// @brief Field m_buttonActivatable, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_buttonActivatable, put=__cordl_internal_set_m_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  m_buttonActivatable;

/// @brief Field m_clipVolumes, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_clipVolumes, put=__cordl_internal_set_m_clipVolumes)) ::ArrayW<float_t>  m_clipVolumes;

/// @brief Field m_clips, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_clips, put=__cordl_internal_set_m_clips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  m_clips;

/// @brief Field m_cooldownDurationDefault, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cooldownDurationDefault, put=__cordl_internal_set_m_cooldownDurationDefault)) float_t  m_cooldownDurationDefault;

/// @brief Field m_cooldownDurationUpgrade, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cooldownDurationUpgrade, put=__cordl_internal_set_m_cooldownDurationUpgrade)) float_t  m_cooldownDurationUpgrade;

/// @brief Field m_inputActivateThreshold, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_inputActivateThreshold, put=__cordl_internal_set_m_inputActivateThreshold)) float_t  m_inputActivateThreshold;

/// @brief Field m_inputDeactivateThreshold, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_inputDeactivateThreshold, put=__cordl_internal_set_m_inputDeactivateThreshold)) float_t  m_inputDeactivateThreshold;

/// @brief Field m_maxDashSpeedDefault, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxDashSpeedDefault, put=__cordl_internal_set_m_maxDashSpeedDefault)) float_t  m_maxDashSpeedDefault;

/// @brief Field m_maxDashSpeedUpgraded, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxDashSpeedUpgraded, put=__cordl_internal_set_m_maxDashSpeedUpgraded)) float_t  m_maxDashSpeedUpgraded;

/// @brief Field m_maxInfluenceAngleDefault, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxInfluenceAngleDefault, put=__cordl_internal_set_m_maxInfluenceAngleDefault)) float_t  m_maxInfluenceAngleDefault;

/// @brief Field m_maxInfluenceAngleUpgrade, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxInfluenceAngleUpgrade, put=__cordl_internal_set_m_maxInfluenceAngleUpgrade)) float_t  m_maxInfluenceAngleUpgrade;

/// @brief Field m_minDashSpeed, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_minDashSpeed, put=__cordl_internal_set_m_minDashSpeed)) float_t  m_minDashSpeed;

/// @brief Field m_slipperySurfacesTime, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_slipperySurfacesTime, put=__cordl_internal_set_m_slipperySurfacesTime)) float_t  m_slipperySurfacesTime;

/// @brief Field m_snappable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_snappable, put=__cordl_internal_set_m_snappable)) ::UnityW<::GlobalNamespace::GameSnappable>  m_snappable;

/// @brief Field m_speedMappingCurve, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_speedMappingCurve, put=__cordl_internal_set_m_speedMappingCurve)) ::UnityEngine::AnimationCurve*  m_speedMappingCurve;

/// @brief Field m_yankMaxSpeed, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yankMaxSpeed, put=__cordl_internal_set_m_yankMaxSpeed)) float_t  m_yankMaxSpeed;

/// @brief Field m_yankMinSpeed, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yankMinSpeed, put=__cordl_internal_set_m_yankMinSpeed)) float_t  m_yankMinSpeed;

/// @brief Field m_yoyoDefaultPosXform, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_yoyoDefaultPosXform, put=__cordl_internal_set_m_yoyoDefaultPosXform)) ::UnityW<::UnityEngine::Transform>  m_yoyoDefaultPosXform;

/// @brief Field m_yoyoRenderer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_yoyoRenderer, put=__cordl_internal_set_m_yoyoRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  m_yoyoRenderer;

/// @brief Method ApplyUpgradeNodes, addr 0x58dc07c, size 0x4c, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method FixedUpdate, addr 0x58db3e4, size 0x3dc, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::SIGadgetSlipMitt* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58db02c, size 0x298, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnUpdateRemote, addr 0x58dbc0c, size 0x3c, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method SetStateAuthority, addr 0x58db3a8, size 0x3c, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetSlipMitt_EState  newState) ;

/// @brief Method Start, addr 0x58dad58, size 0x2d4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method _CalculateDashSpeed, addr 0x58dbf6c, size 0x84, virtual false, abstract: false, final false
inline float_t _CalculateDashSpeed(float_t  currentYankSpeed) ;

/// @brief Method _CanChangeState, addr 0x58dbc64, size 0xc, virtual false, abstract: false, final false
static inline bool _CanChangeState(int64_t  newStateIndex) ;

/// @brief Method _CheckInput, addr 0x58db7c0, size 0x34, virtual false, abstract: false, final false
inline bool _CheckInput() ;

/// @brief Method _DoAirGrab, addr 0x58dbc70, size 0xc0, virtual false, abstract: false, final false
inline void _DoAirGrab() ;

/// @brief Method _DoDash, addr 0x58dbd30, size 0x23c, virtual false, abstract: false, final false
inline void _DoDash() ;

/// @brief Method _HandleGTPlayerOnUpdateGravity, addr 0x58db964, size 0x2a8, virtual false, abstract: false, final false
inline void _HandleGTPlayerOnUpdateGravity(::GorillaLocomotion::GTPlayer*  gtPlayer) ;

/// @brief Method _HandleStartInteraction, addr 0x58db2c4, size 0x94, virtual false, abstract: false, final false
inline void _HandleStartInteraction() ;

/// @brief Method _HandleStopInteraction, addr 0x58db358, size 0x50, virtual false, abstract: false, final false
inline void _HandleStopInteraction() ;

/// @brief Method _PlayAudio, addr 0x58dbff0, size 0x8c, virtual false, abstract: false, final false
inline void _PlayAudio(int32_t  index) ;

/// @brief Method _PlayHaptic, addr 0x58db7f4, size 0x170, virtual false, abstract: false, final false
inline void _PlayHaptic(float_t  strengthMultiplier) ;

/// @brief Method _SetStateShared, addr 0x58dbc48, size 0x1c, virtual false, abstract: false, final false
inline void _SetStateShared(::GlobalNamespace::SIGadgetSlipMitt_EState  newState) ;

constexpr float_t const& __cordl_internal_get__airGrabTime() const;

constexpr float_t& __cordl_internal_get__airGrabTime() ;

constexpr float_t const& __cordl_internal_get__airReleaseSpeed() const;

constexpr float_t& __cordl_internal_get__airReleaseSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__airReleaseVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__airReleaseVector() ;

constexpr ::GlobalNamespace::GTPlayer_HandState const& __cordl_internal_get__attachedHandState() const;

constexpr ::GlobalNamespace::GTPlayer_HandState& __cordl_internal_get__attachedHandState() ;

constexpr int32_t const& __cordl_internal_get__attachedPlayerActorNr() const;

constexpr int32_t& __cordl_internal_get__attachedPlayerActorNr() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__attachedVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__attachedVRRig() ;

constexpr bool const& __cordl_internal_get__isActivated() const;

constexpr bool& __cordl_internal_get__isActivated() ;

constexpr bool const& __cordl_internal_get__isTagged() const;

constexpr bool& __cordl_internal_get__isTagged() ;

constexpr int32_t const& __cordl_internal_get__lastAttachedPlayerActorNr() const;

constexpr int32_t& __cordl_internal_get__lastAttachedPlayerActorNr() ;

constexpr float_t const& __cordl_internal_get__maxDashSpeed() const;

constexpr float_t& __cordl_internal_get__maxDashSpeed() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__raycastHitResults() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__raycastHitResults() ;

constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState const& __cordl_internal_get__state() const;

constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState& __cordl_internal_get__state() ;

constexpr bool const& __cordl_internal_get__wasActivated() const;

constexpr bool& __cordl_internal_get__wasActivated() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_airGrabXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_airGrabXform() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_audioSource() ;

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

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_yoyoDefaultPosXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_yoyoDefaultPosXform() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_m_yoyoRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_m_yoyoRenderer() ;

constexpr void __cordl_internal_set__airGrabTime(float_t  value) ;

constexpr void __cordl_internal_set__airReleaseSpeed(float_t  value) ;

constexpr void __cordl_internal_set__airReleaseVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__attachedHandState(::GlobalNamespace::GTPlayer_HandState  value) ;

constexpr void __cordl_internal_set__attachedPlayerActorNr(int32_t  value) ;

constexpr void __cordl_internal_set__attachedVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__isActivated(bool  value) ;

constexpr void __cordl_internal_set__isTagged(bool  value) ;

constexpr void __cordl_internal_set__lastAttachedPlayerActorNr(int32_t  value) ;

constexpr void __cordl_internal_set__maxDashSpeed(float_t  value) ;

constexpr void __cordl_internal_set__raycastHitResults(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__state(::GlobalNamespace::SIGadgetSlipMitt_EState  value) ;

constexpr void __cordl_internal_set__wasActivated(bool  value) ;

constexpr void __cordl_internal_set_m_airGrabXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

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

constexpr void __cordl_internal_set_m_minDashSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_slipperySurfacesTime(float_t  value) ;

constexpr void __cordl_internal_set_m_snappable(::UnityW<::GlobalNamespace::GameSnappable>  value) ;

constexpr void __cordl_internal_set_m_speedMappingCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_yankMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_yankMinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_yoyoDefaultPosXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_yoyoRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x58dc0c8, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__HandIndex, addr 0x58dac48, size 0x110, virtual false, abstract: false, final false
inline int32_t get__HandIndex() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetSlipMitt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetSlipMitt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetSlipMitt(SIGadgetSlipMitt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetSlipMitt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetSlipMitt(SIGadgetSlipMitt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{245};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SIGadgetSlipMitt]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SIGadgetSlipMitt]  "};

/// [SerializeField]
/// @brief Field m_snappable, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameSnappable>  ___m_snappable;

/// [SerializeField]
/// @brief Field m_yoyoDefaultPosXform, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_yoyoDefaultPosXform;

/// [SerializeField]
/// @brief Field m_buttonActivatable, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___m_buttonActivatable;

/// [SerializeField]
/// @brief Field m_inputActivateThreshold, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_inputActivateThreshold;

/// [SerializeField]
/// @brief Field m_inputDeactivateThreshold, offset: 0x94, size: 0x4, def value: None
 float_t  ___m_inputDeactivateThreshold;

/// [SerializeField]
/// @brief Field m_yoyoRenderer, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___m_yoyoRenderer;

/// [SerializeField]
/// @brief Field m_audioSource, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_audioSource;

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

/// [Tooltip("Maps yank speed to dash speed.\nX = Yank Speed (min to max)\nY = Dash Speed (min to max).")]
/// [SerializeField]
/// @brief Field m_speedMappingCurve, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_speedMappingCurve;

/// [SerializeField]
/// @brief Field m_slipperySurfacesTime, offset: 0xd8, size: 0x4, def value: None
 float_t  ___m_slipperySurfacesTime;

/// [SerializeField]
/// @brief Field m_maxInfluenceAngleDefault, offset: 0xdc, size: 0x4, def value: None
 float_t  ___m_maxInfluenceAngleDefault;

/// [SerializeField]
/// @brief Field m_maxInfluenceAngleUpgrade, offset: 0xe0, size: 0x4, def value: None
 float_t  ___m_maxInfluenceAngleUpgrade;

/// [SerializeField]
/// @brief Field m_cooldownDurationDefault, offset: 0xe4, size: 0x4, def value: None
 float_t  ___m_cooldownDurationDefault;

/// [SerializeField]
/// @brief Field m_cooldownDurationUpgrade, offset: 0xe8, size: 0x4, def value: None
 float_t  ___m_cooldownDurationUpgrade;

/// [SerializeField]
/// @brief Field m_airGrabXform, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_airGrabXform;

/// @brief Field _isActivated, offset: 0xf8, size: 0x1, def value: None
 bool  ____isActivated;

/// @brief Field _wasActivated, offset: 0xf9, size: 0x1, def value: None
 bool  ____wasActivated;

/// @brief Field _airGrabTime, offset: 0xfc, size: 0x4, def value: None
 float_t  ____airGrabTime;

/// @brief Field _airReleaseSpeed, offset: 0x100, size: 0x4, def value: None
 float_t  ____airReleaseSpeed;

/// @brief Field _airReleaseVector, offset: 0x104, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____airReleaseVector;

/// @brief Field _attachedVRRig, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____attachedVRRig;

/// @brief Field _attachedHandState, offset: 0x118, size: 0x120, def value: None
 ::GlobalNamespace::GTPlayer_HandState  ____attachedHandState;

/// @brief Field _lastAttachedPlayerActorNr, offset: 0x238, size: 0x4, def value: None
 int32_t  ____lastAttachedPlayerActorNr;

/// @brief Field _attachedPlayerActorNr, offset: 0x23c, size: 0x4, def value: None
 int32_t  ____attachedPlayerActorNr;

/// @brief Field _isTagged, offset: 0x240, size: 0x1, def value: None
 bool  ____isTagged;

/// @brief Field _state, offset: 0x244, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetSlipMitt_EState  ____state;

/// @brief Field _raycastHitResults, offset: 0x248, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____raycastHitResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_snappable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_yoyoDefaultPosXform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_buttonActivatable) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_inputActivateThreshold) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_inputDeactivateThreshold) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_yoyoRenderer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_audioSource) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_clips) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_clipVolumes) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_yankMinSpeed) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_yankMaxSpeed) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_minDashSpeed) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____maxDashSpeed) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_maxDashSpeedDefault) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_maxDashSpeedUpgraded) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_speedMappingCurve) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_slipperySurfacesTime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_maxInfluenceAngleDefault) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_maxInfluenceAngleUpgrade) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_cooldownDurationDefault) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_cooldownDurationUpgrade) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ___m_airGrabXform) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____isActivated) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____wasActivated) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____airGrabTime) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____airReleaseSpeed) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____airReleaseVector) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____attachedVRRig) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____attachedHandState) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____lastAttachedPlayerActorNr) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____attachedPlayerActorNr) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____isTagged) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____state) == 0x244, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetSlipMitt, ____raycastHitResults) == 0x248, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetSlipMitt) == 0x250, "Size mismatch!");

} // namespace end def GlobalNamespace
