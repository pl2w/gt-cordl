#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_PlayerGameState_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_RiseSpeed_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_RotatingRingState_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_ScienceManagerData_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_SyncData_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_TagBehavior_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScienceExperimentManager)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
class CompositeTriggerEvents;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct ScienceExperimentElementID;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_DisableByLiquidData;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_PlayerGameState;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_RiseSpeed;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_RisingLiquidState;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_RotatingRingState;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_ScienceManagerData;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_SyncData;
}
namespace GlobalNamespace {
struct ScienceExperimentManager_TagBehavior;
}
namespace GlobalNamespace {
class ScienceExperimentSceneElements;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace GorillaTag {
class ScienceExperimentManager__RotateRingsCoroutine_d__123;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag {
class ScienceExperimentManager;
}
namespace GorillaTag {
class ScienceExperimentManager__RotateRingsCoroutine_d__123;
}
// Write type traits
MARK_REF_T(::GorillaTag::ScienceExperimentManager*);
MARK_REF_T(::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*);
DEFINE_IL2CPP_CLASS(::GorillaTag::ScienceExperimentManager*, "GorillaTag", "ScienceExperimentManager");
DEFINE_IL2CPP_CLASS(::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*, "GorillaTag", "ScienceExperimentManager/<RotateRingsCoroutine>d__123");
// [NetworkBehaviourWeaved(76)]
// Dependencies GorillaTag.ScienceExperimentManager::PlayerGameState, GorillaTag.ScienceExperimentManager::RiseSpeed, GorillaTag.ScienceExperimentManager::RotatingRingState, GorillaTag.ScienceExperimentManager::ScienceManagerData, GorillaTag.ScienceExperimentManager::SyncData, GorillaTag.ScienceExperimentManager::TagBehavior, NetPlayer, NetworkComponent, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.Vector2
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.ScienceExperimentManager
class CORDL_TYPE ScienceExperimentManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using DisableByLiquidData = ::GlobalNamespace::ScienceExperimentManager_DisableByLiquidData;

using PlayerGameState = ::GlobalNamespace::ScienceExperimentManager_PlayerGameState;

using RiseSpeed = ::GlobalNamespace::ScienceExperimentManager_RiseSpeed;

using RisingLiquidState = ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState;

using RotatingRingState = ::GlobalNamespace::ScienceExperimentManager_RotatingRingState;

using ScienceManagerData = ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData;

using SyncData = ::GlobalNamespace::ScienceExperimentManager_SyncData;

using TagBehavior = ::GlobalNamespace::ScienceExperimentManager_TagBehavior;

using _RotateRingsCoroutine_d__123 = ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123;

/// [Networked]
/// @brief [NetworkedWeaved(0, 76)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData  Data;

 __declspec(property(get=get_GameState)) ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState  GameState;

 __declspec(property(get=ITickSystemTick_get_TickRunning, put=ITickSystemTick_set_TickRunning)) bool  ITickSystemTick_TickRunning;

 __declspec(property(get=get_PlayerCount)) int32_t  PlayerCount;

 __declspec(property(get=get_RefreshWaterAvailable)) bool  RefreshWaterAvailable;

 __declspec(property(get=get_RiseProgress)) float_t  RiseProgress;

 __declspec(property(get=get_RiseProgressLinear)) float_t  RiseProgressLinear;

/// @brief Field _Data, offset 0x288, size 0x130 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData  _Data;

/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset 0x272, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField)) bool  _ITickSystemTick_TickRunning_k__BackingField;

/// @brief Field allPlayersInRoom, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_allPlayersInRoom, put=__cordl_internal_set_allPlayersInRoom)) ::ArrayW<::GlobalNamespace::NetPlayer*>  allPlayersInRoom;

/// @brief Field animationCurve, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationCurve, put=__cordl_internal_set_animationCurve)) ::UnityEngine::AnimationCurve*  animationCurve;

/// @brief Field bottleLiquidVolume, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_bottleLiquidVolume, put=__cordl_internal_set_bottleLiquidVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  bottleLiquidVolume;

/// @brief Field currentTime, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTime, put=__cordl_internal_set_currentTime)) double_t  currentTime;

/// @brief Field debugDrawPlayerGameState, offset 0x139, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDrawPlayerGameState, put=__cordl_internal_set_debugDrawPlayerGameState)) bool  debugDrawPlayerGameState;

/// @brief Field debugRandomizingRings, offset 0x280, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugRandomizingRings, put=__cordl_internal_set_debugRandomizingRings)) bool  debugRandomizingRings;

/// @brief Field debugRotateRingsTime, offset 0x274, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugRotateRingsTime, put=__cordl_internal_set_debugRotateRingsTime)) float_t  debugRotateRingsTime;

/// @brief Field drainAudioSource, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_drainAudioSource, put=__cordl_internal_set_drainAudioSource)) ::UnityW<::UnityEngine::AudioSource>  drainAudioSource;

/// @brief Field drainBlocker, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_drainBlocker, put=__cordl_internal_set_drainBlocker)) ::UnityW<::UnityEngine::Transform>  drainBlocker;

/// @brief Field drainBlockerClosedPosition, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_drainBlockerClosedPosition, put=__cordl_internal_set_drainBlockerClosedPosition)) ::UnityW<::UnityEngine::Transform>  drainBlockerClosedPosition;

/// @brief Field drainBlockerOpenPosition, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_drainBlockerOpenPosition, put=__cordl_internal_set_drainBlockerOpenPosition)) ::UnityW<::UnityEngine::Transform>  drainBlockerOpenPosition;

/// @brief Field drainBlockerSlideSpeed, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_drainBlockerSlideSpeed, put=__cordl_internal_set_drainBlockerSlideSpeed)) float_t  drainBlockerSlideSpeed;

/// @brief Field drainBlockerSlideTime, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_drainBlockerSlideTime, put=__cordl_internal_set_drainBlockerSlideTime)) float_t  drainBlockerSlideTime;

/// @brief Field drainTime, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_drainTime, put=__cordl_internal_set_drainTime)) float_t  drainTime;

/// @brief Field elements, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_elements, put=__cordl_internal_set_elements)) ::UnityW<::GlobalNamespace::ScienceExperimentSceneElements>  elements;

/// @brief Field entryBridgeQuadMaxScaleY, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_entryBridgeQuadMaxScaleY, put=__cordl_internal_set_entryBridgeQuadMaxScaleY)) float_t  entryBridgeQuadMaxScaleY;

/// @brief Field entryBridgeQuadMinMaxZHeight, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryBridgeQuadMinMaxZHeight, put=__cordl_internal_set_entryBridgeQuadMinMaxZHeight)) ::UnityEngine::Vector2  entryBridgeQuadMinMaxZHeight;

/// @brief Field entryLiquidMaxScale, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_entryLiquidMaxScale, put=__cordl_internal_set_entryLiquidMaxScale)) float_t  entryLiquidMaxScale;

/// @brief Field entryLiquidScaleSyncOpeningBottom, offset 0xec, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryLiquidScaleSyncOpeningBottom, put=__cordl_internal_set_entryLiquidScaleSyncOpeningBottom)) ::UnityEngine::Vector2  entryLiquidScaleSyncOpeningBottom;

/// @brief Field entryLiquidScaleSyncOpeningTop, offset 0xe4, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryLiquidScaleSyncOpeningTop, put=__cordl_internal_set_entryLiquidScaleSyncOpeningTop)) ::UnityEngine::Vector2  entryLiquidScaleSyncOpeningTop;

/// @brief Field entryLiquidVolume, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryLiquidVolume, put=__cordl_internal_set_entryLiquidVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  entryLiquidVolume;

