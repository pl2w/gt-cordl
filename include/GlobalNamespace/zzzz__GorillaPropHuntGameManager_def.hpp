#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPropHuntGameManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPropHuntGameManager_EPropHuntGameState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagManager_def.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPropHuntGameManager)
namespace GlobalNamespace {
struct GorillaPropHuntGameManager_EPropHuntGameState;
}
namespace GlobalNamespace {
class GorillaPropHuntGameManager___c;
}
namespace GlobalNamespace {
class LightningManager;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class PlayableBoundaryManager;
}
namespace GlobalNamespace {
class PlayableBoundaryTracker;
}
namespace GlobalNamespace {
class PropHuntHandFollower;
}
namespace GlobalNamespace {
class PropHuntPropZone;
}
namespace GlobalNamespace {
class PropPlacementRB;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaTag::CosmeticSystem {
class AllCosmeticsArraySO;
}
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace GorillaTag {
template<typename TObject>
class GTAssetRef_1;
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
class List_1;
}
namespace System {
template<typename T>
class Action_1;
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
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPropHuntGameManager;
}
namespace GlobalNamespace {
class GorillaPropHuntGameManager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPropHuntGameManager*);
MARK_REF_T(::GlobalNamespace::GorillaPropHuntGameManager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPropHuntGameManager*, "", "GorillaPropHuntGameManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPropHuntGameManager___c*, "", "GorillaPropHuntGameManager/<>c");
// Dependencies GorillaPropHuntGameManager::EPropHuntGameState, GorillaTagManager, UnityEngine.Vector3, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPropHuntGameManager
class CORDL_TYPE GorillaPropHuntGameManager : public ::GlobalNamespace::GorillaTagManager {
public:
// Declarations
using EPropHuntGameState = ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState;

using __c = ::GlobalNamespace::GorillaPropHuntGameManager___c;

 __declspec(property(get=get_AllPropIDs_NoPool)) ::ArrayW<::StringW>  AllPropIDs_NoPool;

 __declspec(property(get=get_HandFollowDistance)) float_t  HandFollowDistance;

 __declspec(property(get=get_IsReadyToSpawnProps_NoPool)) bool  IsReadyToSpawnProps_NoPool;

 __declspec(property(get=get_PropDecoyPrefab)) ::UnityW<::GlobalNamespace::PropPlacementRB>  PropDecoyPrefab;

 __declspec(property(get=get_RoundIsPlaying)) bool  RoundIsPlaying;

/// @brief Field __ph_timeRoundStartedMillis__, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get___ph_timeRoundStartedMillis__, put=__cordl_internal_set___ph_timeRoundStartedMillis__)) int64_t  __ph_timeRoundStartedMillis__;

/// @brief Field _g_ph_activePlayerRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_ph_activePlayerRigs, put=setStaticF__g_ph_activePlayerRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  _g_ph_activePlayerRigs;

/// @brief Field _g_ph_allHandFollowers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_ph_allHandFollowers, put=setStaticF__g_ph_allHandFollowers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntHandFollower>>*  _g_ph_allHandFollowers;

/// @brief Field _g_ph_allPropZones, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_ph_allPropZones, put=setStaticF__g_ph_allPropZones)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntPropZone>>*  _g_ph_allPropZones;

/// @brief Field _g_ph_defaultStencilRefOfSkeletonMat, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__g_ph_defaultStencilRefOfSkeletonMat, put=setStaticF__g_ph_defaultStencilRefOfSkeletonMat)) int32_t  _g_ph_defaultStencilRefOfSkeletonMat;

/// @brief Field _g_ph_hapticsLastImpulseEndTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__g_ph_hapticsLastImpulseEndTime, put=setStaticF__g_ph_hapticsLastImpulseEndTime)) float_t  _g_ph_hapticsLastImpulseEndTime;

/// @brief Field _g_ph_rig_to_propHuntZoneTrackers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_ph_rig_to_propHuntZoneTrackers, put=setStaticF__g_ph_rig_to_propHuntZoneTrackers)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*  _g_ph_rig_to_propHuntZoneTrackers;

/// @brief Field _g_ph_titleDataSeparators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__g_ph_titleDataSeparators, put=setStaticF__g_ph_titleDataSeparators)) ::ArrayW<::StringW>  _g_ph_titleDataSeparators;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  _instance_k__BackingField;

/// @brief Field _isListeningForXSceneRefLoadCallbacks, offset 0x29e, size 0x1 
 __declspec(property(get=__cordl_internal_get__isListeningForXSceneRefLoadCallbacks, put=__cordl_internal_set__isListeningForXSceneRefLoadCallbacks)) bool  _isListeningForXSceneRefLoadCallbacks;

/// @brief Field _isListeningTo_Pools_OnReady, offset 0x29d, size 0x1 
 __declspec(property(get=__cordl_internal_get__isListeningTo_Pools_OnReady, put=__cordl_internal_set__isListeningTo_Pools_OnReady)) bool  _isListeningTo_Pools_OnReady;

/// @brief Field _ph_allPropIDs_noPool, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get__ph_allPropIDs_noPool, put=__cordl_internal_set__ph_allPropIDs_noPool)) ::ArrayW<::StringW>  _ph_allPropIDs_noPool;

/// @brief Field _ph_blindfold_forCamera_1p, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__ph_blindfold_forCamera_1p, put=__cordl_internal_set__ph_blindfold_forCamera_1p)) ::UnityW<::UnityEngine::GameObject>  _ph_blindfold_forCamera_1p;

/// @brief Field _ph_blindfold_forCamera_3p, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__ph_blindfold_forCamera_3p, put=__cordl_internal_set__ph_blindfold_forCamera_3p)) ::UnityW<::UnityEngine::GameObject>  _ph_blindfold_forCamera_3p;

/// @brief Field _ph_blindfold_forCamera_isInitialized, offset 0x148, size 0x1 
 __declspec(property(get=__cordl_internal_get__ph_blindfold_forCamera_isInitialized, put=__cordl_internal_set__ph_blindfold_forCamera_isInitialized)) bool  _ph_blindfold_forCamera_isInitialized;

/// @brief Field _ph_gameState, offset 0x270, size 0x4 
 __declspec(property(get=__cordl_internal_get__ph_gameState, put=__cordl_internal_set__ph_gameState)) ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState  _ph_gameState;

/// @brief Field _ph_gameState_lastUpdate, offset 0x274, size 0x4 
 __declspec(property(get=__cordl_internal_get__ph_gameState_lastUpdate, put=__cordl_internal_set__ph_gameState_lastUpdate)) ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState  _ph_gameState_lastUpdate;

/// @brief Field _ph_gorillaGhostBodyMaterialIndex, offset 0x230, size 0x4 
 __declspec(property(get=__cordl_internal_get__ph_gorillaGhostBodyMaterialIndex, put=__cordl_internal_set__ph_gorillaGhostBodyMaterialIndex)) int32_t  _ph_gorillaGhostBodyMaterialIndex;

/// @brief Field _ph_hideState_warnSounds_timesPlayed, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get__ph_hideState_warnSounds_timesPlayed, put=__cordl_internal_set__ph_hideState_warnSounds_timesPlayed)) int32_t  _ph_hideState_warnSounds_timesPlayed;

/// @brief Field _ph_isLocalPlayerParticipating, offset 0x29c, size 0x1 
 __declspec(property(get=__cordl_internal_get__ph_isLocalPlayerParticipating, put=__cordl_internal_set__ph_isLocalPlayerParticipating)) bool  _ph_isLocalPlayerParticipating;

/// @brief Field _ph_isLocalPlayerSkeleton, offset 0x26c, size 0x1 
 __declspec(property(get=__cordl_internal_get__ph_isLocalPlayerSkeleton, put=__cordl_internal_set__ph_isLocalPlayerSkeleton)) bool  _ph_isLocalPlayerSkeleton;

/// @brief Field _ph_playBoundary, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ph_playBoundary, put=__cordl_internal_set__ph_playBoundary)) ::UnityW<::GlobalNamespace::PlayableBoundaryManager>  _ph_playBoundary;

/// @brief Field _ph_playBoundary_currentTargetPosition, offset 0x204, size 0xc 
 __declspec(property(get=__cordl_internal_get__ph_playBoundary_currentTargetPosition, put=__cordl_internal_set__ph_playBoundary_currentTargetPosition)) ::UnityEngine::Vector3  _ph_playBoundary_currentTargetPosition;

/// @brief Field _ph_playBoundary_hasTargetPositionForRound, offset 0x210, size 0x1 
 __declspec(property(get=__cordl_internal_get__ph_playBoundary_hasTargetPositionForRound, put=__cordl_internal_set__ph_playBoundary_hasTargetPositionForRound)) bool  _ph_playBoundary_hasTargetPositionForRound;

/// @brief Field _ph_playBoundary_initialPosition, offset 0x1f4, size 0xc 
 __declspec(property(get=__cordl_internal_get__ph_playBoundary_initialPosition, put=__cordl_internal_set__ph_playBoundary_initialPosition)) ::UnityEngine::Vector3  _ph_playBoundary_initialPosition;

/// @brief Field _ph_playBoundary_initialPosition_isInitialized, offset 0x200, size 0x1 
 __declspec(property(get=__cordl_internal_get__ph_playBoundary_initialPosition_isInitialized, put=__cordl_internal_set__ph_playBoundary_initialPosition_isInitialized)) bool  _ph_playBoundary_initialPosition_isInitialized;

/// @brief Field _ph_playBoundary_isResolved, offset 0x1f0, size 0x1 
 __declspec(property(get=__cordl_internal_get__ph_playBoundary_isResolved, put=__cordl_internal_set__ph_playBoundary_isResolved)) bool  _ph_playBoundary_isResolved;

/// @brief Field _ph_playState_startLightning_manager, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__ph_playState_startLightning_manager, put=__cordl_internal_set__ph_playState_startLightning_manager)) ::UnityW<::GlobalNamespace::LightningManager>  _ph_playState_startLightning_manager;

/// @brief Field _ph_playState_startLightning_manager_isResolved, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get__ph_playState_startLightning_manager_isResolved, put=__cordl_internal_set__ph_playState_startLightning_manager_isResolved)) bool  _ph_playState_startLightning_manager_isResolved;

/// @brief Field _ph_playState_startLightning_strikeTimes_index, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ph_playState_startLightning_strikeTimes_index, put=__cordl_internal_set__ph_playState_startLightning_strikeTimes_index)) int32_t  _ph_playState_startLightning_strikeTimes_index;

/// @brief Field _ph_randomSeed, offset 0x298, size 0x4 
 __declspec(property(get=__cordl_internal_get__ph_randomSeed, put=__cordl_internal_set__ph_randomSeed)) int32_t  _ph_randomSeed;

/// @brief Field _ph_roundTime, offset 0x288, size 0x4 
 __declspec(property(get=__cordl_internal_get__ph_roundTime, put=__cordl_internal_set__ph_roundTime)) float_t  _ph_roundTime;

/// @brief [DebugReadout]
 __declspec(property(get=get__ph_timeRoundStartedMillis, put=set__ph_timeRoundStartedMillis)) int64_t  _ph_timeRoundStartedMillis;

/// @brief Field _ph_vrRig_to_blindfolds, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__ph_vrRig_to_blindfolds, put=__cordl_internal_set__ph_vrRig_to_blindfolds)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  _ph_vrRig_to_blindfolds;

/// @brief Field _roundIsPlaying, offset 0x278, size 0x1 
 __declspec(property(get=__cordl_internal_get__roundIsPlaying, put=__cordl_internal_set__roundIsPlaying)) bool  _roundIsPlaying;

/// @brief Field m_ph_allCosmetics, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_allCosmetics, put=__cordl_internal_set_m_ph_allCosmetics)) ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  m_ph_allCosmetics;

/// @brief Field m_ph_blindfold_forAvatarPrefab, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_blindfold_forAvatarPrefab, put=__cordl_internal_set_m_ph_blindfold_forAvatarPrefab)) ::UnityW<::UnityEngine::GameObject>  m_ph_blindfold_forAvatarPrefab;

/// @brief Field m_ph_blindfold_forCameraPrefab, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_blindfold_forCameraPrefab, put=__cordl_internal_set_m_ph_blindfold_forCameraPrefab)) ::UnityW<::UnityEngine::GameObject>  m_ph_blindfold_forCameraPrefab;

/// @brief Field m_ph_fallbackPropCosmeticSO, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_fallbackPropCosmeticSO, put=__cordl_internal_set_m_ph_fallbackPropCosmeticSO)) ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  m_ph_fallbackPropCosmeticSO;

/// @brief Field m_ph_gorillaGhostBodyMaterial, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_gorillaGhostBodyMaterial, put=__cordl_internal_set_m_ph_gorillaGhostBodyMaterial)) ::UnityW<::UnityEngine::Material>  m_ph_gorillaGhostBodyMaterial;

/// @brief Field m_ph_hand_follow_distance, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ph_hand_follow_distance, put=__cordl_internal_set_m_ph_hand_follow_distance)) float_t  m_ph_hand_follow_distance;

/// @brief Field m_ph_hapticsNearBorder_ampCurve, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_hapticsNearBorder_ampCurve, put=__cordl_internal_set_m_ph_hapticsNearBorder_ampCurve)) ::UnityEngine::AnimationCurve*  m_ph_hapticsNearBorder_ampCurve;

/// @brief Field m_ph_hapticsNearBorder_baseAmp, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ph_hapticsNearBorder_baseAmp, put=__cordl_internal_set_m_ph_hapticsNearBorder_baseAmp)) float_t  m_ph_hapticsNearBorder_baseAmp;

/// @brief Field m_ph_hapticsNearBorder_borderProximity, offset 0x25c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ph_hapticsNearBorder_borderProximity, put=__cordl_internal_set_m_ph_hapticsNearBorder_borderProximity)) float_t  m_ph_hapticsNearBorder_borderProximity;

/// @brief Field m_ph_hideState_duration, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ph_hideState_duration, put=__cordl_internal_set_m_ph_hideState_duration)) float_t  m_ph_hideState_duration;

/// @brief Field m_ph_hideState_startSoundBank, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_hideState_startSoundBank, put=__cordl_internal_set_m_ph_hideState_startSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  m_ph_hideState_startSoundBank;

/// @brief Field m_ph_hideState_warnSoundBank, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_hideState_warnSoundBank, put=__cordl_internal_set_m_ph_hideState_warnSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  m_ph_hideState_warnSoundBank;

/// @brief Field m_ph_hideState_warnSoundBank_playCount, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ph_hideState_warnSoundBank_playCount, put=__cordl_internal_set_m_ph_hideState_warnSoundBank_playCount)) int32_t  m_ph_hideState_warnSoundBank_playCount;

/// @brief Field m_ph_planeCrossingSoundBank, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_planeCrossingSoundBank, put=__cordl_internal_set_m_ph_planeCrossingSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  m_ph_planeCrossingSoundBank;

/// @brief Field m_ph_playBoundary_endPointTransforms, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_playBoundary_endPointTransforms, put=__cordl_internal_set_m_ph_playBoundary_endPointTransforms)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  m_ph_playBoundary_endPointTransforms;

/// @brief Field m_ph_playBoundary_radiusScaleOverRoundTime_curve, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_curve, put=__cordl_internal_set_m_ph_playBoundary_radiusScaleOverRoundTime_curve)) ::UnityEngine::AnimationCurve*  m_ph_playBoundary_radiusScaleOverRoundTime_curve;

/// @brief Field m_ph_playBoundary_radiusScaleOverRoundTime_maxTime, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_maxTime, put=__cordl_internal_set_m_ph_playBoundary_radiusScaleOverRoundTime_maxTime)) float_t  m_ph_playBoundary_radiusScaleOverRoundTime_maxTime;

/// @brief Field m_ph_playBoundary_timeLimit, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ph_playBoundary_timeLimit, put=__cordl_internal_set_m_ph_playBoundary_timeLimit)) float_t  m_ph_playBoundary_timeLimit;

/// @brief Field m_ph_playBoundary_xSceneRef, offset 0x1c8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_ph_playBoundary_xSceneRef, put=__cordl_internal_set_m_ph_playBoundary_xSceneRef)) ::GlobalNamespace::XSceneRef  m_ph_playBoundary_xSceneRef;

/// @brief Field m_ph_playState_startLightning_manager_ref, offset 0x180, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_ph_playState_startLightning_manager_ref, put=__cordl_internal_set_m_ph_playState_startLightning_manager_ref)) ::GlobalNamespace::XSceneRef  m_ph_playState_startLightning_manager_ref;

/// @brief Field m_ph_playState_startLightning_strikeTimes, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_playState_startLightning_strikeTimes, put=__cordl_internal_set_m_ph_playState_startLightning_strikeTimes)) ::ArrayW<float_t>  m_ph_playState_startLightning_strikeTimes;

/// @brief Field m_ph_playState_startSoundBank, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_playState_startSoundBank, put=__cordl_internal_set_m_ph_playState_startSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  m_ph_playState_startSoundBank;

/// @brief Field m_ph_playState_taggedSoundBank, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_playState_taggedSoundBank, put=__cordl_internal_set_m_ph_playState_taggedSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  m_ph_playState_taggedSoundBank;

/// @brief Field m_ph_propDecoyPrefab, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_propDecoyPrefab, put=__cordl_internal_set_m_ph_propDecoyPrefab)) ::UnityW<::GlobalNamespace::PropPlacementRB>  m_ph_propDecoyPrefab;

/// @brief Field m_ph_soundNearBorder_audioSource, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_soundNearBorder_audioSource, put=__cordl_internal_set_m_ph_soundNearBorder_audioSource)) ::UnityW<::UnityEngine::AudioSource>  m_ph_soundNearBorder_audioSource;

/// @brief Field m_ph_soundNearBorder_baseVolume, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ph_soundNearBorder_baseVolume, put=__cordl_internal_set_m_ph_soundNearBorder_baseVolume)) float_t  m_ph_soundNearBorder_baseVolume;

/// @brief Field m_ph_soundNearBorder_maxDistance, offset 0x248, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ph_soundNearBorder_maxDistance, put=__cordl_internal_set_m_ph_soundNearBorder_maxDistance)) float_t  m_ph_soundNearBorder_maxDistance;

/// @brief Field m_ph_soundNearBorder_volumeCurve, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ph_soundNearBorder_volumeCurve, put=__cordl_internal_set_m_ph_soundNearBorder_volumeCurve)) ::UnityEngine::AnimationCurve*  m_ph_soundNearBorder_volumeCurve;

/// @brief Method AddInfectedPlayer, addr 0x5634af4, size 0x58, virtual true, abstract: false, final false
inline void AddInfectedPlayer(::GlobalNamespace::NetPlayer*  infectedPlayer, bool  withTagStop) ;

/// @brief Method Awake, addr 0x5630a4c, size 0xd4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanPlayerParticipate, addr 0x5631e6c, size 0x104, virtual true, abstract: false, final false
inline bool CanPlayerParticipate(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method GameModeName, addr 0x563087c, size 0x40, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x56308bc, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x5630874, size 0x8, virtual true, abstract: false, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method GetCosmeticId, addr 0x5635908, size 0x174, virtual false, abstract: false, final false
inline ::StringW GetCosmeticId(uint32_t  randomUInt) ;

/// @brief Method GetPropRefByCosmeticID_NoPool, addr 0x5635b50, size 0x2cc, virtual false, abstract: false, final false
inline ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>* GetPropRefByCosmeticID_NoPool(::StringW  cosmeticID, ::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>  out_debugCosmeticSO) ;

/// @brief Method GetPropRef_NoPool, addr 0x5635a7c, size 0xd4, virtual false, abstract: false, final false
inline ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>* GetPropRef_NoPool(uint32_t  randomUInt, ::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>  out_debugCosmeticSO) ;

/// @brief Method GetSeed, addr 0x5630a44, size 0x8, virtual false, abstract: false, final false
inline int32_t GetSeed() ;

/// @brief Method InfectionRoundEnd, addr 0x56344f4, size 0x1c, virtual true, abstract: false, final false
inline void InfectionRoundEnd() ;

/// @brief Method InfectionRoundEndCheck, addr 0x5634510, size 0x70, virtual false, abstract: false, final false
inline void InfectionRoundEndCheck() ;

/// @brief Method InfectionRoundStart, addr 0x56348cc, size 0x1c, virtual true, abstract: false, final false
inline void InfectionRoundStart() ;

/// @brief Method InfectionRoundStartCheck, addr 0x56348e8, size 0xc0, virtual false, abstract: false, final false
inline void InfectionRoundStartCheck() ;

/// @brief Method LocalCanTag, addr 0x5634894, size 0x1c, virtual true, abstract: false, final false
inline bool LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method LocalIsTagged, addr 0x56348b0, size 0x1c, virtual true, abstract: false, final false
inline bool LocalIsTagged(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method MyMatIndex, addr 0x5634400, size 0xf4, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer) ;

/// @brief Method NewVRRig, addr 0x56321dc, size 0xb4, virtual true, abstract: false, final false
inline void NewVRRig(::GlobalNamespace::NetPlayer*  player, int32_t  vrrigPhotonViewID, bool  didTutorial) ;

static inline ::GlobalNamespace::GorillaPropHuntGameManager* New_ctor() ;

/// @brief Method OnSerializeRead, addr 0x5636158, size 0xe8, virtual true, abstract: false, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x5636240, size 0x98, virtual true, abstract: false, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PH_OnRoundEnd, addr 0x5634580, size 0x314, virtual false, abstract: false, final false
inline void PH_OnRoundEnd() ;

/// @brief Method PH_OnRoundStartRPC, addr 0x56349a8, size 0x14c, virtual false, abstract: false, final false
inline void PH_OnRoundStartRPC(int64_t  timeRoundStartedMillis, int32_t  seed) ;

/// @brief Method RegisterPropHandFollower, addr 0x5635764, size 0x120, virtual false, abstract: false, final false
static inline void RegisterPropHandFollower(::GlobalNamespace::PropHuntHandFollower*  hand) ;

/// @brief Method RegisterPropZone, addr 0x5635588, size 0x15c, virtual false, abstract: false, final false
static inline void RegisterPropZone(::GlobalNamespace::PropHuntPropZone*  propZone) ;

/// @brief Method SpawnProps, addr 0x56350d4, size 0x440, virtual false, abstract: false, final false
inline void SpawnProps() ;

/// @brief Method Start, addr 0x5630b20, size 0x7c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartPlaying, addr 0x5631010, size 0x15c, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StopPlaying, addr 0x563171c, size 0x4f0, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method Tick, addr 0x5632290, size 0x210, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UnregisterPropHandFollower, addr 0x5635888, size 0x80, virtual false, abstract: false, final false
static inline void UnregisterPropHandFollower(::GlobalNamespace::PropHuntHandFollower*  hand) ;

/// @brief Method UnregisterPropZone, addr 0x56356e4, size 0x80, virtual false, abstract: false, final false
static inline void UnregisterPropZone(::GlobalNamespace::PropHuntPropZone*  propZone) ;

/// @brief Method UpdatePlayerAppearance, addr 0x56335b0, size 0x2ec, virtual true, abstract: false, final false
inline void UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method _GetRigShouldBeSkeleton, addr 0x563389c, size 0xc0, virtual false, abstract: false, final false
inline bool _GetRigShouldBeSkeleton(::GlobalNamespace::VRRig*  rig, ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  participatingPlayers) ;

/// @brief Method _InitializeBlindfoldForCamera, addr 0x5635e1c, size 0x33c, virtual false, abstract: false, final false
inline void _InitializeBlindfoldForCamera() ;

/// @brief Method _Initialize_defaultStencilRefOfSkeletonMat, addr 0x5630ccc, size 0x268, virtual false, abstract: false, final false
inline void _Initialize_defaultStencilRefOfSkeletonMat() ;

/// @brief Method _Initialize_gorillaGhostBodyMaterialIndex, addr 0x5630b9c, size 0x130, virtual false, abstract: false, final false
inline void _Initialize_gorillaGhostBodyMaterialIndex() ;

/// @brief Method _OnParticipatingPlayersChanged, addr 0x5631f70, size 0x26c, virtual false, abstract: false, final false
inline void _OnParticipatingPlayersChanged(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  addedPlayers, ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  removedPlayers) ;

/// @brief Method _OnXSceneRefLoaded_LightningManager, addr 0x5634cd8, size 0xa4, virtual false, abstract: false, final false
inline void _OnXSceneRefLoaded_LightningManager() ;

/// @brief Method _OnXSceneRefLoaded_PlayBoundary, addr 0x5634b4c, size 0x18c, virtual false, abstract: false, final false
inline void _OnXSceneRefLoaded_PlayBoundary() ;

/// @brief Method _OnXSceneRefUnloaded_LightningManager, addr 0x5634da4, size 0x18, virtual false, abstract: false, final false
inline void _OnXSceneRefUnloaded_LightningManager() ;

/// @brief Method _OnXSceneRefUnloaded_PlayBoundary, addr 0x5634d7c, size 0x28, virtual false, abstract: false, final false
inline void _OnXSceneRefUnloaded_PlayBoundary() ;

/// @brief Method _PH_OnRoundStart, addr 0x5634dbc, size 0x318, virtual false, abstract: false, final false
inline void _PH_OnRoundStart() ;

/// @brief Method _Pools_OnReady, addr 0x5635514, size 0x74, virtual false, abstract: false, final false
inline void _Pools_OnReady() ;

/// @brief Method _ProcessPropsList_NoPool, addr 0x5630f84, size 0x8c, virtual false, abstract: false, final false
inline void _ProcessPropsList_NoPool(::StringW  titleDataPropsLines) ;

/// @brief Method _ResetRigAppearance, addr 0x5631c0c, size 0x260, virtual false, abstract: false, final false
inline void _ResetRigAppearance(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method _ResolveXSceneRefs, addr 0x563116c, size 0x1ec, virtual false, abstract: false, final false
inline void _ResolveXSceneRefs() ;

/// @brief Method _SetPlayerBlindfoldVisibility, addr 0x56334dc, size 0xd4, virtual false, abstract: false, final false
inline void _SetPlayerBlindfoldVisibility(::GlobalNamespace::NetPlayer*  netPlayer, bool  shouldEnable) ;

/// @brief Method _SetPlayerBlindfoldVisibility, addr 0x5633230, size 0x2a4, virtual false, abstract: false, final false
inline void _SetPlayerBlindfoldVisibility(::GlobalNamespace::VRRig*  vrRig, ::GlobalNamespace::NetPlayer*  netPlayer, bool  shouldEnable) ;

/// @brief Method _ShouldRigBeVisible, addr 0x563418c, size 0x4c, virtual false, abstract: false, final false
inline bool _ShouldRigBeVisible(::GlobalNamespace::VRRig*  rig, bool  shouldBeSkeleton, float_t  signedDistToBoundary) ;

/// @brief Method _UpdateBoundaryProximityState, addr 0x5633e00, size 0x38c, virtual false, abstract: false, final false
inline float_t _UpdateBoundaryProximityState(::GlobalNamespace::VRRig*  rig, bool  isSkeleton) ;

/// @brief Method _UpdateControllerHaptics, addr 0x56341d8, size 0x228, virtual false, abstract: false, final false
inline void _UpdateControllerHaptics(float_t  signedDistToBoundary) ;

/// @brief Method _UpdateGameState, addr 0x56324a0, size 0x91c, virtual false, abstract: false, final false
inline void _UpdateGameState() ;

/// @brief Method _UpdateParticipatingPlayers, addr 0x5631358, size 0x3c4, virtual false, abstract: false, final false
inline void _UpdateParticipatingPlayers() ;

constexpr int64_t const& __cordl_internal_get___ph_timeRoundStartedMillis__() const;

constexpr int64_t& __cordl_internal_get___ph_timeRoundStartedMillis__() ;

constexpr bool const& __cordl_internal_get__isListeningForXSceneRefLoadCallbacks() const;

constexpr bool& __cordl_internal_get__isListeningForXSceneRefLoadCallbacks() ;

constexpr bool const& __cordl_internal_get__isListeningTo_Pools_OnReady() const;

constexpr bool& __cordl_internal_get__isListeningTo_Pools_OnReady() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__ph_allPropIDs_noPool() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__ph_allPropIDs_noPool() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ph_blindfold_forCamera_1p() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ph_blindfold_forCamera_1p() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ph_blindfold_forCamera_3p() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ph_blindfold_forCamera_3p() ;

constexpr bool const& __cordl_internal_get__ph_blindfold_forCamera_isInitialized() const;

constexpr bool& __cordl_internal_get__ph_blindfold_forCamera_isInitialized() ;

constexpr ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const& __cordl_internal_get__ph_gameState() const;

constexpr ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState& __cordl_internal_get__ph_gameState() ;

constexpr ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const& __cordl_internal_get__ph_gameState_lastUpdate() const;

constexpr ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState& __cordl_internal_get__ph_gameState_lastUpdate() ;

constexpr int32_t const& __cordl_internal_get__ph_gorillaGhostBodyMaterialIndex() const;

constexpr int32_t& __cordl_internal_get__ph_gorillaGhostBodyMaterialIndex() ;

constexpr int32_t const& __cordl_internal_get__ph_hideState_warnSounds_timesPlayed() const;

constexpr int32_t& __cordl_internal_get__ph_hideState_warnSounds_timesPlayed() ;

constexpr bool const& __cordl_internal_get__ph_isLocalPlayerParticipating() const;

constexpr bool& __cordl_internal_get__ph_isLocalPlayerParticipating() ;

constexpr bool const& __cordl_internal_get__ph_isLocalPlayerSkeleton() const;

constexpr bool& __cordl_internal_get__ph_isLocalPlayerSkeleton() ;

constexpr ::UnityW<::GlobalNamespace::PlayableBoundaryManager> const& __cordl_internal_get__ph_playBoundary() const;

constexpr ::UnityW<::GlobalNamespace::PlayableBoundaryManager>& __cordl_internal_get__ph_playBoundary() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__ph_playBoundary_currentTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__ph_playBoundary_currentTargetPosition() ;

constexpr bool const& __cordl_internal_get__ph_playBoundary_hasTargetPositionForRound() const;

constexpr bool& __cordl_internal_get__ph_playBoundary_hasTargetPositionForRound() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__ph_playBoundary_initialPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__ph_playBoundary_initialPosition() ;

constexpr bool const& __cordl_internal_get__ph_playBoundary_initialPosition_isInitialized() const;

constexpr bool& __cordl_internal_get__ph_playBoundary_initialPosition_isInitialized() ;

constexpr bool const& __cordl_internal_get__ph_playBoundary_isResolved() const;

constexpr bool& __cordl_internal_get__ph_playBoundary_isResolved() ;

constexpr ::UnityW<::GlobalNamespace::LightningManager> const& __cordl_internal_get__ph_playState_startLightning_manager() const;

constexpr ::UnityW<::GlobalNamespace::LightningManager>& __cordl_internal_get__ph_playState_startLightning_manager() ;

constexpr bool const& __cordl_internal_get__ph_playState_startLightning_manager_isResolved() const;

constexpr bool& __cordl_internal_get__ph_playState_startLightning_manager_isResolved() ;

constexpr int32_t const& __cordl_internal_get__ph_playState_startLightning_strikeTimes_index() const;

constexpr int32_t& __cordl_internal_get__ph_playState_startLightning_strikeTimes_index() ;

constexpr int32_t const& __cordl_internal_get__ph_randomSeed() const;

constexpr int32_t& __cordl_internal_get__ph_randomSeed() ;

constexpr float_t const& __cordl_internal_get__ph_roundTime() const;

constexpr float_t& __cordl_internal_get__ph_roundTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__ph_vrRig_to_blindfolds() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__ph_vrRig_to_blindfolds() ;

constexpr bool const& __cordl_internal_get__roundIsPlaying() const;

constexpr bool& __cordl_internal_get__roundIsPlaying() ;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO> const& __cordl_internal_get_m_ph_allCosmetics() const;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>& __cordl_internal_get_m_ph_allCosmetics() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ph_blindfold_forAvatarPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ph_blindfold_forAvatarPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_ph_blindfold_forCameraPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_ph_blindfold_forCameraPrefab() ;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> const& __cordl_internal_get_m_ph_fallbackPropCosmeticSO() const;

constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>& __cordl_internal_get_m_ph_fallbackPropCosmeticSO() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ph_gorillaGhostBodyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ph_gorillaGhostBodyMaterial() ;

constexpr float_t const& __cordl_internal_get_m_ph_hand_follow_distance() const;

constexpr float_t& __cordl_internal_get_m_ph_hand_follow_distance() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_ph_hapticsNearBorder_ampCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_ph_hapticsNearBorder_ampCurve() ;

constexpr float_t const& __cordl_internal_get_m_ph_hapticsNearBorder_baseAmp() const;

constexpr float_t& __cordl_internal_get_m_ph_hapticsNearBorder_baseAmp() ;

constexpr float_t const& __cordl_internal_get_m_ph_hapticsNearBorder_borderProximity() const;

constexpr float_t& __cordl_internal_get_m_ph_hapticsNearBorder_borderProximity() ;

constexpr float_t const& __cordl_internal_get_m_ph_hideState_duration() const;

constexpr float_t& __cordl_internal_get_m_ph_hideState_duration() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_m_ph_hideState_startSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_m_ph_hideState_startSoundBank() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_m_ph_hideState_warnSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_m_ph_hideState_warnSoundBank() ;

constexpr int32_t const& __cordl_internal_get_m_ph_hideState_warnSoundBank_playCount() const;

constexpr int32_t& __cordl_internal_get_m_ph_hideState_warnSoundBank_playCount() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_m_ph_planeCrossingSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_m_ph_planeCrossingSoundBank() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_m_ph_playBoundary_endPointTransforms() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_m_ph_playBoundary_endPointTransforms() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_curve() ;

constexpr float_t const& __cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_maxTime() const;

constexpr float_t& __cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_maxTime() ;

constexpr float_t const& __cordl_internal_get_m_ph_playBoundary_timeLimit() const;

constexpr float_t& __cordl_internal_get_m_ph_playBoundary_timeLimit() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_m_ph_playBoundary_xSceneRef() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_m_ph_playBoundary_xSceneRef() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_m_ph_playState_startLightning_manager_ref() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_m_ph_playState_startLightning_manager_ref() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_ph_playState_startLightning_strikeTimes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_ph_playState_startLightning_strikeTimes() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_m_ph_playState_startSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_m_ph_playState_startSoundBank() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_m_ph_playState_taggedSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_m_ph_playState_taggedSoundBank() ;

constexpr ::UnityW<::GlobalNamespace::PropPlacementRB> const& __cordl_internal_get_m_ph_propDecoyPrefab() const;

constexpr ::UnityW<::GlobalNamespace::PropPlacementRB>& __cordl_internal_get_m_ph_propDecoyPrefab() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_ph_soundNearBorder_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_ph_soundNearBorder_audioSource() ;

constexpr float_t const& __cordl_internal_get_m_ph_soundNearBorder_baseVolume() const;

constexpr float_t& __cordl_internal_get_m_ph_soundNearBorder_baseVolume() ;

constexpr float_t const& __cordl_internal_get_m_ph_soundNearBorder_maxDistance() const;

constexpr float_t& __cordl_internal_get_m_ph_soundNearBorder_maxDistance() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_m_ph_soundNearBorder_volumeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_ph_soundNearBorder_volumeCurve() ;

constexpr void __cordl_internal_set___ph_timeRoundStartedMillis__(int64_t  value) ;

constexpr void __cordl_internal_set__isListeningForXSceneRefLoadCallbacks(bool  value) ;

constexpr void __cordl_internal_set__isListeningTo_Pools_OnReady(bool  value) ;

constexpr void __cordl_internal_set__ph_allPropIDs_noPool(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__ph_blindfold_forCamera_1p(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__ph_blindfold_forCamera_3p(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__ph_blindfold_forCamera_isInitialized(bool  value) ;

constexpr void __cordl_internal_set__ph_gameState(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState  value) ;

constexpr void __cordl_internal_set__ph_gameState_lastUpdate(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState  value) ;

constexpr void __cordl_internal_set__ph_gorillaGhostBodyMaterialIndex(int32_t  value) ;

constexpr void __cordl_internal_set__ph_hideState_warnSounds_timesPlayed(int32_t  value) ;

constexpr void __cordl_internal_set__ph_isLocalPlayerParticipating(bool  value) ;

constexpr void __cordl_internal_set__ph_isLocalPlayerSkeleton(bool  value) ;

constexpr void __cordl_internal_set__ph_playBoundary(::UnityW<::GlobalNamespace::PlayableBoundaryManager>  value) ;

constexpr void __cordl_internal_set__ph_playBoundary_currentTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__ph_playBoundary_hasTargetPositionForRound(bool  value) ;

constexpr void __cordl_internal_set__ph_playBoundary_initialPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__ph_playBoundary_initialPosition_isInitialized(bool  value) ;

constexpr void __cordl_internal_set__ph_playBoundary_isResolved(bool  value) ;

constexpr void __cordl_internal_set__ph_playState_startLightning_manager(::UnityW<::GlobalNamespace::LightningManager>  value) ;

constexpr void __cordl_internal_set__ph_playState_startLightning_manager_isResolved(bool  value) ;

constexpr void __cordl_internal_set__ph_playState_startLightning_strikeTimes_index(int32_t  value) ;

constexpr void __cordl_internal_set__ph_randomSeed(int32_t  value) ;

constexpr void __cordl_internal_set__ph_roundTime(float_t  value) ;

constexpr void __cordl_internal_set__ph_vrRig_to_blindfolds(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__roundIsPlaying(bool  value) ;

constexpr void __cordl_internal_set_m_ph_allCosmetics(::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  value) ;

constexpr void __cordl_internal_set_m_ph_blindfold_forAvatarPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_ph_blindfold_forCameraPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_ph_fallbackPropCosmeticSO(::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  value) ;

constexpr void __cordl_internal_set_m_ph_gorillaGhostBodyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_m_ph_hand_follow_distance(float_t  value) ;

constexpr void __cordl_internal_set_m_ph_hapticsNearBorder_ampCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_ph_hapticsNearBorder_baseAmp(float_t  value) ;

constexpr void __cordl_internal_set_m_ph_hapticsNearBorder_borderProximity(float_t  value) ;

constexpr void __cordl_internal_set_m_ph_hideState_duration(float_t  value) ;

constexpr void __cordl_internal_set_m_ph_hideState_startSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_ph_hideState_warnSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_ph_hideState_warnSoundBank_playCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_ph_planeCrossingSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_ph_playBoundary_endPointTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_m_ph_playBoundary_radiusScaleOverRoundTime_curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_ph_playBoundary_radiusScaleOverRoundTime_maxTime(float_t  value) ;

constexpr void __cordl_internal_set_m_ph_playBoundary_timeLimit(float_t  value) ;

constexpr void __cordl_internal_set_m_ph_playBoundary_xSceneRef(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_m_ph_playState_startLightning_manager_ref(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_m_ph_playState_startLightning_strikeTimes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_ph_playState_startSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_ph_playState_taggedSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_m_ph_propDecoyPrefab(::UnityW<::GlobalNamespace::PropPlacementRB>  value) ;

constexpr void __cordl_internal_set_m_ph_soundNearBorder_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_ph_soundNearBorder_baseVolume(float_t  value) ;

constexpr void __cordl_internal_set_m_ph_soundNearBorder_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_ph_soundNearBorder_volumeCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x56362d8, size 0x364, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF__g_ph_activePlayerRigs() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntHandFollower>>* getStaticF__g_ph_allHandFollowers() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntPropZone>>* getStaticF__g_ph_allPropZones() ;

static inline int32_t getStaticF__g_ph_defaultStencilRefOfSkeletonMat() ;

static inline float_t getStaticF__g_ph_hapticsLastImpulseEndTime() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>* getStaticF__g_ph_rig_to_propHuntZoneTrackers() ;

static inline ::ArrayW<::StringW> getStaticF__g_ph_titleDataSeparators() ;

static inline ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager> getStaticF__instance_k__BackingField() ;

/// @brief Method get_AllPropIDs_NoPool, addr 0x56309ac, size 0x88, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> get_AllPropIDs_NoPool() ;

/// @brief Method get_HandFollowDistance, addr 0x563099c, size 0x8, virtual false, abstract: false, final false
inline float_t get_HandFollowDistance() ;

/// @brief Method get_IsReadyToSpawnProps_NoPool, addr 0x5630f34, size 0x50, virtual false, abstract: false, final false
inline bool get_IsReadyToSpawnProps_NoPool() ;

/// @brief Method get_PropDecoyPrefab, addr 0x5630994, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PropPlacementRB> get_PropDecoyPrefab() ;

/// @brief Method get_RoundIsPlaying, addr 0x56309a4, size 0x8, virtual false, abstract: false, final false
inline bool get_RoundIsPlaying() ;

/// @brief Method get__ph_timeRoundStartedMillis, addr 0x5630a34, size 0x8, virtual false, abstract: false, final false
inline int64_t get__ph_timeRoundStartedMillis() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x56307b4, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager> get_instance() ;

static inline void setStaticF__g_ph_activePlayerRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

static inline void setStaticF__g_ph_allHandFollowers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntHandFollower>>*  value) ;

static inline void setStaticF__g_ph_allPropZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntPropZone>>*  value) ;

static inline void setStaticF__g_ph_defaultStencilRefOfSkeletonMat(int32_t  value) ;

static inline void setStaticF__g_ph_hapticsLastImpulseEndTime(float_t  value) ;

static inline void setStaticF__g_ph_rig_to_propHuntZoneTrackers(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*  value) ;

static inline void setStaticF__g_ph_titleDataSeparators(::ArrayW<::StringW>  value) ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  value) ;

/// @brief Method set__ph_timeRoundStartedMillis, addr 0x5630a3c, size 0x8, virtual false, abstract: false, final false
inline void set__ph_timeRoundStartedMillis(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x563080c, size 0x68, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::GorillaPropHuntGameManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPropHuntGameManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPropHuntGameManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPropHuntGameManager(GorillaPropHuntGameManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPropHuntGameManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPropHuntGameManager(GorillaPropHuntGameManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{627};

/// @brief Field _k__GT_PROP_HUNT__USE_POOLING__ offset 0xffffffff size 0x1
static constexpr bool  _k__GT_PROP_HUNT__USE_POOLING__{true};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  GorillaPropHuntGameManager: "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"ERROR!!!  (beta only log) GorillaPropHuntGameManager: "};

/// @brief Field preErrEd offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrEd{u"ERROR!!!  (editor only log) GorillaPropHuntGameManager: "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"GorillaPropHuntGameManager: "};

/// @brief Field preLogBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preLogBeta{u"(beta only log) GorillaPropHuntGameManager: "};

/// @brief Field preLogEd offset 0xffffffff size 0x8
static constexpr ::ConstString  preLogEd{u"(editor only log) GorillaPropHuntGameManager: "};

/// [FormerlySerializedAs("allCosmetics")]
/// [SerializeField]
/// @brief Field m_ph_allCosmetics, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  ___m_ph_allCosmetics;

/// [FormerlySerializedAs("backupCosmetic")]
/// [FormerlySerializedAs("m_ph_backupCosmetic")]
/// [SerializeField]
/// @brief Field m_ph_fallbackPropCosmeticSO, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  ___m_ph_fallbackPropCosmeticSO;

/// [Tooltip("This us used by PropHuntPools as the parent gameobject that the cosmetic prefab instance will be parented to.")]
/// [FormerlySerializedAs("m_ph_propPlacementPrefab")]
/// [SerializeField]
/// @brief Field m_ph_propDecoyPrefab, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropPlacementRB>  ___m_ph_propDecoyPrefab;

/// [Tooltip("The time that players have to hide before their props can be seen by the tagger monke.")]
/// [FormerlySerializedAs("m_propHunt_hideState_duration")]
/// [SerializeField]
/// @brief Field m_ph_hideState_duration, offset: 0x128, size: 0x4, def value: None
 float_t  ___m_ph_hideState_duration;

/// [Tooltip("Prefab that will be parented to the camera if the current player is not a ghost during hiding state.")]
/// [FormerlySerializedAs("m_propHunt_blindfold_1stPersonPrefab")]
/// [SerializeField]
/// @brief Field m_ph_blindfold_forCameraPrefab, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_ph_blindfold_forCameraPrefab;

/// @brief Field _ph_blindfold_forCamera_1p, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ph_blindfold_forCamera_1p;

/// @brief Field _ph_blindfold_forCamera_3p, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ph_blindfold_forCamera_3p;

/// @brief Field _ph_blindfold_forCamera_isInitialized, offset: 0x148, size: 0x1, def value: None
 bool  ____ph_blindfold_forCamera_isInitialized;

/// [Tooltip("Prefab to cover the eyes of the non-ghost gorilla\'s avatar during the hiding state.")]
/// [FormerlySerializedAs("m_propHunt_blindfold_3rdPersonPrefab")]
/// [SerializeField]
/// @brief Field m_ph_blindfold_forAvatarPrefab, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_ph_blindfold_forAvatarPrefab;

/// @brief Field _ph_vrRig_to_blindfolds, offset: 0x158, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  ____ph_vrRig_to_blindfolds;

/// [Tooltip("A randomly picked sound in this soundbank will be played when the hide state starts.")]
/// [FormerlySerializedAs("m_propHunt_hideState_startSoundBank")]
/// [SerializeField]
/// @brief Field m_ph_hideState_startSoundBank, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___m_ph_hideState_startSoundBank;

/// [FormerlySerializedAs("m_propHunt_hideState_warnSoundBank")]
/// [Tooltip("A randomly picked Sound in this Sound Bank will be played to warn players that the hiding period is ending.")]
/// [FormerlySerializedAs("m_propHunt_hideState_startSoundBank")]
/// [SerializeField]
/// @brief Field m_ph_hideState_warnSoundBank, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___m_ph_hideState_warnSoundBank;

/// [FormerlySerializedAs("m_propHunt_hideState_warnSoundBank_playCount")]
/// [Tooltip("How many times should the warning sound play before the hiding period ends? Will play every 1 second.")]
/// [SerializeField]
/// @brief Field m_ph_hideState_warnSoundBank_playCount, offset: 0x170, size: 0x4, def value: None
 int32_t  ___m_ph_hideState_warnSoundBank_playCount;

/// @brief Field _ph_hideState_warnSounds_timesPlayed, offset: 0x174, size: 0x4, def value: None
 int32_t  ____ph_hideState_warnSounds_timesPlayed;

/// [FormerlySerializedAs("m_propHunt_playState_startSoundBank")]
/// [Tooltip("A randomly picked sound in this Sound Bank will be played when the hiding state ends and the playing state has started.")]
/// [SerializeField]
/// @brief Field m_ph_playState_startSoundBank, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___m_ph_playState_startSoundBank;

/// [FormerlySerializedAs("m_propHunt_playState_startLightning_manager_ref")]
/// [Tooltip("Lightning manager for doing lightning strike strikes when playing starts.")]
/// [SerializeField]
/// @brief Field m_ph_playState_startLightning_manager_ref, offset: 0x180, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___m_ph_playState_startLightning_manager_ref;

/// @brief Field _ph_playState_startLightning_manager, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightningManager>  ____ph_playState_startLightning_manager;

/// @brief Field _ph_playState_startLightning_manager_isResolved, offset: 0x1a0, size: 0x1, def value: None
 bool  ____ph_playState_startLightning_manager_isResolved;

/// [Tooltip("How long after the playing starts should the lightning strikes happen?")]
/// @brief Field m_ph_playState_startLightning_strikeTimes, offset: 0x1a8, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_ph_playState_startLightning_strikeTimes;

/// @brief Field _ph_playState_startLightning_strikeTimes_index, offset: 0x1b0, size: 0x4, def value: None
 int32_t  ____ph_playState_startLightning_strikeTimes_index;

/// [Tooltip("A randomly picked sound in this Sound Bank will be played when the ghost is tagged by the hunter.")]
/// [SerializeField]
/// @brief Field m_ph_playState_taggedSoundBank, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___m_ph_playState_taggedSoundBank;

/// [Tooltip("Maximum distance prop can be from the center of the player\'s hand")]
/// [SerializeField]
/// @brief Field m_ph_hand_follow_distance, offset: 0x1c0, size: 0x4, def value: None
 float_t  ___m_ph_hand_follow_distance;

/// [FormerlySerializedAs("_playBoundary_xSceneRef")]
/// [FormerlySerializedAs("_playZone_xSceneRef")]
/// [SerializeField]
/// @brief Field m_ph_playBoundary_xSceneRef, offset: 0x1c8, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___m_ph_playBoundary_xSceneRef;

/// [Tooltip("A list of Transforms representing potential end positions for the playable boundary each round.")]
/// [SerializeField]
/// @brief Field m_ph_playBoundary_endPointTransforms, offset: 0x1e0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___m_ph_playBoundary_endPointTransforms;

/// @brief Field _ph_playBoundary, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayableBoundaryManager>  ____ph_playBoundary;

/// @brief Field _ph_playBoundary_isResolved, offset: 0x1f0, size: 0x1, def value: None
 bool  ____ph_playBoundary_isResolved;

/// @brief Field _ph_playBoundary_initialPosition, offset: 0x1f4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____ph_playBoundary_initialPosition;

/// @brief Field _ph_playBoundary_initialPosition_isInitialized, offset: 0x200, size: 0x1, def value: None
 bool  ____ph_playBoundary_initialPosition_isInitialized;

/// @brief Field _ph_playBoundary_currentTargetPosition, offset: 0x204, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____ph_playBoundary_currentTargetPosition;

/// @brief Field _ph_playBoundary_hasTargetPositionForRound, offset: 0x210, size: 0x1, def value: None
 bool  ____ph_playBoundary_hasTargetPositionForRound;

/// [Tooltip("The maximum time a player can be outside of the boundary before being tagged.")]
/// [SerializeField]
/// @brief Field m_ph_playBoundary_timeLimit, offset: 0x214, size: 0x4, def value: None
 float_t  ___m_ph_playBoundary_timeLimit;

/// [Tooltip("On the What does 1.0 on the X axis")]
/// [FormerlySerializedAs("_playBoundary_radiusScaleOverRoundTime_maxTime")]
/// [SerializeField]
/// @brief Field m_ph_playBoundary_radiusScaleOverRoundTime_maxTime, offset: 0x218, size: 0x4, def value: None
 float_t  ___m_ph_playBoundary_radiusScaleOverRoundTime_maxTime;

/// [FormerlySerializedAs("_playBoundary_radiusScaleOverRoundTime_curve")]
/// [FormerlySerializedAs("_playZoneRadiusOverRoundTime")]
/// [SerializeField]
/// @brief Field m_ph_playBoundary_radiusScaleOverRoundTime_curve, offset: 0x220, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_ph_playBoundary_radiusScaleOverRoundTime_curve;

/// [FormerlySerializedAs("_ph_gorillaGhostBodyMaterial")]
/// [FormerlySerializedAs("gorillaGhostBodyMaterial")]
/// [SerializeField]
/// @brief Field m_ph_gorillaGhostBodyMaterial, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_ph_gorillaGhostBodyMaterial;

/// @brief Field _ph_gorillaGhostBodyMaterialIndex, offset: 0x230, size: 0x4, def value: None
 int32_t  ____ph_gorillaGhostBodyMaterialIndex;

/// [Tooltip("A randomly picked sound in this Sound Bank will be played when the spectral plane border is crossed.")]
/// [SerializeField]
/// @brief Field m_ph_planeCrossingSoundBank, offset: 0x238, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___m_ph_planeCrossingSoundBank;

/// [Tooltip("This AudioSource will only be heard by the local player and is non directional.")]
/// [FormerlySerializedAs("m_soundNearBorder_audioSource")]
/// [FormerlySerializedAs("soundNearBorderAudioSource")]
/// [FormerlySerializedAs("soundNearBoundaryAudioSource")]
/// [SerializeField]
/// @brief Field m_ph_soundNearBorder_audioSource, offset: 0x240, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_ph_soundNearBorder_audioSource;

/// [FormerlySerializedAs("m_soundNearBorder_maxDistance")]
/// [FormerlySerializedAs("soundNearBorderMaxDistance")]
/// [FormerlySerializedAs("soundNearBoundaryMaxDistance")]
/// [SerializeField]
/// @brief Field m_ph_soundNearBorder_maxDistance, offset: 0x248, size: 0x4, def value: None
 float_t  ___m_ph_soundNearBorder_maxDistance;

/// [FormerlySerializedAs("m_soundNearBorder_volumeCurve")]
/// [FormerlySerializedAs("soundNearBorderVolumeCurve")]
/// [FormerlySerializedAs("soundNearBoundaryVolumeCurve")]
/// [SerializeField]
/// @brief Field m_ph_soundNearBorder_volumeCurve, offset: 0x250, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_ph_soundNearBorder_volumeCurve;

/// [Tooltip("The resulting volume curve value is multiplied by this.")]
/// [FormerlySerializedAs("m_soundNearBorder_baseVolume")]
/// [SerializeField]
/// @brief Field m_ph_soundNearBorder_baseVolume, offset: 0x258, size: 0x4, def value: None
 float_t  ___m_ph_soundNearBorder_baseVolume;

/// [FormerlySerializedAs("m_hapticsNearBorder_borderProximity")]
/// [SerializeField]
/// @brief Field m_ph_hapticsNearBorder_borderProximity, offset: 0x25c, size: 0x4, def value: None
 float_t  ___m_ph_hapticsNearBorder_borderProximity;

/// [FormerlySerializedAs("m_hapticsNearBorder_ampCurve")]
/// [SerializeField]
/// @brief Field m_ph_hapticsNearBorder_ampCurve, offset: 0x260, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___m_ph_hapticsNearBorder_ampCurve;

/// [FormerlySerializedAs("m_hapticsNearBorder_baseAmp")]
/// [SerializeField]
/// @brief Field m_ph_hapticsNearBorder_baseAmp, offset: 0x268, size: 0x4, def value: None
 float_t  ___m_ph_hapticsNearBorder_baseAmp;

/// @brief Field _ph_isLocalPlayerSkeleton, offset: 0x26c, size: 0x1, def value: None
 bool  ____ph_isLocalPlayerSkeleton;

/// [DebugReadout]
/// @brief Field _ph_gameState, offset: 0x270, size: 0x4, def value: None
 ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState  ____ph_gameState;

/// @brief Field _ph_gameState_lastUpdate, offset: 0x274, size: 0x4, def value: None
 ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState  ____ph_gameState_lastUpdate;

/// @brief Field _roundIsPlaying, offset: 0x278, size: 0x1, def value: None
 bool  ____roundIsPlaying;

/// @brief Field _ph_allPropIDs_noPool, offset: 0x280, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____ph_allPropIDs_noPool;

/// [DebugReadout]
/// @brief Field _ph_roundTime, offset: 0x288, size: 0x4, def value: None
 float_t  ____ph_roundTime;

/// @brief Field __ph_timeRoundStartedMillis__, offset: 0x290, size: 0x8, def value: None
 int64_t  _____ph_timeRoundStartedMillis__;

/// @brief Field _ph_randomSeed, offset: 0x298, size: 0x4, def value: None
 int32_t  ____ph_randomSeed;

/// @brief Field _ph_isLocalPlayerParticipating, offset: 0x29c, size: 0x1, def value: None
 bool  ____ph_isLocalPlayerParticipating;

/// @brief Field _isListeningTo_Pools_OnReady, offset: 0x29d, size: 0x1, def value: None
 bool  ____isListeningTo_Pools_OnReady;

/// @brief Field _isListeningForXSceneRefLoadCallbacks, offset: 0x29e, size: 0x1, def value: None
 bool  ____isListeningForXSceneRefLoadCallbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_allCosmetics) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_fallbackPropCosmeticSO) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_propDecoyPrefab) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_hideState_duration) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_blindfold_forCameraPrefab) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_blindfold_forCamera_1p) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_blindfold_forCamera_3p) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_blindfold_forCamera_isInitialized) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_blindfold_forAvatarPrefab) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_vrRig_to_blindfolds) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_hideState_startSoundBank) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_hideState_warnSoundBank) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_hideState_warnSoundBank_playCount) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_hideState_warnSounds_timesPlayed) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_playState_startSoundBank) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_playState_startLightning_manager_ref) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_playState_startLightning_manager) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_playState_startLightning_manager_isResolved) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_playState_startLightning_strikeTimes) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_playState_startLightning_strikeTimes_index) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_playState_taggedSoundBank) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_hand_follow_distance) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_playBoundary_xSceneRef) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_playBoundary_endPointTransforms) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_playBoundary) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_playBoundary_isResolved) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_playBoundary_initialPosition) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_playBoundary_initialPosition_isInitialized) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_playBoundary_currentTargetPosition) == 0x204, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_playBoundary_hasTargetPositionForRound) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_playBoundary_timeLimit) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_playBoundary_radiusScaleOverRoundTime_maxTime) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_playBoundary_radiusScaleOverRoundTime_curve) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_gorillaGhostBodyMaterial) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_gorillaGhostBodyMaterialIndex) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_planeCrossingSoundBank) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_soundNearBorder_audioSource) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_soundNearBorder_maxDistance) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_soundNearBorder_volumeCurve) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_soundNearBorder_baseVolume) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_hapticsNearBorder_borderProximity) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_hapticsNearBorder_ampCurve) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ___m_ph_hapticsNearBorder_baseAmp) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_isLocalPlayerSkeleton) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_gameState) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_gameState_lastUpdate) == 0x274, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____roundIsPlaying) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_allPropIDs_noPool) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_roundTime) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, _____ph_timeRoundStartedMillis__) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_randomSeed) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____ph_isLocalPlayerParticipating) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____isListeningTo_Pools_OnReady) == 0x29d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager, ____isListeningForXSceneRefLoadCallbacks) == 0x29e, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPropHuntGameManager) == 0x2a0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPropHuntGameManager/<>c
class CORDL_TYPE GorillaPropHuntGameManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GorillaPropHuntGameManager___c*  __9;

/// @brief Field <>9__87_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__87_0, put=setStaticF___9__87_0)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__87_0;

static inline ::GlobalNamespace::GorillaPropHuntGameManager___c* New_ctor() ;

/// @brief Method <Start>b__87_0, addr 0x5636938, size 0xb4, virtual false, abstract: false, final false
inline void _Start_b__87_0(::PlayFab::PlayFabError*  e) ;

/// @brief Method .ctor, addr 0x5636930, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GorillaPropHuntGameManager___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__87_0() ;

static inline void setStaticF___9(::GlobalNamespace::GorillaPropHuntGameManager___c*  value) ;

static inline void setStaticF___9__87_0(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPropHuntGameManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPropHuntGameManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPropHuntGameManager___c(GorillaPropHuntGameManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPropHuntGameManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPropHuntGameManager___c(GorillaPropHuntGameManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{626};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaPropHuntGameManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
