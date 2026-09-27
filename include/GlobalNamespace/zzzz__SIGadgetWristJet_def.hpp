#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetWristJet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTRendererMatSlot_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWristJet_State_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWristJet_WristJetType_def.hpp"
#include "GlobalNamespace/zzzz__SIGadget_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeBasedGeneric_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SIGadgetWristJet)
namespace GlobalNamespace {
class GameButtonActivatable;
}
namespace GlobalNamespace {
class IEnergyGadget;
}
namespace GlobalNamespace {
class I_SIDisruptable;
}
namespace GlobalNamespace {
struct SIGadgetWristJet_State;
}
namespace GlobalNamespace {
struct SIGadgetWristJet_WristJetType;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace GorillaLocomotion {
class GTPlayer;
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
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetWristJet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetWristJet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetWristJet*, "", "SIGadgetWristJet");
// [RequireComponent(typeof(GameGrabbable))]
// [RequireComponent(typeof(GameSnappable))]
// [RequireComponent(typeof(GameButtonActivatable))]
// Dependencies GTRendererMatSlot, SIGadget, SIGadgetWristJet::State, SIGadgetWristJet::WristJetType, SIUpgradeBasedGeneric`1<T>, UnityEngine.Quaternion, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetWristJet
class CORDL_TYPE SIGadgetWristJet : public ::GlobalNamespace::SIGadget {
public:
// Declarations
using State = ::GlobalNamespace::SIGadgetWristJet_State;

using WristJetType = ::GlobalNamespace::SIGadgetWristJet_WristJetType;

 __declspec(property(get=get_CanRecharge)) bool  CanRecharge;

 __declspec(property(get=get_IsFull)) bool  IsFull;