/// @brief Field entryWayBridgeQuadTransform, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryWayBridgeQuadTransform, put=__cordl_internal_set_entryWayBridgeQuadTransform)) ::UnityW<::UnityEngine::Transform>  entryWayBridgeQuadTransform;

/// @brief Field entryWayLiquidMeshTransform, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryWayLiquidMeshTransform, put=__cordl_internal_set_entryWayLiquidMeshTransform)) ::UnityW<::UnityEngine::Transform>  entryWayLiquidMeshTransform;

/// @brief Field eruptionAudioSource, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_eruptionAudioSource, put=__cordl_internal_set_eruptionAudioSource)) ::UnityW<::UnityEngine::AudioSource>  eruptionAudioSource;

/// @brief Field fizzParticleEmission, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_fizzParticleEmission, put=__cordl_internal_set_fizzParticleEmission)) ::GlobalNamespace::ParticleSystem_EmissionModule  fizzParticleEmission;

/// @brief Field fullyDrainedWaitTime, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullyDrainedWaitTime, put=__cordl_internal_set_fullyDrainedWaitTime)) float_t  fullyDrainedWaitTime;

/// @brief Field gameAreaTriggerNotifier, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameAreaTriggerNotifier, put=__cordl_internal_set_gameAreaTriggerNotifier)) ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  gameAreaTriggerNotifier;

/// @brief Field hasPlayedDrainEffects, offset 0x271, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPlayedDrainEffects, put=__cordl_internal_set_hasPlayedDrainEffects)) bool  hasPlayedDrainEffects;

/// @brief Field hasPlayedEruptionEffects, offset 0x270, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPlayedEruptionEffects, put=__cordl_internal_set_hasPlayedEruptionEffects)) bool  hasPlayedEruptionEffects;

/// @brief Field inGamePlayerCount, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_inGamePlayerCount, put=__cordl_internal_set_inGamePlayerCount)) int32_t  inGamePlayerCount;

/// @brief Field inGamePlayerStates, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_inGamePlayerStates, put=__cordl_internal_set_inGamePlayerStates)) ::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>  inGamePlayerStates;

/// @brief Field infrequentUpdatePeriod, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_infrequentUpdatePeriod, put=__cordl_internal_set_infrequentUpdatePeriod)) float_t  infrequentUpdatePeriod;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTag::ScienceExperimentManager>  instance;

/// @brief Field lagResolutionLavaProgressPerSecond, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lagResolutionLavaProgressPerSecond, put=__cordl_internal_set_lagResolutionLavaProgressPerSecond)) float_t  lagResolutionLavaProgressPerSecond;

/// @brief Field lastInfrequentUpdateTime, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastInfrequentUpdateTime, put=__cordl_internal_set_lastInfrequentUpdateTime)) double_t  lastInfrequentUpdateTime;

/// @brief Field lastWinnerId, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastWinnerId, put=__cordl_internal_set_lastWinnerId)) int32_t  lastWinnerId;

/// @brief Field lastWinnerName, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastWinnerName, put=__cordl_internal_set_lastWinnerName)) ::StringW  lastWinnerName;

/// @brief Field lavaActivationDrainRateVsPlayerCount, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationDrainRateVsPlayerCount, put=__cordl_internal_set_lavaActivationDrainRateVsPlayerCount)) ::UnityEngine::AnimationCurve*  lavaActivationDrainRateVsPlayerCount;

/// @brief Field lavaActivationRockProgressVsPlayerCount, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_lavaActivationRockProgressVsPlayerCount, put=__cordl_internal_set_lavaActivationRockProgressVsPlayerCount)) ::UnityEngine::AnimationCurve*  lavaActivationRockProgressVsPlayerCount;

/// @brief Field lavaProgressToDisableRefreshWater, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lavaProgressToDisableRefreshWater, put=__cordl_internal_set_lavaProgressToDisableRefreshWater)) float_t  lavaProgressToDisableRefreshWater;

/// @brief Field lavaProgressToEnableRefreshWater, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_lavaProgressToEnableRefreshWater, put=__cordl_internal_set_lavaProgressToEnableRefreshWater)) float_t  lavaProgressToEnableRefreshWater;

/// @brief Field liquidMeshTransform, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidMeshTransform, put=__cordl_internal_set_liquidMeshTransform)) ::UnityW<::UnityEngine::Transform>  liquidMeshTransform;

/// @brief Field liquidSurfacePlane, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidSurfacePlane, put=__cordl_internal_set_liquidSurfacePlane)) ::UnityW<::UnityEngine::Transform>  liquidSurfacePlane;

/// @brief Field liquidVolume, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidVolume, put=__cordl_internal_set_liquidVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  liquidVolume;

/// @brief Field localLagRiseProgressOffset, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_localLagRiseProgressOffset, put=__cordl_internal_set_localLagRiseProgressOffset)) float_t  localLagRiseProgressOffset;

/// @brief Field maxFullTime, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFullTime, put=__cordl_internal_set_maxFullTime)) float_t  maxFullTime;

/// @brief Field maxScale, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxScale, put=__cordl_internal_set_maxScale)) float_t  maxScale;

/// @brief Field mentoProjectileTag, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mentoProjectileTag, put=__cordl_internal_set_mentoProjectileTag)) ::StringW  mentoProjectileTag;

/// @brief Field minScale, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_minScale, put=__cordl_internal_set_minScale)) float_t  minScale;

/// @brief Field nextRoundRiseSpeed, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextRoundRiseSpeed, put=__cordl_internal_set_nextRoundRiseSpeed)) ::GlobalNamespace::ScienceExperimentManager_RiseSpeed  nextRoundRiseSpeed;

/// @brief Field optPlayersOutOfRoomGameMode, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get_optPlayersOutOfRoomGameMode, put=__cordl_internal_set_optPlayersOutOfRoomGameMode)) bool  optPlayersOutOfRoomGameMode;

/// @brief Field preDrainWaitTime, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_preDrainWaitTime, put=__cordl_internal_set_preDrainWaitTime)) float_t  preDrainWaitTime;

/// @brief Field prevTime, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevTime, put=__cordl_internal_set_prevTime)) double_t  prevTime;

/// @brief Field refreshWaterVolume, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_refreshWaterVolume, put=__cordl_internal_set_refreshWaterVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  refreshWaterVolume;

/// @brief Field reliableState, offset 0x178, size 0x20 
 __declspec(property(get=__cordl_internal_get_reliableState, put=__cordl_internal_set_reliableState)) ::GlobalNamespace::ScienceExperimentManager_SyncData  reliableState;

/// @brief Field ringParent, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ringParent, put=__cordl_internal_set_ringParent)) ::UnityW<::UnityEngine::Transform>  ringParent;

/// @brief Field ringRotationProgress, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_ringRotationProgress, put=__cordl_internal_set_ringRotationProgress)) float_t  ringRotationProgress;

/// @brief Field riseProgress, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseProgress, put=__cordl_internal_set_riseProgress)) float_t  riseProgress;

/// @brief Field riseProgressLinear, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseProgressLinear, put=__cordl_internal_set_riseProgressLinear)) float_t  riseProgressLinear;

/// @brief Field riseTime, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseTime, put=__cordl_internal_set_riseTime)) float_t  riseTime;

/// @brief Field riseTimeExtraSlow, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseTimeExtraSlow, put=__cordl_internal_set_riseTimeExtraSlow)) float_t  riseTimeExtraSlow;

/// @brief Field riseTimeFast, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseTimeFast, put=__cordl_internal_set_riseTimeFast)) float_t  riseTimeFast;

