#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolCollector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolCollector_State_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolCollector)
namespace GlobalNamespace {
class AbilityHaptic;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
class GRCollectible;
}
namespace GlobalNamespace {
class GRCurrencyDepositor;
}
namespace GlobalNamespace {
struct GRToolCollector_State;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameEntityDebugComponent;
}
namespace GlobalNamespace {
class LightningDispatcher;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolCollector;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolCollector*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolCollector*, "", "GRToolCollector");
// Dependencies GRToolCollector::State, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolCollector
class CORDL_TYPE GRToolCollector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::GRToolCollector_State;

/// @brief Field activatedLocally, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get_activatedLocally, put=__cordl_internal_set_activatedLocally)) bool  activatedLocally;

/// @brief Field attributes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field chargeBeamSound, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_chargeBeamSound, put=__cordl_internal_set_chargeBeamSound)) ::UnityW<::UnityEngine::AudioClip>  chargeBeamSound;

/// @brief Field chargeBeamVolume, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeBeamVolume, put=__cordl_internal_set_chargeBeamVolume)) float_t  chargeBeamVolume;

/// @brief Field chargeDuration, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeDuration, put=__cordl_internal_set_chargeDuration)) float_t  chargeDuration;

/// @brief Field collectAudioSource, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectAudioSource, put=__cordl_internal_set_collectAudioSource)) ::UnityW<::UnityEngine::AudioSource>  collectAudioSource;

/// @brief Field collectDuration, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectDuration, put=__cordl_internal_set_collectDuration)) float_t  collectDuration;

/// @brief Field collectHaptic, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectHaptic, put=__cordl_internal_set_collectHaptic)) ::GlobalNamespace::AbilityHaptic*  collectHaptic;

/// @brief Field collectSound, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectSound, put=__cordl_internal_set_collectSound)) ::UnityW<::UnityEngine::AudioClip>  collectSound;

/// @brief Field collectSoundVolume, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectSoundVolume, put=__cordl_internal_set_collectSoundVolume)) float_t  collectSoundVolume;

/// @brief Field collectibleLayerMask, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectibleLayerMask, put=__cordl_internal_set_collectibleLayerMask)) ::UnityEngine::LayerMask  collectibleLayerMask;

/// @brief Field cooldownDuration, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownDuration, put=__cordl_internal_set_cooldownDuration)) float_t  cooldownDuration;

/// @brief Field energyDepositPerUse, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_energyDepositPerUse, put=__cordl_internal_set_energyDepositPerUse)) int32_t  energyDepositPerUse;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field grManager, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_grManager, put=__cordl_internal_set_grManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  grManager;

/// @brief Field lastRechargeTime, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastRechargeTime, put=__cordl_internal_set_lastRechargeTime)) double_t  lastRechargeTime;

/// @brief Field level3ChargeRadius, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_level3ChargeRadius, put=__cordl_internal_set_level3ChargeRadius)) float_t  level3ChargeRadius;

/// @brief Field lightningDispatcher, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightningDispatcher, put=__cordl_internal_set_lightningDispatcher)) ::UnityW<::GlobalNamespace::LightningDispatcher>  lightningDispatcher;

/// @brief Field passiveChargeParticleEffect, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_passiveChargeParticleEffect, put=__cordl_internal_set_passiveChargeParticleEffect)) ::UnityW<::UnityEngine::ParticleSystem>  passiveChargeParticleEffect;

/// @brief Field rechargeInterval, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_rechargeInterval, put=__cordl_internal_set_rechargeInterval)) float_t  rechargeInterval;

/// @brief Field rechargeRate, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_rechargeRate, put=__cordl_internal_set_rechargeRate)) float_t  rechargeRate;

/// @brief Field shootFrom, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_shootFrom, put=__cordl_internal_set_shootFrom)) ::UnityW<::UnityEngine::Transform>  shootFrom;

/// @brief Field state, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRToolCollector_State  state;

