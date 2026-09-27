#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetLaserZipline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ResettableUseCounter_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetLaserZipline)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class ICallBack;
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
namespace UnityEngine {
class AudioClip;
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetLaserZipline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetLaserZipline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetLaserZipline*, "", "SIGadgetLaserZipline");
// Dependencies ResettableUseCounter, SIGadget, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetLaserZipline
class CORDL_TYPE SIGadgetLaserZipline : public ::GlobalNamespace::SIGadget {
public:
// Declarations
/// @brief Field _speedBoost, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__speedBoost, put=__cordl_internal_set__speedBoost)) float_t  _speedBoost;

/// @brief Field activatedAtPoint, offset 0x10c, size 0xc 
 __declspec(property(get=__cordl_internal_get_activatedAtPoint, put=__cordl_internal_set_activatedAtPoint)) ::UnityEngine::Vector3  activatedAtPoint;

/// @brief Field activatedAtRotation, offset 0xfc, size 0x10 
 __declspec(property(get=__cordl_internal_get_activatedAtRotation, put=__cordl_internal_set_activatedAtRotation)) ::UnityEngine::Quaternion  activatedAtRotation;

/// @brief Field activeCallbackOnRig, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCallbackOnRig, put=__cordl_internal_set_activeCallbackOnRig)) ::UnityW<::GlobalNamespace::VRRig>  activeCallbackOnRig;

/// @brief Field audioRecharged, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioRecharged, put=__cordl_internal_set_audioRecharged)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  audioRecharged;

/// @brief Field audioReusable, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioReusable, put=__cordl_internal_set_audioReusable)) ::UnityW<::UnityEngine::AudioClip>  audioReusable;

/// @brief Field audioSingleUse, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSingleUse, put=__cordl_internal_set_audioSingleUse)) ::UnityW<::UnityEngine::AudioClip>  audioSingleUse;

/// @brief Field audioUsedUp, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioUsedUp, put=__cordl_internal_set_audioUsedUp)) ::UnityW<::UnityEngine::AudioClip>  audioUsedUp;

/// @brief Field cooldownDuration, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownDuration, put=__cordl_internal_set_cooldownDuration)) float_t  cooldownDuration;

/// @brief Field cooldownOnUseUntilTouchGround, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_cooldownOnUseUntilTouchGround, put=__cordl_internal_set_cooldownOnUseUntilTouchGround)) bool  cooldownOnUseUntilTouchGround;

/// @brief Field coolingDownUntilTimestamp, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_coolingDownUntilTimestamp, put=__cordl_internal_set_coolingDownUntilTimestamp)) float_t  coolingDownUntilTimestamp;

/// @brief Field groundedCooldown, offset 0x128, size 0x18 
 __declspec(property(get=__cordl_internal_get_groundedCooldown, put=__cordl_internal_set_groundedCooldown)) ::GlobalNamespace::ResettableUseCounter  groundedCooldown;

/// @brief Field hasActiveCallback, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasActiveCallback, put=__cordl_internal_set_hasActiveCallback)) bool  hasActiveCallback;

/// @brief Field isLineBroken, offset 0xfa, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLineBroken, put=__cordl_internal_set_isLineBroken)) bool  isLineBroken;

/// @brief Field isTriggerPressed, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTriggerPressed, put=__cordl_internal_set_isTriggerPressed)) bool  isTriggerPressed;

/// @brief Field laserBeam, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_laserBeam, put=__cordl_internal_set_laserBeam)) ::UnityW<::UnityEngine::GameObject>  laserBeam;

/// @brief Field laserBeamAudio, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_laserBeamAudio, put=__cordl_internal_set_laserBeamAudio)) ::UnityW<::UnityEngine::AudioSource>  laserBeamAudio;

/// @brief Field m_buttonActivatable, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_buttonActivatable, put=__cordl_internal_set_m_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  m_buttonActivatable;

/// @brief Field maxSuperchargeUses, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSuperchargeUses, put=__cordl_internal_set_maxSuperchargeUses)) int32_t  maxSuperchargeUses;

/// @brief Field onUseAudio, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUseAudio, put=__cordl_internal_set_onUseAudio)) ::UnityW<::UnityEngine::AudioSource>  onUseAudio;

/// @brief Field s_LocalPlayerAccumulatedPositionOffset, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_s_LocalPlayerAccumulatedPositionOffset, put=setStaticF_s_LocalPlayerAccumulatedPositionOffset)) ::UnityEngine::Vector3  s_LocalPlayerAccumulatedPositionOffset;

/// @brief Field s_LocalPlayerAccumulatedVelocity, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_s_LocalPlayerAccumulatedVelocity, put=setStaticF_s_LocalPlayerAccumulatedVelocity)) ::UnityEngine::Vector3  s_LocalPlayerAccumulatedVelocity;

/// @brief Field s_LocalPlayerAppliedPositionOffset, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_s_LocalPlayerAppliedPositionOffset, put=setStaticF_s_LocalPlayerAppliedPositionOffset)) ::UnityEngine::Vector3  s_LocalPlayerAppliedPositionOffset;

/// @brief Field s_LocalPlayerNumAccumulatedVelocities, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LocalPlayerNumAccumulatedVelocities, put=setStaticF_s_LocalPlayerNumAccumulatedVelocities)) int32_t  s_LocalPlayerNumAccumulatedVelocities;

/// @brief Field s_LocalPlayerPositionFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LocalPlayerPositionFrame, put=setStaticF_s_LocalPlayerPositionFrame)) int32_t  s_LocalPlayerPositionFrame;

/// @brief Field s_localPlayerVelocityFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_localPlayerVelocityFrame, put=setStaticF_s_localPlayerVelocityFrame)) int32_t  s_localPlayerVelocityFrame;

/// @brief Field speedBoostVelocityCap, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_speedBoostVelocityCap, put=__cordl_internal_set_speedBoostVelocityCap)) float_t  speedBoostVelocityCap;

/// @brief Field upgradedSpeedBoost, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_upgradedSpeedBoost, put=__cordl_internal_set_upgradedSpeedBoost)) float_t  upgradedSpeedBoost;

/// @brief Field wasSlidingUngrounded, offset 0xfb, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasSlidingUngrounded, put=__cordl_internal_set_wasSlidingUngrounded)) bool  wasSlidingUngrounded;

/// @brief Field wasTriggerPressed, offset 0xf9, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasTriggerPressed, put=__cordl_internal_set_wasTriggerPressed)) bool  wasTriggerPressed;

/// @brief Field zipline, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_zipline, put=__cordl_internal_set_zipline)) ::UnityW<::UnityEngine::Transform>  zipline;

/// @brief Field ziplineAnchorOffset, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_ziplineAnchorOffset, put=__cordl_internal_set_ziplineAnchorOffset)) ::UnityEngine::Vector3  ziplineAnchorOffset;

/// @brief Field ziplineDirection, offset 0x118, size 0xc 
 __declspec(property(get=__cordl_internal_get_ziplineDirection, put=__cordl_internal_set_ziplineDirection)) ::UnityEngine::Vector3  ziplineDirection;

/// @brief Convert operator to "::GlobalNamespace::ICallBack"
constexpr operator  ::GlobalNamespace::ICallBack*() noexcept;

/// @brief Method AccumulateAndApplyLocalPositionOffset, addr 0x58d8c34, size 0x168, virtual false, abstract: false, final false
static inline void AccumulateAndApplyLocalPositionOffset(::UnityEngine::Vector3  offset) ;

/// @brief Method AccumulateVelocity, addr 0x58d8770, size 0x1e0, virtual false, abstract: false, final false
static inline void AccumulateVelocity(::UnityEngine::Vector3  desiredVelocity) ;

/// @brief Method ApplyUpgradeNodes, addr 0x58dab48, size 0x48, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method Awake, addr 0x58d8d9c, size 0x3c4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CallBack, addr 0x58da728, size 0x420, virtual true, abstract: false, final true
inline void CallBack() ;

/// @brief Method ClearCallback, addr 0x58d9160, size 0x158, virtual false, abstract: false, final false
inline void ClearCallback() ;

/// @brief Method GetStateLong, addr 0x58da2dc, size 0xd8, virtual false, abstract: false, final false
inline int64_t GetStateLong() ;

static inline ::GlobalNamespace::SIGadgetLaserZipline* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58d92d8, size 0x2c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityStateChanged, addr 0x58da524, size 0x204, virtual false, abstract: false, final false
inline void OnEntityStateChanged(int64_t  oldState, int64_t  newState) ;

/// @brief Method OnGrabbed, addr 0x58d9304, size 0x4, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnKnockback, addr 0x58da4f0, size 0x34, virtual false, abstract: false, final false
inline void OnKnockback(::UnityEngine::Vector3  knockbackVector) ;

/// @brief Method OnReleased, addr 0x58d930c, size 0x30, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method OnSnapped, addr 0x58d9308, size 0x4, virtual false, abstract: false, final false
inline void OnSnapped() ;

/// @brief Method OnUnsnapped, addr 0x58d933c, size 0x30, virtual false, abstract: false, final false
inline void OnUnsnapped() ;

/// @brief Method OnUpdateAuthority, addr 0x58d936c, size 0xf70, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58da3dc, size 0x114, virtual true, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method ReapplyPositionOffset, addr 0x58d8b28, size 0x10c, virtual false, abstract: false, final false
static inline void ReapplyPositionOffset() ;

/// @brief Method ResetLocalAppliedPositionOffset, addr 0x58d8950, size 0x1d8, virtual false, abstract: false, final false
static inline void ResetLocalAppliedPositionOffset() ;

/// @brief Method ShowReady, addr 0x58d92b8, size 0x20, virtual false, abstract: false, final false
inline void ShowReady(bool  isReady) ;

/// @brief Method UpdateAudioPitch, addr 0x58da3b4, size 0x28, virtual false, abstract: false, final false
inline void UpdateAudioPitch(float_t  playerSpeed) ;

constexpr float_t const& __cordl_internal_get__speedBoost() const;

constexpr float_t& __cordl_internal_get__speedBoost() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_activatedAtPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_activatedAtPoint() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_activatedAtRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_activatedAtRotation() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_activeCallbackOnRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_activeCallbackOnRig() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_audioRecharged() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_audioRecharged() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioReusable() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioReusable() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioSingleUse() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioSingleUse() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioUsedUp() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioUsedUp() ;

constexpr float_t const& __cordl_internal_get_cooldownDuration() const;

constexpr float_t& __cordl_internal_get_cooldownDuration() ;

constexpr bool const& __cordl_internal_get_cooldownOnUseUntilTouchGround() const;

constexpr bool& __cordl_internal_get_cooldownOnUseUntilTouchGround() ;

constexpr float_t const& __cordl_internal_get_coolingDownUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_coolingDownUntilTimestamp() ;

constexpr ::GlobalNamespace::ResettableUseCounter const& __cordl_internal_get_groundedCooldown() const;

constexpr ::GlobalNamespace::ResettableUseCounter& __cordl_internal_get_groundedCooldown() ;

constexpr bool const& __cordl_internal_get_hasActiveCallback() const;

constexpr bool& __cordl_internal_get_hasActiveCallback() ;

constexpr bool const& __cordl_internal_get_isLineBroken() const;

constexpr bool& __cordl_internal_get_isLineBroken() ;

constexpr bool const& __cordl_internal_get_isTriggerPressed() const;

constexpr bool& __cordl_internal_get_isTriggerPressed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_laserBeam() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_laserBeam() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_laserBeamAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_laserBeamAudio() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_m_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_m_buttonActivatable() ;

constexpr int32_t const& __cordl_internal_get_maxSuperchargeUses() const;

constexpr int32_t& __cordl_internal_get_maxSuperchargeUses() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_onUseAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_onUseAudio() ;

constexpr float_t const& __cordl_internal_get_speedBoostVelocityCap() const;

constexpr float_t& __cordl_internal_get_speedBoostVelocityCap() ;

constexpr float_t const& __cordl_internal_get_upgradedSpeedBoost() const;

constexpr float_t& __cordl_internal_get_upgradedSpeedBoost() ;

constexpr bool const& __cordl_internal_get_wasSlidingUngrounded() const;

constexpr bool& __cordl_internal_get_wasSlidingUngrounded() ;

constexpr bool const& __cordl_internal_get_wasTriggerPressed() const;

constexpr bool& __cordl_internal_get_wasTriggerPressed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_zipline() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_zipline() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ziplineAnchorOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ziplineAnchorOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ziplineDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ziplineDirection() ;

constexpr void __cordl_internal_set__speedBoost(float_t  value) ;

constexpr void __cordl_internal_set_activatedAtPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_activatedAtRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_activeCallbackOnRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_audioRecharged(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_audioReusable(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_audioSingleUse(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_audioUsedUp(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_cooldownDuration(float_t  value) ;

constexpr void __cordl_internal_set_cooldownOnUseUntilTouchGround(bool  value) ;

constexpr void __cordl_internal_set_coolingDownUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_groundedCooldown(::GlobalNamespace::ResettableUseCounter  value) ;

constexpr void __cordl_internal_set_hasActiveCallback(bool  value) ;

constexpr void __cordl_internal_set_isLineBroken(bool  value) ;

constexpr void __cordl_internal_set_isTriggerPressed(bool  value) ;

constexpr void __cordl_internal_set_laserBeam(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_laserBeamAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_maxSuperchargeUses(int32_t  value) ;

constexpr void __cordl_internal_set_onUseAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_speedBoostVelocityCap(float_t  value) ;

constexpr void __cordl_internal_set_upgradedSpeedBoost(float_t  value) ;

constexpr void __cordl_internal_set_wasSlidingUngrounded(bool  value) ;

constexpr void __cordl_internal_set_wasTriggerPressed(bool  value) ;

constexpr void __cordl_internal_set_zipline(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ziplineAnchorOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ziplineDirection(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x58dab90, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF_s_LocalPlayerAccumulatedPositionOffset() ;

static inline ::UnityEngine::Vector3 getStaticF_s_LocalPlayerAccumulatedVelocity() ;

static inline ::UnityEngine::Vector3 getStaticF_s_LocalPlayerAppliedPositionOffset() ;

static inline int32_t getStaticF_s_LocalPlayerNumAccumulatedVelocities() ;

static inline int32_t getStaticF_s_LocalPlayerPositionFrame() ;

static inline int32_t getStaticF_s_localPlayerVelocityFrame() ;

/// @brief Convert to "::GlobalNamespace::ICallBack"
constexpr ::GlobalNamespace::ICallBack* i___GlobalNamespace__ICallBack() noexcept;

static inline void setStaticF_s_LocalPlayerAccumulatedPositionOffset(::UnityEngine::Vector3  value) ;

static inline void setStaticF_s_LocalPlayerAccumulatedVelocity(::UnityEngine::Vector3  value) ;

static inline void setStaticF_s_LocalPlayerAppliedPositionOffset(::UnityEngine::Vector3  value) ;

static inline void setStaticF_s_LocalPlayerNumAccumulatedVelocities(int32_t  value) ;

static inline void setStaticF_s_LocalPlayerPositionFrame(int32_t  value) ;

static inline void setStaticF_s_localPlayerVelocityFrame(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetLaserZipline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetLaserZipline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetLaserZipline(SIGadgetLaserZipline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetLaserZipline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetLaserZipline(SIGadgetLaserZipline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{243};

/// [SerializeField]
/// @brief Field m_buttonActivatable, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___m_buttonActivatable;

/// [SerializeField]
/// @brief Field zipline, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___zipline;

/// [SerializeField]
/// @brief Field ziplineAnchorOffset, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ziplineAnchorOffset;

/// [SerializeField]
/// @brief Field laserBeam, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___laserBeam;

/// [SerializeField]
/// @brief Field laserBeamAudio, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___laserBeamAudio;

/// [SerializeField]
/// @brief Field onUseAudio, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___onUseAudio;

/// [SerializeField]
/// @brief Field cooldownDuration, offset: 0xb0, size: 0x4, def value: None
 float_t  ___cooldownDuration;

/// [SerializeField]
/// @brief Field cooldownOnUseUntilTouchGround, offset: 0xb4, size: 0x1, def value: None
 bool  ___cooldownOnUseUntilTouchGround;

/// [SerializeField]
/// @brief Field maxSuperchargeUses, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___maxSuperchargeUses;

/// [SerializeField]
/// @brief Field audioSingleUse, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioSingleUse;

/// [SerializeField]
/// @brief Field audioReusable, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioReusable;

/// [SerializeField]
/// @brief Field audioUsedUp, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioUsedUp;

/// [SerializeField]
/// @brief Field audioRecharged, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___audioRecharged;

/// [Header("Upgrades")]
/// [SerializeField]
/// @brief Field upgradedSpeedBoost, offset: 0xe0, size: 0x4, def value: None
 float_t  ___upgradedSpeedBoost;

/// [SerializeField]
/// @brief Field speedBoostVelocityCap, offset: 0xe4, size: 0x4, def value: None
 float_t  ___speedBoostVelocityCap;

/// @brief Field hasActiveCallback, offset: 0xe8, size: 0x1, def value: None
 bool  ___hasActiveCallback;

/// @brief Field activeCallbackOnRig, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___activeCallbackOnRig;

/// @brief Field isTriggerPressed, offset: 0xf8, size: 0x1, def value: None
 bool  ___isTriggerPressed;

/// @brief Field wasTriggerPressed, offset: 0xf9, size: 0x1, def value: None
 bool  ___wasTriggerPressed;

/// @brief Field isLineBroken, offset: 0xfa, size: 0x1, def value: None
 bool  ___isLineBroken;

/// @brief Field wasSlidingUngrounded, offset: 0xfb, size: 0x1, def value: None
 bool  ___wasSlidingUngrounded;

/// @brief Field activatedAtRotation, offset: 0xfc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___activatedAtRotation;

/// @brief Field activatedAtPoint, offset: 0x10c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___activatedAtPoint;

/// @brief Field ziplineDirection, offset: 0x118, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ziplineDirection;

/// @brief Field coolingDownUntilTimestamp, offset: 0x124, size: 0x4, def value: None
 float_t  ___coolingDownUntilTimestamp;

/// @brief Field groundedCooldown, offset: 0x128, size: 0x18, def value: None
 ::GlobalNamespace::ResettableUseCounter  ___groundedCooldown;

/// @brief Field _speedBoost, offset: 0x140, size: 0x4, def value: None
 float_t  ____speedBoost;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___m_buttonActivatable) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___zipline) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___ziplineAnchorOffset) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___laserBeam) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___laserBeamAudio) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___onUseAudio) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___cooldownDuration) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___cooldownOnUseUntilTouchGround) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___maxSuperchargeUses) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___audioSingleUse) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___audioReusable) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___audioUsedUp) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___audioRecharged) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___upgradedSpeedBoost) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___speedBoostVelocityCap) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___hasActiveCallback) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___activeCallbackOnRig) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___isTriggerPressed) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___wasTriggerPressed) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___isLineBroken) == 0xfa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___wasSlidingUngrounded) == 0xfb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___activatedAtRotation) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___activatedAtPoint) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___ziplineDirection) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___coolingDownUntilTimestamp) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ___groundedCooldown) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetLaserZipline, ____speedBoost) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetLaserZipline) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
