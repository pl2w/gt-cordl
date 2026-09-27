#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersPawn.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPawn_CreatureState_def.hpp"
#include "GlobalNamespace/zzzz__KeyValueStringPair_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersPawn)
namespace GlobalNamespace {
class CritterConfiguration;
}
namespace GlobalNamespace {
class CritterVisuals;
}
namespace GlobalNamespace {
struct CrittersActor_CrittersActorType;
}
namespace GlobalNamespace {
class CrittersActor;
}
namespace GlobalNamespace {
class CrittersAnim;
}
namespace GlobalNamespace {
class CrittersCage;
}
namespace GlobalNamespace {
class CrittersFood;
}
namespace GlobalNamespace {
class CrittersGrabber;
}
namespace GlobalNamespace {
struct CrittersPawn_CreatureState;
}
namespace GlobalNamespace {
struct CrittersPawn_CreatureUpdateData;
}
namespace GlobalNamespace {
class IEyeScannable;
}
namespace GlobalNamespace {
struct KeyValueStringPair;
}
namespace GlobalNamespace {
struct crittersAttractorStruct;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
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
class CrittersPawn;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersPawn*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersPawn*, "", "CrittersPawn");
// Dependencies CrittersActor, CrittersPawn::CreatureState, KeyValueStringPair, UnityEngine.Color, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersPawn
class CORDL_TYPE CrittersPawn : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
using CreatureState = ::GlobalNamespace::CrittersPawn_CreatureState;

using CreatureUpdateData = ::GlobalNamespace::CrittersPawn_CreatureUpdateData;

 __declspec(property(get=IEyeScannable_get_Bounds)) ::UnityEngine::Bounds  IEyeScannable_Bounds;

 __declspec(property(get=IEyeScannable_get_Entries)) ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*  IEyeScannable_Entries;

 __declspec(property(get=IEyeScannable_get_Position)) ::UnityEngine::Vector3  IEyeScannable_Position;

 __declspec(property(get=IEyeScannable_get_scannableId)) int32_t  IEyeScannable_scannableId;

/// @brief Field LastTemplateIndex, offset 0x2f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastTemplateIndex, put=__cordl_internal_set_LastTemplateIndex)) int32_t  LastTemplateIndex;

/// @brief Field OnDataChange, offset 0x458, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDataChange, put=__cordl_internal_set_OnDataChange)) ::System::Action*  OnDataChange;

/// @brief Field OnReleasedFX, offset 0x330, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReleasedFX, put=__cordl_internal_set_OnReleasedFX)) ::UnityW<::UnityEngine::GameObject>  OnReleasedFX;

/// @brief Field OngoingStateFX, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get_OngoingStateFX, put=__cordl_internal_set_OngoingStateFX)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*  OngoingStateFX;

/// @brief Field StartStateFX, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartStateFX, put=__cordl_internal_set_StartStateFX)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*  StartStateFX;

/// @brief Field TemplateIndex, offset 0x2f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_TemplateIndex, put=__cordl_internal_set_TemplateIndex)) int32_t  TemplateIndex;

/// @brief Field _despawnAnimTime, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__despawnAnimTime, put=__cordl_internal_set__despawnAnimTime)) double_t  _despawnAnimTime;

/// @brief Field _despawnAnimationDuration, offset 0x39c, size 0x4 
 __declspec(property(get=__cordl_internal_get__despawnAnimationDuration, put=__cordl_internal_set__despawnAnimationDuration)) float_t  _despawnAnimationDuration;

/// @brief Field _nextDespawnCheck, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextDespawnCheck, put=__cordl_internal_set__nextDespawnCheck)) double_t  _nextDespawnCheck;

/// @brief Field _nextStuckCheck, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextStuckCheck, put=__cordl_internal_set__nextStuckCheck)) double_t  _nextStuckCheck;

/// @brief Field _spawnAnimTime, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnAnimTime, put=__cordl_internal_set__spawnAnimTime)) double_t  _spawnAnimTime;

/// @brief Field _spawnAnimationDuration, offset 0x398, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnAnimationDuration, put=__cordl_internal_set__spawnAnimationDuration)) float_t  _spawnAnimationDuration;

/// @brief Field actorIdTarget, offset 0x2a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorIdTarget, put=__cordl_internal_set_actorIdTarget)) int32_t  actorIdTarget;

/// @brief Field afraidOfList, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_afraidOfList, put=__cordl_internal_set_afraidOfList)) ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  afraidOfList;

/// @brief Field afraidOfTypes, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_afraidOfTypes, put=__cordl_internal_set_afraidOfTypes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  afraidOfTypes;

/// @brief Field animTarget, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_animTarget, put=__cordl_internal_set_animTarget)) ::UnityW<::UnityEngine::Transform>  animTarget;

/// @brief Field attractedThreshold, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_attractedThreshold, put=__cordl_internal_set_attractedThreshold)) float_t  attractedThreshold;

/// @brief Field attractedToList, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_attractedToList, put=__cordl_internal_set_attractedToList)) ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  attractedToList;

/// @brief Field attractedToTypes, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_attractedToTypes, put=__cordl_internal_set_attractedToTypes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  attractedToTypes;

/// @brief Field attractionLostPerSecond, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_attractionLostPerSecond, put=__cordl_internal_set_attractionLostPerSecond)) float_t  attractionLostPerSecond;

/// @brief Field attractionTarget, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_attractionTarget, put=__cordl_internal_set_attractionTarget)) ::UnityW<::GlobalNamespace::CrittersActor>  attractionTarget;

/// @brief Field autoSeeFoodDistance, offset 0x2c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoSeeFoodDistance, put=__cordl_internal_set_autoSeeFoodDistance)) float_t  autoSeeFoodDistance;

/// @brief Field awakeThreshold, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_awakeThreshold, put=__cordl_internal_set_awakeThreshold)) float_t  awakeThreshold;

/// @brief Field bodyCollider, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollider, put=__cordl_internal_set_bodyCollider)) ::UnityW<::UnityEngine::Collider>  bodyCollider;

/// @brief Field cageTarget, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_cageTarget, put=__cordl_internal_set_cageTarget)) ::UnityW<::GlobalNamespace::CrittersCage>  cageTarget;

/// @brief Field calmThreshold, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_calmThreshold, put=__cordl_internal_set_calmThreshold)) float_t  calmThreshold;

/// @brief Field canJump, offset 0x2e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_canJump, put=__cordl_internal_set_canJump)) bool  canJump;

/// @brief Field catchableThreshold, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchableThreshold, put=__cordl_internal_set_catchableThreshold)) float_t  catchableThreshold;

/// @brief Field creatureConfiguration, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatureConfiguration, put=__cordl_internal_set_creatureConfiguration)) ::GlobalNamespace::CritterConfiguration*  creatureConfiguration;

/// @brief Field currentAnim, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentAnim, put=__cordl_internal_set_currentAnim)) ::GlobalNamespace::CrittersAnim*  currentAnim;

/// @brief Field currentAnimTime, offset 0x350, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAnimTime, put=__cordl_internal_set_currentAnimTime)) float_t  currentAnimTime;

/// @brief Field currentAttraction, offset 0x244, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAttraction, put=__cordl_internal_set_currentAttraction)) float_t  currentAttraction;

/// @brief Field currentFear, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFear, put=__cordl_internal_set_currentFear)) float_t  currentFear;

/// @brief Field currentHunger, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentHunger, put=__cordl_internal_set_currentHunger)) float_t  currentHunger;

/// @brief Field currentOngoingStateFX, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentOngoingStateFX, put=__cordl_internal_set_currentOngoingStateFX)) ::UnityW<::UnityEngine::GameObject>  currentOngoingStateFX;

/// @brief Field currentSleepiness, offset 0x248, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSleepiness, put=__cordl_internal_set_currentSleepiness)) float_t  currentSleepiness;

/// @brief Field currentState, offset 0x238, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::CrittersPawn_CreatureState  currentState;

/// @brief Field currentStruggle, offset 0x24c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentStruggle, put=__cordl_internal_set_currentStruggle)) float_t  currentStruggle;

/// @brief Field debugColorAttracted, offset 0x438, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugColorAttracted, put=__cordl_internal_set_debugColorAttracted)) ::UnityEngine::Color  debugColorAttracted;

/// @brief Field debugColorCaged, offset 0x418, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugColorCaged, put=__cordl_internal_set_debugColorCaged)) ::UnityEngine::Color  debugColorCaged;

