#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersManager_AllowGrabbingFlags_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersManager)
namespace Critters::Scripts {
class CrittersActorSpawner;
}
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class CritterIndex;
}
namespace GlobalNamespace {
class CrittersActorGrabber;
}
namespace GlobalNamespace {
struct CrittersActor_CrittersActorType;
}
namespace GlobalNamespace {
class CrittersActor;
}
namespace GlobalNamespace {
class CrittersFood;
}
namespace GlobalNamespace {
struct CrittersManager_AllowGrabbingFlags;
}
namespace GlobalNamespace {
struct CrittersManager_CritterEvent;
}
namespace GlobalNamespace {
class CrittersManager__DelayedInitialization_d__152;
}
namespace GlobalNamespace {
class CrittersManager__RemoteDataInitialization_d__151;
}
namespace GlobalNamespace {
class CrittersManager___c;
}
namespace GlobalNamespace {
class CrittersPawn;
}
namespace GlobalNamespace {
class CrittersPool;
}
namespace GlobalNamespace {
class CrittersRegion;
}
namespace GlobalNamespace {
class CrittersRigActorSetup;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersManager;
}
namespace GlobalNamespace {
class CrittersManager__DelayedInitialization_d__152;
}
namespace GlobalNamespace {
class CrittersManager__RemoteDataInitialization_d__151;
}
namespace GlobalNamespace {
class CrittersManager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersManager*);
MARK_REF_T(::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*);
MARK_REF_T(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*);
MARK_REF_T(::GlobalNamespace::CrittersManager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersManager*, "", "CrittersManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersManager__DelayedInitialization_d__152*, "", "CrittersManager/<DelayedInitialization>d__152");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151*, "", "CrittersManager/<RemoteDataInitialization>d__151");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersManager___c*, "", "CrittersManager/<>c");
// [NetworkBehaviourWeaved(0)]
// Dependencies CrittersActor, CrittersActor::CrittersActorType, CrittersManager::AllowGrabbingFlags, NetworkComponent, System.Collections.Generic.List`1<T>, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersManager
class CORDL_TYPE CrittersManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using AllowGrabbingFlags = ::GlobalNamespace::CrittersManager_AllowGrabbingFlags;

using CritterEvent = ::GlobalNamespace::CrittersManager_CritterEvent;

using _DelayedInitialization_d__152 = ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152;

using _RemoteDataInitialization_d__151 = ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151;

using __c = ::GlobalNamespace::CrittersManager___c;

 __declspec(property(get=get_LocalInZone)) bool  LocalInZone;

/// @brief Field MaxAttachSpeed, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxAttachSpeed, put=__cordl_internal_set_MaxAttachSpeed)) float_t  MaxAttachSpeed;

/// @brief Field OnCritterEventReceived, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCritterEventReceived, put=__cordl_internal_set_OnCritterEventReceived)) ::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  OnCritterEventReceived;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _currentRegionIndex, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentRegionIndex, put=__cordl_internal_set__currentRegionIndex)) int32_t  _currentRegionIndex;

/// @brief Field <hasInstance>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasInstance_k__BackingField, put=setStaticF__hasInstance_k__BackingField)) bool  _hasInstance_k__BackingField;

/// @brief Field _leftGrabber, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__leftGrabber, put=setStaticF__leftGrabber)) ::UnityW<::GlobalNamespace::CrittersActorGrabber>  _leftGrabber;

/// @brief Field _rightGrabber, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rightGrabber, put=setStaticF__rightGrabber)) ::UnityW<::GlobalNamespace::CrittersActorGrabber>  _rightGrabber;

/// @brief Field _spawnRegions, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__spawnRegions, put=__cordl_internal_set__spawnRegions)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*  _spawnRegions;

/// @brief Field actorBinIndices, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorBinIndices, put=__cordl_internal_set_actorBinIndices)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersActor>,int32_t>*  actorBinIndices;

/// @brief Field actorBins, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorBins, put=__cordl_internal_set_actorBins)) ::ArrayW<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>  actorBins;

/// @brief Field actorById, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorById, put=__cordl_internal_set_actorById)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*  actorById;

/// @brief Field actorPools, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorPools, put=__cordl_internal_set_actorPools)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*  actorPools;

/// @brief Field actorSpawners, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorSpawners, put=__cordl_internal_set_actorSpawners)) ::System::Collections::Generic::List_1<::UnityW<::Critters::Scripts::CrittersActorSpawner>>*  actorSpawners;

/// @brief Field actorTypes, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorTypes, put=__cordl_internal_set_actorTypes)) ::ArrayW<::GlobalNamespace::CrittersActor_CrittersActorType>  actorTypes;

/// @brief Field actorsInitializationCallCooldown, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorsInitializationCallCooldown, put=__cordl_internal_set_actorsInitializationCallCooldown)) float_t  actorsInitializationCallCooldown;

/// @brief Field actorsPerInitializationCall, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorsPerInitializationCall, put=__cordl_internal_set_actorsPerInitializationCall)) int32_t  actorsPerInitializationCall;

/// @brief Field allActors, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allActors, put=__cordl_internal_set_allActors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  allActors;

/// @brief Field allActorsCount, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_allActorsCount, put=__cordl_internal_set_allActorsCount)) int32_t  allActorsCount;

/// @brief Field allRigs, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_allRigs, put=__cordl_internal_set_allRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  allRigs;

 __declspec(property(get=get_allowGrabbingEntireBag)) bool  allowGrabbingEntireBag;

 __declspec(property(get=get_allowGrabbingFromBags)) bool  allowGrabbingFromBags;

 __declspec(property(get=get_allowGrabbingOutOfHands)) bool  allowGrabbingOutOfHands;

/// @brief Field awareOfActors, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_awareOfActors, put=__cordl_internal_set_awareOfActors)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersPawn>,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*  awareOfActors;

/// @brief Field bagPrefab, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bagPrefab, put=__cordl_internal_set_bagPrefab)) ::UnityW<::UnityEngine::GameObject>  bagPrefab;

/// @brief Field binDimensionXMin, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_binDimensionXMin, put=__cordl_internal_set_binDimensionXMin)) float_t  binDimensionXMin;

/// @brief Field binDimensionZMin, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_binDimensionZMin, put=__cordl_internal_set_binDimensionZMin)) float_t  binDimensionZMin;

/// @brief Field binXCount, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_binXCount, put=__cordl_internal_set_binXCount)) int32_t  binXCount;

/// @brief Field binZCount, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_binZCount, put=__cordl_internal_set_binZCount)) int32_t  binZCount;

/// @brief Field bodyAttachPointPrefab, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyAttachPointPrefab, put=__cordl_internal_set_bodyAttachPointPrefab)) ::UnityW<::UnityEngine::GameObject>  bodyAttachPointPrefab;

/// @brief Field cagePrefab, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_cagePrefab, put=__cordl_internal_set_cagePrefab)) ::UnityW<::UnityEngine::GameObject>  cagePrefab;

/// @brief Field containerLayer, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_containerLayer, put=__cordl_internal_set_containerLayer)) ::UnityEngine::LayerMask  containerLayer;

/// @brief Field creatureIndex, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_creatureIndex, put=__cordl_internal_set_creatureIndex)) ::UnityW<::GlobalNamespace::CritterIndex>  creatureIndex;

/// @brief Field creaturePrefab, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_creaturePrefab, put=__cordl_internal_set_creaturePrefab)) ::UnityW<::UnityEngine::GameObject>  creaturePrefab;

/// @brief Field critterEventCallLimit, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_critterEventCallLimit, put=__cordl_internal_set_critterEventCallLimit)) ::GlobalNamespace::CallLimiter*  critterEventCallLimit;

/// @brief Field crittersActors, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_crittersActors, put=__cordl_internal_set_crittersActors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  crittersActors;

/// @brief Field crittersPawns, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_crittersPawns, put=__cordl_internal_set_crittersPawns)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*  crittersPawns;

/// @brief Field crittersPool, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_crittersPool, put=__cordl_internal_set_crittersPool)) ::UnityW<::GlobalNamespace::CrittersPool>  crittersPool;

/// @brief Field crittersRange, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_crittersRange, put=__cordl_internal_set_crittersRange)) ::UnityW<::UnityEngine::Transform>  crittersRange;

/// @brief Field damperAngularForce, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_damperAngularForce, put=__cordl_internal_set_damperAngularForce)) float_t  damperAngularForce;

/// @brief Field damperForce, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_damperForce, put=__cordl_internal_set_damperForce)) float_t  damperForce;

/// @brief Field decayRate, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_decayRate, put=__cordl_internal_set_decayRate)) float_t  decayRate;

/// @brief Field despawnDecayValue, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_despawnDecayValue, put=__cordl_internal_set_despawnDecayValue)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  despawnDecayValue;

/// @brief Field despawnIndex, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_despawnIndex, put=__cordl_internal_set_despawnIndex)) int32_t  despawnIndex;

/// @brief Field despawnThreshold, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_despawnThreshold, put=__cordl_internal_set_despawnThreshold)) int32_t  despawnThreshold;

/// @brief Field despawnableActors, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_despawnableActors, put=__cordl_internal_set_despawnableActors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  despawnableActors;

/// @brief Field fastThrowMultiplier, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastThrowMultiplier, put=__cordl_internal_set_fastThrowMultiplier)) float_t  fastThrowMultiplier;

/// @brief Field fastThrowThreshold, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastThrowThreshold, put=__cordl_internal_set_fastThrowThreshold)) float_t  fastThrowThreshold;

/// @brief Field foodPrefab, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_foodPrefab, put=__cordl_internal_set_foodPrefab)) ::UnityW<::UnityEngine::GameObject>  foodPrefab;

/// @brief Field foodSpawnerPrefab, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_foodSpawnerPrefab, put=__cordl_internal_set_foodSpawnerPrefab)) ::UnityW<::UnityEngine::GameObject>  foodSpawnerPrefab;

/// @brief Field grabberPrefab, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabberPrefab, put=__cordl_internal_set_grabberPrefab)) ::UnityW<::UnityEngine::GameObject>  grabberPrefab;

/// @brief Field guard, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_guard, put=__cordl_internal_set_guard)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  guard;

/// @brief Field hasNewlyInitialized, offset 0x248, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasNewlyInitialized, put=__cordl_internal_set_hasNewlyInitialized)) bool  hasNewlyInitialized;

/// @brief Field heavyMass, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_heavyMass, put=__cordl_internal_set_heavyMass)) float_t  heavyMass;

/// @brief Field individualBinSide, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_individualBinSide, put=__cordl_internal_set_individualBinSide)) float_t  individualBinSide;

/// @brief Field initRequestCooldown, offset 0x24c, size 0x4 
 __declspec(property(get=__cordl_internal_get_initRequestCooldown, put=__cordl_internal_set_initRequestCooldown)) float_t  initRequestCooldown;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::CrittersManager>  instance;

/// @brief Field intialized, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get_intialized, put=__cordl_internal_set_intialized)) bool  intialized;

/// @brief Field lastRequest, offset 0x250, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRequest, put=__cordl_internal_set_lastRequest)) float_t  lastRequest;

/// @brief Field lastSpawnTime, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSpawnTime, put=__cordl_internal_set_lastSpawnTime)) double_t  lastSpawnTime;

/// @brief Field lightMass, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightMass, put=__cordl_internal_set_lightMass)) float_t  lightMass;

/// @brief Field localInZone, offset 0x238, size 0x1 
 __declspec(property(get=__cordl_internal_get_localInZone, put=__cordl_internal_set_localInZone)) bool  localInZone;

/// @brief Field lowPriorityActorsPerFrame, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowPriorityActorsPerFrame, put=__cordl_internal_set_lowPriorityActorsPerFrame)) int32_t  lowPriorityActorsPerFrame;

/// @brief Field lowPriorityIndex, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowPriorityIndex, put=__cordl_internal_set_lowPriorityIndex)) int32_t  lowPriorityIndex;

/// @brief Field lowPriorityPawnsToProcess, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_lowPriorityPawnsToProcess, put=__cordl_internal_set_lowPriorityPawnsToProcess)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  lowPriorityPawnsToProcess;

/// @brief Field maxGrabDistance, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxGrabDistance, put=__cordl_internal_set_maxGrabDistance)) float_t  maxGrabDistance;

/// @brief Field movementLayers, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementLayers, put=__cordl_internal_set_movementLayers)) ::UnityEngine::LayerMask  movementLayers;

/// @brief Field nearbyActors, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nearbyActors, put=__cordl_internal_set_nearbyActors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  nearbyActors;

/// @brief Field newlyDisabledActors, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_newlyDisabledActors, put=__cordl_internal_set_newlyDisabledActors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  newlyDisabledActors;

/// @brief Field noiseMakerPrefab, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_noiseMakerPrefab, put=__cordl_internal_set_noiseMakerPrefab)) ::UnityW<::UnityEngine::GameObject>  noiseMakerPrefab;

/// @brief Field noisePrefab, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_noisePrefab, put=__cordl_internal_set_noisePrefab)) ::UnityW<::UnityEngine::GameObject>  noisePrefab;

/// @brief Field objList, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_objList, put=__cordl_internal_set_objList)) ::System::Collections::Generic::List_1<::System::Object*>*  objList;

/// @brief Field objectLayers, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_objectLayers, put=__cordl_internal_set_objectLayers)) ::UnityEngine::LayerMask  objectLayers;

/// @brief Field overlapDistanceMax, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlapDistanceMax, put=__cordl_internal_set_overlapDistanceMax)) float_t  overlapDistanceMax;

/// @brief Field persistentActors, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_persistentActors, put=__cordl_internal_set_persistentActors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  persistentActors;

/// @brief Field playersToUpdate, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersToUpdate, put=__cordl_internal_set_playersToUpdate)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  playersToUpdate;

/// @brief Field poolCount, offset 0x254, size 0x4 
 __declspec(property(get=__cordl_internal_get_poolCount, put=__cordl_internal_set_poolCount)) int32_t  poolCount;

/// @brief Field poolCounts, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_poolCounts, put=__cordl_internal_set_poolCounts)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*  poolCounts;

/// @brief Field poolIndexDict, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_poolIndexDict, put=__cordl_internal_set_poolIndexDict)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*  poolIndexDict;

/// @brief Field poolParent, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_poolParent, put=__cordl_internal_set_poolParent)) ::UnityW<::UnityEngine::Transform>  poolParent;

/// @brief Field priorityBins, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_priorityBins, put=__cordl_internal_set_priorityBins)) ::ArrayW<bool>  priorityBins;

/// @brief Field privateRoomGrabbingFlags, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_privateRoomGrabbingFlags, put=__cordl_internal_set_privateRoomGrabbingFlags)) ::GlobalNamespace::CrittersManager_AllowGrabbingFlags  privateRoomGrabbingFlags;

/// @brief Field publicRoomGrabbingFlags, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_publicRoomGrabbingFlags, put=__cordl_internal_set_publicRoomGrabbingFlags)) ::GlobalNamespace::CrittersManager_AllowGrabbingFlags  publicRoomGrabbingFlags;

/// @brief Field rigActorId, offset 0x2d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rigActorId, put=__cordl_internal_set_rigActorId)) int32_t  rigActorId;

/// @brief Field rigActorSetups, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigActorSetups, put=__cordl_internal_set_rigActorSetups)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*  rigActorSetups;

/// @brief Field rigSetupByRig, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigSetupByRig, put=__cordl_internal_set_rigSetupByRig)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*  rigSetupByRig;

/// @brief Field softJointGracePeriod, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_softJointGracePeriod, put=__cordl_internal_set_softJointGracePeriod)) float_t  softJointGracePeriod;

/// @brief Field spawnDelay, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnDelay, put=__cordl_internal_set_spawnDelay)) double_t  spawnDelay;

/// @brief Field spawnerIndex, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnerIndex, put=__cordl_internal_set_spawnerIndex)) int32_t  spawnerIndex;

/// @brief Field springAngularForce, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_springAngularForce, put=__cordl_internal_set_springAngularForce)) float_t  springAngularForce;

/// @brief Field springForce, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_springForce, put=__cordl_internal_set_springForce)) float_t  springForce;

/// @brief Field stickyGooPrefab, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickyGooPrefab, put=__cordl_internal_set_stickyGooPrefab)) ::UnityW<::UnityEngine::GameObject>  stickyGooPrefab;

/// @brief Field stickyTrapPrefab, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickyTrapPrefab, put=__cordl_internal_set_stickyTrapPrefab)) ::UnityW<::UnityEngine::GameObject>  stickyTrapPrefab;

/// @brief Field stunBombPrefab, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_stunBombPrefab, put=__cordl_internal_set_stunBombPrefab)) ::UnityW<::UnityEngine::GameObject>  stunBombPrefab;

/// @brief Field totalBinsApproximate, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalBinsApproximate, put=__cordl_internal_set_totalBinsApproximate)) int32_t  totalBinsApproximate;

/// @brief Field universalActorId, offset 0x2d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_universalActorId, put=__cordl_internal_set_universalActorId)) int32_t  universalActorId;

/// @brief Field updatesToSend, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_updatesToSend, put=__cordl_internal_set_updatesToSend)) ::System::Collections::Generic::List_1<int32_t>*  updatesToSend;

/// @brief Field updatingPlayers, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_updatingPlayers, put=__cordl_internal_set_updatingPlayers)) ::System::Collections::Generic::List_1<int32_t>*  updatingPlayers;

/// @brief Field xLength, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_xLength, put=__cordl_internal_set_xLength)) float_t  xLength;

/// @brief Field zLength, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_zLength, put=__cordl_internal_set_zLength)) float_t  zLength;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr operator  ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AnyFoodNearby, addr 0x5604fac, size 0x100, virtual false, abstract: false, final false
static inline bool AnyFoodNearby(::GlobalNamespace::CrittersPawn*  creature) ;

/// @brief Method BuildValidationCheck, addr 0x5600754, size 0x12c, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method CamCapture, addr 0x5605fe8, size 0x1b4, virtual false, abstract: false, final false
inline void CamCapture() ;

/// @brief Method CheckInitialize, addr 0x56008ec, size 0x4c, virtual false, abstract: false, final false
static inline void CheckInitialize() ;

/// @brief Method CheckOwnership, addr 0x56087fc, size 0x378, virtual false, abstract: false, final false
inline void CheckOwnership() ;

/// @brief Method CheckValidRemoteActorGrab, addr 0x56079b8, size 0x384, virtual false, abstract: false, final false
inline void CheckValidRemoteActorGrab(int32_t  actorBeingGrabbedActorID, int32_t  grabbingActorID, ::UnityEngine::Quaternion  offsetRotation, ::UnityEngine::Vector3  offsetPosition, bool  isGrabDisabled, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method CheckValidRemoteActorRelease, addr 0x560701c, size 0x468, virtual false, abstract: false, final false
inline void CheckValidRemoteActorRelease(int32_t  releasedActorID, bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ClosestFood, addr 0x56050ac, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::CrittersFood> ClosestFood(::GlobalNamespace::CrittersPawn*  creature) ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5608dc4, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5608dcc, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method CritterAwareOfAny, addr 0x5604f10, size 0x9c, virtual false, abstract: false, final false
static inline bool CritterAwareOfAny(::GlobalNamespace::CrittersPawn*  creature) ;

/// @brief Method DeactivateActor, addr 0x5605e78, size 0x2c, virtual false, abstract: false, final false
inline void DeactivateActor(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method DecrementPoolCount, addr 0x5604840, size 0xb4, virtual false, abstract: false, final false
inline void DecrementPoolCount(::GlobalNamespace::CrittersActor_CrittersActorType  type) ;

/// [IteratorStateMachine(typeof(CrittersManager::<DelayedInitialization>d__152))]
/// @brief Method DelayedInitialization, addr 0x5606254, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedInitialization(::GlobalNamespace::NetPlayer*  player, ::System::Collections::Generic::List_1<::System::Object*>*  nonPlayerActorObjList) ;

/// @brief Method DeregisterActor, addr 0x5604df0, size 0x120, virtual false, abstract: false, final false
static inline void DeregisterActor(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method DeregisterCritter, addr 0x5604a14, size 0xec, virtual false, abstract: false, final false
static inline void DeregisterCritter(::GlobalNamespace::CrittersPawn*  crittersPawn) ;

/// @brief Method DespawnActor, addr 0x56045f0, size 0xec, virtual false, abstract: false, final false
inline void DespawnActor(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method DespawnCritter, addr 0x5605e74, size 0x4, virtual false, abstract: false, final false
inline void DespawnCritter(::GlobalNamespace::CrittersPawn*  crittersPawn) ;

/// @brief Method DuplicateCapsuleCollider, addr 0x55fc29c, size 0x230, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::CapsuleCollider> DuplicateCapsuleCollider(::UnityEngine::Transform*  targetTransform, ::UnityEngine::CapsuleCollider*  sourceCollider) ;

/// @brief Method GetNextSpawnRegion, addr 0x56042fc, size 0xc4, virtual false, abstract: false, final false
inline int32_t GetNextSpawnRegion() ;

/// @brief Method HandleZonesAndOwnership, addr 0x5602638, size 0x248, virtual false, abstract: false, final false
inline void HandleZonesAndOwnership() ;

/// @brief Method IncrementPoolCount, addr 0x56046dc, size 0x164, virtual false, abstract: false, final false
inline void IncrementPoolCount(::GlobalNamespace::CrittersActor_CrittersActorType  type) ;

/// @brief Method InitializeCrittersManager, addr 0x5600938, size 0xb80, virtual false, abstract: false, final false
static inline void InitializeCrittersManager() ;

/// @brief Method JoinedRoomEvent, addr 0x56063a8, size 0x30, virtual false, abstract: false, final false
inline void JoinedRoomEvent() ;

/// @brief Method LeftRoomEvent, addr 0x56063d8, size 0xb4, virtual false, abstract: false, final false
inline void LeftRoomEvent() ;

/// @brief Method LoadGrabSettings, addr 0x56003e8, size 0x2b4, virtual false, abstract: false, final false
inline void LoadGrabSettings() ;

/// @brief Method LocalAuthority, addr 0x5603fb4, size 0x124, virtual false, abstract: false, final false
inline bool LocalAuthority() ;

static inline ::GlobalNamespace::CrittersManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x5602334, size 0x118, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x560221c, size 0x118, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMasterClientAssistedTakeoverRequest, addr 0x5608be4, size 0x8, virtual true, abstract: false, final true
inline bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method OnMyCreatorLeft, addr 0x5608bec, size 0x4, virtual true, abstract: false, final true
inline void OnMyCreatorLeft() ;

/// @brief Method OnMyOwnerLeft, addr 0x5608be0, size 0x4, virtual true, abstract: false, final true
inline void OnMyOwnerLeft() ;

/// @brief Method OnOwnershipRequest, addr 0x5608bd8, size 0x8, virtual true, abstract: false, final true
inline bool OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnOwnershipTransferred, addr 0x5608b74, size 0x64, virtual true, abstract: false, final true
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OwnerSentError, addr 0x5606830, size 0x8, virtual false, abstract: false, final false
inline void OwnerSentError(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlayHaptics, addr 0x560528c, size 0x88, virtual false, abstract: false, final false
static inline void PlayHaptics(::UnityEngine::AudioClip*  clip, float_t  strength, bool  isLeftHand) ;

/// @brief Method PopulatePools, addr 0x56014b8, size 0xbe8, virtual false, abstract: false, final false
inline void PopulatePools() ;

/// @brief Method ProcessActorBinLocations, addr 0x5602a40, size 0x748, virtual false, abstract: false, final false
inline void ProcessActorBinLocations() ;

/// @brief Method ProcessActors, addr 0x5603b34, size 0x280, virtual false, abstract: false, final false
inline void ProcessActors() ;

/// @brief Method ProcessCritterAwareness, addr 0x56033b8, size 0x56c, virtual false, abstract: false, final false
inline void ProcessCritterAwareness() ;

/// @brief Method ProcessDespawningIdles, addr 0x5603924, size 0x210, virtual false, abstract: false, final false
inline void ProcessDespawningIdles() ;

/// @brief Method ProcessNewlyDisabledActors, addr 0x5603db4, size 0x200, virtual false, abstract: false, final false
inline void ProcessNewlyDisabledActors() ;

/// @brief Method ProcessRigSetups, addr 0x5603188, size 0x230, virtual false, abstract: false, final false
inline void ProcessRigSetups() ;

/// @brief Method ProcessSpawning, addr 0x5602880, size 0x1c0, virtual false, abstract: false, final false
inline void ProcessSpawning() ;

/// @brief Method QueueDespawnAllCritters, addr 0x5605ea4, size 0x144, virtual false, abstract: false, final false
inline void QueueDespawnAllCritters() ;

/// @brief Method ReadDataFusion, addr 0x5608030, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x560665c, size 0x100, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RegisterActor, addr 0x5604b98, size 0x258, virtual false, abstract: false, final false
static inline void RegisterActor(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method RegisterCritter, addr 0x56048f4, size 0x120, virtual false, abstract: false, final false
static inline void RegisterCritter(::GlobalNamespace::CrittersPawn*  crittersPawn) ;

/// @brief Method RegisterRigActorSetup, addr 0x56020a0, size 0x17c, virtual false, abstract: false, final false
static inline void RegisterRigActorSetup(::GlobalNamespace::CrittersRigActorSetup*  setup) ;

/// [PunRPC]
/// @brief Method RemoteCritterActorReleased, addr 0x5606ba0, size 0x47c, virtual false, abstract: false, final false
inline void RemoteCritterActorReleased(int32_t  releasedActorID, bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemoteCrittersActorGrabbedby, addr 0x5607694, size 0x324, virtual false, abstract: false, final false
inline void RemoteCrittersActorGrabbedby(int32_t  grabbedActorID, int32_t  grabberActorID, ::UnityEngine::Quaternion  offsetRotation, ::UnityEngine::Vector3  offsetPosition, bool  isGrabDisabled, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [IteratorStateMachine(typeof(CrittersManager::<RemoteDataInitialization>d__151))]
/// @brief Method RemoteDataInitialization, addr 0x560619c, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RemoteDataInitialization(::GlobalNamespace::NetPlayer*  player, int32_t  actorNumber) ;

/// [PunRPC]
/// @brief Method RemoteReceivedCritterEvent, addr 0x56083a8, size 0x388, virtual false, abstract: false, final false
inline void RemoteReceivedCritterEvent(::GlobalNamespace::CrittersManager_CritterEvent  eventType, int32_t  sourceActor, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemoteSpawnCreature, addr 0x5607484, size 0x1d4, virtual false, abstract: false, final false
inline void RemoteSpawnCreature(int32_t  actorID, int32_t  regionId, ::ArrayW<::System::Object*>  spawnData, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemoteUpdateCritterData, addr 0x5607e74, size 0x1b8, virtual false, abstract: false, final false
inline void RemoteUpdateCritterData(::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RemoteUpdatePlayerCrittersActorData, addr 0x5607d3c, size 0x138, virtual false, abstract: false, final false
inline void RemoteUpdatePlayerCrittersActorData(::ArrayW<::System::Object*>  data, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RemoveInitializingPlayer, addr 0x5606318, size 0x90, virtual false, abstract: false, final false
inline void RemoveInitializingPlayer(int32_t  actorNumber) ;

/// [PunRPC]
/// @brief Method RequestDataInitialization, addr 0x560648c, size 0x1d0, virtual false, abstract: false, final false
inline void RequestDataInitialization(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ResetRoom, addr 0x560244c, size 0x19c, virtual false, abstract: false, final false
inline void ResetRoom() ;

/// @brief Method SenderIsOwner, addr 0x560675c, size 0xd4, virtual false, abstract: false, final false
inline bool SenderIsOwner(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetCritterRegion, addr 0x56056cc, size 0x8c, virtual false, abstract: false, final false
inline void SetCritterRegion(::GlobalNamespace::CrittersPawn*  critter, ::GlobalNamespace::CrittersRegion*  region) ;

/// @brief Method SetCritterRegion, addr 0x5604b00, size 0x98, virtual false, abstract: false, final false
inline void SetCritterRegion(::GlobalNamespace::CrittersPawn*  critter, int32_t  regionId) ;

/// @brief Method SpawnActor, addr 0x5605758, size 0x2e4, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CrittersActor> SpawnActor(::GlobalNamespace::CrittersActor_CrittersActorType  type, int32_t  subObjectIndex) ;

/// @brief Method SpawnCritter, addr 0x560537c, size 0x350, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CrittersPawn> SpawnCritter(int32_t  critterType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SpawnCritter, addr 0x56043c0, size 0x230, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CrittersPawn> SpawnCritter(int32_t  regionIndex) ;

/// @brief Method Start, addr 0x5600880, size 0x6c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StopHaptics, addr 0x5605314, size 0x68, virtual false, abstract: false, final false
static inline void StopHaptics(bool  isLeftHand) ;

/// @brief Method Tick, addr 0x56025e8, size 0x50, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TopLevelCritterGrabber, addr 0x5608730, size 0xcc, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CrittersActor> TopLevelCritterGrabber(::GlobalNamespace::CrittersActor*  baseActor) ;

/// @brief Method TriggerEvent, addr 0x5608314, size 0x94, virtual false, abstract: false, final false
inline void TriggerEvent(::GlobalNamespace::CrittersManager_CritterEvent  eventType, int32_t  sourceActor, ::UnityEngine::Vector3  position) ;

/// @brief Method TriggerEvent, addr 0x5608034, size 0x2e0, virtual false, abstract: false, final false
inline void TriggerEvent(::GlobalNamespace::CrittersManager_CritterEvent  eventType, int32_t  sourceActor, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method UpdateActorByType, addr 0x5606838, size 0xe0, virtual false, abstract: false, final false
inline bool UpdateActorByType(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method UpdatePool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::GlobalNamespace::CrittersActor*>)
inline void UpdatePool(::by_ref<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<T>*>*>  dict, ::UnityEngine::GameObject*  prefab, ::GlobalNamespace::CrittersActor_CrittersActorType  crittersActorType, ::UnityEngine::Transform*  parent, int32_t  poolAmount, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  sceneActors) ;

/// @brief Method ValidateDataType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool ValidateDataType(::System::Object*  obj, ::by_ref<T>  dataAsType) ;

/// @brief Method WriteDataFusion, addr 0x560802c, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5606918, size 0x288, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [CompilerGenerated]
/// @brief Method <LoadGrabSettings>b__58_0, addr 0x5608d4c, size 0x3c, virtual false, abstract: false, final false
inline void _LoadGrabSettings_b__58_0(::StringW  data) ;

/// [CompilerGenerated]
/// @brief Method <LoadGrabSettings>b__58_2, addr 0x5608d88, size 0x3c, virtual false, abstract: false, final false
inline void _LoadGrabSettings_b__58_2(::StringW  data) ;

constexpr float_t const& __cordl_internal_get_MaxAttachSpeed() const;

constexpr float_t& __cordl_internal_get_MaxAttachSpeed() ;

constexpr ::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& __cordl_internal_get_OnCritterEventReceived() const;

constexpr ::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*& __cordl_internal_get_OnCritterEventReceived() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__currentRegionIndex() const;

constexpr int32_t& __cordl_internal_get__currentRegionIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>* const& __cordl_internal_get__spawnRegions() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*& __cordl_internal_get__spawnRegions() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersActor>,int32_t>* const& __cordl_internal_get_actorBinIndices() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersActor>,int32_t>*& __cordl_internal_get_actorBinIndices() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*> const& __cordl_internal_get_actorBins() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>& __cordl_internal_get_actorBins() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_actorById() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_actorById() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>* const& __cordl_internal_get_actorPools() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*& __cordl_internal_get_actorPools() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Critters::Scripts::CrittersActorSpawner>>* const& __cordl_internal_get_actorSpawners() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Critters::Scripts::CrittersActorSpawner>>*& __cordl_internal_get_actorSpawners() ;

constexpr ::ArrayW<::GlobalNamespace::CrittersActor_CrittersActorType> const& __cordl_internal_get_actorTypes() const;

constexpr ::ArrayW<::GlobalNamespace::CrittersActor_CrittersActorType>& __cordl_internal_get_actorTypes() ;

constexpr float_t const& __cordl_internal_get_actorsInitializationCallCooldown() const;

constexpr float_t& __cordl_internal_get_actorsInitializationCallCooldown() ;

constexpr int32_t const& __cordl_internal_get_actorsPerInitializationCall() const;

constexpr int32_t& __cordl_internal_get_actorsPerInitializationCall() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_allActors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_allActors() ;

constexpr int32_t const& __cordl_internal_get_allActorsCount() const;

constexpr int32_t& __cordl_internal_get_allActorsCount() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_allRigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_allRigs() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersPawn>,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>* const& __cordl_internal_get_awareOfActors() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersPawn>,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*& __cordl_internal_get_awareOfActors() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_bagPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_bagPrefab() ;

constexpr float_t const& __cordl_internal_get_binDimensionXMin() const;

constexpr float_t& __cordl_internal_get_binDimensionXMin() ;

constexpr float_t const& __cordl_internal_get_binDimensionZMin() const;

constexpr float_t& __cordl_internal_get_binDimensionZMin() ;

constexpr int32_t const& __cordl_internal_get_binXCount() const;

constexpr int32_t& __cordl_internal_get_binXCount() ;

constexpr int32_t const& __cordl_internal_get_binZCount() const;

constexpr int32_t& __cordl_internal_get_binZCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_bodyAttachPointPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_bodyAttachPointPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cagePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cagePrefab() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_containerLayer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_containerLayer() ;

constexpr ::UnityW<::GlobalNamespace::CritterIndex> const& __cordl_internal_get_creatureIndex() const;

constexpr ::UnityW<::GlobalNamespace::CritterIndex>& __cordl_internal_get_creatureIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_creaturePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_creaturePrefab() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_critterEventCallLimit() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_critterEventCallLimit() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_crittersActors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_crittersActors() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>* const& __cordl_internal_get_crittersPawns() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*& __cordl_internal_get_crittersPawns() ;

constexpr ::UnityW<::GlobalNamespace::CrittersPool> const& __cordl_internal_get_crittersPool() const;

constexpr ::UnityW<::GlobalNamespace::CrittersPool>& __cordl_internal_get_crittersPool() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_crittersRange() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_crittersRange() ;

constexpr float_t const& __cordl_internal_get_damperAngularForce() const;

constexpr float_t& __cordl_internal_get_damperAngularForce() ;

constexpr float_t const& __cordl_internal_get_damperForce() const;

constexpr float_t& __cordl_internal_get_damperForce() ;

constexpr float_t const& __cordl_internal_get_decayRate() const;

constexpr float_t& __cordl_internal_get_decayRate() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>* const& __cordl_internal_get_despawnDecayValue() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*& __cordl_internal_get_despawnDecayValue() ;

constexpr int32_t const& __cordl_internal_get_despawnIndex() const;

constexpr int32_t& __cordl_internal_get_despawnIndex() ;

constexpr int32_t const& __cordl_internal_get_despawnThreshold() const;

constexpr int32_t& __cordl_internal_get_despawnThreshold() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_despawnableActors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_despawnableActors() ;

constexpr float_t const& __cordl_internal_get_fastThrowMultiplier() const;

constexpr float_t& __cordl_internal_get_fastThrowMultiplier() ;

constexpr float_t const& __cordl_internal_get_fastThrowThreshold() const;

constexpr float_t& __cordl_internal_get_fastThrowThreshold() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_foodPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_foodPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_foodSpawnerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_foodSpawnerPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_grabberPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_grabberPrefab() ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get_guard() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get_guard() ;

constexpr bool const& __cordl_internal_get_hasNewlyInitialized() const;

constexpr bool& __cordl_internal_get_hasNewlyInitialized() ;

constexpr float_t const& __cordl_internal_get_heavyMass() const;

constexpr float_t& __cordl_internal_get_heavyMass() ;

constexpr float_t const& __cordl_internal_get_individualBinSide() const;

constexpr float_t& __cordl_internal_get_individualBinSide() ;

constexpr float_t const& __cordl_internal_get_initRequestCooldown() const;

constexpr float_t& __cordl_internal_get_initRequestCooldown() ;

constexpr bool const& __cordl_internal_get_intialized() const;

constexpr bool& __cordl_internal_get_intialized() ;

constexpr float_t const& __cordl_internal_get_lastRequest() const;

constexpr float_t& __cordl_internal_get_lastRequest() ;

constexpr double_t const& __cordl_internal_get_lastSpawnTime() const;

constexpr double_t& __cordl_internal_get_lastSpawnTime() ;

constexpr float_t const& __cordl_internal_get_lightMass() const;

constexpr float_t& __cordl_internal_get_lightMass() ;

constexpr bool const& __cordl_internal_get_localInZone() const;

constexpr bool& __cordl_internal_get_localInZone() ;

constexpr int32_t const& __cordl_internal_get_lowPriorityActorsPerFrame() const;

constexpr int32_t& __cordl_internal_get_lowPriorityActorsPerFrame() ;

constexpr int32_t const& __cordl_internal_get_lowPriorityIndex() const;

constexpr int32_t& __cordl_internal_get_lowPriorityIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_lowPriorityPawnsToProcess() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_lowPriorityPawnsToProcess() ;

constexpr float_t const& __cordl_internal_get_maxGrabDistance() const;

constexpr float_t& __cordl_internal_get_maxGrabDistance() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_movementLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_movementLayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_nearbyActors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_nearbyActors() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_newlyDisabledActors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_newlyDisabledActors() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_noiseMakerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_noiseMakerPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_noisePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_noisePrefab() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_objList() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_objList() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_objectLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_objectLayers() ;

constexpr float_t const& __cordl_internal_get_overlapDistanceMax() const;

constexpr float_t& __cordl_internal_get_overlapDistanceMax() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_persistentActors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_persistentActors() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_playersToUpdate() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_playersToUpdate() ;

constexpr int32_t const& __cordl_internal_get_poolCount() const;

constexpr int32_t& __cordl_internal_get_poolCount() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>* const& __cordl_internal_get_poolCounts() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*& __cordl_internal_get_poolCounts() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>* const& __cordl_internal_get_poolIndexDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*& __cordl_internal_get_poolIndexDict() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_poolParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_poolParent() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_priorityBins() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_priorityBins() ;

constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags const& __cordl_internal_get_privateRoomGrabbingFlags() const;

constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags& __cordl_internal_get_privateRoomGrabbingFlags() ;

constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags const& __cordl_internal_get_publicRoomGrabbingFlags() const;

constexpr ::GlobalNamespace::CrittersManager_AllowGrabbingFlags& __cordl_internal_get_publicRoomGrabbingFlags() ;

constexpr int32_t const& __cordl_internal_get_rigActorId() const;

constexpr int32_t& __cordl_internal_get_rigActorId() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRigActorSetup>>* const& __cordl_internal_get_rigActorSetups() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*& __cordl_internal_get_rigActorSetups() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::CrittersRigActorSetup>>* const& __cordl_internal_get_rigSetupByRig() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*& __cordl_internal_get_rigSetupByRig() ;

constexpr float_t const& __cordl_internal_get_softJointGracePeriod() const;

constexpr float_t& __cordl_internal_get_softJointGracePeriod() ;

constexpr double_t const& __cordl_internal_get_spawnDelay() const;

constexpr double_t& __cordl_internal_get_spawnDelay() ;

constexpr int32_t const& __cordl_internal_get_spawnerIndex() const;

constexpr int32_t& __cordl_internal_get_spawnerIndex() ;

constexpr float_t const& __cordl_internal_get_springAngularForce() const;

constexpr float_t& __cordl_internal_get_springAngularForce() ;

constexpr float_t const& __cordl_internal_get_springForce() const;

constexpr float_t& __cordl_internal_get_springForce() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stickyGooPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stickyGooPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stickyTrapPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stickyTrapPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_stunBombPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_stunBombPrefab() ;

constexpr int32_t const& __cordl_internal_get_totalBinsApproximate() const;

constexpr int32_t& __cordl_internal_get_totalBinsApproximate() ;

constexpr int32_t const& __cordl_internal_get_universalActorId() const;

constexpr int32_t& __cordl_internal_get_universalActorId() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_updatesToSend() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_updatesToSend() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_updatingPlayers() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_updatingPlayers() ;

constexpr float_t const& __cordl_internal_get_xLength() const;

constexpr float_t& __cordl_internal_get_xLength() ;

constexpr float_t const& __cordl_internal_get_zLength() const;

constexpr float_t& __cordl_internal_get_zLength() ;

constexpr void __cordl_internal_set_MaxAttachSpeed(float_t  value) ;

constexpr void __cordl_internal_set_OnCritterEventReceived(::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__currentRegionIndex(int32_t  value) ;

constexpr void __cordl_internal_set__spawnRegions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*  value) ;

constexpr void __cordl_internal_set_actorBinIndices(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersActor>,int32_t>*  value) ;

constexpr void __cordl_internal_set_actorBins(::ArrayW<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>  value) ;

constexpr void __cordl_internal_set_actorById(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_actorPools(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*  value) ;

constexpr void __cordl_internal_set_actorSpawners(::System::Collections::Generic::List_1<::UnityW<::Critters::Scripts::CrittersActorSpawner>>*  value) ;

constexpr void __cordl_internal_set_actorTypes(::ArrayW<::GlobalNamespace::CrittersActor_CrittersActorType>  value) ;

constexpr void __cordl_internal_set_actorsInitializationCallCooldown(float_t  value) ;

constexpr void __cordl_internal_set_actorsPerInitializationCall(int32_t  value) ;

constexpr void __cordl_internal_set_allActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_allActorsCount(int32_t  value) ;

constexpr void __cordl_internal_set_allRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_awareOfActors(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersPawn>,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*  value) ;

constexpr void __cordl_internal_set_bagPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_binDimensionXMin(float_t  value) ;

constexpr void __cordl_internal_set_binDimensionZMin(float_t  value) ;

constexpr void __cordl_internal_set_binXCount(int32_t  value) ;

constexpr void __cordl_internal_set_binZCount(int32_t  value) ;

constexpr void __cordl_internal_set_bodyAttachPointPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_cagePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_containerLayer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_creatureIndex(::UnityW<::GlobalNamespace::CritterIndex>  value) ;

constexpr void __cordl_internal_set_creaturePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_critterEventCallLimit(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_crittersActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_crittersPawns(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*  value) ;

constexpr void __cordl_internal_set_crittersPool(::UnityW<::GlobalNamespace::CrittersPool>  value) ;

constexpr void __cordl_internal_set_crittersRange(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_damperAngularForce(float_t  value) ;

constexpr void __cordl_internal_set_damperForce(float_t  value) ;

constexpr void __cordl_internal_set_decayRate(float_t  value) ;

constexpr void __cordl_internal_set_despawnDecayValue(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  value) ;

constexpr void __cordl_internal_set_despawnIndex(int32_t  value) ;

constexpr void __cordl_internal_set_despawnThreshold(int32_t  value) ;

constexpr void __cordl_internal_set_despawnableActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_fastThrowMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_fastThrowThreshold(float_t  value) ;

constexpr void __cordl_internal_set_foodPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_foodSpawnerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_grabberPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_guard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

constexpr void __cordl_internal_set_hasNewlyInitialized(bool  value) ;

constexpr void __cordl_internal_set_heavyMass(float_t  value) ;

constexpr void __cordl_internal_set_individualBinSide(float_t  value) ;

constexpr void __cordl_internal_set_initRequestCooldown(float_t  value) ;

constexpr void __cordl_internal_set_intialized(bool  value) ;

constexpr void __cordl_internal_set_lastRequest(float_t  value) ;

constexpr void __cordl_internal_set_lastSpawnTime(double_t  value) ;

constexpr void __cordl_internal_set_lightMass(float_t  value) ;

constexpr void __cordl_internal_set_localInZone(bool  value) ;

constexpr void __cordl_internal_set_lowPriorityActorsPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lowPriorityIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lowPriorityPawnsToProcess(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_maxGrabDistance(float_t  value) ;

constexpr void __cordl_internal_set_movementLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_nearbyActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_newlyDisabledActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_noiseMakerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_noisePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_objList(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_objectLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_overlapDistanceMax(float_t  value) ;

constexpr void __cordl_internal_set_persistentActors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_playersToUpdate(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_poolCount(int32_t  value) ;

constexpr void __cordl_internal_set_poolCounts(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*  value) ;

constexpr void __cordl_internal_set_poolIndexDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*  value) ;

constexpr void __cordl_internal_set_poolParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_priorityBins(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_privateRoomGrabbingFlags(::GlobalNamespace::CrittersManager_AllowGrabbingFlags  value) ;

constexpr void __cordl_internal_set_publicRoomGrabbingFlags(::GlobalNamespace::CrittersManager_AllowGrabbingFlags  value) ;

constexpr void __cordl_internal_set_rigActorId(int32_t  value) ;

constexpr void __cordl_internal_set_rigActorSetups(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*  value) ;

constexpr void __cordl_internal_set_rigSetupByRig(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*  value) ;

constexpr void __cordl_internal_set_softJointGracePeriod(float_t  value) ;

constexpr void __cordl_internal_set_spawnDelay(double_t  value) ;

constexpr void __cordl_internal_set_spawnerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_springAngularForce(float_t  value) ;

constexpr void __cordl_internal_set_springForce(float_t  value) ;

constexpr void __cordl_internal_set_stickyGooPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_stickyTrapPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_stunBombPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_totalBinsApproximate(int32_t  value) ;

constexpr void __cordl_internal_set_universalActorId(int32_t  value) ;

constexpr void __cordl_internal_set_updatesToSend(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_updatingPlayers(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_xLength(float_t  value) ;

constexpr void __cordl_internal_set_zLength(float_t  value) ;

/// @brief Method .ctor, addr 0x5608bf0, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCritterEventReceived, addr 0x55fe580, size 0xb0, virtual false, abstract: false, final false
inline void add_OnCritterEventReceived(::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

static inline bool getStaticF__hasInstance_k__BackingField() ;

static inline ::UnityW<::GlobalNamespace::CrittersActorGrabber> getStaticF__leftGrabber() ;

static inline ::UnityW<::GlobalNamespace::CrittersActorGrabber> getStaticF__rightGrabber() ;

static inline ::UnityW<::GlobalNamespace::CrittersManager> getStaticF_instance() ;

/// @brief Method get_LocalInZone, addr 0x560069c, size 0x8, virtual false, abstract: false, final false
inline bool get_LocalInZone() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5600234, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Method get_allowGrabbingEntireBag, addr 0x5600244, size 0x8c, virtual false, abstract: false, final false
inline bool get_allowGrabbingEntireBag() ;

/// @brief Method get_allowGrabbingFromBags, addr 0x560035c, size 0x8c, virtual false, abstract: false, final false
inline bool get_allowGrabbingFromBags() ;

/// @brief Method get_allowGrabbingOutOfHands, addr 0x56002d0, size 0x8c, virtual false, abstract: false, final false
inline bool get_allowGrabbingOutOfHands() ;

/// [CompilerGenerated]
/// @brief Method get_hasInstance, addr 0x560019c, size 0x48, virtual false, abstract: false, final false
static inline bool get_hasInstance() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnCritterEventReceived, addr 0x56006a4, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnCritterEventReceived(::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value) ;

static inline void setStaticF__hasInstance_k__BackingField(bool  value) ;

static inline void setStaticF__leftGrabber(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value) ;

static inline void setStaticF__rightGrabber(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::CrittersManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x560023c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasInstance, addr 0x56001e4, size 0x50, virtual false, abstract: false, final false
static inline void set_hasInstance(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersManager(CrittersManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersManager(CrittersManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{108};

/// @brief Field creatureIndex, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CritterIndex>  ___creatureIndex;

/// @brief Field movementLayers, offset: 0xa8, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___movementLayers;

/// @brief Field objectLayers, offset: 0xac, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___objectLayers;

/// @brief Field containerLayer, offset: 0xb0, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___containerLayer;

/// [ReadOnly]
/// @brief Field crittersActors, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___crittersActors;

/// [ReadOnly]
/// @brief Field allActors, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___allActors;

/// [ReadOnly]
/// @brief Field crittersPawns, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersPawn>>*  ___crittersPawns;

/// [ReadOnly]
/// @brief Field despawnableActors, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___despawnableActors;

/// [ReadOnly]
/// @brief Field newlyDisabledActors, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___newlyDisabledActors;

/// [ReadOnly]
/// @brief Field rigActorSetups, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*  ___rigActorSetups;

/// [ReadOnly]
/// @brief Field actorSpawners, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Critters::Scripts::CrittersActorSpawner>>*  ___actorSpawners;

/// @brief Field persistentActors, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___persistentActors;

/// @brief Field actorById, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CrittersActor>>*  ___actorById;

/// @brief Field awareOfActors, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersPawn>,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*  ___awareOfActors;

/// @brief Field rigSetupByRig, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::UnityW<::GlobalNamespace::CrittersRigActorSetup>>*  ___rigSetupByRig;

/// @brief Field allActorsCount, offset: 0x110, size: 0x4, def value: None
 int32_t  ___allActorsCount;

/// @brief Field intialized, offset: 0x114, size: 0x1, def value: None
 bool  ___intialized;

/// @brief Field updatesToSend, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___updatesToSend;

/// @brief Field actorsPerInitializationCall, offset: 0x120, size: 0x4, def value: None
 int32_t  ___actorsPerInitializationCall;

/// @brief Field actorsInitializationCallCooldown, offset: 0x124, size: 0x4, def value: None
 float_t  ___actorsInitializationCallCooldown;

/// @brief Field poolParent, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___poolParent;

/// @brief Field objList, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___objList;

/// @brief Field spawnDelay, offset: 0x138, size: 0x8, def value: None
 double_t  ___spawnDelay;

/// @brief Field lastSpawnTime, offset: 0x140, size: 0x8, def value: None
 double_t  ___lastSpawnTime;

/// @brief Field softJointGracePeriod, offset: 0x148, size: 0x4, def value: None
 float_t  ___softJointGracePeriod;

/// @brief Field _spawnRegions, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersRegion>>*  ____spawnRegions;

/// @brief Field _currentRegionIndex, offset: 0x158, size: 0x4, def value: None
 int32_t  ____currentRegionIndex;

/// @brief Field springForce, offset: 0x15c, size: 0x4, def value: None
 float_t  ___springForce;

/// @brief Field springAngularForce, offset: 0x160, size: 0x4, def value: None
 float_t  ___springAngularForce;

/// @brief Field damperForce, offset: 0x164, size: 0x4, def value: None
 float_t  ___damperForce;

/// @brief Field damperAngularForce, offset: 0x168, size: 0x4, def value: None
 float_t  ___damperAngularForce;

/// @brief Field lightMass, offset: 0x16c, size: 0x4, def value: None
 float_t  ___lightMass;

/// @brief Field heavyMass, offset: 0x170, size: 0x4, def value: None
 float_t  ___heavyMass;

/// @brief Field overlapDistanceMax, offset: 0x174, size: 0x4, def value: None
 float_t  ___overlapDistanceMax;

/// @brief Field fastThrowThreshold, offset: 0x178, size: 0x4, def value: None
 float_t  ___fastThrowThreshold;

/// @brief Field fastThrowMultiplier, offset: 0x17c, size: 0x4, def value: None
 float_t  ___fastThrowMultiplier;

/// @brief Field poolIndexDict, offset: 0x180, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*  ___poolIndexDict;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x188, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field privateRoomGrabbingFlags, offset: 0x18c, size: 0x4, def value: None
 ::GlobalNamespace::CrittersManager_AllowGrabbingFlags  ___privateRoomGrabbingFlags;

/// @brief Field publicRoomGrabbingFlags, offset: 0x190, size: 0x4, def value: None
 ::GlobalNamespace::CrittersManager_AllowGrabbingFlags  ___publicRoomGrabbingFlags;

/// @brief Field MaxAttachSpeed, offset: 0x194, size: 0x4, def value: None
 float_t  ___MaxAttachSpeed;

/// @brief Field binDimensionXMin, offset: 0x198, size: 0x4, def value: None
 float_t  ___binDimensionXMin;

/// @brief Field binDimensionZMin, offset: 0x19c, size: 0x4, def value: None
 float_t  ___binDimensionZMin;

/// @brief Field crittersRange, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___crittersRange;

/// @brief Field totalBinsApproximate, offset: 0x1a8, size: 0x4, def value: None
 int32_t  ___totalBinsApproximate;

/// @brief Field xLength, offset: 0x1ac, size: 0x4, def value: None
 float_t  ___xLength;

/// @brief Field zLength, offset: 0x1b0, size: 0x4, def value: None
 float_t  ___zLength;

/// @brief Field binXCount, offset: 0x1b4, size: 0x4, def value: None
 int32_t  ___binXCount;

/// @brief Field binZCount, offset: 0x1b8, size: 0x4, def value: None
 int32_t  ___binZCount;

/// @brief Field individualBinSide, offset: 0x1bc, size: 0x4, def value: None
 float_t  ___individualBinSide;

/// @brief Field actorBins, offset: 0x1c0, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>  ___actorBins;

/// @brief Field priorityBins, offset: 0x1c8, size: 0x8, def value: None
 ::ArrayW<bool>  ___priorityBins;

/// @brief Field actorBinIndices, offset: 0x1d0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CrittersActor>,int32_t>*  ___actorBinIndices;

/// @brief Field nearbyActors, offset: 0x1d8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___nearbyActors;

/// @brief Field playersToUpdate, offset: 0x1e0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___playersToUpdate;

/// @brief Field crittersPool, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersPool>  ___crittersPool;

/// @brief Field lowPriorityActorsPerFrame, offset: 0x1f0, size: 0x4, def value: None
 int32_t  ___lowPriorityActorsPerFrame;

/// @brief Field lowPriorityIndex, offset: 0x1f4, size: 0x4, def value: None
 int32_t  ___lowPriorityIndex;

/// @brief Field spawnerIndex, offset: 0x1f8, size: 0x4, def value: None
 int32_t  ___spawnerIndex;

/// @brief Field despawnIndex, offset: 0x1fc, size: 0x4, def value: None
 int32_t  ___despawnIndex;

/// @brief Field lowPriorityPawnsToProcess, offset: 0x200, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___lowPriorityPawnsToProcess;

/// @brief Field despawnDecayValue, offset: 0x208, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,float_t>*  ___despawnDecayValue;

/// @brief Field decayRate, offset: 0x210, size: 0x4, def value: None
 float_t  ___decayRate;

/// @brief Field actorTypes, offset: 0x218, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CrittersActor_CrittersActorType>  ___actorTypes;

/// @brief Field maxGrabDistance, offset: 0x220, size: 0x4, def value: None
 float_t  ___maxGrabDistance;

/// @brief Field guard, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  ___guard;

/// @brief Field allRigs, offset: 0x230, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___allRigs;

/// @brief Field localInZone, offset: 0x238, size: 0x1, def value: None
 bool  ___localInZone;

/// @brief Field updatingPlayers, offset: 0x240, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___updatingPlayers;

/// @brief Field hasNewlyInitialized, offset: 0x248, size: 0x1, def value: None
 bool  ___hasNewlyInitialized;

/// @brief Field initRequestCooldown, offset: 0x24c, size: 0x4, def value: None
 float_t  ___initRequestCooldown;

/// @brief Field lastRequest, offset: 0x250, size: 0x4, def value: None
 float_t  ___lastRequest;

/// @brief Field poolCount, offset: 0x254, size: 0x4, def value: None
 int32_t  ___poolCount;

/// @brief Field despawnThreshold, offset: 0x258, size: 0x4, def value: None
 int32_t  ___despawnThreshold;

/// @brief Field poolCounts, offset: 0x260, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,int32_t>*  ___poolCounts;

/// @brief Field actorPools, offset: 0x268, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CrittersActor_CrittersActorType,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*>*  ___actorPools;

/// @brief Field foodPrefab, offset: 0x270, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___foodPrefab;

/// @brief Field creaturePrefab, offset: 0x278, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___creaturePrefab;

/// @brief Field noisePrefab, offset: 0x280, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___noisePrefab;

/// @brief Field grabberPrefab, offset: 0x288, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___grabberPrefab;

/// @brief Field cagePrefab, offset: 0x290, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___cagePrefab;

/// @brief Field foodSpawnerPrefab, offset: 0x298, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___foodSpawnerPrefab;

/// @brief Field stunBombPrefab, offset: 0x2a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stunBombPrefab;

/// @brief Field bodyAttachPointPrefab, offset: 0x2a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___bodyAttachPointPrefab;

/// @brief Field bagPrefab, offset: 0x2b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___bagPrefab;

/// @brief Field noiseMakerPrefab, offset: 0x2b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___noiseMakerPrefab;

/// @brief Field stickyTrapPrefab, offset: 0x2c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stickyTrapPrefab;

/// @brief Field stickyGooPrefab, offset: 0x2c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___stickyGooPrefab;

/// @brief Field universalActorId, offset: 0x2d0, size: 0x4, def value: None
 int32_t  ___universalActorId;

/// @brief Field rigActorId, offset: 0x2d4, size: 0x4, def value: None
 int32_t  ___rigActorId;

/// [CompilerGenerated]
/// @brief Field OnCritterEventReceived, offset: 0x2d8, size: 0x8, def value: None
 ::System::Action_4<::GlobalNamespace::CrittersManager_CritterEvent,int32_t,::UnityEngine::Vector3,::UnityEngine::Quaternion>*  ___OnCritterEventReceived;

/// @brief Field critterEventCallLimit, offset: 0x2e0, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___critterEventCallLimit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersManager, ___creatureIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___movementLayers) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___objectLayers) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___containerLayer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___crittersActors) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___allActors) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___crittersPawns) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___despawnableActors) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___newlyDisabledActors) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___rigActorSetups) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___actorSpawners) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___persistentActors) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___actorById) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___awareOfActors) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___rigSetupByRig) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___allActorsCount) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___intialized) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___updatesToSend) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___actorsPerInitializationCall) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___actorsInitializationCallCooldown) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___poolParent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___objList) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___spawnDelay) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___lastSpawnTime) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___softJointGracePeriod) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ____spawnRegions) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ____currentRegionIndex) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___springForce) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___springAngularForce) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___damperForce) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___damperAngularForce) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___lightMass) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___heavyMass) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___overlapDistanceMax) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___fastThrowThreshold) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___fastThrowMultiplier) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___poolIndexDict) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ____TickRunning_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___privateRoomGrabbingFlags) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___publicRoomGrabbingFlags) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___MaxAttachSpeed) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___binDimensionXMin) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___binDimensionZMin) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___crittersRange) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___totalBinsApproximate) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___xLength) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___zLength) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___binXCount) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___binZCount) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___individualBinSide) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___actorBins) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___priorityBins) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___actorBinIndices) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___nearbyActors) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___playersToUpdate) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___crittersPool) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___lowPriorityActorsPerFrame) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___lowPriorityIndex) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___spawnerIndex) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___despawnIndex) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___lowPriorityPawnsToProcess) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___despawnDecayValue) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___decayRate) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___actorTypes) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___maxGrabDistance) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___guard) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___allRigs) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___localInZone) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___updatingPlayers) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___hasNewlyInitialized) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___initRequestCooldown) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___lastRequest) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___poolCount) == 0x254, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___despawnThreshold) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___poolCounts) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___actorPools) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___foodPrefab) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___creaturePrefab) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___noisePrefab) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___grabberPrefab) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___cagePrefab) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___foodSpawnerPrefab) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___stunBombPrefab) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___bodyAttachPointPrefab) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___bagPrefab) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___noiseMakerPrefab) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___stickyTrapPrefab) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___stickyGooPrefab) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___universalActorId) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___rigActorId) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___OnCritterEventReceived) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager, ___critterEventCallLimit) == 0x2e0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersManager) == 0x2e8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersManager/<RemoteDataInitialization>d__151
class CORDL_TYPE CrittersManager__RemoteDataInitialization_d__151 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CrittersManager>  __4__this;

/// @brief Field <i>5__6, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__6, put=__cordl_internal_set__i_5__6)) int32_t  _i_5__6;

/// @brief Field <nonPlayerActorObjList>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__nonPlayerActorObjList_5__2, put=__cordl_internal_set__nonPlayerActorObjList_5__2)) ::System::Collections::Generic::List_1<::System::Object*>*  _nonPlayerActorObjList_5__2;

/// @brief Field <playerActorDataCount>5__5, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__playerActorDataCount_5__5, put=__cordl_internal_set__playerActorDataCount_5__5)) int32_t  _playerActorDataCount_5__5;

/// @brief Field <playerActorObjList>5__3, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerActorObjList_5__3, put=__cordl_internal_set__playerActorObjList_5__3)) ::System::Collections::Generic::List_1<::System::Object*>*  _playerActorObjList_5__3;

/// @brief Field <worldActorDataCount>5__4, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__worldActorDataCount_5__4, put=__cordl_internal_set__worldActorDataCount_5__4)) int32_t  _worldActorDataCount_5__4;

/// @brief Field actorNumber, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorNumber, put=__cordl_internal_set_actorNumber)) int32_t  actorNumber;

/// @brief Field player, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5609198, size 0x84c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x56099e4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x56099ec, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5609a24, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5609194, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CrittersManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CrittersManager>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__6() const;

constexpr int32_t& __cordl_internal_get__i_5__6() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__nonPlayerActorObjList_5__2() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__nonPlayerActorObjList_5__2() ;

constexpr int32_t const& __cordl_internal_get__playerActorDataCount_5__5() const;

constexpr int32_t& __cordl_internal_get__playerActorDataCount_5__5() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__playerActorObjList_5__3() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__playerActorObjList_5__3() ;

constexpr int32_t const& __cordl_internal_get__worldActorDataCount_5__4() const;

constexpr int32_t& __cordl_internal_get__worldActorDataCount_5__4() ;

constexpr int32_t const& __cordl_internal_get_actorNumber() const;

constexpr int32_t& __cordl_internal_get_actorNumber() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersManager>  value) ;

constexpr void __cordl_internal_set__i_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__nonPlayerActorObjList_5__2(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__playerActorDataCount_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__playerActorObjList_5__3(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__worldActorDataCount_5__4(int32_t  value) ;

constexpr void __cordl_internal_set_actorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x560622c, size 0x28, virtual false, abstract: false, final false
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
constexpr CrittersManager__RemoteDataInitialization_d__151() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersManager__RemoteDataInitialization_d__151", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersManager__RemoteDataInitialization_d__151(CrittersManager__RemoteDataInitialization_d__151 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersManager__RemoteDataInitialization_d__151", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersManager__RemoteDataInitialization_d__151(CrittersManager__RemoteDataInitialization_d__151 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{107};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersManager>  _____4__this;

/// @brief Field actorNumber, offset: 0x28, size: 0x4, def value: None
 int32_t  ___actorNumber;

/// @brief Field player, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

/// @brief Field <nonPlayerActorObjList>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____nonPlayerActorObjList_5__2;

/// @brief Field <playerActorObjList>5__3, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____playerActorObjList_5__3;

/// @brief Field <worldActorDataCount>5__4, offset: 0x48, size: 0x4, def value: None
 int32_t  ____worldActorDataCount_5__4;

/// @brief Field <playerActorDataCount>5__5, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____playerActorDataCount_5__5;

/// @brief Field <i>5__6, offset: 0x50, size: 0x4, def value: None
 int32_t  ____i_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, ___actorNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, ___player) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, ____nonPlayerActorObjList_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, ____playerActorObjList_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, ____worldActorDataCount_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, ____playerActorDataCount_5__5) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151, ____i_5__6) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersManager__RemoteDataInitialization_d__151) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersManager/<DelayedInitialization>d__152
class CORDL_TYPE CrittersManager__DelayedInitialization_d__152 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CrittersManager>  __4__this;

/// @brief Field nonPlayerActorObjList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonPlayerActorObjList, put=__cordl_internal_set_nonPlayerActorObjList)) ::System::Collections::Generic::List_1<::System::Object*>*  nonPlayerActorObjList;

/// @brief Field player, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5608fdc, size 0x170, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CrittersManager__DelayedInitialization_d__152* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x560914c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5609154, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x560918c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5608fd8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CrittersManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CrittersManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_nonPlayerActorObjList() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_nonPlayerActorObjList() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersManager>  value) ;

constexpr void __cordl_internal_set_nonPlayerActorObjList(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x56062f0, size 0x28, virtual false, abstract: false, final false
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
constexpr CrittersManager__DelayedInitialization_d__152() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersManager__DelayedInitialization_d__152", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersManager__DelayedInitialization_d__152(CrittersManager__DelayedInitialization_d__152 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersManager__DelayedInitialization_d__152", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersManager__DelayedInitialization_d__152(CrittersManager__DelayedInitialization_d__152 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{106};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersManager>  _____4__this;

/// @brief Field player, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

/// @brief Field nonPlayerActorObjList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___nonPlayerActorObjList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersManager__DelayedInitialization_d__152, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__DelayedInitialization_d__152, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__DelayedInitialization_d__152, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__DelayedInitialization_d__152, ___player) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersManager__DelayedInitialization_d__152, ___nonPlayerActorObjList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersManager__DelayedInitialization_d__152) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersManager/<>c
class CORDL_TYPE CrittersManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::CrittersManager___c*  __9;

/// @brief Field <>9__168_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__168_0, put=setStaticF___9__168_0)) ::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*  __9__168_0;

/// @brief Field <>9__168_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__168_1, put=setStaticF___9__168_1)) ::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*  __9__168_1;

/// @brief Field <>9__58_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_1, put=setStaticF___9__58_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__58_1;

/// @brief Field <>9__58_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_3, put=setStaticF___9__58_3)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__58_3;

static inline ::GlobalNamespace::CrittersManager___c* New_ctor() ;

/// @brief Method <LoadGrabSettings>b__58_1, addr 0x5608e44, size 0x4, virtual false, abstract: false, final false
inline void _LoadGrabSettings_b__58_1(::PlayFab::PlayFabError*  e) ;

/// @brief Method <LoadGrabSettings>b__58_3, addr 0x5608e48, size 0x4, virtual false, abstract: false, final false
inline void _LoadGrabSettings_b__58_3(::PlayFab::PlayFabError*  e) ;

/// @brief Method <PopulatePools>b__168_0, addr 0x5608e4c, size 0x124, virtual false, abstract: false, final false
inline int32_t _PopulatePools_b__168_0(::GlobalNamespace::CrittersActor*  x, ::GlobalNamespace::CrittersActor*  y) ;

/// @brief Method <PopulatePools>b__168_1, addr 0x5608f70, size 0x68, virtual false, abstract: false, final false
inline int32_t _PopulatePools_b__168_1(::GlobalNamespace::CrittersActor*  x, ::GlobalNamespace::CrittersActor*  y) ;

/// @brief Method .ctor, addr 0x5608e3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::CrittersManager___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>* getStaticF___9__168_0() ;

static inline ::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>* getStaticF___9__168_1() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__58_1() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__58_3() ;

static inline void setStaticF___9(::GlobalNamespace::CrittersManager___c*  value) ;

static inline void setStaticF___9__168_0(::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

static inline void setStaticF___9__168_1(::System::Comparison_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

static inline void setStaticF___9__58_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

static inline void setStaticF___9__58_3(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersManager___c(CrittersManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersManager___c(CrittersManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{105};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CrittersManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