/// @brief Field stateTimeRemaining, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateTimeRemaining, put=__cordl_internal_set_stateTimeRemaining)) float_t  stateTimeRemaining;

/// @brief Field tempHitResults, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempHitResults, put=__cordl_internal_set_tempHitResults)) ::ArrayW<::UnityEngine::RaycastHit>  tempHitResults;

/// @brief Field tool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Field upgrade1VacuumParticleEffect, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade1VacuumParticleEffect, put=__cordl_internal_set_upgrade1VacuumParticleEffect)) ::UnityW<::UnityEngine::ParticleSystem>  upgrade1VacuumParticleEffect;

/// @brief Field upgrade1vacuumSound, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade1vacuumSound, put=__cordl_internal_set_upgrade1vacuumSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade1vacuumSound;

/// @brief Field upgrade2VacuumParticleEffect, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade2VacuumParticleEffect, put=__cordl_internal_set_upgrade2VacuumParticleEffect)) ::UnityW<::UnityEngine::ParticleSystem>  upgrade2VacuumParticleEffect;

/// @brief Field upgrade2vacuumSound, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade2vacuumSound, put=__cordl_internal_set_upgrade2vacuumSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade2vacuumSound;

/// @brief Field upgrade3VacuumParticleEffect, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade3VacuumParticleEffect, put=__cordl_internal_set_upgrade3VacuumParticleEffect)) ::UnityW<::UnityEngine::ParticleSystem>  upgrade3VacuumParticleEffect;

/// @brief Field upgrade3vacuumSound, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgrade3vacuumSound, put=__cordl_internal_set_upgrade3vacuumSound)) ::UnityW<::UnityEngine::AudioClip>  upgrade3vacuumSound;

/// @brief Field vacuumAudioSource, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_vacuumAudioSource, put=__cordl_internal_set_vacuumAudioSource)) ::UnityW<::UnityEngine::AudioSource>  vacuumAudioSource;

/// @brief Field vacuumParticleEffect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_vacuumParticleEffect, put=__cordl_internal_set_vacuumParticleEffect)) ::UnityW<::UnityEngine::ParticleSystem>  vacuumParticleEffect;

/// @brief Field vacuumSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_vacuumSound, put=__cordl_internal_set_vacuumSound)) ::UnityW<::UnityEngine::AudioClip>  vacuumSound;

/// @brief Field vacuumSoundVolume, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_vacuumSoundVolume, put=__cordl_internal_set_vacuumSoundVolume)) float_t  vacuumSoundVolume;

/// @brief Field waitingForButtonRelease, offset 0x115, size 0x1 
 __declspec(property(get=__cordl_internal_get_waitingForButtonRelease, put=__cordl_internal_set_waitingForButtonRelease)) bool  waitingForButtonRelease;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr operator  ::GlobalNamespace::IGameEntityDebugComponent*() noexcept;

/// @brief Method Awake, addr 0x58bb1b0, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetDebugTextLines, addr 0x58bc748, size 0x148, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method IsButtonHeld, addr 0x58bb760, size 0xd4, virtual false, abstract: false, final false
inline bool IsButtonHeld() ;

/// @brief Method IsHeldLocal, addr 0x58bb41c, size 0x78, virtual false, abstract: false, final false
inline bool IsHeldLocal() ;

static inline ::GlobalNamespace::GRToolCollector* New_ctor() ;

/// @brief Method OnEnable, addr 0x58bb1c0, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x58bb414, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58bb274, size 0xdc, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x58bb418, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnToolUpgraded, addr 0x58bb350, size 0xc4, virtual false, abstract: false, final false
inline void OnToolUpgraded(::GlobalNamespace::GRTool*  tool) ;

/// @brief Method OnUpdate, addr 0x58bb494, size 0x44, virtual false, abstract: false, final false
inline void OnUpdate(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x58bb4d8, size 0x210, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x58bb6e8, size 0x28, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PerformCollection, addr 0x58bc36c, size 0x90, virtual false, abstract: false, final false
inline void PerformCollection(::GlobalNamespace::GRCollectible*  collectible) ;

/// @brief Method PlayChargeEffect, addr 0x58bc624, size 0x124, virtual false, abstract: false, final false
inline void PlayChargeEffect(::GlobalNamespace::GRCurrencyDepositor*  targetDepositor) ;

/// @brief Method PlayChargeEffect, addr 0x58bc3fc, size 0x228, virtual false, abstract: false, final false
inline void PlayChargeEffect(::GlobalNamespace::GRTool*  targetTool) ;

/// @brief Method PlayVibration, addr 0x58bc254, size 0x118, virtual false, abstract: false, final false
inline void PlayVibration(float_t  strength, float_t  duration) ;

/// @brief Method SetState, addr 0x58bb1f0, size 0x84, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRToolCollector_State  newState) ;

/// @brief Method SetStateAuthority, addr 0x58bb834, size 0x38, virtual false, abstract: false, final false
inline void SetStateAuthority(::GlobalNamespace::GRToolCollector_State  newState) ;

/// @brief Method StartVacuum, addr 0x58bb86c, size 0x114, virtual false, abstract: false, final false
inline void StartVacuum() ;

/// @brief Method StopVacuum, addr 0x58bc210, size 0x44, virtual false, abstract: false, final false
inline void StopVacuum() ;

/// @brief Method TryCollect, addr 0x58bb980, size 0x890, virtual false, abstract: false, final false
inline void TryCollect() ;

/// @brief Method Update, addr 0x58bb710, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_activatedLocally() const;

constexpr bool& __cordl_internal_get_activatedLocally() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_chargeBeamSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_chargeBeamSound() ;

constexpr float_t const& __cordl_internal_get_chargeBeamVolume() const;

constexpr float_t& __cordl_internal_get_chargeBeamVolume() ;

constexpr float_t const& __cordl_internal_get_chargeDuration() const;

constexpr float_t& __cordl_internal_get_chargeDuration() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_collectAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_collectAudioSource() ;

constexpr float_t const& __cordl_internal_get_collectDuration() const;

constexpr float_t& __cordl_internal_get_collectDuration() ;

constexpr ::GlobalNamespace::AbilityHaptic* const& __cordl_internal_get_collectHaptic() const;

constexpr ::GlobalNamespace::AbilityHaptic*& __cordl_internal_get_collectHaptic() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_collectSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_collectSound() ;

constexpr float_t const& __cordl_internal_get_collectSoundVolume() const;

constexpr float_t& __cordl_internal_get_collectSoundVolume() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collectibleLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collectibleLayerMask() ;

constexpr float_t const& __cordl_internal_get_cooldownDuration() const;

constexpr float_t& __cordl_internal_get_cooldownDuration() ;

constexpr int32_t const& __cordl_internal_get_energyDepositPerUse() const;

constexpr int32_t& __cordl_internal_get_energyDepositPerUse() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_grManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_grManager() ;

constexpr double_t const& __cordl_internal_get_lastRechargeTime() const;

constexpr double_t& __cordl_internal_get_lastRechargeTime() ;

constexpr float_t const& __cordl_internal_get_level3ChargeRadius() const;

constexpr float_t& __cordl_internal_get_level3ChargeRadius() ;

constexpr ::UnityW<::GlobalNamespace::LightningDispatcher> const& __cordl_internal_get_lightningDispatcher() const;

constexpr ::UnityW<::GlobalNamespace::LightningDispatcher>& __cordl_internal_get_lightningDispatcher() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_passiveChargeParticleEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_passiveChargeParticleEffect() ;

constexpr float_t const& __cordl_internal_get_rechargeInterval() const;

constexpr float_t& __cordl_internal_get_rechargeInterval() ;

constexpr float_t const& __cordl_internal_get_rechargeRate() const;

constexpr float_t& __cordl_internal_get_rechargeRate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shootFrom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shootFrom() ;

constexpr ::GlobalNamespace::GRToolCollector_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRToolCollector_State& __cordl_internal_get_state() ;

constexpr float_t const& __cordl_internal_get_stateTimeRemaining() const;

constexpr float_t& __cordl_internal_get_stateTimeRemaining() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_tempHitResults() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_tempHitResults() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_upgrade1VacuumParticleEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_upgrade1VacuumParticleEffect() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade1vacuumSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade1vacuumSound() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_upgrade2VacuumParticleEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_upgrade2VacuumParticleEffect() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade2vacuumSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade2vacuumSound() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_upgrade3VacuumParticleEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_upgrade3VacuumParticleEffect() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_upgrade3vacuumSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_upgrade3vacuumSound() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_vacuumAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_vacuumAudioSource() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_vacuumParticleEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_vacuumParticleEffect() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_vacuumSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_vacuumSound() ;

constexpr float_t const& __cordl_internal_get_vacuumSoundVolume() const;

constexpr float_t& __cordl_internal_get_vacuumSoundVolume() ;

constexpr bool const& __cordl_internal_get_waitingForButtonRelease() const;

constexpr bool& __cordl_internal_get_waitingForButtonRelease() ;

constexpr void __cordl_internal_set_activatedLocally(bool  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_chargeBeamSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_chargeBeamVolume(float_t  value) ;

constexpr void __cordl_internal_set_chargeDuration(float_t  value) ;

constexpr void __cordl_internal_set_collectAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_collectDuration(float_t  value) ;

constexpr void __cordl_internal_set_collectHaptic(::GlobalNamespace::AbilityHaptic*  value) ;

constexpr void __cordl_internal_set_collectSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_collectSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_collectibleLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_cooldownDuration(float_t  value) ;

constexpr void __cordl_internal_set_energyDepositPerUse(int32_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_lastRechargeTime(double_t  value) ;

constexpr void __cordl_internal_set_level3ChargeRadius(float_t  value) ;

constexpr void __cordl_internal_set_lightningDispatcher(::UnityW<::GlobalNamespace::LightningDispatcher>  value) ;

constexpr void __cordl_internal_set_passiveChargeParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_rechargeInterval(float_t  value) ;

constexpr void __cordl_internal_set_rechargeRate(float_t  value) ;

constexpr void __cordl_internal_set_shootFrom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRToolCollector_State  value) ;

constexpr void __cordl_internal_set_stateTimeRemaining(float_t  value) ;

constexpr void __cordl_internal_set_tempHitResults(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

constexpr void __cordl_internal_set_upgrade1VacuumParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_upgrade1vacuumSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade2VacuumParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_upgrade2vacuumSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_upgrade3VacuumParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_upgrade3vacuumSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_vacuumAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_vacuumParticleEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_vacuumSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_vacuumSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_waitingForButtonRelease(bool  value) ;

/// @brief Method .ctor, addr 0x58bc890, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* i___GlobalNamespace__IGameEntityDebugComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolCollector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolCollector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolCollector(GRToolCollector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolCollector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolCollector(GRToolCollector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2062};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field tool, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// @brief Field attributes, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field energyDepositPerUse, offset: 0x38, size: 0x4, def value: None
 int32_t  ___energyDepositPerUse;

/// @brief Field shootFrom, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shootFrom;

/// @brief Field collectibleLayerMask, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___collectibleLayerMask;

/// @brief Field vacuumParticleEffect, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___vacuumParticleEffect;

/// @brief Field upgrade1VacuumParticleEffect, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___upgrade1VacuumParticleEffect;

/// @brief Field upgrade2VacuumParticleEffect, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___upgrade2VacuumParticleEffect;

/// @brief Field upgrade3VacuumParticleEffect, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___upgrade3VacuumParticleEffect;

/// @brief Field passiveChargeParticleEffect, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___passiveChargeParticleEffect;

/// @brief Field vacuumAudioSource, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___vacuumAudioSource;

/// @brief Field vacuumSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___vacuumSound;

/// @brief Field upgrade1vacuumSound, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade1vacuumSound;

/// @brief Field upgrade2vacuumSound, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade2vacuumSound;

/// @brief Field upgrade3vacuumSound, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___upgrade3vacuumSound;

/// @brief Field vacuumSoundVolume, offset: 0xa0, size: 0x4, def value: None
 float_t  ___vacuumSoundVolume;

/// @brief Field collectAudioSource, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___collectAudioSource;

/// [FormerlySerializedAs("flashSound")]
/// @brief Field collectSound, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___collectSound;

/// [FormerlySerializedAs("flashSoundVolume")]
/// @brief Field collectSoundVolume, offset: 0xb8, size: 0x4, def value: None
 float_t  ___collectSoundVolume;

/// @brief Field chargeBeamSound, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___chargeBeamSound;

/// @brief Field chargeBeamVolume, offset: 0xc8, size: 0x4, def value: None
 float_t  ___chargeBeamVolume;

/// @brief Field lightningDispatcher, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightningDispatcher>  ___lightningDispatcher;

/// @brief Field chargeDuration, offset: 0xd8, size: 0x4, def value: None
 float_t  ___chargeDuration;

/// [FormerlySerializedAs("flashDuration")]
/// @brief Field collectDuration, offset: 0xdc, size: 0x4, def value: None
 float_t  ___collectDuration;

/// @brief Field cooldownDuration, offset: 0xe0, size: 0x4, def value: None
 float_t  ___cooldownDuration;

/// @brief Field collectHaptic, offset: 0xe8, size: 0x8, def value: None
 ::GlobalNamespace::AbilityHaptic*  ___collectHaptic;

/// @brief Field grManager, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___grManager;

/// @brief Field rechargeRate, offset: 0xf8, size: 0x4, def value: None
 float_t  ___rechargeRate;

/// @brief Field rechargeInterval, offset: 0xfc, size: 0x4, def value: None
 float_t  ___rechargeInterval;

/// @brief Field lastRechargeTime, offset: 0x100, size: 0x8, def value: None
 double_t  ___lastRechargeTime;

/// @brief Field level3ChargeRadius, offset: 0x108, size: 0x4, def value: None
 float_t  ___level3ChargeRadius;

/// @brief Field state, offset: 0x10c, size: 0x4, def value: None
 ::GlobalNamespace::GRToolCollector_State  ___state;

/// @brief Field stateTimeRemaining, offset: 0x110, size: 0x4, def value: None
 float_t  ___stateTimeRemaining;

/// @brief Field activatedLocally, offset: 0x114, size: 0x1, def value: None
 bool  ___activatedLocally;

/// @brief Field waitingForButtonRelease, offset: 0x115, size: 0x1, def value: None
 bool  ___waitingForButtonRelease;

/// @brief Field tempHitResults, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___tempHitResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___tool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___attributes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___energyDepositPerUse) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___shootFrom) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___collectibleLayerMask) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___vacuumParticleEffect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___upgrade1VacuumParticleEffect) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___upgrade2VacuumParticleEffect) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___upgrade3VacuumParticleEffect) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___passiveChargeParticleEffect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___vacuumAudioSource) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___vacuumSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___upgrade1vacuumSound) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___upgrade2vacuumSound) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___upgrade3vacuumSound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___vacuumSoundVolume) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___collectAudioSource) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___collectSound) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___collectSoundVolume) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___chargeBeamSound) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___chargeBeamVolume) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___lightningDispatcher) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___chargeDuration) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___collectDuration) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___cooldownDuration) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___collectHaptic) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___grManager) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___rechargeRate) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___rechargeInterval) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___lastRechargeTime) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___level3ChargeRadius) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___state) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___stateTimeRemaining) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___activatedLocally) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___waitingForButtonRelease) == 0x115, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolCollector, ___tempHitResults) == 0x118, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolCollector) == 0x120, "Size mismatch!");

} // namespace end def GlobalNamespace