/// @brief Field debugColorCaught, offset 0x408, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugColorCaught, put=__cordl_internal_set_debugColorCaught)) ::UnityEngine::Color  debugColorCaught;

/// @brief Field debugColorEating, offset 0x3d8, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugColorEating, put=__cordl_internal_set_debugColorEating)) ::UnityEngine::Color  debugColorEating;

/// @brief Field debugColorIdle, offset 0x3b8, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugColorIdle, put=__cordl_internal_set_debugColorIdle)) ::UnityEngine::Color  debugColorIdle;

/// @brief Field debugColorScared, offset 0x3e8, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugColorScared, put=__cordl_internal_set_debugColorScared)) ::UnityEngine::Color  debugColorScared;

/// @brief Field debugColorSeekingFood, offset 0x3c8, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugColorSeekingFood, put=__cordl_internal_set_debugColorSeekingFood)) ::UnityEngine::Color  debugColorSeekingFood;

/// @brief Field debugColorSleeping, offset 0x3f8, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugColorSleeping, put=__cordl_internal_set_debugColorSleeping)) ::UnityEngine::Color  debugColorSleeping;

/// @brief Field debugColorStunned, offset 0x428, size 0x10 
 __declspec(property(get=__cordl_internal_get_debugColorStunned, put=__cordl_internal_set_debugColorStunned)) ::UnityEngine::Color  debugColorStunned;

/// @brief Field debugStateIndicator, offset 0x3b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugStateIndicator, put=__cordl_internal_set_debugStateIndicator)) ::UnityW<::UnityEngine::MeshRenderer>  debugStateIndicator;

/// @brief Field despawnInHeighMovement, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_despawnInHeighMovement, put=__cordl_internal_set_despawnInHeighMovement)) ::UnityEngine::AnimationCurve*  despawnInHeighMovement;

/// @brief Field despawnStartTime, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_despawnStartTime, put=__cordl_internal_set_despawnStartTime)) double_t  despawnStartTime;

/// @brief Field eatingRadiusMaxSquared, offset 0x2a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_eatingRadiusMaxSquared, put=__cordl_internal_set_eatingRadiusMaxSquared)) float_t  eatingRadiusMaxSquared;

/// @brief Field eatingTarget, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_eatingTarget, put=__cordl_internal_set_eatingTarget)) ::UnityW<::GlobalNamespace::CrittersFood>  eatingTarget;

/// @brief Field escapeThreshold, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_escapeThreshold, put=__cordl_internal_set_escapeThreshold)) float_t  escapeThreshold;

/// @brief Field eyeScanData, offset 0x450, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeScanData, put=__cordl_internal_set_eyeScanData)) ::ArrayW<::GlobalNamespace::KeyValueStringPair>  eyeScanData;

/// @brief Field fearLostPerSecond, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_fearLostPerSecond, put=__cordl_internal_set_fearLostPerSecond)) float_t  fearLostPerSecond;

/// @brief Field fearTarget, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_fearTarget, put=__cordl_internal_set_fearTarget)) ::UnityW<::GlobalNamespace::CrittersActor>  fearTarget;

/// @brief Field fudge, offset 0x2d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_fudge, put=__cordl_internal_set_fudge)) float_t  fudge;

/// @brief Field grabbedHaptics, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedHaptics, put=__cordl_internal_set_grabbedHaptics)) ::UnityW<::UnityEngine::AudioClip>  grabbedHaptics;

/// @brief Field grabbedHapticsStrength, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbedHapticsStrength, put=__cordl_internal_set_grabbedHapticsStrength)) float_t  grabbedHapticsStrength;

/// @brief Field grabbedTarget, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedTarget, put=__cordl_internal_set_grabbedTarget)) ::UnityW<::GlobalNamespace::CrittersGrabber>  grabbedTarget;

/// @brief Field hat, offset 0x2e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_hat, put=__cordl_internal_set_hat)) ::UnityW<::UnityEngine::Transform>  hat;

/// @brief Field hungerGainedPerSecond, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_hungerGainedPerSecond, put=__cordl_internal_set_hungerGainedPerSecond)) float_t  hungerGainedPerSecond;

/// @brief Field hungerLostPerSecond, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_hungerLostPerSecond, put=__cordl_internal_set_hungerLostPerSecond)) float_t  hungerLostPerSecond;

/// @brief Field hungryThreshold, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_hungryThreshold, put=__cordl_internal_set_hungryThreshold)) float_t  hungryThreshold;

/// @brief Field jumpCooldown, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpCooldown, put=__cordl_internal_set_jumpCooldown)) float_t  jumpCooldown;

/// @brief Field jumpVariabilityTime, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpVariabilityTime, put=__cordl_internal_set_jumpVariabilityTime)) float_t  jumpVariabilityTime;

/// @brief Field killHeight, offset 0x308, size 0x4 
 __declspec(property(get=__cordl_internal_get_killHeight, put=__cordl_internal_set_killHeight)) float_t  killHeight;

/// @brief Field lastSeenAttractionPosition, offset 0x284, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastSeenAttractionPosition, put=__cordl_internal_set_lastSeenAttractionPosition)) ::UnityEngine::Vector3  lastSeenAttractionPosition;

/// @brief Field lastSeenFearPosition, offset 0x278, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastSeenFearPosition, put=__cordl_internal_set_lastSeenFearPosition)) ::UnityEngine::Vector3  lastSeenFearPosition;

/// @brief Field lifeTime, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_lifeTime, put=__cordl_internal_set_lifeTime)) double_t  lifeTime;

/// @brief Field lifeTimeStart, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_lifeTimeStart, put=__cordl_internal_set_lifeTimeStart)) double_t  lifeTimeStart;

/// @brief Field maxAttraction, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxAttraction, put=__cordl_internal_set_maxAttraction)) float_t  maxAttraction;

/// @brief Field maxFear, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFear, put=__cordl_internal_set_maxFear)) float_t  maxFear;

/// @brief Field maxHunger, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHunger, put=__cordl_internal_set_maxHunger)) float_t  maxHunger;

/// @brief Field maxJumpVel, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxJumpVel, put=__cordl_internal_set_maxJumpVel)) float_t  maxJumpVel;

/// @brief Field maxSleepiness, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSleepiness, put=__cordl_internal_set_maxSleepiness)) float_t  maxSleepiness;

/// @brief Field maxStruggle, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxStruggle, put=__cordl_internal_set_maxStruggle)) float_t  maxStruggle;

/// @brief Field myRenderer, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRenderer, put=__cordl_internal_set_myRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  myRenderer;

/// @brief Field obstacleSeeDistance, offset 0x2d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_obstacleSeeDistance, put=__cordl_internal_set_obstacleSeeDistance)) float_t  obstacleSeeDistance;

/// @brief Field rB, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_rB, put=__cordl_internal_set_rB)) ::UnityW<::UnityEngine::Rigidbody>  rB;

/// @brief Field raycastHits, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_raycastHits, put=__cordl_internal_set_raycastHits)) ::ArrayW<::UnityEngine::RaycastHit>  raycastHits;

/// @brief Field regionId, offset 0x448, size 0x4 
 __declspec(property(get=__cordl_internal_get_regionId, put=__cordl_internal_set_regionId)) int32_t  regionId;

/// @brief Field remainingSlowedTime, offset 0x310, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingSlowedTime, put=__cordl_internal_set_remainingSlowedTime)) float_t  remainingSlowedTime;

/// @brief Field remainingStunnedTime, offset 0x30c, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingStunnedTime, put=__cordl_internal_set_remainingStunnedTime)) float_t  remainingStunnedTime;

/// @brief Field satiatedThreshold, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_satiatedThreshold, put=__cordl_internal_set_satiatedThreshold)) float_t  satiatedThreshold;

/// @brief Field scaredJumpCooldown, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaredJumpCooldown, put=__cordl_internal_set_scaredJumpCooldown)) float_t  scaredJumpCooldown;

/// @brief Field scaredThreshold, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaredThreshold, put=__cordl_internal_set_scaredThreshold)) float_t  scaredThreshold;

/// @brief Field sensoryRange, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_sensoryRange, put=__cordl_internal_set_sensoryRange)) float_t  sensoryRange;

/// @brief Field sleepinessGainedPerSecond, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepinessGainedPerSecond, put=__cordl_internal_set_sleepinessGainedPerSecond)) float_t  sleepinessGainedPerSecond;

/// @brief Field sleepinessLostPerSecond, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepinessLostPerSecond, put=__cordl_internal_set_sleepinessLostPerSecond)) float_t  sleepinessLostPerSecond;