 __declspec(property(get=get_UsesEnergy)) bool  UsesEnergy;

/// @brief Field _baseFuelSpendRate, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseFuelSpendRate, put=__cordl_internal_set__baseFuelSpendRate)) float_t  _baseFuelSpendRate;

/// @brief Field _baseJetForce, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseJetForce, put=__cordl_internal_set__baseJetForce)) float_t  _baseJetForce;

/// @brief Field _baseMaxHorizontalSpeed, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseMaxHorizontalSpeed, put=__cordl_internal_set__baseMaxHorizontalSpeed)) float_t  _baseMaxHorizontalSpeed;

/// @brief Field _baseMaxVerticalSpeed, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get__baseMaxVerticalSpeed, put=__cordl_internal_set__baseMaxVerticalSpeed)) float_t  _baseMaxVerticalSpeed;

/// @brief Field _currentBurnRate, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentBurnRate, put=__cordl_internal_set__currentBurnRate)) float_t  _currentBurnRate;

/// @brief Field _floorTouched, offset 0x154, size 0x1 
 __declspec(property(get=__cordl_internal_get__floorTouched, put=__cordl_internal_set__floorTouched)) bool  _floorTouched;

/// @brief Field _gaugeMatPropBlock, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__gaugeMatPropBlock, put=__cordl_internal_set__gaugeMatPropBlock)) ::UnityEngine::MaterialPropertyBlock*  _gaugeMatPropBlock;

/// @brief Field _hasActiveStateVisual, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasActiveStateVisual, put=__cordl_internal_set__hasActiveStateVisual)) bool  _hasActiveStateVisual;

/// @brief Field _hasInactiveStateVisual, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasInactiveStateVisual, put=__cordl_internal_set__hasInactiveStateVisual)) bool  _hasInactiveStateVisual;

/// @brief Field _hasThrustLoopAudioSource, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasThrustLoopAudioSource, put=__cordl_internal_set__hasThrustLoopAudioSource)) bool  _hasThrustLoopAudioSource;

/// @brief Field _maxSqrHorizontalSpeed, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSqrHorizontalSpeed, put=__cordl_internal_set__maxSqrHorizontalSpeed)) float_t  _maxSqrHorizontalSpeed;

/// @brief Field _throttle, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get__throttle, put=__cordl_internal_set__throttle)) float_t  _throttle;

/// @brief Field _throttleControl, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get__throttleControl, put=__cordl_internal_set__throttleControl)) bool  _throttleControl;

/// @brief Field _warnFuelLowSoundWasPlayed, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__warnFuelLowSoundWasPlayed, put=__cordl_internal_set__warnFuelLowSoundWasPlayed)) bool  _warnFuelLowSoundWasPlayed;

/// @brief Field activeStateVisual, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeStateVisual, put=__cordl_internal_set_activeStateVisual)) ::UnityW<::UnityEngine::GameObject>  activeStateVisual;

/// @brief Field buttonActivatable, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonActivatable, put=__cordl_internal_set_buttonActivatable)) ::UnityW<::GlobalNamespace::GameButtonActivatable>  buttonActivatable;

/// @brief Field currentFuel, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFuel, put=__cordl_internal_set_currentFuel)) float_t  currentFuel;

/// @brief Field emptiedCooldown, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_emptiedCooldown, put=__cordl_internal_set_emptiedCooldown)) float_t  emptiedCooldown;

/// @brief Field emptiedCooldownResetProgress, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_emptiedCooldownResetProgress, put=__cordl_internal_set_emptiedCooldownResetProgress)) float_t  emptiedCooldownResetProgress;

/// @brief Field fuelGainRate, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_fuelGainRate, put=__cordl_internal_set_fuelGainRate)) float_t  fuelGainRate;

/// @brief Field fuelSize, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_fuelSize, put=__cordl_internal_set_fuelSize)) float_t  fuelSize;

/// @brief Field fuelSpendRate, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_fuelSpendRate, put=__cordl_internal_set_fuelSpendRate)) float_t  fuelSpendRate;

/// @brief Field gravityNegationPercent, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityNegationPercent, put=__cordl_internal_set_gravityNegationPercent)) float_t  gravityNegationPercent;

/// @brief Field gtPlayer, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_gtPlayer, put=__cordl_internal_set_gtPlayer)) ::UnityW<::GorillaLocomotion::GTPlayer>  gtPlayer;

/// @brief Field inactiveStateVisual, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_inactiveStateVisual, put=__cordl_internal_set_inactiveStateVisual)) ::UnityW<::UnityEngine::GameObject>  inactiveStateVisual;

/// @brief Field jetForce, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_jetForce, put=__cordl_internal_set_jetForce)) float_t  jetForce;

/// @brief Field jetType, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_jetType, put=__cordl_internal_set_jetType)) ::GlobalNamespace::SIGadgetWristJet_WristJetType  jetType;

/// @brief Field m_gaugeMatSlots, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_gaugeMatSlots, put=__cordl_internal_set_m_gaugeMatSlots)) ::ArrayW<::GlobalNamespace::GTRendererMatSlot>  m_gaugeMatSlots;

/// @brief Field m_throttleFlapMaxRotOffset, offset 0x128, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_throttleFlapMaxRotOffset, put=__cordl_internal_set_m_throttleFlapMaxRotOffset)) ::UnityEngine::Quaternion  m_throttleFlapMaxRotOffset;

/// @brief Field m_throttleFlapXforms, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_throttleFlapXforms, put=__cordl_internal_set_m_throttleFlapXforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  m_throttleFlapXforms;

/// @brief Field m_thrustLoopAudioFadeInTime, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_thrustLoopAudioFadeInTime, put=__cordl_internal_set_m_thrustLoopAudioFadeInTime)) float_t  m_thrustLoopAudioFadeInTime;

/// @brief Field m_thrustLoopAudioFadeOutTime, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_thrustLoopAudioFadeOutTime, put=__cordl_internal_set_m_thrustLoopAudioFadeOutTime)) float_t  m_thrustLoopAudioFadeOutTime;

/// @brief Field m_thrustLoopAudioSource, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_thrustLoopAudioSource, put=__cordl_internal_set_m_thrustLoopAudioSource)) ::UnityW<::UnityEngine::AudioSource>  m_thrustLoopAudioSource;

/// @brief Field m_thrustLoopSoundByUpgrade, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_thrustLoopSoundByUpgrade, put=__cordl_internal_set_m_thrustLoopSoundByUpgrade)) ::GlobalNamespace::SIUpgradeBasedGeneric_1<::UnityW<::UnityEngine::AudioClip>>  m_thrustLoopSoundByUpgrade;

/// @brief Field m_thrustLoopSoundVolume, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_thrustLoopSoundVolume, put=__cordl_internal_set_m_thrustLoopSoundVolume)) float_t  m_thrustLoopSoundVolume;

/// @brief Field m_warnFuelLowSound, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_warnFuelLowSound, put=__cordl_internal_set_m_warnFuelLowSound)) ::UnityW<::UnityEngine::AudioClip>  m_warnFuelLowSound;

/// @brief Field m_warnFuelLowSoundVolume, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_warnFuelLowSoundVolume, put=__cordl_internal_set_m_warnFuelLowSoundVolume)) float_t  m_warnFuelLowSoundVolume;

/// @brief Field m_warnFuelLowThreshold, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_warnFuelLowThreshold, put=__cordl_internal_set_m_warnFuelLowThreshold)) float_t  m_warnFuelLowThreshold;

/// @brief Field maxHorizontalSpeed, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHorizontalSpeed, put=__cordl_internal_set_maxHorizontalSpeed)) float_t  maxHorizontalSpeed;

/// @brief Field maxVerticalSpeed, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVerticalSpeed, put=__cordl_internal_set_maxVerticalSpeed)) float_t  maxVerticalSpeed;

/// @brief Field minimumBurnRate, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumBurnRate, put=__cordl_internal_set_minimumBurnRate)) float_t  minimumBurnRate;

/// @brief Field rechargeRequiresFloorTouch, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_rechargeRequiresFloorTouch, put=__cordl_internal_set_rechargeRequiresFloorTouch)) bool  rechargeRequiresFloorTouch;

/// @brief Field state, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::SIGadgetWristJet_State  state;

/// @brief Field throttleChangeSpeed, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_throttleChangeSpeed, put=__cordl_internal_set_throttleChangeSpeed)) float_t  throttleChangeSpeed;

/// @brief Field throttleFlapInitialRots, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_throttleFlapInitialRots, put=__cordl_internal_set_throttleFlapInitialRots)) ::ArrayW<::UnityEngine::Quaternion>  throttleFlapInitialRots;

/// @brief Convert operator to "::GlobalNamespace::IEnergyGadget"
constexpr operator  ::GlobalNamespace::IEnergyGadget*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::I_SIDisruptable"
constexpr operator  ::GlobalNamespace::I_SIDisruptable*() noexcept;

/// @brief Method ApplyUpgradeNodes, addr 0x59d5c70, size 0x140, virtual true, abstract: false, final false
inline void ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades) ;

/// @brief Method Awake, addr 0x59d4b30, size 0x564, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Disrupt, addr 0x59d5de0, size 0x10, virtual true, abstract: false, final true
inline void Disrupt(float_t  disruptTime) ;

/// @brief Method FixedUpdate, addr 0x59d53fc, size 0x130, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method HandleStopInteraction, addr 0x59d56d0, size 0x38, virtual false, abstract: false, final false
inline void HandleStopInteraction() ;

static inline ::GlobalNamespace::SIGadgetWristJet* New_ctor() ;

/// @brief Method OnDisable, addr 0x59d52e8, size 0x48, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59d52ac, size 0x3c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityInit, addr 0x59d5df0, size 0x64, virtual true, abstract: false, final false
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChanged, addr 0x59d5bb4, size 0x14, virtual false, abstract: false, final false
inline void OnEntityStateChanged(int64_t  oldState, int64_t  newState) ;

/// @brief Method OnUpdateAuthority, addr 0x59d5740, size 0x348, virtual true, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method SetState, addr 0x59d5bc8, size 0xa8, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::SIGadgetWristJet_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x59d5708, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::SIGadgetWristJet_State  newState) ;

/// @brief Method Start, addr 0x59d5094, size 0x218, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x59d5330, size 0xcc, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateRecharge, addr 0x59d5e70, size 0x4c, virtual true, abstract: false, final true
inline void UpdateRecharge(float_t  dt) ;

/// @brief Method UpdateThrottleIndicator, addr 0x59d5a88, size 0x12c, virtual false, abstract: false, final false
inline void UpdateThrottleIndicator() ;

/// @brief Method _ApplyClampedThrust, addr 0x59d552c, size 0x1a4, virtual false, abstract: false, final false
inline void _ApplyClampedThrust() ;

constexpr float_t const& __cordl_internal_get__baseFuelSpendRate() const;

constexpr float_t& __cordl_internal_get__baseFuelSpendRate() ;

constexpr float_t const& __cordl_internal_get__baseJetForce() const;

constexpr float_t& __cordl_internal_get__baseJetForce() ;

constexpr float_t const& __cordl_internal_get__baseMaxHorizontalSpeed() const;

constexpr float_t& __cordl_internal_get__baseMaxHorizontalSpeed() ;

constexpr float_t const& __cordl_internal_get__baseMaxVerticalSpeed() const;

constexpr float_t& __cordl_internal_get__baseMaxVerticalSpeed() ;

constexpr float_t const& __cordl_internal_get__currentBurnRate() const;

constexpr float_t& __cordl_internal_get__currentBurnRate() ;

constexpr bool const& __cordl_internal_get__floorTouched() const;

constexpr bool& __cordl_internal_get__floorTouched() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__gaugeMatPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__gaugeMatPropBlock() ;

constexpr bool const& __cordl_internal_get__hasActiveStateVisual() const;

constexpr bool& __cordl_internal_get__hasActiveStateVisual() ;

constexpr bool const& __cordl_internal_get__hasInactiveStateVisual() const;

constexpr bool& __cordl_internal_get__hasInactiveStateVisual() ;

constexpr bool const& __cordl_internal_get__hasThrustLoopAudioSource() const;

constexpr bool& __cordl_internal_get__hasThrustLoopAudioSource() ;

constexpr float_t const& __cordl_internal_get__maxSqrHorizontalSpeed() const;

constexpr float_t& __cordl_internal_get__maxSqrHorizontalSpeed() ;

constexpr float_t const& __cordl_internal_get__throttle() const;

constexpr float_t& __cordl_internal_get__throttle() ;

constexpr bool const& __cordl_internal_get__throttleControl() const;

constexpr bool& __cordl_internal_get__throttleControl() ;

constexpr bool const& __cordl_internal_get__warnFuelLowSoundWasPlayed() const;

constexpr bool& __cordl_internal_get__warnFuelLowSoundWasPlayed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeStateVisual() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeStateVisual() ;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable> const& __cordl_internal_get_buttonActivatable() const;

constexpr ::UnityW<::GlobalNamespace::GameButtonActivatable>& __cordl_internal_get_buttonActivatable() ;

constexpr float_t const& __cordl_internal_get_currentFuel() const;

constexpr float_t& __cordl_internal_get_currentFuel() ;

constexpr float_t const& __cordl_internal_get_emptiedCooldown() const;

constexpr float_t& __cordl_internal_get_emptiedCooldown() ;

constexpr float_t const& __cordl_internal_get_emptiedCooldownResetProgress() const;

constexpr float_t& __cordl_internal_get_emptiedCooldownResetProgress() ;

constexpr float_t const& __cordl_internal_get_fuelGainRate() const;

constexpr float_t& __cordl_internal_get_fuelGainRate() ;

constexpr float_t const& __cordl_internal_get_fuelSize() const;

constexpr float_t& __cordl_internal_get_fuelSize() ;

constexpr float_t const& __cordl_internal_get_fuelSpendRate() const;

constexpr float_t& __cordl_internal_get_fuelSpendRate() ;

constexpr float_t const& __cordl_internal_get_gravityNegationPercent() const;

constexpr float_t& __cordl_internal_get_gravityNegationPercent() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_gtPlayer() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_gtPlayer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_inactiveStateVisual() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_inactiveStateVisual() ;

constexpr float_t const& __cordl_internal_get_jetForce() const;

constexpr float_t& __cordl_internal_get_jetForce() ;

constexpr ::GlobalNamespace::SIGadgetWristJet_WristJetType const& __cordl_internal_get_jetType() const;

constexpr ::GlobalNamespace::SIGadgetWristJet_WristJetType& __cordl_internal_get_jetType() ;

constexpr ::ArrayW<::GlobalNamespace::GTRendererMatSlot> const& __cordl_internal_get_m_gaugeMatSlots() const;

constexpr ::ArrayW<::GlobalNamespace::GTRendererMatSlot>& __cordl_internal_get_m_gaugeMatSlots() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_throttleFlapMaxRotOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_throttleFlapMaxRotOffset() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_m_throttleFlapXforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_m_throttleFlapXforms() ;

constexpr float_t const& __cordl_internal_get_m_thrustLoopAudioFadeInTime() const;

constexpr float_t& __cordl_internal_get_m_thrustLoopAudioFadeInTime() ;

constexpr float_t const& __cordl_internal_get_m_thrustLoopAudioFadeOutTime() const;

constexpr float_t& __cordl_internal_get_m_thrustLoopAudioFadeOutTime() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_thrustLoopAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_thrustLoopAudioSource() ;

constexpr ::GlobalNamespace::SIUpgradeBasedGeneric_1<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_m_thrustLoopSoundByUpgrade() const;

constexpr ::GlobalNamespace::SIUpgradeBasedGeneric_1<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_m_thrustLoopSoundByUpgrade() ;

constexpr float_t const& __cordl_internal_get_m_thrustLoopSoundVolume() const;

constexpr float_t& __cordl_internal_get_m_thrustLoopSoundVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_warnFuelLowSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_warnFuelLowSound() ;

constexpr float_t const& __cordl_internal_get_m_warnFuelLowSoundVolume() const;

constexpr float_t& __cordl_internal_get_m_warnFuelLowSoundVolume() ;

constexpr float_t const& __cordl_internal_get_m_warnFuelLowThreshold() const;

constexpr float_t& __cordl_internal_get_m_warnFuelLowThreshold() ;

constexpr float_t const& __cordl_internal_get_maxHorizontalSpeed() const;

constexpr float_t& __cordl_internal_get_maxHorizontalSpeed() ;

constexpr float_t const& __cordl_internal_get_maxVerticalSpeed() const;

constexpr float_t& __cordl_internal_get_maxVerticalSpeed() ;

constexpr float_t const& __cordl_internal_get_minimumBurnRate() const;

constexpr float_t& __cordl_internal_get_minimumBurnRate() ;

constexpr bool const& __cordl_internal_get_rechargeRequiresFloorTouch() const;

constexpr bool& __cordl_internal_get_rechargeRequiresFloorTouch() ;

constexpr ::GlobalNamespace::SIGadgetWristJet_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::SIGadgetWristJet_State& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_throttleChangeSpeed() const;

constexpr float_t& __cordl_internal_get_throttleChangeSpeed() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get_throttleFlapInitialRots() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get_throttleFlapInitialRots() ;

constexpr void __cordl_internal_set__baseFuelSpendRate(float_t  value) ;

constexpr void __cordl_internal_set__baseJetForce(float_t  value) ;

constexpr void __cordl_internal_set__baseMaxHorizontalSpeed(float_t  value) ;

constexpr void __cordl_internal_set__baseMaxVerticalSpeed(float_t  value) ;

constexpr void __cordl_internal_set__currentBurnRate(float_t  value) ;

constexpr void __cordl_internal_set__floorTouched(bool  value) ;

constexpr void __cordl_internal_set__gaugeMatPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__hasActiveStateVisual(bool  value) ;

constexpr void __cordl_internal_set__hasInactiveStateVisual(bool  value) ;

constexpr void __cordl_internal_set__hasThrustLoopAudioSource(bool  value) ;

constexpr void __cordl_internal_set__maxSqrHorizontalSpeed(float_t  value) ;

constexpr void __cordl_internal_set__throttle(float_t  value) ;

constexpr void __cordl_internal_set__throttleControl(bool  value) ;

constexpr void __cordl_internal_set__warnFuelLowSoundWasPlayed(bool  value) ;

constexpr void __cordl_internal_set_activeStateVisual(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_buttonActivatable(::UnityW<::GlobalNamespace::GameButtonActivatable>  value) ;

constexpr void __cordl_internal_set_currentFuel(float_t  value) ;

constexpr void __cordl_internal_set_emptiedCooldown(float_t  value) ;

constexpr void __cordl_internal_set_emptiedCooldownResetProgress(float_t  value) ;

constexpr void __cordl_internal_set_fuelGainRate(float_t  value) ;

constexpr void __cordl_internal_set_fuelSize(float_t  value) ;

constexpr void __cordl_internal_set_fuelSpendRate(float_t  value) ;

constexpr void __cordl_internal_set_gravityNegationPercent(float_t  value) ;

constexpr void __cordl_internal_set_gtPlayer(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_inactiveStateVisual(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_jetForce(float_t  value) ;

constexpr void __cordl_internal_set_jetType(::GlobalNamespace::SIGadgetWristJet_WristJetType  value) ;

constexpr void __cordl_internal_set_m_gaugeMatSlots(::ArrayW<::GlobalNamespace::GTRendererMatSlot>  value) ;

constexpr void __cordl_internal_set_m_throttleFlapMaxRotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_throttleFlapXforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_m_thrustLoopAudioFadeInTime(float_t  value) ;

constexpr void __cordl_internal_set_m_thrustLoopAudioFadeOutTime(float_t  value) ;

constexpr void __cordl_internal_set_m_thrustLoopAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_thrustLoopSoundByUpgrade(::GlobalNamespace::SIUpgradeBasedGeneric_1<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_m_thrustLoopSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_m_warnFuelLowSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_warnFuelLowSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_m_warnFuelLowThreshold(float_t  value) ;

constexpr void __cordl_internal_set_maxHorizontalSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxVerticalSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minimumBurnRate(float_t  value) ;

constexpr void __cordl_internal_set_rechargeRequiresFloorTouch(bool  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::SIGadgetWristJet_State  value) ;

constexpr void __cordl_internal_set_throttleChangeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_throttleFlapInitialRots(::ArrayW<::UnityEngine::Quaternion>  value) ;

/// @brief Method .ctor, addr 0x59d5ebc, size 0xb8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanRecharge, addr 0x59d4b08, size 0x28, virtual false, abstract: false, final false
inline bool get_CanRecharge() ;

/// @brief Method get_IsFull, addr 0x59d5e5c, size 0x14, virtual true, abstract: false, final true
inline bool get_IsFull() ;

/// @brief Method get_UsesEnergy, addr 0x59d5e54, size 0x8, virtual true, abstract: false, final true
inline bool get_UsesEnergy() ;

/// @brief Convert to "::GlobalNamespace::IEnergyGadget"
constexpr ::GlobalNamespace::IEnergyGadget* i___GlobalNamespace__IEnergyGadget() noexcept;

/// @brief Convert to "::GlobalNamespace::I_SIDisruptable"
constexpr ::GlobalNamespace::I_SIDisruptable* i___GlobalNamespace__I_SIDisruptable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetWristJet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetWristJet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetWristJet(SIGadgetWristJet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetWristJet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetWristJet(SIGadgetWristJet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{283};

/// @brief Field kFUEL_CAPACITY offset 0xffffffff size 0x4
static constexpr float_t  kFUEL_CAPACITY{static_cast<float_t>(10.0f)};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[SIGadgetWristJet]  ERROR!!!  "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"[SIGadgetWristJet]  ERROR!!!  (beta only log)  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[SIGadgetWristJet]  "};

/// [SerializeField]
/// @brief Field m_thrustLoopAudioSource, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_thrustLoopAudioSource;

/// @brief Field _hasThrustLoopAudioSource, offset: 0x80, size: 0x1, def value: None
 bool  ____hasThrustLoopAudioSource;

/// [SerializeField]
/// @brief Field m_thrustLoopSoundByUpgrade, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::SIUpgradeBasedGeneric_1<::UnityW<::UnityEngine::AudioClip>>  ___m_thrustLoopSoundByUpgrade;

/// [SerializeField]
/// @brief Field m_thrustLoopAudioFadeInTime, offset: 0x90, size: 0x4, def value: None
 float_t  ___m_thrustLoopAudioFadeInTime;

/// [SerializeField]
/// @brief Field m_thrustLoopAudioFadeOutTime, offset: 0x94, size: 0x4, def value: None
 float_t  ___m_thrustLoopAudioFadeOutTime;

/// [SerializeField]
/// @brief Field m_thrustLoopSoundVolume, offset: 0x98, size: 0x4, def value: None
 float_t  ___m_thrustLoopSoundVolume;

/// [SerializeField]
/// @brief Field m_warnFuelLowSound, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_warnFuelLowSound;

/// [SerializeField]
/// @brief Field m_warnFuelLowThreshold, offset: 0xa8, size: 0x4, def value: None
 float_t  ___m_warnFuelLowThreshold;

/// [SerializeField]
/// @brief Field m_warnFuelLowSoundVolume, offset: 0xac, size: 0x4, def value: None
 float_t  ___m_warnFuelLowSoundVolume;

/// @brief Field _warnFuelLowSoundWasPlayed, offset: 0xb0, size: 0x1, def value: None
 bool  ____warnFuelLowSoundWasPlayed;

/// [Tooltip("This renderer\'s material will have the `_EmissionDissolveProgress` property changed to visually communicate current fuel amount.")]
/// [SerializeField]
/// @brief Field m_gaugeMatSlots, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTRendererMatSlot>  ___m_gaugeMatSlots;

/// @brief Field jetType, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetWristJet_WristJetType  ___jetType;

/// @brief Field buttonActivatable, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameButtonActivatable>  ___buttonActivatable;

/// @brief Field inactiveStateVisual, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___inactiveStateVisual;

/// @brief Field _hasInactiveStateVisual, offset: 0xd8, size: 0x1, def value: None
 bool  ____hasInactiveStateVisual;

/// [FormerlySerializedAs("jetFlame")]
/// @brief Field activeStateVisual, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___activeStateVisual;

/// @brief Field _hasActiveStateVisual, offset: 0xe8, size: 0x1, def value: None
 bool  ____hasActiveStateVisual;

/// @brief Field jetForce, offset: 0xec, size: 0x4, def value: None
 float_t  ___jetForce;

/// @brief Field fuelGainRate, offset: 0xf0, size: 0x4, def value: None
 float_t  ___fuelGainRate;

/// @brief Field fuelSpendRate, offset: 0xf4, size: 0x4, def value: None
 float_t  ___fuelSpendRate;

/// @brief Field emptiedCooldown, offset: 0xf8, size: 0x4, def value: None
 float_t  ___emptiedCooldown;

/// @brief Field gravityNegationPercent, offset: 0xfc, size: 0x4, def value: None
 float_t  ___gravityNegationPercent;

/// @brief Field maxVerticalSpeed, offset: 0x100, size: 0x4, def value: None
 float_t  ___maxVerticalSpeed;

/// @brief Field maxHorizontalSpeed, offset: 0x104, size: 0x4, def value: None
 float_t  ___maxHorizontalSpeed;

/// [SerializeField]
/// @brief Field rechargeRequiresFloorTouch, offset: 0x108, size: 0x1, def value: None
 bool  ___rechargeRequiresFloorTouch;

/// [SerializeField]
/// @brief Field throttleChangeSpeed, offset: 0x10c, size: 0x4, def value: None
 float_t  ___throttleChangeSpeed;

/// [SerializeField]
/// [Tooltip("Minimum proportion of thrust allowed with throttle control.")]
/// [Range(0, 1)]
/// @brief Field minimumBurnRate, offset: 0x110, size: 0x4, def value: None
 float_t  ___minimumBurnRate;

/// [SerializeField]
/// @brief Field m_throttleFlapXforms, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___m_throttleFlapXforms;

/// @brief Field throttleFlapInitialRots, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ___throttleFlapInitialRots;

/// [SerializeField]
/// @brief Field m_throttleFlapMaxRotOffset, offset: 0x128, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_throttleFlapMaxRotOffset;

/// @brief Field fuelSize, offset: 0x138, size: 0x4, def value: None
 float_t  ___fuelSize;

/// @brief Field currentFuel, offset: 0x13c, size: 0x4, def value: None
 float_t  ___currentFuel;

/// @brief Field state, offset: 0x140, size: 0x4, def value: None
 ::GlobalNamespace::SIGadgetWristJet_State  ___state;

/// @brief Field gtPlayer, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___gtPlayer;

/// @brief Field emptiedCooldownResetProgress, offset: 0x150, size: 0x4, def value: None
 float_t  ___emptiedCooldownResetProgress;

/// @brief Field _floorTouched, offset: 0x154, size: 0x1, def value: None
 bool  ____floorTouched;

/// @brief Field _maxSqrHorizontalSpeed, offset: 0x158, size: 0x4, def value: None
 float_t  ____maxSqrHorizontalSpeed;

/// @brief Field _gaugeMatPropBlock, offset: 0x160, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____gaugeMatPropBlock;

/// @brief Field _throttleControl, offset: 0x168, size: 0x1, def value: None
 bool  ____throttleControl;

/// @brief Field _throttle, offset: 0x16c, size: 0x4, def value: None
 float_t  ____throttle;

/// @brief Field _currentBurnRate, offset: 0x170, size: 0x4, def value: None
 float_t  ____currentBurnRate;

/// @brief Field _baseFuelSpendRate, offset: 0x174, size: 0x4, def value: None
 float_t  ____baseFuelSpendRate;

/// @brief Field _baseJetForce, offset: 0x178, size: 0x4, def value: None
 float_t  ____baseJetForce;

/// @brief Field _baseMaxVerticalSpeed, offset: 0x17c, size: 0x4, def value: None
 float_t  ____baseMaxVerticalSpeed;

/// @brief Field _baseMaxHorizontalSpeed, offset: 0x180, size: 0x4, def value: None
 float_t  ____baseMaxHorizontalSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_thrustLoopAudioSource) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____hasThrustLoopAudioSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_thrustLoopSoundByUpgrade) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_thrustLoopAudioFadeInTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_thrustLoopAudioFadeOutTime) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_thrustLoopSoundVolume) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_warnFuelLowSound) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_warnFuelLowThreshold) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_warnFuelLowSoundVolume) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____warnFuelLowSoundWasPlayed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_gaugeMatSlots) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___jetType) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___buttonActivatable) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___inactiveStateVisual) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____hasInactiveStateVisual) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___activeStateVisual) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____hasActiveStateVisual) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___jetForce) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___fuelGainRate) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___fuelSpendRate) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___emptiedCooldown) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___gravityNegationPercent) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___maxVerticalSpeed) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___maxHorizontalSpeed) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___rechargeRequiresFloorTouch) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___throttleChangeSpeed) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___minimumBurnRate) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_throttleFlapXforms) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___throttleFlapInitialRots) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___m_throttleFlapMaxRotOffset) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___fuelSize) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___currentFuel) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___state) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___gtPlayer) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ___emptiedCooldownResetProgress) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____floorTouched) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____maxSqrHorizontalSpeed) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____gaugeMatPropBlock) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____throttleControl) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____throttle) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____currentBurnRate) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____baseFuelSpendRate) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____baseJetForce) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____baseMaxVerticalSpeed) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetWristJet, ____baseMaxHorizontalSpeed) == 0x180, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetWristJet) == 0x188, "Size mismatch!");

} // namespace end def GlobalNamespace