/// @brief Field riseTimeLookup, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_riseTimeLookup, put=__cordl_internal_set_riseTimeLookup)) ::ArrayW<float_t>  riseTimeLookup;

/// @brief Field riseTimeMedium, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseTimeMedium, put=__cordl_internal_set_riseTimeMedium)) float_t  riseTimeMedium;

/// @brief Field riseTimeSlow, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseTimeSlow, put=__cordl_internal_set_riseTimeSlow)) float_t  riseTimeSlow;

/// @brief Field rotateRingsCoroutine, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotateRingsCoroutine, put=__cordl_internal_set_rotateRingsCoroutine)) ::UnityEngine::Coroutine*  rotateRingsCoroutine;

/// @brief Field rotatingRingAngleSnapDegrees, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotatingRingAngleSnapDegrees, put=__cordl_internal_set_rotatingRingAngleSnapDegrees)) float_t  rotatingRingAngleSnapDegrees;

/// @brief Field rotatingRingQuantizeAngles, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotatingRingQuantizeAngles, put=__cordl_internal_set_rotatingRingQuantizeAngles)) bool  rotatingRingQuantizeAngles;

/// @brief Field rotatingRingRandomAngleRange, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotatingRingRandomAngleRange, put=__cordl_internal_set_rotatingRingRandomAngleRange)) ::UnityEngine::Vector2  rotatingRingRandomAngleRange;

/// @brief Field rotatingRings, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotatingRings, put=__cordl_internal_set_rotatingRings)) ::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>  rotatingRings;

/// @brief Field rotatingRingsAudioSource, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotatingRingsAudioSource, put=__cordl_internal_set_rotatingRingsAudioSource)) ::UnityW<::UnityEngine::AudioSource>  rotatingRingsAudioSource;

/// @brief Field sodaFizzParticleEmissionMinMax, offset 0x12c, size 0x8 
 __declspec(property(get=__cordl_internal_get_sodaFizzParticleEmissionMinMax, put=__cordl_internal_set_sodaFizzParticleEmissionMinMax)) ::UnityEngine::Vector2  sodaFizzParticleEmissionMinMax;

/// @brief Field sodaWaterProjectileTriggerNotifier, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_sodaWaterProjectileTriggerNotifier, put=__cordl_internal_set_sodaWaterProjectileTriggerNotifier)) ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  sodaWaterProjectileTriggerNotifier;

/// @brief Field sortedPlayerStates, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_sortedPlayerStates, put=__cordl_internal_set_sortedPlayerStates)) ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>*  sortedPlayerStates;

/// @brief Field tagBehavior, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagBehavior, put=__cordl_internal_set_tagBehavior)) ::GlobalNamespace::ScienceExperimentManager_TagBehavior  tagBehavior;

/// @brief Field waterBalloonPrefab, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterBalloonPrefab, put=__cordl_internal_set_waterBalloonPrefab)) ::UnityW<::UnityEngine::GameObject>  waterBalloonPrefab;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AddLavaRock, addr 0x5d2e704, size 0xa0, virtual false, abstract: false, final false
inline void AddLavaRock(int32_t  playerId) ;

/// @brief Method Awake, addr 0x5d2a3f4, size 0x8d4, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5d30d88, size 0x64, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5d30dec, size 0x64, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method DeInitElements, addr 0x5d2b5cc, size 0x14, virtual false, abstract: false, final false
inline void DeInitElements() ;

/// @brief Method DebugErupt, addr 0x5d2d7f8, size 0x108, virtual false, abstract: false, final false
inline void DebugErupt() ;

/// @brief Method DisableObjectsInContactWithLava, addr 0x5d2cb98, size 0x400, virtual false, abstract: false, final false
inline void DisableObjectsInContactWithLava(float_t  lavaScale) ;

/// @brief Method GetElement, addr 0x5d2b5e0, size 0x1cc, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetElement(::GlobalNamespace::ScienceExperimentElementID  elementID) ;

/// @brief Method GetMaterialIfPlayerInGame, addr 0x5d2db58, size 0x90, virtual false, abstract: false, final false
inline bool GetMaterialIfPlayerInGame(int32_t  playerActorNumber, ::by_ref<int32_t>  materialIndex) ;

/// @brief Method GetPlayerFromId, addr 0x5d2d554, size 0x124, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* GetPlayerFromId(int32_t  id) ;

/// @brief Method ITickSystemTick.Tick, addr 0x5d2b7bc, size 0x540, virtual true, abstract: false, final true
inline void ITickSystemTick_Tick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.get_TickRunning, addr 0x5d2b7ac, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemTick_get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.set_TickRunning, addr 0x5d2b7b4, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemTick_set_TickRunning(bool  value) ;

/// @brief Method InfrequentUpdate, addr 0x5d2bcfc, size 0x32c, virtual false, abstract: false, final false
inline void InfrequentUpdate() ;

/// @brief Method InitElements, addr 0x5d2b468, size 0x164, virtual false, abstract: false, final false
inline void InitElements(::GlobalNamespace::ScienceExperimentSceneElements*  elements) ;

static inline ::GorillaTag::ScienceExperimentManager* New_ctor() ;

/// @brief Method OnColliderEnteredRefreshWater, addr 0x5d2e410, size 0x1f8, virtual false, abstract: false, final false
inline void OnColliderEnteredRefreshWater(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider) ;

/// @brief Method OnColliderEnteredSoda, addr 0x5d2e184, size 0x1f8, virtual false, abstract: false, final false
inline void OnColliderEnteredSoda(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider) ;

/// @brief Method OnColliderEnteredVolume, addr 0x5d2ddc8, size 0xdc, virtual false, abstract: false, final false
inline void OnColliderEnteredVolume(::UnityEngine::Collider*  collider) ;

/// @brief Method OnColliderExitedRefreshWater, addr 0x5d2e698, size 0x4, virtual false, abstract: false, final false
inline void OnColliderExitedRefreshWater(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider) ;

/// @brief Method OnColliderExitedSoda, addr 0x5d2e40c, size 0x4, virtual false, abstract: false, final false
inline void OnColliderExitedSoda(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider) ;

/// @brief Method OnColliderExitedVolume, addr 0x5d2dfb0, size 0xdc, virtual false, abstract: false, final false
inline void OnColliderExitedVolume(::UnityEngine::Collider*  collider) ;