/// @brief Field slowSpeedMod, offset 0x314, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowSpeedMod, put=__cordl_internal_set_slowSpeedMod)) float_t  slowSpeedMod;

/// @brief Field soundsHeard, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundsHeard, put=__cordl_internal_set_soundsHeard)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*  soundsHeard;

/// @brief Field spawnInHeighMovement, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnInHeighMovement, put=__cordl_internal_set_spawnInHeighMovement)) ::UnityEngine::AnimationCurve*  spawnInHeighMovement;

/// @brief Field spawnStartTime, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnStartTime, put=__cordl_internal_set_spawnStartTime)) double_t  spawnStartTime;

/// @brief Field spawningStartingPosition, offset 0x378, size 0xc 
 __declspec(property(get=__cordl_internal_get_spawningStartingPosition, put=__cordl_internal_set_spawningStartingPosition)) ::UnityEngine::Vector3  spawningStartingPosition;

/// @brief Field stateAnim, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateAnim, put=__cordl_internal_set_stateAnim)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::GlobalNamespace::CrittersAnim*>*  stateAnim;

/// @brief Field struggleGainedPerSecond, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get_struggleGainedPerSecond, put=__cordl_internal_set_struggleGainedPerSecond)) float_t  struggleGainedPerSecond;

/// @brief Field struggleLostPerSecond, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get_struggleLostPerSecond, put=__cordl_internal_set_struggleLostPerSecond)) float_t  struggleLostPerSecond;

/// @brief Field tiredThreshold, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiredThreshold, put=__cordl_internal_set_tiredThreshold)) float_t  tiredThreshold;

/// @brief Field unattractedThreshold, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_unattractedThreshold, put=__cordl_internal_set_unattractedThreshold)) float_t  unattractedThreshold;

/// @brief Field visionConeAngle, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_visionConeAngle, put=__cordl_internal_set_visionConeAngle)) float_t  visionConeAngle;

/// @brief Field visuals, offset 0x318, size 0x8 
 __declspec(property(get=__cordl_internal_get_visuals, put=__cordl_internal_set_visuals)) ::UnityW<::GlobalNamespace::CritterVisuals>  visuals;

/// @brief Field wasSomethingInTheWay, offset 0x2e1, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasSomethingInTheWay, put=__cordl_internal_set_wasSomethingInTheWay)) bool  wasSomethingInTheWay;

/// @brief Field withinEatingRadius, offset 0x2a8, size 0x1 
 __declspec(property(get=__cordl_internal_get_withinEatingRadius, put=__cordl_internal_set_withinEatingRadius)) bool  withinEatingRadius;

/// @brief Convert operator to "::GlobalNamespace::IEyeScannable"
constexpr operator  ::GlobalNamespace::IEyeScannable*() noexcept;

/// @brief Method AboveAttractedThreshold, addr 0x560c4c8, size 0x14, virtual false, abstract: false, final false
inline bool AboveAttractedThreshold() ;

/// @brief Method AboveFearThreshold, addr 0x560c4b4, size 0x14, virtual false, abstract: false, final false
inline bool AboveFearThreshold() ;

/// @brief Method AboveHungryThreshold, addr 0x560c4dc, size 0x14, virtual false, abstract: false, final false
inline bool AboveHungryThreshold() ;

/// @brief Method AboveSleepyThreshold, addr 0x560c4f0, size 0x14, virtual false, abstract: false, final false
inline bool AboveSleepyThreshold() ;

/// @brief Method AddActorDataToList, addr 0x560e184, size 0x76c, virtual true, abstract: false, final false
inline int32_t AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList) ;

/// @brief Method AttractedStateUpdate, addr 0x560b0c0, size 0x164, virtual false, abstract: false, final false
inline void AttractedStateUpdate() ;

/// @brief Method AwareOfActor, addr 0x56040d8, size 0x224, virtual false, abstract: false, final false
inline bool AwareOfActor(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method BelowNotAfraidThreshold, addr 0x560cc44, size 0x14, virtual false, abstract: false, final false
inline bool BelowNotAfraidThreshold() ;

/// @brief Method BelowNotHungryThreshold, addr 0x560c6cc, size 0x14, virtual false, abstract: false, final false
inline bool BelowNotHungryThreshold() ;

/// @brief Method BelowNotSleepyThreshold, addr 0x560c6e0, size 0x14, virtual false, abstract: false, final false
inline bool BelowNotSleepyThreshold() ;

/// @brief Method BelowUnAttractedThreshold, addr 0x560c6f4, size 0x14, virtual false, abstract: false, final false
inline bool BelowUnAttractedThreshold() ;

/// @brief Method BuildEyeScannerData, addr 0x560f8e0, size 0x308, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* BuildEyeScannerData() ;

/// @brief Method CanBeGrabbed, addr 0x560dc58, size 0x1c, virtual true, abstract: false, final false
inline bool CanBeGrabbed(::GlobalNamespace::CrittersActor*  grabbedBy) ;

/// @brief Method CanJump, addr 0x560c504, size 0x130, virtual false, abstract: false, final false
inline bool CanJump() ;

/// @brief Method CanSeeActor, addr 0x560a790, size 0x194, virtual false, abstract: false, final false
inline bool CanSeeActor(::UnityEngine::Vector3  actorPosition) ;

/// @brief Method CapturedStateUpdate, addr 0x560b774, size 0x1b8, virtual false, abstract: false, final false
inline void CapturedStateUpdate() ;

/// @brief Method ClearOngoingStateFX, addr 0x560c0c8, size 0x8c, virtual false, abstract: false, final false
inline void ClearOngoingStateFX() ;

/// @brief Method DespawnCheck, addr 0x560ae50, size 0x174, virtual false, abstract: false, final false
inline void DespawnCheck() ;

/// @brief Method DespawningStateUpdate, addr 0x560ba90, size 0xcc, virtual false, abstract: false, final false
inline void DespawningStateUpdate() ;

/// @brief Method EatingStateUpdate, addr 0x560afc4, size 0xc8, virtual false, abstract: false, final false
inline void EatingStateUpdate() ;

/// @brief Method GetAdditiveJumpDelay, addr 0x560a500, size 0x4c, virtual false, abstract: false, final false
inline float_t GetAdditiveJumpDelay() ;

/// @brief Method GetCurrentStateName, addr 0x560fbe8, size 0x1dc, virtual false, abstract: false, final false
inline ::StringW GetCurrentStateName() ;

/// @brief Method GrabbedBy, addr 0x560dc74, size 0x29c, virtual true, abstract: false, final false
inline void GrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing) ;

/// @brief Method GrabbedStateUpdate, addr 0x560b33c, size 0x110, virtual false, abstract: false, final false
inline void GrabbedStateUpdate() ;

/// @brief Method HandleRemoteReleased, addr 0x560cc58, size 0x170, virtual true, abstract: false, final false
inline void HandleRemoteReleased() ;

/// @brief Method IEyeScannable.get_Bounds, addr 0x560f89c, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Bounds IEyeScannable_get_Bounds() ;

/// @brief Method IEyeScannable.get_Entries, addr 0x560f8dc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* IEyeScannable_get_Entries() ;

/// @brief Method IEyeScannable.get_Position, addr 0x560f868, size 0x34, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 IEyeScannable_get_Position() ;

/// @brief Method IEyeScannable.get_scannableId, addr 0x560f848, size 0x20, virtual true, abstract: false, final true
inline int32_t IEyeScannable_get_scannableId() ;

/// @brief Method IdleStateUpdate, addr 0x560ad98, size 0xb8, virtual false, abstract: false, final false
inline void IdleStateUpdate() ;

/// @brief Method IncreaseAttraction, addr 0x55ff934, size 0x68, virtual false, abstract: false, final false
inline void IncreaseAttraction(float_t  attractionAmount, ::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method IncreaseFear, addr 0x55ff7b0, size 0x68, virtual false, abstract: false, final false
inline void IncreaseFear(float_t  fearAmount, ::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method Initialize, addr 0x560a040, size 0x1d0, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method InitializeAttractors, addr 0x560bee4, size 0x1c0, virtual false, abstract: false, final false
inline void InitializeAttractors() ;

/// @brief Method InitializeTemplateValues, addr 0x560a210, size 0x5c, virtual false, abstract: false, final false
inline void InitializeTemplateValues() ;

/// @brief Method IsGrabPossible, addr 0x560a924, size 0xec, virtual false, abstract: false, final false
inline bool IsGrabPossible(::GlobalNamespace::CrittersGrabber*  actor) ;

/// @brief Method JumpAwayFrom, addr 0x560ca5c, size 0x1e8, virtual false, abstract: false, final false
inline void JumpAwayFrom(::UnityEngine::Vector3  targetPos) ;

/// @brief Method JumpTowards, addr 0x560c708, size 0x354, virtual false, abstract: false, final false
inline void JumpTowards(::UnityEngine::Vector3  targetPos) ;

/// @brief Method JumpVelocityForDistanceAtAngle, addr 0x560a26c, size 0xf4, virtual false, abstract: false, final false
inline float_t JumpVelocityForDistanceAtAngle(float_t  horizontalDistance, float_t  angle) ;

/// @brief Method LocalJump, addr 0x560a54c, size 0x244, virtual false, abstract: false, final false
inline void LocalJump(float_t  maxVel, float_t  jumpAngle) ;

static inline ::GlobalNamespace::CrittersPawn* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x560e158, size 0xc, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionExit, addr 0x560e164, size 0x8, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDisable, addr 0x560a430, size 0xd0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x560a360, size 0xd0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessLocal, addr 0x560aaf0, size 0x1d4, virtual true, abstract: false, final false
inline bool ProcessLocal() ;

/// @brief Method ProcessRemote, addr 0x560c0a4, size 0x24, virtual true, abstract: false, final false
inline void ProcessRemote() ;

/// @brief Method RandomJump, addr 0x560c634, size 0x98, virtual false, abstract: false, final false
inline void RandomJump() ;

/// @brief Method Released, addr 0x560cdc8, size 0x31c, virtual true, abstract: false, final false
inline void Released(bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  impulse, ::UnityEngine::Vector3  impulseRotation) ;

/// @brief Method RemoteGrabbedBy, addr 0x560df10, size 0x1fc, virtual true, abstract: false, final false
inline void RemoteGrabbedBy(::GlobalNamespace::CrittersActor*  grabbingActor) ;

/// @brief Method RunningStateUpdate, addr 0x560b224, size 0x118, virtual false, abstract: false, final false
inline void RunningStateUpdate() ;

/// @brief Method SeekingFoodStateUpdate, addr 0x560b44c, size 0x328, virtual false, abstract: false, final false
inline void SeekingFoodStateUpdate() ;

/// @brief Method SendDataByCrittersActorType, addr 0x560f48c, size 0x384, virtual true, abstract: false, final false
inline void SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method SetConfiguration, addr 0x560f810, size 0x38, virtual false, abstract: false, final false
inline void SetConfiguration(::GlobalNamespace::CritterConfiguration*  getRandomConfiguration) ;

/// @brief Method SetSpawnData, addr 0x5607658, size 0x3c, virtual false, abstract: false, final false
inline void SetSpawnData(::ArrayW<::System::Object*>  spawnData) ;

/// @brief Method SetState, addr 0x5605a44, size 0x430, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::CrittersPawn_CreatureState  newState) ;

/// @brief Method SetTemplate, addr 0x5605a3c, size 0x8, virtual false, abstract: false, final false
inline void SetTemplate(int32_t  templateIndex) ;

/// @brief Method SetVelocity, addr 0x560e16c, size 0x18, virtual false, abstract: false, final false
inline void SetVelocity(::UnityEngine::Vector3  linearVelocity) ;

/// @brief Method SleepingStateUpdate, addr 0x560b08c, size 0x34, virtual false, abstract: false, final false
inline void SleepingStateUpdate() ;

/// @brief Method SomethingInTheWay, addr 0x560dae0, size 0x178, virtual false, abstract: false, final false
inline bool SomethingInTheWay(::UnityEngine::Vector3  direction) ;

/// @brief Method SpawningStateUpdate, addr 0x560bb5c, size 0x188, virtual false, abstract: false, final false
inline void SpawningStateUpdate() ;

/// @brief Method StartOngoingStateFX, addr 0x560c154, size 0x180, virtual false, abstract: false, final false
inline void StartOngoingStateFX(::GlobalNamespace::CrittersPawn_CreatureState  state) ;

/// @brief Method StuckCheck, addr 0x560ad04, size 0x94, virtual false, abstract: false, final false
inline void StuckCheck() ;

/// @brief Method Stunned, addr 0x560e10c, size 0x4c, virtual false, abstract: false, final false
inline void Stunned(float_t  duration) ;

/// @brief Method StunnedStateUpdate, addr 0x560b92c, size 0x5c, virtual false, abstract: false, final false
inline void StunnedStateUpdate() ;

/// @brief Method TotalActorDataLength, addr 0x560e8f0, size 0x28, virtual true, abstract: false, final false
inline int32_t TotalActorDataLength() ;

/// @brief Method UpdateCaged, addr 0x560d88c, size 0x254, virtual false, abstract: false, final false
inline void UpdateCaged() ;

/// @brief Method UpdateFearAndAttraction, addr 0x560d1e0, size 0x20c, virtual false, abstract: false, final false
inline void UpdateFearAndAttraction() ;

/// @brief Method UpdateFromRPC, addr 0x560e918, size 0x5fc, virtual true, abstract: false, final false
inline int32_t UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex) ;

/// @brief Method UpdateGrabbed, addr 0x560d6b4, size 0x1d8, virtual false, abstract: false, final false
inline void UpdateGrabbed() ;

/// @brief Method UpdateHunger, addr 0x560d0e4, size 0xfc, virtual false, abstract: false, final false
inline void UpdateHunger() ;

/// @brief Method UpdateMoodSourceData, addr 0x560acc4, size 0x40, virtual false, abstract: false, final false
inline void UpdateMoodSourceData() ;

/// @brief Method UpdateSleepiness, addr 0x560d3ec, size 0x74, virtual false, abstract: false, final false
inline void UpdateSleepiness() ;

/// @brief Method UpdateSlowed, addr 0x560d4dc, size 0x1d8, virtual false, abstract: false, final false
inline void UpdateSlowed() ;

/// @brief Method UpdateSpecificActor, addr 0x560ef14, size 0x578, virtual true, abstract: false, final false
inline bool UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method UpdateStateAnim, addr 0x560bce4, size 0x128, virtual false, abstract: false, final false
inline void UpdateStateAnim() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method UpdateStateColor, addr 0x560c2d4, size 0x1e0, virtual false, abstract: false, final false
inline void UpdateStateColor() ;

/// @brief Method UpdateStruggle, addr 0x560d460, size 0x7c, virtual false, abstract: false, final false
inline void UpdateStruggle() ;

/// @brief Method UpdateTemplate, addr 0x560be0c, size 0xd8, virtual false, abstract: false, final false
inline void UpdateTemplate() ;

/// @brief Method WaitingToDespawnStateUpdate, addr 0x560b988, size 0x108, virtual false, abstract: false, final false
inline void WaitingToDespawnStateUpdate() ;

/// @brief Method WithinCaptureDistance, addr 0x560aa10, size 0xe0, virtual false, abstract: false, final false
inline bool WithinCaptureDistance(::GlobalNamespace::CrittersCage*  actor) ;

constexpr int32_t const& __cordl_internal_get_LastTemplateIndex() const;

constexpr int32_t& __cordl_internal_get_LastTemplateIndex() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDataChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnDataChange() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_OnReleasedFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_OnReleasedFX() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_OngoingStateFX() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_OngoingStateFX() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_StartStateFX() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_StartStateFX() ;

constexpr int32_t const& __cordl_internal_get_TemplateIndex() const;

constexpr int32_t& __cordl_internal_get_TemplateIndex() ;

constexpr double_t const& __cordl_internal_get__despawnAnimTime() const;

constexpr double_t& __cordl_internal_get__despawnAnimTime() ;

constexpr float_t const& __cordl_internal_get__despawnAnimationDuration() const;

constexpr float_t& __cordl_internal_get__despawnAnimationDuration() ;

constexpr double_t const& __cordl_internal_get__nextDespawnCheck() const;

constexpr double_t& __cordl_internal_get__nextDespawnCheck() ;

constexpr double_t const& __cordl_internal_get__nextStuckCheck() const;

constexpr double_t& __cordl_internal_get__nextStuckCheck() ;

constexpr double_t const& __cordl_internal_get__spawnAnimTime() const;

constexpr double_t& __cordl_internal_get__spawnAnimTime() ;

constexpr float_t const& __cordl_internal_get__spawnAnimationDuration() const;

constexpr float_t& __cordl_internal_get__spawnAnimationDuration() ;

constexpr int32_t const& __cordl_internal_get_actorIdTarget() const;

constexpr int32_t& __cordl_internal_get_actorIdTarget() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>* const& __cordl_internal_get_afraidOfList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*& __cordl_internal_get_afraidOfList() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>* const& __cordl_internal_get_afraidOfTypes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*& __cordl_internal_get_afraidOfTypes() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_animTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_animTarget() ;

constexpr float_t const& __cordl_internal_get_attractedThreshold() const;

constexpr float_t& __cordl_internal_get_attractedThreshold() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>* const& __cordl_internal_get_attractedToList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*& __cordl_internal_get_attractedToList() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>* const& __cordl_internal_get_attractedToTypes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*& __cordl_internal_get_attractedToTypes() ;

constexpr float_t const& __cordl_internal_get_attractionLostPerSecond() const;

constexpr float_t& __cordl_internal_get_attractionLostPerSecond() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_attractionTarget() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_attractionTarget() ;

constexpr float_t const& __cordl_internal_get_autoSeeFoodDistance() const;

constexpr float_t& __cordl_internal_get_autoSeeFoodDistance() ;

constexpr float_t const& __cordl_internal_get_awakeThreshold() const;

constexpr float_t& __cordl_internal_get_awakeThreshold() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_bodyCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_bodyCollider() ;

constexpr ::UnityW<::GlobalNamespace::CrittersCage> const& __cordl_internal_get_cageTarget() const;

constexpr ::UnityW<::GlobalNamespace::CrittersCage>& __cordl_internal_get_cageTarget() ;

constexpr float_t const& __cordl_internal_get_calmThreshold() const;

constexpr float_t& __cordl_internal_get_calmThreshold() ;

constexpr bool const& __cordl_internal_get_canJump() const;

constexpr bool& __cordl_internal_get_canJump() ;

constexpr float_t const& __cordl_internal_get_catchableThreshold() const;

constexpr float_t& __cordl_internal_get_catchableThreshold() ;

constexpr ::GlobalNamespace::CritterConfiguration* const& __cordl_internal_get_creatureConfiguration() const;

constexpr ::GlobalNamespace::CritterConfiguration*& __cordl_internal_get_creatureConfiguration() ;

constexpr ::GlobalNamespace::CrittersAnim* const& __cordl_internal_get_currentAnim() const;

constexpr ::GlobalNamespace::CrittersAnim*& __cordl_internal_get_currentAnim() ;

constexpr float_t const& __cordl_internal_get_currentAnimTime() const;

constexpr float_t& __cordl_internal_get_currentAnimTime() ;

constexpr float_t const& __cordl_internal_get_currentAttraction() const;

constexpr float_t& __cordl_internal_get_currentAttraction() ;

constexpr float_t const& __cordl_internal_get_currentFear() const;

constexpr float_t& __cordl_internal_get_currentFear() ;

constexpr float_t const& __cordl_internal_get_currentHunger() const;

constexpr float_t& __cordl_internal_get_currentHunger() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_currentOngoingStateFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_currentOngoingStateFX() ;

constexpr float_t const& __cordl_internal_get_currentSleepiness() const;

constexpr float_t& __cordl_internal_get_currentSleepiness() ;

constexpr ::GlobalNamespace::CrittersPawn_CreatureState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::CrittersPawn_CreatureState& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_currentStruggle() const;

constexpr float_t& __cordl_internal_get_currentStruggle() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugColorAttracted() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugColorAttracted() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugColorCaged() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugColorCaged() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugColorCaught() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugColorCaught() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugColorEating() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugColorEating() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugColorIdle() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugColorIdle() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugColorScared() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugColorScared() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugColorSeekingFood() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugColorSeekingFood() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugColorSleeping() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugColorSleeping() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_debugColorStunned() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_debugColorStunned() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_debugStateIndicator() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_debugStateIndicator() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_despawnInHeighMovement() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_despawnInHeighMovement() ;

constexpr double_t const& __cordl_internal_get_despawnStartTime() const;

constexpr double_t& __cordl_internal_get_despawnStartTime() ;

constexpr float_t const& __cordl_internal_get_eatingRadiusMaxSquared() const;

constexpr float_t& __cordl_internal_get_eatingRadiusMaxSquared() ;

constexpr ::UnityW<::GlobalNamespace::CrittersFood> const& __cordl_internal_get_eatingTarget() const;

constexpr ::UnityW<::GlobalNamespace::CrittersFood>& __cordl_internal_get_eatingTarget() ;

constexpr float_t const& __cordl_internal_get_escapeThreshold() const;

constexpr float_t& __cordl_internal_get_escapeThreshold() ;

constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair> const& __cordl_internal_get_eyeScanData() const;

constexpr ::ArrayW<::GlobalNamespace::KeyValueStringPair>& __cordl_internal_get_eyeScanData() ;

constexpr float_t const& __cordl_internal_get_fearLostPerSecond() const;

constexpr float_t& __cordl_internal_get_fearLostPerSecond() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_fearTarget() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_fearTarget() ;

constexpr float_t const& __cordl_internal_get_fudge() const;

constexpr float_t& __cordl_internal_get_fudge() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_grabbedHaptics() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_grabbedHaptics() ;

constexpr float_t const& __cordl_internal_get_grabbedHapticsStrength() const;

constexpr float_t& __cordl_internal_get_grabbedHapticsStrength() ;

constexpr ::UnityW<::GlobalNamespace::CrittersGrabber> const& __cordl_internal_get_grabbedTarget() const;

constexpr ::UnityW<::GlobalNamespace::CrittersGrabber>& __cordl_internal_get_grabbedTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hat() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hat() ;

constexpr float_t const& __cordl_internal_get_hungerGainedPerSecond() const;

constexpr float_t& __cordl_internal_get_hungerGainedPerSecond() ;

constexpr float_t const& __cordl_internal_get_hungerLostPerSecond() const;

constexpr float_t& __cordl_internal_get_hungerLostPerSecond() ;

constexpr float_t const& __cordl_internal_get_hungryThreshold() const;

constexpr float_t& __cordl_internal_get_hungryThreshold() ;

constexpr float_t const& __cordl_internal_get_jumpCooldown() const;

constexpr float_t& __cordl_internal_get_jumpCooldown() ;

constexpr float_t const& __cordl_internal_get_jumpVariabilityTime() const;

constexpr float_t& __cordl_internal_get_jumpVariabilityTime() ;

constexpr float_t const& __cordl_internal_get_killHeight() const;

constexpr float_t& __cordl_internal_get_killHeight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastSeenAttractionPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastSeenAttractionPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastSeenFearPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastSeenFearPosition() ;

constexpr double_t const& __cordl_internal_get_lifeTime() const;

constexpr double_t& __cordl_internal_get_lifeTime() ;

constexpr double_t const& __cordl_internal_get_lifeTimeStart() const;

constexpr double_t& __cordl_internal_get_lifeTimeStart() ;

constexpr float_t const& __cordl_internal_get_maxAttraction() const;

constexpr float_t& __cordl_internal_get_maxAttraction() ;

constexpr float_t const& __cordl_internal_get_maxFear() const;

constexpr float_t& __cordl_internal_get_maxFear() ;

constexpr float_t const& __cordl_internal_get_maxHunger() const;

constexpr float_t& __cordl_internal_get_maxHunger() ;

constexpr float_t const& __cordl_internal_get_maxJumpVel() const;

constexpr float_t& __cordl_internal_get_maxJumpVel() ;

constexpr float_t const& __cordl_internal_get_maxSleepiness() const;

constexpr float_t& __cordl_internal_get_maxSleepiness() ;

constexpr float_t const& __cordl_internal_get_maxStruggle() const;

constexpr float_t& __cordl_internal_get_maxStruggle() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_myRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_myRenderer() ;

constexpr float_t const& __cordl_internal_get_obstacleSeeDistance() const;

constexpr float_t& __cordl_internal_get_obstacleSeeDistance() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rB() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rB() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_raycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_raycastHits() ;

constexpr int32_t const& __cordl_internal_get_regionId() const;

constexpr int32_t& __cordl_internal_get_regionId() ;

constexpr float_t const& __cordl_internal_get_remainingSlowedTime() const;

constexpr float_t& __cordl_internal_get_remainingSlowedTime() ;

constexpr float_t const& __cordl_internal_get_remainingStunnedTime() const;

constexpr float_t& __cordl_internal_get_remainingStunnedTime() ;

constexpr float_t const& __cordl_internal_get_satiatedThreshold() const;

constexpr float_t& __cordl_internal_get_satiatedThreshold() ;

constexpr float_t const& __cordl_internal_get_scaredJumpCooldown() const;

constexpr float_t& __cordl_internal_get_scaredJumpCooldown() ;

constexpr float_t const& __cordl_internal_get_scaredThreshold() const;

constexpr float_t& __cordl_internal_get_scaredThreshold() ;

constexpr float_t const& __cordl_internal_get_sensoryRange() const;

constexpr float_t& __cordl_internal_get_sensoryRange() ;

constexpr float_t const& __cordl_internal_get_sleepinessGainedPerSecond() const;

constexpr float_t& __cordl_internal_get_sleepinessGainedPerSecond() ;

constexpr float_t const& __cordl_internal_get_sleepinessLostPerSecond() const;

constexpr float_t& __cordl_internal_get_sleepinessLostPerSecond() ;

constexpr float_t const& __cordl_internal_get_slowSpeedMod() const;

constexpr float_t& __cordl_internal_get_slowSpeedMod() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_soundsHeard() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_soundsHeard() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_spawnInHeighMovement() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_spawnInHeighMovement() ;

constexpr double_t const& __cordl_internal_get_spawnStartTime() const;

constexpr double_t& __cordl_internal_get_spawnStartTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spawningStartingPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spawningStartingPosition() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::GlobalNamespace::CrittersAnim*>* const& __cordl_internal_get_stateAnim() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::GlobalNamespace::CrittersAnim*>*& __cordl_internal_get_stateAnim() ;

constexpr float_t const& __cordl_internal_get_struggleGainedPerSecond() const;

constexpr float_t& __cordl_internal_get_struggleGainedPerSecond() ;

constexpr float_t const& __cordl_internal_get_struggleLostPerSecond() const;

constexpr float_t& __cordl_internal_get_struggleLostPerSecond() ;

constexpr float_t const& __cordl_internal_get_tiredThreshold() const;

constexpr float_t& __cordl_internal_get_tiredThreshold() ;

constexpr float_t const& __cordl_internal_get_unattractedThreshold() const;

constexpr float_t& __cordl_internal_get_unattractedThreshold() ;

constexpr float_t const& __cordl_internal_get_visionConeAngle() const;

constexpr float_t& __cordl_internal_get_visionConeAngle() ;

constexpr ::UnityW<::GlobalNamespace::CritterVisuals> const& __cordl_internal_get_visuals() const;

constexpr ::UnityW<::GlobalNamespace::CritterVisuals>& __cordl_internal_get_visuals() ;

constexpr bool const& __cordl_internal_get_wasSomethingInTheWay() const;

constexpr bool& __cordl_internal_get_wasSomethingInTheWay() ;

constexpr bool const& __cordl_internal_get_withinEatingRadius() const;

constexpr bool& __cordl_internal_get_withinEatingRadius() ;

constexpr void __cordl_internal_set_LastTemplateIndex(int32_t  value) ;

constexpr void __cordl_internal_set_OnDataChange(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnReleasedFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_OngoingStateFX(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_StartStateFX(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_TemplateIndex(int32_t  value) ;

constexpr void __cordl_internal_set__despawnAnimTime(double_t  value) ;

constexpr void __cordl_internal_set__despawnAnimationDuration(float_t  value) ;

constexpr void __cordl_internal_set__nextDespawnCheck(double_t  value) ;

constexpr void __cordl_internal_set__nextStuckCheck(double_t  value) ;

constexpr void __cordl_internal_set__spawnAnimTime(double_t  value) ;

constexpr void __cordl_internal_set__spawnAnimationDuration(float_t  value) ;

constexpr void __cordl_internal_set_actorIdTarget(int32_t  value) ;

constexpr void __cordl_internal_set_afraidOfList(::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  value) ;

constexpr void __cordl_internal_set_afraidOfTypes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  value) ;

constexpr void __cordl_internal_set_animTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_attractedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_attractedToList(::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  value) ;

constexpr void __cordl_internal_set_attractedToTypes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  value) ;

constexpr void __cordl_internal_set_attractionLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_attractionTarget(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_autoSeeFoodDistance(float_t  value) ;

constexpr void __cordl_internal_set_awakeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_cageTarget(::UnityW<::GlobalNamespace::CrittersCage>  value) ;

constexpr void __cordl_internal_set_calmThreshold(float_t  value) ;

constexpr void __cordl_internal_set_canJump(bool  value) ;

constexpr void __cordl_internal_set_catchableThreshold(float_t  value) ;

constexpr void __cordl_internal_set_creatureConfiguration(::GlobalNamespace::CritterConfiguration*  value) ;

constexpr void __cordl_internal_set_currentAnim(::GlobalNamespace::CrittersAnim*  value) ;

constexpr void __cordl_internal_set_currentAnimTime(float_t  value) ;

constexpr void __cordl_internal_set_currentAttraction(float_t  value) ;

constexpr void __cordl_internal_set_currentFear(float_t  value) ;

constexpr void __cordl_internal_set_currentHunger(float_t  value) ;

constexpr void __cordl_internal_set_currentOngoingStateFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentSleepiness(float_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::CrittersPawn_CreatureState  value) ;

constexpr void __cordl_internal_set_currentStruggle(float_t  value) ;

constexpr void __cordl_internal_set_debugColorAttracted(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugColorCaged(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugColorCaught(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugColorEating(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugColorIdle(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugColorScared(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugColorSeekingFood(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugColorSleeping(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugColorStunned(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_debugStateIndicator(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_despawnInHeighMovement(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_despawnStartTime(double_t  value) ;

constexpr void __cordl_internal_set_eatingRadiusMaxSquared(float_t  value) ;

constexpr void __cordl_internal_set_eatingTarget(::UnityW<::GlobalNamespace::CrittersFood>  value) ;

constexpr void __cordl_internal_set_escapeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_eyeScanData(::ArrayW<::GlobalNamespace::KeyValueStringPair>  value) ;

constexpr void __cordl_internal_set_fearLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_fearTarget(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_fudge(float_t  value) ;

constexpr void __cordl_internal_set_grabbedHaptics(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_grabbedHapticsStrength(float_t  value) ;

constexpr void __cordl_internal_set_grabbedTarget(::UnityW<::GlobalNamespace::CrittersGrabber>  value) ;

constexpr void __cordl_internal_set_hat(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hungerGainedPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_hungerLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_hungryThreshold(float_t  value) ;

constexpr void __cordl_internal_set_jumpCooldown(float_t  value) ;

constexpr void __cordl_internal_set_jumpVariabilityTime(float_t  value) ;

constexpr void __cordl_internal_set_killHeight(float_t  value) ;

constexpr void __cordl_internal_set_lastSeenAttractionPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastSeenFearPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lifeTime(double_t  value) ;

constexpr void __cordl_internal_set_lifeTimeStart(double_t  value) ;

constexpr void __cordl_internal_set_maxAttraction(float_t  value) ;

constexpr void __cordl_internal_set_maxFear(float_t  value) ;

constexpr void __cordl_internal_set_maxHunger(float_t  value) ;

constexpr void __cordl_internal_set_maxJumpVel(float_t  value) ;

constexpr void __cordl_internal_set_maxSleepiness(float_t  value) ;

constexpr void __cordl_internal_set_maxStruggle(float_t  value) ;

constexpr void __cordl_internal_set_myRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_obstacleSeeDistance(float_t  value) ;

constexpr void __cordl_internal_set_rB(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_raycastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_regionId(int32_t  value) ;

constexpr void __cordl_internal_set_remainingSlowedTime(float_t  value) ;

constexpr void __cordl_internal_set_remainingStunnedTime(float_t  value) ;

constexpr void __cordl_internal_set_satiatedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_scaredJumpCooldown(float_t  value) ;

constexpr void __cordl_internal_set_scaredThreshold(float_t  value) ;

constexpr void __cordl_internal_set_sensoryRange(float_t  value) ;

constexpr void __cordl_internal_set_sleepinessGainedPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_sleepinessLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_slowSpeedMod(float_t  value) ;

constexpr void __cordl_internal_set_soundsHeard(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_spawnInHeighMovement(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_spawnStartTime(double_t  value) ;

constexpr void __cordl_internal_set_spawningStartingPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_stateAnim(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::GlobalNamespace::CrittersAnim*>*  value) ;

constexpr void __cordl_internal_set_struggleGainedPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_struggleLostPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_tiredThreshold(float_t  value) ;

constexpr void __cordl_internal_set_unattractedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_visionConeAngle(float_t  value) ;

constexpr void __cordl_internal_set_visuals(::UnityW<::GlobalNamespace::CritterVisuals>  value) ;

constexpr void __cordl_internal_set_wasSomethingInTheWay(bool  value) ;

constexpr void __cordl_internal_set_withinEatingRadius(bool  value) ;

/// @brief Method .ctor, addr 0x560fefc, size 0xac0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnDataChange, addr 0x560fdc4, size 0x9c, virtual true, abstract: false, final true
inline void add_OnDataChange(::System::Action*  value) ;

/// @brief Convert to "::GlobalNamespace::IEyeScannable"
constexpr ::GlobalNamespace::IEyeScannable* i___GlobalNamespace__IEyeScannable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnDataChange, addr 0x560fe60, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnDataChange(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersPawn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersPawn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersPawn(CrittersPawn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersPawn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersPawn(CrittersPawn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{114};

/// @brief Field creatureConfiguration, offset: 0x188, size: 0x8, def value: None
 ::GlobalNamespace::CritterConfiguration*  ___creatureConfiguration;

/// @brief Field bodyCollider, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___bodyCollider;

/// [HideInInspector]
/// @brief Field maxJumpVel, offset: 0x198, size: 0x4, def value: None
 float_t  ___maxJumpVel;

/// [HideInInspector]
/// @brief Field jumpCooldown, offset: 0x19c, size: 0x4, def value: None
 float_t  ___jumpCooldown;

/// [HideInInspector]
/// @brief Field scaredJumpCooldown, offset: 0x1a0, size: 0x4, def value: None
 float_t  ___scaredJumpCooldown;

/// [HideInInspector]
/// @brief Field jumpVariabilityTime, offset: 0x1a4, size: 0x4, def value: None
 float_t  ___jumpVariabilityTime;

/// [HideInInspector]
/// @brief Field visionConeAngle, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___visionConeAngle;

/// [HideInInspector]
/// @brief Field sensoryRange, offset: 0x1ac, size: 0x4, def value: None
 float_t  ___sensoryRange;

/// [HideInInspector]
/// @brief Field maxHunger, offset: 0x1b0, size: 0x4, def value: None
 float_t  ___maxHunger;

/// [HideInInspector]
/// @brief Field hungryThreshold, offset: 0x1b4, size: 0x4, def value: None
 float_t  ___hungryThreshold;

/// [HideInInspector]
/// @brief Field satiatedThreshold, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___satiatedThreshold;

/// [HideInInspector]
/// @brief Field hungerLostPerSecond, offset: 0x1bc, size: 0x4, def value: None
 float_t  ___hungerLostPerSecond;

/// [HideInInspector]
/// @brief Field hungerGainedPerSecond, offset: 0x1c0, size: 0x4, def value: None
 float_t  ___hungerGainedPerSecond;

/// [HideInInspector]
/// @brief Field maxFear, offset: 0x1c4, size: 0x4, def value: None
 float_t  ___maxFear;

/// [HideInInspector]
/// @brief Field scaredThreshold, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___scaredThreshold;

/// [HideInInspector]
/// @brief Field calmThreshold, offset: 0x1cc, size: 0x4, def value: None
 float_t  ___calmThreshold;

/// [HideInInspector]
/// @brief Field fearLostPerSecond, offset: 0x1d0, size: 0x4, def value: None
 float_t  ___fearLostPerSecond;

/// @brief Field maxAttraction, offset: 0x1d4, size: 0x4, def value: None
 float_t  ___maxAttraction;

/// @brief Field attractedThreshold, offset: 0x1d8, size: 0x4, def value: None
 float_t  ___attractedThreshold;

/// @brief Field unattractedThreshold, offset: 0x1dc, size: 0x4, def value: None
 float_t  ___unattractedThreshold;

/// @brief Field attractionLostPerSecond, offset: 0x1e0, size: 0x4, def value: None
 float_t  ___attractionLostPerSecond;

/// [HideInInspector]
/// @brief Field maxSleepiness, offset: 0x1e4, size: 0x4, def value: None
 float_t  ___maxSleepiness;

/// [HideInInspector]
/// @brief Field tiredThreshold, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___tiredThreshold;

/// [HideInInspector]
/// @brief Field awakeThreshold, offset: 0x1ec, size: 0x4, def value: None
 float_t  ___awakeThreshold;

/// [HideInInspector]
/// @brief Field sleepinessGainedPerSecond, offset: 0x1f0, size: 0x4, def value: None
 float_t  ___sleepinessGainedPerSecond;

/// [HideInInspector]
/// @brief Field sleepinessLostPerSecond, offset: 0x1f4, size: 0x4, def value: None
 float_t  ___sleepinessLostPerSecond;

/// [HideInInspector]
/// @brief Field maxStruggle, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___maxStruggle;

/// [HideInInspector]
/// @brief Field escapeThreshold, offset: 0x1fc, size: 0x4, def value: None
 float_t  ___escapeThreshold;

/// [HideInInspector]
/// @brief Field catchableThreshold, offset: 0x200, size: 0x4, def value: None
 float_t  ___catchableThreshold;

/// [HideInInspector]
/// @brief Field struggleGainedPerSecond, offset: 0x204, size: 0x4, def value: None
 float_t  ___struggleGainedPerSecond;

/// [HideInInspector]
/// @brief Field struggleLostPerSecond, offset: 0x208, size: 0x4, def value: None
 float_t  ___struggleLostPerSecond;

/// @brief Field attractedToList, offset: 0x210, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  ___attractedToList;

/// @brief Field afraidOfList, offset: 0x218, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::crittersAttractorStruct>*  ___afraidOfList;

/// @brief Field afraidOfTypes, offset: 0x220, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  ___afraidOfTypes;

/// @brief Field attractedToTypes, offset: 0x228, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  ___attractedToTypes;

/// @brief Field rB, offset: 0x230, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rB;

/// @brief Field currentState, offset: 0x238, size: 0x4, def value: None
 ::GlobalNamespace::CrittersPawn_CreatureState  ___currentState;

/// @brief Field currentHunger, offset: 0x23c, size: 0x4, def value: None
 float_t  ___currentHunger;

/// @brief Field currentFear, offset: 0x240, size: 0x4, def value: None
 float_t  ___currentFear;

/// @brief Field currentAttraction, offset: 0x244, size: 0x4, def value: None
 float_t  ___currentAttraction;

/// @brief Field currentSleepiness, offset: 0x248, size: 0x4, def value: None
 float_t  ___currentSleepiness;

/// @brief Field currentStruggle, offset: 0x24c, size: 0x4, def value: None
 float_t  ___currentStruggle;

/// @brief Field lifeTime, offset: 0x250, size: 0x8, def value: None
 double_t  ___lifeTime;

/// @brief Field lifeTimeStart, offset: 0x258, size: 0x8, def value: None
 double_t  ___lifeTimeStart;

/// @brief Field eatingTarget, offset: 0x260, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersFood>  ___eatingTarget;

/// @brief Field fearTarget, offset: 0x268, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___fearTarget;

/// @brief Field attractionTarget, offset: 0x270, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___attractionTarget;

/// @brief Field lastSeenFearPosition, offset: 0x278, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastSeenFearPosition;

/// @brief Field lastSeenAttractionPosition, offset: 0x284, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastSeenAttractionPosition;

/// @brief Field grabbedTarget, offset: 0x290, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersGrabber>  ___grabbedTarget;

/// @brief Field cageTarget, offset: 0x298, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersCage>  ___cageTarget;

/// @brief Field actorIdTarget, offset: 0x2a0, size: 0x4, def value: None
 int32_t  ___actorIdTarget;

/// [FormerlySerializedAs("eatingRadiusMax")]
/// @brief Field eatingRadiusMaxSquared, offset: 0x2a4, size: 0x4, def value: None
 float_t  ___eatingRadiusMaxSquared;

/// @brief Field withinEatingRadius, offset: 0x2a8, size: 0x1, def value: None
 bool  ___withinEatingRadius;

/// @brief Field animTarget, offset: 0x2b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___animTarget;

/// @brief Field myRenderer, offset: 0x2b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___myRenderer;

/// @brief Field autoSeeFoodDistance, offset: 0x2c0, size: 0x4, def value: None
 float_t  ___autoSeeFoodDistance;

/// @brief Field soundsHeard, offset: 0x2c8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*  ___soundsHeard;

/// @brief Field fudge, offset: 0x2d0, size: 0x4, def value: None
 float_t  ___fudge;

/// @brief Field obstacleSeeDistance, offset: 0x2d4, size: 0x4, def value: None
 float_t  ___obstacleSeeDistance;

/// @brief Field raycastHits, offset: 0x2d8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___raycastHits;

/// @brief Field canJump, offset: 0x2e0, size: 0x1, def value: None
 bool  ___canJump;

/// @brief Field wasSomethingInTheWay, offset: 0x2e1, size: 0x1, def value: None
 bool  ___wasSomethingInTheWay;

/// @brief Field hat, offset: 0x2e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___hat;

/// @brief Field LastTemplateIndex, offset: 0x2f0, size: 0x4, def value: None
 int32_t  ___LastTemplateIndex;

/// @brief Field TemplateIndex, offset: 0x2f4, size: 0x4, def value: None
 int32_t  ___TemplateIndex;

/// @brief Field _nextDespawnCheck, offset: 0x2f8, size: 0x8, def value: None
 double_t  ____nextDespawnCheck;

/// @brief Field _nextStuckCheck, offset: 0x300, size: 0x8, def value: None
 double_t  ____nextStuckCheck;

/// @brief Field killHeight, offset: 0x308, size: 0x4, def value: None
 float_t  ___killHeight;

/// @brief Field remainingStunnedTime, offset: 0x30c, size: 0x4, def value: None
 float_t  ___remainingStunnedTime;

/// @brief Field remainingSlowedTime, offset: 0x310, size: 0x4, def value: None
 float_t  ___remainingSlowedTime;

/// @brief Field slowSpeedMod, offset: 0x314, size: 0x4, def value: None
 float_t  ___slowSpeedMod;

/// [Header("Visuals")]
/// @brief Field visuals, offset: 0x318, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CritterVisuals>  ___visuals;

/// [HideInInspector]
/// @brief Field StartStateFX, offset: 0x320, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*  ___StartStateFX;

/// [HideInInspector]
/// @brief Field OngoingStateFX, offset: 0x328, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::UnityW<::UnityEngine::GameObject>>*  ___OngoingStateFX;

/// @brief Field OnReleasedFX, offset: 0x330, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___OnReleasedFX;

/// @brief Field currentOngoingStateFX, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___currentOngoingStateFX;

/// [HideInInspector]
/// @brief Field stateAnim, offset: 0x340, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersPawn_CreatureState,::GlobalNamespace::CrittersAnim*>*  ___stateAnim;

/// @brief Field currentAnim, offset: 0x348, size: 0x8, def value: None
 ::GlobalNamespace::CrittersAnim*  ___currentAnim;

/// @brief Field currentAnimTime, offset: 0x350, size: 0x4, def value: None
 float_t  ___currentAnimTime;

/// @brief Field grabbedHaptics, offset: 0x358, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___grabbedHaptics;

/// @brief Field grabbedHapticsStrength, offset: 0x360, size: 0x4, def value: None
 float_t  ___grabbedHapticsStrength;

/// @brief Field spawnInHeighMovement, offset: 0x368, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___spawnInHeighMovement;

/// @brief Field despawnInHeighMovement, offset: 0x370, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___despawnInHeighMovement;

/// @brief Field spawningStartingPosition, offset: 0x378, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spawningStartingPosition;

/// @brief Field spawnStartTime, offset: 0x388, size: 0x8, def value: None
 double_t  ___spawnStartTime;

/// @brief Field despawnStartTime, offset: 0x390, size: 0x8, def value: None
 double_t  ___despawnStartTime;

/// @brief Field _spawnAnimationDuration, offset: 0x398, size: 0x4, def value: None
 float_t  ____spawnAnimationDuration;

/// @brief Field _despawnAnimationDuration, offset: 0x39c, size: 0x4, def value: None
 float_t  ____despawnAnimationDuration;

/// @brief Field _spawnAnimTime, offset: 0x3a0, size: 0x8, def value: None
 double_t  ____spawnAnimTime;

/// @brief Field _despawnAnimTime, offset: 0x3a8, size: 0x8, def value: None
 double_t  ____despawnAnimTime;

/// @brief Field debugStateIndicator, offset: 0x3b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___debugStateIndicator;

/// @brief Field debugColorIdle, offset: 0x3b8, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugColorIdle;

/// @brief Field debugColorSeekingFood, offset: 0x3c8, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugColorSeekingFood;

/// @brief Field debugColorEating, offset: 0x3d8, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugColorEating;

/// @brief Field debugColorScared, offset: 0x3e8, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugColorScared;

/// @brief Field debugColorSleeping, offset: 0x3f8, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugColorSleeping;

/// @brief Field debugColorCaught, offset: 0x408, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugColorCaught;

/// @brief Field debugColorCaged, offset: 0x418, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugColorCaged;

/// @brief Field debugColorStunned, offset: 0x428, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugColorStunned;

/// @brief Field debugColorAttracted, offset: 0x438, size: 0x10, def value: None
 ::UnityEngine::Color  ___debugColorAttracted;

/// @brief Field regionId, offset: 0x448, size: 0x4, def value: None
 int32_t  ___regionId;

/// @brief Field eyeScanData, offset: 0x450, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::KeyValueStringPair>  ___eyeScanData;

/// [CompilerGenerated]
/// @brief Field OnDataChange, offset: 0x458, size: 0x8, def value: None
 ::System::Action*  ___OnDataChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___creatureConfiguration) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___bodyCollider) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___maxJumpVel) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___jumpCooldown) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___scaredJumpCooldown) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___jumpVariabilityTime) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___visionConeAngle) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___sensoryRange) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___maxHunger) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___hungryThreshold) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___satiatedThreshold) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___hungerLostPerSecond) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___hungerGainedPerSecond) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___maxFear) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___scaredThreshold) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___calmThreshold) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___fearLostPerSecond) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___maxAttraction) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___attractedThreshold) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___unattractedThreshold) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___attractionLostPerSecond) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___maxSleepiness) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___tiredThreshold) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___awakeThreshold) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___sleepinessGainedPerSecond) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___sleepinessLostPerSecond) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___maxStruggle) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___escapeThreshold) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___catchableThreshold) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___struggleGainedPerSecond) == 0x204, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___struggleLostPerSecond) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___attractedToList) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___afraidOfList) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___afraidOfTypes) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___attractedToTypes) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___rB) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___currentState) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___currentHunger) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___currentFear) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___currentAttraction) == 0x244, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___currentSleepiness) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___currentStruggle) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___lifeTime) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___lifeTimeStart) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___eatingTarget) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___fearTarget) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___attractionTarget) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___lastSeenFearPosition) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___lastSeenAttractionPosition) == 0x284, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___grabbedTarget) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___cageTarget) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___actorIdTarget) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___eatingRadiusMaxSquared) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___withinEatingRadius) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___animTarget) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___myRenderer) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___autoSeeFoodDistance) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___soundsHeard) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___fudge) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___obstacleSeeDistance) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___raycastHits) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___canJump) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___wasSomethingInTheWay) == 0x2e1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___hat) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___LastTemplateIndex) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___TemplateIndex) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ____nextDespawnCheck) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ____nextStuckCheck) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___killHeight) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___remainingStunnedTime) == 0x30c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___remainingSlowedTime) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___slowSpeedMod) == 0x314, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___visuals) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___StartStateFX) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___OngoingStateFX) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___OnReleasedFX) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___currentOngoingStateFX) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___stateAnim) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___currentAnim) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___currentAnimTime) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___grabbedHaptics) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___grabbedHapticsStrength) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___spawnInHeighMovement) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___despawnInHeighMovement) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___spawningStartingPosition) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___spawnStartTime) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___despawnStartTime) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ____spawnAnimationDuration) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ____despawnAnimationDuration) == 0x39c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ____spawnAnimTime) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ____despawnAnimTime) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugStateIndicator) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugColorIdle) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugColorSeekingFood) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugColorEating) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugColorScared) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugColorSleeping) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugColorCaught) == 0x408, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugColorCaged) == 0x418, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugColorStunned) == 0x428, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___debugColorAttracted) == 0x438, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___regionId) == 0x448, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___eyeScanData) == 0x450, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersPawn, ___OnDataChange) == 0x458, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersPawn) == 0x460, "Size mismatch!");

} // namespace end def GlobalNamespace