/// @brief Method OnDestroy, addr 0x5d2aef8, size 0x570, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5d2ade0, size 0x118, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d2acc8, size 0x118, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLeftRoom, addr 0x5d30908, size 0x3c, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnOwnerSwitched, addr 0x5d30944, size 0x16c, virtual true, abstract: false, final false
inline void OnOwnerSwitched(::GlobalNamespace::NetPlayer*  newOwningPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5d308d4, size 0x34, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnPlayerTagged, addr 0x5d2dbe8, size 0x1e0, virtual false, abstract: false, final false
inline void OnPlayerTagged(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method OnProjectileEnteredSodaWater, addr 0x5d2e69c, size 0x68, virtual false, abstract: false, final false
inline void OnProjectileEnteredSodaWater(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider) ;

/// @brief Method OnWaterBalloonHitPlayer, addr 0x5d2e7a4, size 0x1e8, virtual false, abstract: false, final false
inline void OnWaterBalloonHitPlayer(::GlobalNamespace::NetPlayer*  hitPlayer) ;

/// @brief Method PlayerEnteredGameArea, addr 0x5d2dea4, size 0x10c, virtual false, abstract: false, final false
inline void PlayerEnteredGameArea(int32_t  pId) ;

/// @brief Method PlayerExitedGameArea, addr 0x5d2e08c, size 0xf8, virtual false, abstract: false, final false
inline void PlayerExitedGameArea(int32_t  playerId) ;

/// @brief Method PlayerHitByWaterBalloon, addr 0x5d3053c, size 0x84, virtual false, abstract: false, final false
inline void PlayerHitByWaterBalloon(int32_t  playerId) ;

/// [PunRPC]
/// @brief Method PlayerHitByWaterBalloonRPC, addr 0x5d305c0, size 0xb8, virtual false, abstract: false, final false
inline void PlayerHitByWaterBalloonRPC(int32_t  playerId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlayerInGame, addr 0x5d2d3a0, size 0x78, virtual false, abstract: false, final false
inline bool PlayerInGame(::Photon::Realtime::Player*  player) ;

/// @brief Method PlayerTouchedLava, addr 0x5d2e37c, size 0x90, virtual false, abstract: false, final false
inline void PlayerTouchedLava(int32_t  playerId) ;

/// [PunRPC]
/// @brief Method PlayerTouchedLavaRPC, addr 0x5d2fb50, size 0xc0, virtual false, abstract: false, final false
inline void PlayerTouchedLavaRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlayerTouchedRefreshWater, addr 0x5d2e608, size 0x90, virtual false, abstract: false, final false
inline void PlayerTouchedRefreshWater(int32_t  playerId) ;

/// [PunRPC]
/// @brief Method PlayerTouchedRefreshWaterRPC, addr 0x5d2fe78, size 0xc0, virtual false, abstract: false, final false
inline void PlayerTouchedRefreshWaterRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method RPC_PlayerHitByWaterBalloon, addr 0x5d30678, size 0x25c, virtual false, abstract: false, final false
inline void RPC_PlayerHitByWaterBalloon(int32_t  playerId, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(4, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_PlayerHitByWaterBalloon@Invoker, addr 0x5d31068, size 0x710, virtual false, abstract: false, final false
static inline void RPC_PlayerHitByWaterBalloon@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method RPC_PlayerTouchedLava, addr 0x5d2fc10, size 0x268, virtual false, abstract: false, final false
inline void RPC_PlayerTouchedLava(::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(1, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_PlayerTouchedLava@Invoker, addr 0x5d30e50, size 0xb0, virtual false, abstract: false, final false
static inline void RPC_PlayerTouchedLava@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [Rpc((Fusion.RpcSources)7, (Fusion.RpcTargets)1)]
/// @brief Method RPC_PlayerTouchedRefreshWater, addr 0x5d2ff38, size 0x268, virtual false, abstract: false, final false
inline void RPC_PlayerTouchedRefreshWater(::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(2, 7, 1)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_PlayerTouchedRefreshWater@Invoker, addr 0x5d30f00, size 0xb0, virtual false, abstract: false, final false
static inline void RPC_PlayerTouchedRefreshWater@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// [Rpc(InvokeLocal = false)]
/// @brief Method RPC_ValidateLocalPlayerWaterBalloonHit, addr 0x5d302b0, size 0x28c, virtual false, abstract: false, final false
inline void RPC_ValidateLocalPlayerWaterBalloonHit(int32_t  playerId, ::Fusion::RpcInfo  info) ;

/// [NetworkRpcWeavedInvoker(3, 7, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_ValidateLocalPlayerWaterBalloonHit@Invoker, addr 0x5d30fb0, size 0xb8, virtual false, abstract: false, final false
static inline void RPC_ValidateLocalPlayerWaterBalloonHit@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method RandomizeRings, addr 0x5d2d900, size 0x1e4, virtual false, abstract: false, final false
inline void RandomizeRings() ;

/// @brief Method ReadDataFusion, addr 0x5d2ed30, size 0x5ac, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5d2f5a0, size 0x5b0, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RefreshWinnerName, addr 0x5d2d4e8, size 0x6c, virtual false, abstract: false, final false
inline void RefreshWinnerName() ;

/// @brief Method ResetGame, addr 0x5d2d678, size 0x68, virtual false, abstract: false, final false
inline void ResetGame() ;

/// @brief Method RestartGame, addr 0x5d2d6e0, size 0x118, virtual false, abstract: false, final false
inline void RestartGame() ;

/// [IteratorStateMachine(typeof(GorillaTag.ScienceExperimentManager::<RotateRingsCoroutine>d__123))]
/// @brief Method RotateRingsCoroutine, addr 0x5d2dae4, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RotateRingsCoroutine() ;

/// @brief Method UpdateDrainBlocker, addr 0x5d2c9ac, size 0x1ec, virtual false, abstract: false, final false
inline void UpdateDrainBlocker(double_t  currentTime) ;

/// @brief Method UpdateEffects, addr 0x5d2cf98, size 0x408, virtual false, abstract: false, final false
inline void UpdateEffects() ;

/// @brief Method UpdateLiquid, addr 0x5d2c508, size 0x2b8, virtual false, abstract: false, final false
inline void UpdateLiquid(float_t  fillProgress) ;

/// @brief Method UpdateLocalState, addr 0x5d2c39c, size 0x16c, virtual false, abstract: false, final false
inline void UpdateLocalState(double_t  currentTime, ::GlobalNamespace::ScienceExperimentManager_SyncData  syncData) ;

/// @brief Method UpdateRefreshWater, addr 0x5d2c8a4, size 0x108, virtual false, abstract: false, final false
inline void UpdateRefreshWater() ;

/// @brief Method UpdateReliableState, addr 0x5d2c028, size 0x374, virtual false, abstract: false, final false
inline void UpdateReliableState(double_t  currentTime, ::by_ref<::GlobalNamespace::ScienceExperimentManager_SyncData>  syncData) ;

/// @brief Method UpdateRotatingRings, addr 0x5d2c7c0, size 0xe4, virtual false, abstract: false, final false
inline void UpdateRotatingRings(float_t  rotationProgress) ;

/// @brief Method UpdateWinner, addr 0x5d2d474, size 0x74, virtual false, abstract: false, final false
inline void UpdateWinner() ;

/// @brief Method ValidateLocalPlayerWaterBalloonHit, addr 0x5d2e98c, size 0x24c, virtual false, abstract: false, final false
inline void ValidateLocalPlayerWaterBalloonHit(int32_t  playerId) ;

/// [PunRPC]
/// @brief Method ValidateLocalPlayerWaterBalloonHitRPC, addr 0x5d301a0, size 0x110, virtual false, abstract: false, final false
inline void ValidateLocalPlayerWaterBalloonHitRPC(int32_t  playerId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method WriteDataFusion, addr 0x5d2ec94, size 0x9c, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5d2f2dc, size 0x2c4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [CompilerGenerated]
/// @brief Method <UpdateReliableState>g__GetAlivePlayerCount|105_0, addr 0x5d2d418, size 0x5c, virtual false, abstract: false, final false
inline int32_t _UpdateReliableState_g__GetAlivePlayerCount_105_0() ;

constexpr ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData& __cordl_internal_get__Data() ;

constexpr bool const& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& __cordl_internal_get_allPlayersInRoom() const;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& __cordl_internal_get_allPlayersInRoom() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_animationCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_animationCurve() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_bottleLiquidVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_bottleLiquidVolume() ;

constexpr double_t const& __cordl_internal_get_currentTime() const;

constexpr double_t& __cordl_internal_get_currentTime() ;

constexpr bool const& __cordl_internal_get_debugDrawPlayerGameState() const;

constexpr bool& __cordl_internal_get_debugDrawPlayerGameState() ;

constexpr bool const& __cordl_internal_get_debugRandomizingRings() const;

constexpr bool& __cordl_internal_get_debugRandomizingRings() ;

constexpr float_t const& __cordl_internal_get_debugRotateRingsTime() const;

constexpr float_t& __cordl_internal_get_debugRotateRingsTime() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_drainAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_drainAudioSource() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_drainBlocker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_drainBlocker() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_drainBlockerClosedPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_drainBlockerClosedPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_drainBlockerOpenPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_drainBlockerOpenPosition() ;

constexpr float_t const& __cordl_internal_get_drainBlockerSlideSpeed() const;

constexpr float_t& __cordl_internal_get_drainBlockerSlideSpeed() ;

constexpr float_t const& __cordl_internal_get_drainBlockerSlideTime() const;

constexpr float_t& __cordl_internal_get_drainBlockerSlideTime() ;

constexpr float_t const& __cordl_internal_get_drainTime() const;

constexpr float_t& __cordl_internal_get_drainTime() ;

constexpr ::UnityW<::GlobalNamespace::ScienceExperimentSceneElements> const& __cordl_internal_get_elements() const;

constexpr ::UnityW<::GlobalNamespace::ScienceExperimentSceneElements>& __cordl_internal_get_elements() ;

constexpr float_t const& __cordl_internal_get_entryBridgeQuadMaxScaleY() const;

constexpr float_t& __cordl_internal_get_entryBridgeQuadMaxScaleY() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_entryBridgeQuadMinMaxZHeight() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_entryBridgeQuadMinMaxZHeight() ;

constexpr float_t const& __cordl_internal_get_entryLiquidMaxScale() const;

constexpr float_t& __cordl_internal_get_entryLiquidMaxScale() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_entryLiquidScaleSyncOpeningBottom() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_entryLiquidScaleSyncOpeningBottom() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_entryLiquidScaleSyncOpeningTop() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_entryLiquidScaleSyncOpeningTop() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_entryLiquidVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_entryLiquidVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_entryWayBridgeQuadTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_entryWayBridgeQuadTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_entryWayLiquidMeshTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_entryWayLiquidMeshTransform() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_eruptionAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_eruptionAudioSource() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get_fizzParticleEmission() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get_fizzParticleEmission() ;

constexpr float_t const& __cordl_internal_get_fullyDrainedWaitTime() const;

constexpr float_t& __cordl_internal_get_fullyDrainedWaitTime() ;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& __cordl_internal_get_gameAreaTriggerNotifier() const;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& __cordl_internal_get_gameAreaTriggerNotifier() ;

constexpr bool const& __cordl_internal_get_hasPlayedDrainEffects() const;

constexpr bool& __cordl_internal_get_hasPlayedDrainEffects() ;

constexpr bool const& __cordl_internal_get_hasPlayedEruptionEffects() const;

constexpr bool& __cordl_internal_get_hasPlayedEruptionEffects() ;

constexpr int32_t const& __cordl_internal_get_inGamePlayerCount() const;

constexpr int32_t& __cordl_internal_get_inGamePlayerCount() ;

constexpr ::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState> const& __cordl_internal_get_inGamePlayerStates() const;

constexpr ::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>& __cordl_internal_get_inGamePlayerStates() ;

constexpr float_t const& __cordl_internal_get_infrequentUpdatePeriod() const;

constexpr float_t& __cordl_internal_get_infrequentUpdatePeriod() ;

constexpr float_t const& __cordl_internal_get_lagResolutionLavaProgressPerSecond() const;

constexpr float_t& __cordl_internal_get_lagResolutionLavaProgressPerSecond() ;

constexpr double_t const& __cordl_internal_get_lastInfrequentUpdateTime() const;

constexpr double_t& __cordl_internal_get_lastInfrequentUpdateTime() ;

constexpr int32_t const& __cordl_internal_get_lastWinnerId() const;

constexpr int32_t& __cordl_internal_get_lastWinnerId() ;

constexpr ::StringW const& __cordl_internal_get_lastWinnerName() const;

constexpr ::StringW& __cordl_internal_get_lastWinnerName() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lavaActivationDrainRateVsPlayerCount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lavaActivationDrainRateVsPlayerCount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_lavaActivationRockProgressVsPlayerCount() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_lavaActivationRockProgressVsPlayerCount() ;

constexpr float_t const& __cordl_internal_get_lavaProgressToDisableRefreshWater() const;

constexpr float_t& __cordl_internal_get_lavaProgressToDisableRefreshWater() ;

constexpr float_t const& __cordl_internal_get_lavaProgressToEnableRefreshWater() const;

constexpr float_t& __cordl_internal_get_lavaProgressToEnableRefreshWater() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_liquidMeshTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_liquidMeshTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_liquidSurfacePlane() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_liquidSurfacePlane() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_liquidVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_liquidVolume() ;

constexpr float_t const& __cordl_internal_get_localLagRiseProgressOffset() const;

constexpr float_t& __cordl_internal_get_localLagRiseProgressOffset() ;

constexpr float_t const& __cordl_internal_get_maxFullTime() const;

constexpr float_t& __cordl_internal_get_maxFullTime() ;

constexpr float_t const& __cordl_internal_get_maxScale() const;

constexpr float_t& __cordl_internal_get_maxScale() ;

constexpr ::StringW const& __cordl_internal_get_mentoProjectileTag() const;

constexpr ::StringW& __cordl_internal_get_mentoProjectileTag() ;

constexpr float_t const& __cordl_internal_get_minScale() const;

constexpr float_t& __cordl_internal_get_minScale() ;

constexpr ::GlobalNamespace::ScienceExperimentManager_RiseSpeed const& __cordl_internal_get_nextRoundRiseSpeed() const;

constexpr ::GlobalNamespace::ScienceExperimentManager_RiseSpeed& __cordl_internal_get_nextRoundRiseSpeed() ;

constexpr bool const& __cordl_internal_get_optPlayersOutOfRoomGameMode() const;

constexpr bool& __cordl_internal_get_optPlayersOutOfRoomGameMode() ;

constexpr float_t const& __cordl_internal_get_preDrainWaitTime() const;

constexpr float_t& __cordl_internal_get_preDrainWaitTime() ;

constexpr double_t const& __cordl_internal_get_prevTime() const;

constexpr double_t& __cordl_internal_get_prevTime() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_refreshWaterVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_refreshWaterVolume() ;

constexpr ::GlobalNamespace::ScienceExperimentManager_SyncData const& __cordl_internal_get_reliableState() const;

constexpr ::GlobalNamespace::ScienceExperimentManager_SyncData& __cordl_internal_get_reliableState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ringParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ringParent() ;

constexpr float_t const& __cordl_internal_get_ringRotationProgress() const;

constexpr float_t& __cordl_internal_get_ringRotationProgress() ;

constexpr float_t const& __cordl_internal_get_riseProgress() const;

constexpr float_t& __cordl_internal_get_riseProgress() ;

constexpr float_t const& __cordl_internal_get_riseProgressLinear() const;

constexpr float_t& __cordl_internal_get_riseProgressLinear() ;

constexpr float_t const& __cordl_internal_get_riseTime() const;

constexpr float_t& __cordl_internal_get_riseTime() ;

constexpr float_t const& __cordl_internal_get_riseTimeExtraSlow() const;

constexpr float_t& __cordl_internal_get_riseTimeExtraSlow() ;

constexpr float_t const& __cordl_internal_get_riseTimeFast() const;

constexpr float_t& __cordl_internal_get_riseTimeFast() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_riseTimeLookup() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_riseTimeLookup() ;

constexpr float_t const& __cordl_internal_get_riseTimeMedium() const;

constexpr float_t& __cordl_internal_get_riseTimeMedium() ;

constexpr float_t const& __cordl_internal_get_riseTimeSlow() const;

constexpr float_t& __cordl_internal_get_riseTimeSlow() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_rotateRingsCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_rotateRingsCoroutine() ;

constexpr float_t const& __cordl_internal_get_rotatingRingAngleSnapDegrees() const;

constexpr float_t& __cordl_internal_get_rotatingRingAngleSnapDegrees() ;

constexpr bool const& __cordl_internal_get_rotatingRingQuantizeAngles() const;

constexpr bool& __cordl_internal_get_rotatingRingQuantizeAngles() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rotatingRingRandomAngleRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_rotatingRingRandomAngleRange() ;

constexpr ::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState> const& __cordl_internal_get_rotatingRings() const;

constexpr ::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>& __cordl_internal_get_rotatingRings() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_rotatingRingsAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_rotatingRingsAudioSource() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_sodaFizzParticleEmissionMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_sodaFizzParticleEmissionMinMax() ;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& __cordl_internal_get_sodaWaterProjectileTriggerNotifier() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& __cordl_internal_get_sodaWaterProjectileTriggerNotifier() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>* const& __cordl_internal_get_sortedPlayerStates() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>*& __cordl_internal_get_sortedPlayerStates() ;

constexpr ::GlobalNamespace::ScienceExperimentManager_TagBehavior const& __cordl_internal_get_tagBehavior() const;

constexpr ::GlobalNamespace::ScienceExperimentManager_TagBehavior& __cordl_internal_get_tagBehavior() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waterBalloonPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waterBalloonPrefab() ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::ScienceExperimentManager_ScienceManagerData  value) ;

constexpr void __cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_allPlayersInRoom(::ArrayW<::GlobalNamespace::NetPlayer*>  value) ;

constexpr void __cordl_internal_set_animationCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_bottleLiquidVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

constexpr void __cordl_internal_set_currentTime(double_t  value) ;

constexpr void __cordl_internal_set_debugDrawPlayerGameState(bool  value) ;

constexpr void __cordl_internal_set_debugRandomizingRings(bool  value) ;

constexpr void __cordl_internal_set_debugRotateRingsTime(float_t  value) ;

constexpr void __cordl_internal_set_drainAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_drainBlocker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_drainBlockerClosedPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_drainBlockerOpenPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_drainBlockerSlideSpeed(float_t  value) ;

constexpr void __cordl_internal_set_drainBlockerSlideTime(float_t  value) ;

constexpr void __cordl_internal_set_drainTime(float_t  value) ;

constexpr void __cordl_internal_set_elements(::UnityW<::GlobalNamespace::ScienceExperimentSceneElements>  value) ;

constexpr void __cordl_internal_set_entryBridgeQuadMaxScaleY(float_t  value) ;

constexpr void __cordl_internal_set_entryBridgeQuadMinMaxZHeight(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_entryLiquidMaxScale(float_t  value) ;

constexpr void __cordl_internal_set_entryLiquidScaleSyncOpeningBottom(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_entryLiquidScaleSyncOpeningTop(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_entryLiquidVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

constexpr void __cordl_internal_set_entryWayBridgeQuadTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_entryWayLiquidMeshTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_eruptionAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_fizzParticleEmission(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set_fullyDrainedWaitTime(float_t  value) ;

constexpr void __cordl_internal_set_gameAreaTriggerNotifier(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value) ;

constexpr void __cordl_internal_set_hasPlayedDrainEffects(bool  value) ;

constexpr void __cordl_internal_set_hasPlayedEruptionEffects(bool  value) ;

constexpr void __cordl_internal_set_inGamePlayerCount(int32_t  value) ;

constexpr void __cordl_internal_set_inGamePlayerStates(::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>  value) ;

constexpr void __cordl_internal_set_infrequentUpdatePeriod(float_t  value) ;

constexpr void __cordl_internal_set_lagResolutionLavaProgressPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_lastInfrequentUpdateTime(double_t  value) ;

constexpr void __cordl_internal_set_lastWinnerId(int32_t  value) ;

constexpr void __cordl_internal_set_lastWinnerName(::StringW  value) ;

constexpr void __cordl_internal_set_lavaActivationDrainRateVsPlayerCount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_lavaActivationRockProgressVsPlayerCount(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_lavaProgressToDisableRefreshWater(float_t  value) ;

constexpr void __cordl_internal_set_lavaProgressToEnableRefreshWater(float_t  value) ;

constexpr void __cordl_internal_set_liquidMeshTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_liquidSurfacePlane(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_liquidVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

constexpr void __cordl_internal_set_localLagRiseProgressOffset(float_t  value) ;

constexpr void __cordl_internal_set_maxFullTime(float_t  value) ;

constexpr void __cordl_internal_set_maxScale(float_t  value) ;

constexpr void __cordl_internal_set_mentoProjectileTag(::StringW  value) ;

constexpr void __cordl_internal_set_minScale(float_t  value) ;

constexpr void __cordl_internal_set_nextRoundRiseSpeed(::GlobalNamespace::ScienceExperimentManager_RiseSpeed  value) ;

constexpr void __cordl_internal_set_optPlayersOutOfRoomGameMode(bool  value) ;

constexpr void __cordl_internal_set_preDrainWaitTime(float_t  value) ;

constexpr void __cordl_internal_set_prevTime(double_t  value) ;

constexpr void __cordl_internal_set_refreshWaterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

constexpr void __cordl_internal_set_reliableState(::GlobalNamespace::ScienceExperimentManager_SyncData  value) ;

constexpr void __cordl_internal_set_ringParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ringRotationProgress(float_t  value) ;

constexpr void __cordl_internal_set_riseProgress(float_t  value) ;

constexpr void __cordl_internal_set_riseProgressLinear(float_t  value) ;

constexpr void __cordl_internal_set_riseTime(float_t  value) ;

constexpr void __cordl_internal_set_riseTimeExtraSlow(float_t  value) ;

constexpr void __cordl_internal_set_riseTimeFast(float_t  value) ;

constexpr void __cordl_internal_set_riseTimeLookup(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_riseTimeMedium(float_t  value) ;

constexpr void __cordl_internal_set_riseTimeSlow(float_t  value) ;

constexpr void __cordl_internal_set_rotateRingsCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_rotatingRingAngleSnapDegrees(float_t  value) ;

constexpr void __cordl_internal_set_rotatingRingQuantizeAngles(bool  value) ;

constexpr void __cordl_internal_set_rotatingRingRandomAngleRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_rotatingRings(::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>  value) ;

constexpr void __cordl_internal_set_rotatingRingsAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_sodaFizzParticleEmissionMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_sodaWaterProjectileTriggerNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value) ;

constexpr void __cordl_internal_set_sortedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>*  value) ;

constexpr void __cordl_internal_set_tagBehavior(::GlobalNamespace::ScienceExperimentManager_TagBehavior  value) ;

constexpr void __cordl_internal_set_waterBalloonPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5d30ab0, size 0x2d8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTag::ScienceExperimentManager> getStaticF_instance() ;

/// @brief Method get_Data, addr 0x5d2ebd8, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData get_Data() ;

/// @brief Method get_GameState, addr 0x5d2a350, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState get_GameState() ;

/// @brief Method get_PlayerCount, addr 0x5d2a368, size 0x8c, virtual false, abstract: false, final false
inline int32_t get_PlayerCount() ;

/// @brief Method get_RefreshWaterAvailable, addr 0x5d2a300, size 0x50, virtual false, abstract: false, final false
inline bool get_RefreshWaterAvailable() ;

/// @brief Method get_RiseProgress, addr 0x5d2a358, size 0x8, virtual false, abstract: false, final false
inline float_t get_RiseProgress() ;

/// @brief Method get_RiseProgressLinear, addr 0x5d2a360, size 0x8, virtual false, abstract: false, final false
inline float_t get_RiseProgressLinear() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF_instance(::UnityW<::GorillaTag::ScienceExperimentManager>  value) ;

/// @brief Method set_Data, addr 0x5d2ec38, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::ScienceExperimentManager_ScienceManagerData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScienceExperimentManager(ScienceExperimentManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScienceExperimentManager(ScienceExperimentManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4643};

/// @brief Field maxPlayerCount offset 0xffffffff size 0x4
static constexpr int32_t  maxPlayerCount{static_cast<int32_t>(0xa)};

/// [SerializeField]
/// @brief Field tagBehavior, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::ScienceExperimentManager_TagBehavior  ___tagBehavior;

/// [SerializeField]
/// @brief Field minScale, offset: 0xa0, size: 0x4, def value: None
 float_t  ___minScale;

/// [SerializeField]
/// @brief Field maxScale, offset: 0xa4, size: 0x4, def value: None
 float_t  ___maxScale;

/// [SerializeField]
/// @brief Field riseTimeFast, offset: 0xa8, size: 0x4, def value: None
 float_t  ___riseTimeFast;

/// [SerializeField]
/// @brief Field riseTimeMedium, offset: 0xac, size: 0x4, def value: None
 float_t  ___riseTimeMedium;

/// [SerializeField]
/// @brief Field riseTimeSlow, offset: 0xb0, size: 0x4, def value: None
 float_t  ___riseTimeSlow;

/// [SerializeField]
/// @brief Field riseTimeExtraSlow, offset: 0xb4, size: 0x4, def value: None
 float_t  ___riseTimeExtraSlow;

/// [SerializeField]
/// @brief Field preDrainWaitTime, offset: 0xb8, size: 0x4, def value: None
 float_t  ___preDrainWaitTime;

/// [SerializeField]
/// @brief Field maxFullTime, offset: 0xbc, size: 0x4, def value: None
 float_t  ___maxFullTime;

/// [SerializeField]
/// @brief Field drainTime, offset: 0xc0, size: 0x4, def value: None
 float_t  ___drainTime;

/// [SerializeField]
/// @brief Field fullyDrainedWaitTime, offset: 0xc4, size: 0x4, def value: None
 float_t  ___fullyDrainedWaitTime;

/// [SerializeField]
/// @brief Field lagResolutionLavaProgressPerSecond, offset: 0xc8, size: 0x4, def value: None
 float_t  ___lagResolutionLavaProgressPerSecond;

/// [SerializeField]
/// @brief Field animationCurve, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___animationCurve;

/// [SerializeField]
/// @brief Field lavaProgressToDisableRefreshWater, offset: 0xd8, size: 0x4, def value: None
 float_t  ___lavaProgressToDisableRefreshWater;

/// [SerializeField]
/// @brief Field lavaProgressToEnableRefreshWater, offset: 0xdc, size: 0x4, def value: None
 float_t  ___lavaProgressToEnableRefreshWater;

/// [SerializeField]
/// @brief Field entryLiquidMaxScale, offset: 0xe0, size: 0x4, def value: None
 float_t  ___entryLiquidMaxScale;

/// [SerializeField]
/// @brief Field entryLiquidScaleSyncOpeningTop, offset: 0xe4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___entryLiquidScaleSyncOpeningTop;

/// [SerializeField]
/// @brief Field entryLiquidScaleSyncOpeningBottom, offset: 0xec, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___entryLiquidScaleSyncOpeningBottom;

/// [SerializeField]
/// @brief Field entryBridgeQuadMaxScaleY, offset: 0xf4, size: 0x4, def value: None
 float_t  ___entryBridgeQuadMaxScaleY;

/// [SerializeField]
/// @brief Field entryBridgeQuadMinMaxZHeight, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___entryBridgeQuadMinMaxZHeight;

/// [SerializeField]
/// @brief Field lavaActivationRockProgressVsPlayerCount, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lavaActivationRockProgressVsPlayerCount;

/// [SerializeField]
/// @brief Field lavaActivationDrainRateVsPlayerCount, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___lavaActivationDrainRateVsPlayerCount;

/// [SerializeField]
/// @brief Field waterBalloonPrefab, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waterBalloonPrefab;

/// [SerializeField]
/// @brief Field rotatingRingRandomAngleRange, offset: 0x118, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rotatingRingRandomAngleRange;

/// [SerializeField]
/// @brief Field rotatingRingQuantizeAngles, offset: 0x120, size: 0x1, def value: None
 bool  ___rotatingRingQuantizeAngles;

/// [SerializeField]
/// @brief Field rotatingRingAngleSnapDegrees, offset: 0x124, size: 0x4, def value: None
 float_t  ___rotatingRingAngleSnapDegrees;

/// [SerializeField]
/// @brief Field drainBlockerSlideTime, offset: 0x128, size: 0x4, def value: None
 float_t  ___drainBlockerSlideTime;

/// [SerializeField]
/// @brief Field sodaFizzParticleEmissionMinMax, offset: 0x12c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___sodaFizzParticleEmissionMinMax;

/// [SerializeField]
/// @brief Field infrequentUpdatePeriod, offset: 0x134, size: 0x4, def value: None
 float_t  ___infrequentUpdatePeriod;

/// [SerializeField]
/// @brief Field optPlayersOutOfRoomGameMode, offset: 0x138, size: 0x1, def value: None
 bool  ___optPlayersOutOfRoomGameMode;

/// [SerializeField]
/// @brief Field debugDrawPlayerGameState, offset: 0x139, size: 0x1, def value: None
 bool  ___debugDrawPlayerGameState;

/// @brief Field elements, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ScienceExperimentSceneElements>  ___elements;

/// @brief Field allPlayersInRoom, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetPlayer*>  ___allPlayersInRoom;

/// @brief Field rotatingRings, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>  ___rotatingRings;

/// @brief Field inGamePlayerStates, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>  ___inGamePlayerStates;

/// @brief Field inGamePlayerCount, offset: 0x160, size: 0x4, def value: None
 int32_t  ___inGamePlayerCount;

/// @brief Field lastWinnerId, offset: 0x164, size: 0x4, def value: None
 int32_t  ___lastWinnerId;

/// @brief Field lastWinnerName, offset: 0x168, size: 0x8, def value: None
 ::StringW  ___lastWinnerName;

/// @brief Field sortedPlayerStates, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>*  ___sortedPlayerStates;

/// @brief Field reliableState, offset: 0x178, size: 0x20, def value: None
 ::GlobalNamespace::ScienceExperimentManager_SyncData  ___reliableState;

/// @brief Field nextRoundRiseSpeed, offset: 0x198, size: 0x4, def value: None
 ::GlobalNamespace::ScienceExperimentManager_RiseSpeed  ___nextRoundRiseSpeed;

/// @brief Field riseTime, offset: 0x19c, size: 0x4, def value: None
 float_t  ___riseTime;

/// @brief Field riseProgress, offset: 0x1a0, size: 0x4, def value: None
 float_t  ___riseProgress;

/// @brief Field riseProgressLinear, offset: 0x1a4, size: 0x4, def value: None
 float_t  ___riseProgressLinear;

/// @brief Field localLagRiseProgressOffset, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___localLagRiseProgressOffset;

/// @brief Field lastInfrequentUpdateTime, offset: 0x1b0, size: 0x8, def value: None
 double_t  ___lastInfrequentUpdateTime;

/// @brief Field mentoProjectileTag, offset: 0x1b8, size: 0x8, def value: None
 ::StringW  ___mentoProjectileTag;

/// @brief Field currentTime, offset: 0x1c0, size: 0x8, def value: None
 double_t  ___currentTime;

/// @brief Field prevTime, offset: 0x1c8, size: 0x8, def value: None
 double_t  ___prevTime;

/// @brief Field ringRotationProgress, offset: 0x1d0, size: 0x4, def value: None
 float_t  ___ringRotationProgress;

/// @brief Field drainBlockerSlideSpeed, offset: 0x1d4, size: 0x4, def value: None
 float_t  ___drainBlockerSlideSpeed;

/// @brief Field riseTimeLookup, offset: 0x1d8, size: 0x8, def value: None
 ::ArrayW<float_t>  ___riseTimeLookup;

/// [Header("Scene References")]
/// @brief Field ringParent, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ringParent;

/// @brief Field liquidMeshTransform, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___liquidMeshTransform;

/// @brief Field liquidSurfacePlane, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___liquidSurfacePlane;

/// @brief Field entryWayLiquidMeshTransform, offset: 0x1f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___entryWayLiquidMeshTransform;

/// @brief Field entryWayBridgeQuadTransform, offset: 0x200, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___entryWayBridgeQuadTransform;

/// @brief Field drainBlocker, offset: 0x208, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___drainBlocker;

/// @brief Field drainBlockerClosedPosition, offset: 0x210, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___drainBlockerClosedPosition;

/// @brief Field drainBlockerOpenPosition, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___drainBlockerOpenPosition;

/// @brief Field liquidVolume, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___liquidVolume;

/// @brief Field entryLiquidVolume, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___entryLiquidVolume;

/// @brief Field bottleLiquidVolume, offset: 0x230, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___bottleLiquidVolume;

/// @brief Field refreshWaterVolume, offset: 0x238, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___refreshWaterVolume;

/// @brief Field gameAreaTriggerNotifier, offset: 0x240, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  ___gameAreaTriggerNotifier;

/// @brief Field sodaWaterProjectileTriggerNotifier, offset: 0x248, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  ___sodaWaterProjectileTriggerNotifier;

/// @brief Field eruptionAudioSource, offset: 0x250, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___eruptionAudioSource;

/// @brief Field drainAudioSource, offset: 0x258, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___drainAudioSource;

/// @brief Field rotatingRingsAudioSource, offset: 0x260, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___rotatingRingsAudioSource;

/// @brief Field fizzParticleEmission, offset: 0x268, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ___fizzParticleEmission;

/// @brief Field hasPlayedEruptionEffects, offset: 0x270, size: 0x1, def value: None
 bool  ___hasPlayedEruptionEffects;

/// @brief Field hasPlayedDrainEffects, offset: 0x271, size: 0x1, def value: None
 bool  ___hasPlayedDrainEffects;

/// [CompilerGenerated]
/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset: 0x272, size: 0x1, def value: None
 bool  ____ITickSystemTick_TickRunning_k__BackingField;

/// [SerializeField]
/// @brief Field debugRotateRingsTime, offset: 0x274, size: 0x4, def value: None
 float_t  ___debugRotateRingsTime;

/// @brief Field rotateRingsCoroutine, offset: 0x278, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___rotateRingsCoroutine;

/// @brief Field debugRandomizingRings, offset: 0x280, size: 0x1, def value: None
 bool  ___debugRandomizingRings;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 76)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0x288, size: 0x130, def value: None
 ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___tagBehavior) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___minScale) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___maxScale) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___riseTimeFast) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___riseTimeMedium) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___riseTimeSlow) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___riseTimeExtraSlow) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___preDrainWaitTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___maxFullTime) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___drainTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___fullyDrainedWaitTime) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___lagResolutionLavaProgressPerSecond) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___animationCurve) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___lavaProgressToDisableRefreshWater) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___lavaProgressToEnableRefreshWater) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___entryLiquidMaxScale) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___entryLiquidScaleSyncOpeningTop) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___entryLiquidScaleSyncOpeningBottom) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___entryBridgeQuadMaxScaleY) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___entryBridgeQuadMinMaxZHeight) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___lavaActivationRockProgressVsPlayerCount) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___lavaActivationDrainRateVsPlayerCount) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___waterBalloonPrefab) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___rotatingRingRandomAngleRange) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___rotatingRingQuantizeAngles) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___rotatingRingAngleSnapDegrees) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___drainBlockerSlideTime) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___sodaFizzParticleEmissionMinMax) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___infrequentUpdatePeriod) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___optPlayersOutOfRoomGameMode) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___debugDrawPlayerGameState) == 0x139, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___elements) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___allPlayersInRoom) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___rotatingRings) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___inGamePlayerStates) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___inGamePlayerCount) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___lastWinnerId) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___lastWinnerName) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___sortedPlayerStates) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___reliableState) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___nextRoundRiseSpeed) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___riseTime) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___riseProgress) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___riseProgressLinear) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___localLagRiseProgressOffset) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___lastInfrequentUpdateTime) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___mentoProjectileTag) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___currentTime) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___prevTime) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___ringRotationProgress) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___drainBlockerSlideSpeed) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___riseTimeLookup) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___ringParent) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___liquidMeshTransform) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___liquidSurfacePlane) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___entryWayLiquidMeshTransform) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___entryWayBridgeQuadTransform) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___drainBlocker) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___drainBlockerClosedPosition) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___drainBlockerOpenPosition) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___liquidVolume) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___entryLiquidVolume) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___bottleLiquidVolume) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___refreshWaterVolume) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___gameAreaTriggerNotifier) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___sodaWaterProjectileTriggerNotifier) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___eruptionAudioSource) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___drainAudioSource) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___rotatingRingsAudioSource) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___fizzParticleEmission) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___hasPlayedEruptionEffects) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___hasPlayedDrainEffects) == 0x271, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ____ITickSystemTick_TickRunning_k__BackingField) == 0x272, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___debugRotateRingsTime) == 0x274, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___rotateRingsCoroutine) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ___debugRandomizingRings) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager, ____Data) == 0x288, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::ScienceExperimentManager) == 0x3b8, "Size mismatch!");

} // namespace end def GorillaTag
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.ScienceExperimentManager/<RotateRingsCoroutine>d__123
class CORDL_TYPE ScienceExperimentManager__RotateRingsCoroutine_d__123 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::ScienceExperimentManager>  __4__this;

/// @brief Field <routineStartTime>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__routineStartTime_5__2, put=__cordl_internal_set__routineStartTime_5__2)) float_t  _routineStartTime_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d31f4c, size 0xd8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d32024, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d3202c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d32064, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d31f48, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTag::ScienceExperimentManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::ScienceExperimentManager>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__routineStartTime_5__2() const;

constexpr float_t& __cordl_internal_get__routineStartTime_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::ScienceExperimentManager>  value) ;

constexpr void __cordl_internal_set__routineStartTime_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d31f20, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager__RotateRingsCoroutine_d__123() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentManager__RotateRingsCoroutine_d__123", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScienceExperimentManager__RotateRingsCoroutine_d__123(ScienceExperimentManager__RotateRingsCoroutine_d__123 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScienceExperimentManager__RotateRingsCoroutine_d__123", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScienceExperimentManager__RotateRingsCoroutine_d__123(ScienceExperimentManager__RotateRingsCoroutine_d__123 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4642};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::ScienceExperimentManager>  _____4__this;

/// @brief Field <routineStartTime>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____routineStartTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123, ____routineStartTime_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag
