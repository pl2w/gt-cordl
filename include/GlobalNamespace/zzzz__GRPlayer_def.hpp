#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRPlayer_GRPlayerState_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ProgressionData_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ShuttleState_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRPlayer)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class GRBadge;
}
namespace GlobalNamespace {
class GRPlayerDamageEffects;
}
namespace GlobalNamespace {
struct GRPlayer_DamageOverlayValues;
}
namespace GlobalNamespace {
struct GRPlayer_GRPlayerShieldFlags;
}
namespace GlobalNamespace {
struct GRPlayer_GRPlayerState;
}
namespace GlobalNamespace {
struct GRPlayer_ProgressionData;
}
namespace GlobalNamespace {
struct GRPlayer_ProgressionLevels;
}
namespace GlobalNamespace {
class GRPlayer_ShuttleData;
}
namespace GlobalNamespace {
struct GRPlayer_ShuttleState;
}
namespace GlobalNamespace {
struct GRPlayer_SynchronizedSessionStat;
}
namespace GlobalNamespace {
class GRPlayer__LowHeathVisualCoroutine_d__215;
}
namespace GlobalNamespace {
class GRShuttle;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameLight;
}
namespace GlobalNamespace {
class GamePlayer;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class GhostReactorSoak;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipUserData;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SetUserDataResponse;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
struct ZoneClearReason;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
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
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GRPlayer_ShuttleData;
}
namespace GlobalNamespace {
class GRPlayer__LowHeathVisualCoroutine_d__215;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRPlayer*);
MARK_REF_T(::GlobalNamespace::GRPlayer_ShuttleData*);
MARK_REF_T(::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer*, "", "GRPlayer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer_ShuttleData*, "", "GRPlayer/ShuttleData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*, "", "GRPlayer/<LowHeathVisualCoroutine>d__215");
// Dependencies GRPlayer::GRPlayerState, GRPlayer::ProgressionData, MonoBehaviourTick, UnityEngine.Color, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRPlayer
class CORDL_TYPE GRPlayer : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using DamageOverlayValues = ::GlobalNamespace::GRPlayer_DamageOverlayValues;

using GRPlayerShieldFlags = ::GlobalNamespace::GRPlayer_GRPlayerShieldFlags;

using GRPlayerState = ::GlobalNamespace::GRPlayer_GRPlayerState;

using ProgressionData = ::GlobalNamespace::GRPlayer_ProgressionData;

using ProgressionLevels = ::GlobalNamespace::GRPlayer_ProgressionLevels;

using ShuttleData = ::GlobalNamespace::GRPlayer_ShuttleData;

using ShuttleState = ::GlobalNamespace::GRPlayer_ShuttleState;

using SynchronizedSessionStat = ::GlobalNamespace::GRPlayer_SynchronizedSessionStat;

using _LowHeathVisualCoroutine_d__215 = ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215;

 __declspec(property(get=get_CurrentProgression, put=set_CurrentProgression)) ::GlobalNamespace::GRPlayer_ProgressionData  CurrentProgression;

 __declspec(property(get=get_Hp)) int32_t  Hp;

 __declspec(property(get=get_InStealthMode)) bool  InStealthMode;

 __declspec(property(get=get_Juice)) int32_t  Juice;

 __declspec(property(get=get_LastShiftCut, put=set_LastShiftCut)) int32_t  LastShiftCut;

 __declspec(property(get=get_MaxHp)) int32_t  MaxHp;

 __declspec(property(get=get_MaxShieldHp)) int32_t  MaxShieldHp;

 __declspec(property(get=get_MyRig)) ::UnityW<::GlobalNamespace::VRRig>  MyRig;

 __declspec(property(get=get_ShieldFlags)) int32_t  ShieldFlags;

 __declspec(property(get=get_ShieldHp)) int32_t  ShieldHp;

 __declspec(property(get=get_ShiftCreditCapIncreases, put=set_ShiftCreditCapIncreases)) int32_t  ShiftCreditCapIncreases;

 __declspec(property(get=get_ShiftCreditCapIncreasesMax, put=set_ShiftCreditCapIncreasesMax)) int32_t  ShiftCreditCapIncreasesMax;

 __declspec(property(get=get_ShiftCredits)) int32_t  ShiftCredits;

 __declspec(property(get=get_ShiftPlayTime, put=set_ShiftPlayTime)) float_t  ShiftPlayTime;

 __declspec(property(get=get_State)) ::GlobalNamespace::GRPlayer_GRPlayerState  State;

/// @brief Field <ShiftCreditCapIncreasesMax>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShiftCreditCapIncreasesMax_k__BackingField, put=__cordl_internal_set__ShiftCreditCapIncreasesMax_k__BackingField)) int32_t  _ShiftCreditCapIncreasesMax_k__BackingField;

/// @brief Field <ShiftCreditCapIncreases>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShiftCreditCapIncreases_k__BackingField, put=__cordl_internal_set__ShiftCreditCapIncreases_k__BackingField)) int32_t  _ShiftCreditCapIncreases_k__BackingField;

/// @brief Field applyEnemyHitLimiter, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_applyEnemyHitLimiter, put=__cordl_internal_set_applyEnemyHitLimiter)) ::GlobalNamespace::CallLimiter*  applyEnemyHitLimiter;

/// @brief Field attachEnemy, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_attachEnemy, put=__cordl_internal_set_attachEnemy)) ::UnityW<::UnityEngine::Transform>  attachEnemy;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field badge, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_badge, put=__cordl_internal_set_badge)) ::UnityW<::GlobalNamespace::GRBadge>  badge;

/// @brief Field badgeBodyAnchor, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeBodyAnchor, put=__cordl_internal_set_badgeBodyAnchor)) ::UnityW<::UnityEngine::Transform>  badgeBodyAnchor;

/// @brief Field badgeBodyStringAttach, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeBodyStringAttach, put=__cordl_internal_set_badgeBodyStringAttach)) ::UnityW<::UnityEngine::Transform>  badgeBodyStringAttach;

/// @brief Field bodyCenter, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCenter, put=__cordl_internal_set_bodyCenter)) ::UnityW<::UnityEngine::Transform>  bodyCenter;

/// @brief Field caughtByAnomaly, offset 0x270, size 0x1 
 __declspec(property(get=__cordl_internal_get_caughtByAnomaly, put=__cordl_internal_set_caughtByAnomaly)) bool  caughtByAnomaly;

/// @brief Field coresCollectedByGroup, offset 0x25c, size 0x4 
 __declspec(property(get=__cordl_internal_get_coresCollectedByGroup, put=__cordl_internal_set_coresCollectedByGroup)) int32_t  coresCollectedByGroup;

/// @brief Field coresCollectedByPlayer, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_coresCollectedByPlayer, put=__cordl_internal_set_coresCollectedByPlayer)) int32_t  coresCollectedByPlayer;

/// @brief Field coresSpentByGroup, offset 0x264, size 0x4 
 __declspec(property(get=__cordl_internal_get_coresSpentByGroup, put=__cordl_internal_set_coresSpentByGroup)) int32_t  coresSpentByGroup;

/// @brief Field coresSpentByPlayer, offset 0x260, size 0x4 
 __declspec(property(get=__cordl_internal_get_coresSpentByPlayer, put=__cordl_internal_set_coresSpentByPlayer)) int32_t  coresSpentByPlayer;

/// @brief Field currentHealthVisualValue, offset 0x31c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentHealthVisualValue, put=__cordl_internal_set_currentHealthVisualValue)) int32_t  currentHealthVisualValue;

/// @brief Field currentProgression, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentProgression, put=__cordl_internal_set_currentProgression)) ::GlobalNamespace::GRPlayer_ProgressionData  currentProgression;

/// @brief Field damageEffects, offset 0x308, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageEffects, put=__cordl_internal_set_damageEffects)) ::UnityW<::GlobalNamespace::GRPlayerDamageEffects>  damageEffects;

/// @brief Field damageOverlayMaxHp, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_damageOverlayMaxHp, put=__cordl_internal_set_damageOverlayMaxHp)) int32_t  damageOverlayMaxHp;

/// @brief Field damageOverlayValues, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_damageOverlayValues, put=__cordl_internal_set_damageOverlayValues)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_DamageOverlayValues>*  damageOverlayValues;

/// @brief Field deathAmbientLightColor, offset 0xc4, size 0x10 
 __declspec(property(get=__cordl_internal_get_deathAmbientLightColor, put=__cordl_internal_set_deathAmbientLightColor)) ::UnityEngine::Color  deathAmbientLightColor;

/// @brief Field deathTintColor, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get_deathTintColor, put=__cordl_internal_set_deathTintColor)) ::UnityEngine::Color  deathTintColor;

/// @brief Field deaths, offset 0x26c, size 0x4 
 __declspec(property(get=__cordl_internal_get_deaths, put=__cordl_internal_set_deaths)) int32_t  deaths;

/// @brief Field dropPodChasisLevel, offset 0x368, size 0x4 
 __declspec(property(get=__cordl_internal_get_dropPodChasisLevel, put=__cordl_internal_set_dropPodChasisLevel)) int32_t  dropPodChasisLevel;

/// @brief Field dropPodLevel, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get_dropPodLevel, put=__cordl_internal_set_dropPodLevel)) int32_t  dropPodLevel;

/// @brief Field fireShieldLimiter, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_fireShieldLimiter, put=__cordl_internal_set_fireShieldLimiter)) ::GlobalNamespace::CallLimiter*  fireShieldLimiter;

/// @brief Field freezeDuration, offset 0x350, size 0x4 
 __declspec(property(get=__cordl_internal_get_freezeDuration, put=__cordl_internal_set_freezeDuration)) float_t  freezeDuration;

/// @brief Field gameId, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameId, put=__cordl_internal_set_gameId)) ::StringW  gameId;

/// @brief Field gamePlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamePlayer, put=__cordl_internal_set_gamePlayer)) ::UnityW<::GlobalNamespace::GamePlayer>  gamePlayer;

/// @brief Field gameStartTime, offset 0x2ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameStartTime, put=__cordl_internal_set_gameStartTime)) float_t  gameStartTime;

/// @brief Field gatesUnlocked, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_gatesUnlocked, put=__cordl_internal_set_gatesUnlocked)) int32_t  gatesUnlocked;

/// @brief Field hasPulledEquipment, offset 0x361, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPulledEquipment, put=__cordl_internal_set_hasPulledEquipment)) bool  hasPulledEquipment;

/// @brief Field hp, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_hp, put=__cordl_internal_set_hp)) int32_t  hp;

/// @brief Field inStealthMode, offset 0x1bc, size 0x1 
 __declspec(property(get=__cordl_internal_get_inStealthMode, put=__cordl_internal_set_inStealthMode)) bool  inStealthMode;

/// @brief Field isEmployee, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_isEmployee, put=__cordl_internal_set_isEmployee)) bool  isEmployee;

/// @brief Field isFirstShift, offset 0x2f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFirstShift, put=__cordl_internal_set_isFirstShift)) bool  isFirstShift;

/// @brief Field itemTypesHeldThisShift, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemTypesHeldThisShift, put=__cordl_internal_set_itemTypesHeldThisShift)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  itemTypesHeldThisShift;

/// @brief Field itemsHeldThisShift, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemsHeldThisShift, put=__cordl_internal_set_itemsHeldThisShift)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*  itemsHeldThisShift;

/// @brief Field itemsPurchased, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemsPurchased, put=__cordl_internal_set_itemsPurchased)) ::System::Collections::Generic::List_1<::StringW>*  itemsPurchased;

/// @brief Field lastLeftWithBadgeAttachedTime, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastLeftWithBadgeAttachedTime, put=__cordl_internal_set_lastLeftWithBadgeAttachedTime)) double_t  lastLeftWithBadgeAttachedTime;

/// @brief Field lastPlayerPosition, offset 0x354, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPlayerPosition, put=__cordl_internal_set_lastPlayerPosition)) ::UnityEngine::Vector3  lastPlayerPosition;

/// @brief Field lastShiftCut, offset 0x344, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastShiftCut, put=__cordl_internal_set_lastShiftCut)) int32_t  lastShiftCut;

/// @brief Field levelsUnlocked, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelsUnlocked, put=__cordl_internal_set_levelsUnlocked)) ::System::Collections::Generic::List_1<::StringW>*  levelsUnlocked;

/// @brief Field lowHealthTintPropertyId, offset 0x318, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowHealthTintPropertyId, put=__cordl_internal_set_lowHealthTintPropertyId)) int32_t  lowHealthTintPropertyId;

/// @brief Field lowHealthVisualPropertyBlock, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get_lowHealthVisualPropertyBlock, put=__cordl_internal_set_lowHealthVisualPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  lowHealthVisualPropertyBlock;

/// @brief Field lowHeathVisualCoroutine, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get_lowHeathVisualCoroutine, put=__cordl_internal_set_lowHeathVisualCoroutine)) ::UnityEngine::Coroutine*  lowHeathVisualCoroutine;

/// @brief Field maxHp, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHp, put=__cordl_internal_set_maxHp)) int32_t  maxHp;

/// @brief Field maxNumberOfPlayersInShift, offset 0x294, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNumberOfPlayersInShift, put=__cordl_internal_set_maxNumberOfPlayersInShift)) int32_t  maxNumberOfPlayersInShift;

/// @brief Field maxNumberOfPlayersIngame, offset 0x2e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNumberOfPlayersIngame, put=__cordl_internal_set_maxNumberOfPlayersIngame)) int32_t  maxNumberOfPlayersIngame;

/// @brief Field maxShieldHp, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxShieldHp, put=__cordl_internal_set_maxShieldHp)) int32_t  maxShieldHp;

/// @brief Field mothershipId, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mothershipId, put=__cordl_internal_set_mothershipId)) ::StringW  mothershipId;

/// @brief Field numShiftsPlayed, offset 0x2e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_numShiftsPlayed, put=__cordl_internal_set_numShiftsPlayed)) int32_t  numShiftsPlayed;

/// @brief Field playerDamageAudioSource, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerDamageAudioSource, put=__cordl_internal_set_playerDamageAudioSource)) ::UnityW<::UnityEngine::AudioSource>  playerDamageAudioSource;

/// @brief Field playerDamageEffect, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerDamageEffect, put=__cordl_internal_set_playerDamageEffect)) ::UnityW<::UnityEngine::ParticleSystem>  playerDamageEffect;

/// @brief Field playerDamageOffsetDist, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerDamageOffsetDist, put=__cordl_internal_set_playerDamageOffsetDist)) float_t  playerDamageOffsetDist;

/// @brief Field playerDamageSound, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerDamageSound, put=__cordl_internal_set_playerDamageSound)) ::UnityW<::UnityEngine::AudioClip>  playerDamageSound;

/// @brief Field playerDamageVolume, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerDamageVolume, put=__cordl_internal_set_playerDamageVolume)) float_t  playerDamageVolume;

/// @brief Field playerFrozenSound, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerFrozenSound, put=__cordl_internal_set_playerFrozenSound)) ::UnityW<::UnityEngine::AudioClip>  playerFrozenSound;

/// @brief Field playerJuice, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerJuice, put=__cordl_internal_set_playerJuice)) int32_t  playerJuice;

/// @brief Field playerRevivedEffect, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerRevivedEffect, put=__cordl_internal_set_playerRevivedEffect)) ::UnityW<::UnityEngine::ParticleSystem>  playerRevivedEffect;

/// @brief Field playerRevivedSound, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerRevivedSound, put=__cordl_internal_set_playerRevivedSound)) ::UnityW<::UnityEngine::AudioClip>  playerRevivedSound;

/// @brief Field playerRevivedVolume, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerRevivedVolume, put=__cordl_internal_set_playerRevivedVolume)) float_t  playerRevivedVolume;

/// @brief Field playerStateChangeLimiter, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerStateChangeLimiter, put=__cordl_internal_set_playerStateChangeLimiter)) ::GlobalNamespace::CallLimiter*  playerStateChangeLimiter;

/// @brief Field playerTurnedGhostEffect, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTurnedGhostEffect, put=__cordl_internal_set_playerTurnedGhostEffect)) ::UnityW<::UnityEngine::ParticleSystem>  playerTurnedGhostEffect;

/// @brief Field playerTurnedGhostSoundBank, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTurnedGhostSoundBank, put=__cordl_internal_set_playerTurnedGhostSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  playerTurnedGhostSoundBank;

/// @brief Field progressionBroadcastLimiter, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressionBroadcastLimiter, put=__cordl_internal_set_progressionBroadcastLimiter)) ::GlobalNamespace::CallLimiter*  progressionBroadcastLimiter;

/// @brief Field promotionBotLimiter, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_promotionBotLimiter, put=__cordl_internal_set_promotionBotLimiter)) ::GlobalNamespace::CallLimiter*  promotionBotLimiter;

/// @brief Field reportBreakableBrokenLimiter, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportBreakableBrokenLimiter, put=__cordl_internal_set_reportBreakableBrokenLimiter)) ::GlobalNamespace::CallLimiter*  reportBreakableBrokenLimiter;

/// @brief Field reportLocalHitLimiter, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportLocalHitLimiter, put=__cordl_internal_set_reportLocalHitLimiter)) ::GlobalNamespace::CallLimiter*  reportLocalHitLimiter;

/// @brief Field requestChargeToolLimiter, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestChargeToolLimiter, put=__cordl_internal_set_requestChargeToolLimiter)) ::GlobalNamespace::CallLimiter*  requestChargeToolLimiter;

/// @brief Field requestCollectItemLimiter, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestCollectItemLimiter, put=__cordl_internal_set_requestCollectItemLimiter)) ::GlobalNamespace::CallLimiter*  requestCollectItemLimiter;

/// @brief Field requestDepositCurrencyLimiter, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestDepositCurrencyLimiter, put=__cordl_internal_set_requestDepositCurrencyLimiter)) ::GlobalNamespace::CallLimiter*  requestDepositCurrencyLimiter;

/// @brief Field requestShiftStartLimiter, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestShiftStartLimiter, put=__cordl_internal_set_requestShiftStartLimiter)) ::GlobalNamespace::CallLimiter*  requestShiftStartLimiter;

/// @brief Field requestToolPurchaseStationLimiter, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestToolPurchaseStationLimiter, put=__cordl_internal_set_requestToolPurchaseStationLimiter)) ::GlobalNamespace::CallLimiter*  requestToolPurchaseStationLimiter;

/// @brief Field revives, offset 0x298, size 0x4 
 __declspec(property(get=__cordl_internal_get_revives, put=__cordl_internal_set_revives)) int32_t  revives;

/// @brief Field saveEquipmentInProgress, offset 0x360, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveEquipmentInProgress, put=__cordl_internal_set_saveEquipmentInProgress)) bool  saveEquipmentInProgress;

/// @brief Field scoreboardPageLimiter, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreboardPageLimiter, put=__cordl_internal_set_scoreboardPageLimiter)) ::GlobalNamespace::CallLimiter*  scoreboardPageLimiter;

/// @brief Field sentientCoresCollected, offset 0x290, size 0x4 
 __declspec(property(get=__cordl_internal_get_sentientCoresCollected, put=__cordl_internal_set_sentientCoresCollected)) int32_t  sentientCoresCollected;

/// @brief Field shieldActivatedSound, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldActivatedSound, put=__cordl_internal_set_shieldActivatedSound)) ::UnityW<::UnityEngine::AudioClip>  shieldActivatedSound;

/// @brief Field shieldActivatedVolume, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_shieldActivatedVolume, put=__cordl_internal_set_shieldActivatedVolume)) float_t  shieldActivatedVolume;

/// @brief Field shieldBodyVisual, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldBodyVisual, put=__cordl_internal_set_shieldBodyVisual)) ::UnityW<::UnityEngine::Transform>  shieldBodyVisual;

/// @brief Field shieldColorHeal, offset 0x170, size 0x10 
 __declspec(property(get=__cordl_internal_get_shieldColorHeal, put=__cordl_internal_set_shieldColorHeal)) ::UnityEngine::Color  shieldColorHeal;

/// @brief Field shieldColorLight, offset 0x150, size 0x10 
 __declspec(property(get=__cordl_internal_get_shieldColorLight, put=__cordl_internal_set_shieldColorLight)) ::UnityEngine::Color  shieldColorLight;

/// @brief Field shieldColorNormal, offset 0x140, size 0x10 
 __declspec(property(get=__cordl_internal_get_shieldColorNormal, put=__cordl_internal_set_shieldColorNormal)) ::UnityEngine::Color  shieldColorNormal;

/// @brief Field shieldColorStealth, offset 0x160, size 0x10 
 __declspec(property(get=__cordl_internal_get_shieldColorStealth, put=__cordl_internal_set_shieldColorStealth)) ::UnityEngine::Color  shieldColorStealth;

/// @brief Field shieldDamagedEffect, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldDamagedEffect, put=__cordl_internal_set_shieldDamagedEffect)) ::UnityW<::UnityEngine::ParticleSystem>  shieldDamagedEffect;

/// @brief Field shieldDamagedSound, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldDamagedSound, put=__cordl_internal_set_shieldDamagedSound)) ::UnityW<::UnityEngine::AudioClip>  shieldDamagedSound;

/// @brief Field shieldDamagedVolume, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_shieldDamagedVolume, put=__cordl_internal_set_shieldDamagedVolume)) float_t  shieldDamagedVolume;

/// @brief Field shieldDestroyedEffect, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldDestroyedEffect, put=__cordl_internal_set_shieldDestroyedEffect)) ::UnityW<::UnityEngine::ParticleSystem>  shieldDestroyedEffect;

/// @brief Field shieldDestroyedSound, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldDestroyedSound, put=__cordl_internal_set_shieldDestroyedSound)) ::UnityW<::UnityEngine::AudioClip>  shieldDestroyedSound;

/// @brief Field shieldDestroyedVolume, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_shieldDestroyedVolume, put=__cordl_internal_set_shieldDestroyedVolume)) float_t  shieldDestroyedVolume;

/// @brief Field shieldFlags, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_shieldFlags, put=__cordl_internal_set_shieldFlags)) int32_t  shieldFlags;

/// @brief Field shieldGameLight, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldGameLight, put=__cordl_internal_set_shieldGameLight)) ::UnityW<::GlobalNamespace::GameLight>  shieldGameLight;

/// @brief Field shieldHeadVisual, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldHeadVisual, put=__cordl_internal_set_shieldHeadVisual)) ::UnityW<::UnityEngine::Transform>  shieldHeadVisual;

/// @brief Field shieldHp, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_shieldHp, put=__cordl_internal_set_shieldHp)) int32_t  shieldHp;

/// @brief Field shieldStealthModeDuration, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_shieldStealthModeDuration, put=__cordl_internal_set_shieldStealthModeDuration)) float_t  shieldStealthModeDuration;

/// @brief Field shieldStealthModeEndTime, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_shieldStealthModeEndTime, put=__cordl_internal_set_shieldStealthModeEndTime)) double_t  shieldStealthModeEndTime;

/// @brief Field shiftCreditCache, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftCreditCache, put=__cordl_internal_set_shiftCreditCache)) int32_t  shiftCreditCache;

/// @brief Field shiftJoinTime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftJoinTime, put=__cordl_internal_set_shiftJoinTime)) double_t  shiftJoinTime;

/// @brief Field shiftPlayTime, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftPlayTime, put=__cordl_internal_set_shiftPlayTime)) float_t  shiftPlayTime;

/// @brief Field shuttleData, offset 0x330, size 0x8 
 __declspec(property(get=__cordl_internal_get_shuttleData, put=__cordl_internal_set_shuttleData)) ::GlobalNamespace::GRPlayer_ShuttleData*  shuttleData;

/// @brief Field soak, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_soak, put=__cordl_internal_set_soak)) ::GlobalNamespace::GhostReactorSoak*  soak;

/// @brief Field startingShiftCreditCache, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingShiftCreditCache, put=__cordl_internal_set_startingShiftCreditCache)) int32_t  startingShiftCreditCache;

/// @brief Field state, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRPlayer_GRPlayerState  state;

/// @brief Field synchronizedSessionStats, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_synchronizedSessionStats, put=__cordl_internal_set_synchronizedSessionStats)) ::ArrayW<float_t>  synchronizedSessionStats;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field timeIntoGameAtJoin, offset 0x2d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeIntoGameAtJoin, put=__cordl_internal_set_timeIntoGameAtJoin)) float_t  timeIntoGameAtJoin;

/// @brief Field timeIntoShiftAtJoin, offset 0x288, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeIntoShiftAtJoin, put=__cordl_internal_set_timeIntoShiftAtJoin)) float_t  timeIntoShiftAtJoin;

/// @brief Field totalCoresCollectedByGroup, offset 0x2bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalCoresCollectedByGroup, put=__cordl_internal_set_totalCoresCollectedByGroup)) int32_t  totalCoresCollectedByGroup;

/// @brief Field totalCoresCollectedByPlayer, offset 0x2b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalCoresCollectedByPlayer, put=__cordl_internal_set_totalCoresCollectedByPlayer)) int32_t  totalCoresCollectedByPlayer;

/// @brief Field totalCoresSpentByGroup, offset 0x2c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalCoresSpentByGroup, put=__cordl_internal_set_totalCoresSpentByGroup)) int32_t  totalCoresSpentByGroup;

/// @brief Field totalCoresSpentByPlayer, offset 0x2c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalCoresSpentByPlayer, put=__cordl_internal_set_totalCoresSpentByPlayer)) int32_t  totalCoresSpentByPlayer;

/// @brief Field totalDeaths, offset 0x2cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalDeaths, put=__cordl_internal_set_totalDeaths)) int32_t  totalDeaths;

/// @brief Field totalGatesUnlocked, offset 0x2c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalGatesUnlocked, put=__cordl_internal_set_totalGatesUnlocked)) int32_t  totalGatesUnlocked;

/// @brief Field totalItemTypesHeldThisShift, offset 0x300, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalItemTypesHeldThisShift, put=__cordl_internal_set_totalItemTypesHeldThisShift)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  totalItemTypesHeldThisShift;

/// @brief Field totalItemsHeldThisShift, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalItemsHeldThisShift, put=__cordl_internal_set_totalItemsHeldThisShift)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*  totalItemsHeldThisShift;

/// @brief Field totalItemsPurchased, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalItemsPurchased, put=__cordl_internal_set_totalItemsPurchased)) ::System::Collections::Generic::List_1<::StringW>*  totalItemsPurchased;

/// @brief Field totalRevives, offset 0x2e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalRevives, put=__cordl_internal_set_totalRevives)) int32_t  totalRevives;

/// @brief Field vrRig, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrRig, put=__cordl_internal_set_vrRig)) ::UnityW<::GlobalNamespace::VRRig>  vrRig;

/// @brief Field vrRigs, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrRigs, put=__cordl_internal_set_vrRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  vrRigs;

/// @brief Field wasPlayerInAtGameStart, offset 0x2dc, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasPlayerInAtGameStart, put=__cordl_internal_set_wasPlayerInAtGameStart)) bool  wasPlayerInAtGameStart;

/// @brief Field wasPlayerInAtShiftStart, offset 0x28c, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasPlayerInAtShiftStart, put=__cordl_internal_set_wasPlayerInAtShiftStart)) bool  wasPlayerInAtShiftStart;

/// @brief Field xRayVisionRefCount, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_xRayVisionRefCount, put=__cordl_internal_set_xRayVisionRefCount)) int32_t  xRayVisionRefCount;

/// @brief Method AddItemPurchased, addr 0x58a49ac, size 0x110, virtual false, abstract: false, final false
inline void AddItemPurchased(::StringW  newItemPurchased) ;

/// @brief Method AttachBadge, addr 0x58a2d58, size 0xa4, virtual false, abstract: false, final false
inline void AttachBadge(::GlobalNamespace::GRBadge*  grBadge) ;

/// @brief Method AttemptPromotion, addr 0x58a62d0, size 0x5c, virtual false, abstract: false, final false
inline bool AttemptPromotion() ;

/// @brief Method Awake, addr 0x58a040c, size 0x4c8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanActivateShield, addr 0x58a2dfc, size 0x14, virtual false, abstract: false, final false
inline bool CanActivateShield(int32_t  shieldHitPoints) ;

/// @brief Method ChangePlayerState, addr 0x58a2864, size 0x350, virtual false, abstract: false, final false
inline void ChangePlayerState(::GlobalNamespace::GRPlayer_GRPlayerState  newState, ::GlobalNamespace::GhostReactorManager*  manager) ;

/// @brief Method ClearStealthMode, addr 0x58a2f74, size 0xa8, virtual false, abstract: false, final false
inline void ClearStealthMode() ;

/// @brief Method CollectShiftCut, addr 0x58a62b8, size 0x18, virtual false, abstract: false, final false
inline void CollectShiftCut() ;

/// @brief Method DeserializeNetworkStateAndBurn, addr 0x58a3154, size 0x2fc, virtual false, abstract: false, final false
static inline void DeserializeNetworkStateAndBurn(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GRPlayer*  player, ::GlobalNamespace::GhostReactorManager*  grManager) ;

/// @brief Method Get, addr 0x589e674, size 0x74, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GRPlayer> Get(int32_t  actorNumber) ;

/// @brief Method Get, addr 0x58a2c24, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GRPlayer> Get(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method Get, addr 0x589c748, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GRPlayer> Get(::GlobalNamespace::VRRig*  vrRig) ;

/// @brief Method GetAssignedShuttle, addr 0x58a4c84, size 0x108, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRShuttle> GetAssignedShuttle(bool  isOnDrillovator) ;

/// @brief Method GetFromUserId, addr 0x58a4e68, size 0x318, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GRPlayer> GetFromUserId(::StringW  userId) ;

/// @brief Method GetLocal, addr 0x58a2ca4, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GRPlayer> GetLocal() ;

/// @brief Method GetMaxDropFloor, addr 0x58a628c, size 0x2c, virtual false, abstract: false, final false
inline int32_t GetMaxDropFloor() ;

/// @brief Method GrabbedItem, addr 0x58a4abc, size 0x1c8, virtual false, abstract: false, final false
inline void GrabbedItem(::GlobalNamespace::GameEntityId  id, ::StringW  itemName) ;

/// @brief Method HasXRayVision, addr 0x58a0394, size 0x10, virtual false, abstract: false, final false
inline bool HasXRayVision() ;

/// @brief Method IncrementChaosSeedsCollected, addr 0x58a498c, size 0x10, virtual false, abstract: false, final false
inline void IncrementChaosSeedsCollected(int32_t  numSeeds) ;

/// @brief Method IncrementCoresCollectedGroup, addr 0x58a4954, size 0x1c, virtual false, abstract: false, final false
inline void IncrementCoresCollectedGroup(int32_t  coreValue) ;

/// @brief Method IncrementCoresCollectedPlayer, addr 0x58a4938, size 0x1c, virtual false, abstract: false, final false
inline void IncrementCoresCollectedPlayer(int32_t  coreValue) ;

/// @brief Method IncrementCoresSpentGroup, addr 0x58a4970, size 0x1c, virtual false, abstract: false, final false
inline void IncrementCoresSpentGroup(int32_t  coreValue) ;

/// @brief Method IncrementCoresSpentPlayer, addr 0x589e6e8, size 0x1c, virtual false, abstract: false, final false
inline void IncrementCoresSpentPlayer(int32_t  coreValue) ;

/// @brief Method IncrementDeaths, addr 0x58a2bec, size 0x1c, virtual false, abstract: false, final false
inline void IncrementDeaths(int32_t  numDeaths) ;

/// @brief Method IncrementGatesUnlocked, addr 0x589e704, size 0x1c, virtual false, abstract: false, final false
inline void IncrementGatesUnlocked(int32_t  numGatesUnlocked) ;

/// @brief Method IncrementRevives, addr 0x58a2c08, size 0x1c, virtual false, abstract: false, final false
inline void IncrementRevives(int32_t  numRevives) ;

/// @brief Method IncrementShiftsPlayed, addr 0x58a499c, size 0x10, virtual false, abstract: false, final false
inline void IncrementShiftsPlayed(int32_t  numShifts) ;

/// @brief Method IncrementSynchronizedSessionStat, addr 0x58a59b8, size 0x38, virtual false, abstract: false, final false
inline void IncrementSynchronizedSessionStat(::GlobalNamespace::GRPlayer_SynchronizedSessionStat  stat, float_t  amt) ;

/// @brief Method IsDropPodUnlocked, addr 0x58a627c, size 0x10, virtual false, abstract: false, final false
inline bool IsDropPodUnlocked() ;

/// @brief Method LoadMyProgression, addr 0x58a0cfc, size 0x5c, virtual false, abstract: false, final false
inline void LoadMyProgression() ;

/// [IteratorStateMachine(typeof(GRPlayer::<LowHeathVisualCoroutine>d__215))]
/// @brief Method LowHeathVisualCoroutine, addr 0x58a5180, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* LowHeathVisualCoroutine() ;

static inline ::GlobalNamespace::GRPlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x58a0d58, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnGetMothershipFetchUserDataFail, addr 0x58a61a0, size 0xdc, virtual false, abstract: false, final false
inline void OnGetMothershipFetchUserDataFail(::GlobalNamespace::MothershipError*  error, int32_t  status) ;

/// @brief Method OnGetMothershipFetchUserDataSuccess, addr 0x58a60dc, size 0xc4, virtual false, abstract: false, final false
inline void OnGetMothershipFetchUserDataSuccess(::GlobalNamespace::MothershipUserData*  response) ;

/// @brief Method OnPlayerHit, addr 0x58a1a2c, size 0x604, virtual false, abstract: false, final false
inline void OnPlayerHit(::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, ::GlobalNamespace::GhostReactorManager*  manager, ::GlobalNamespace::GameEntityId  hitByEntityId) ;

/// @brief Method OnPlayerRevive, addr 0x58a2bb4, size 0x38, virtual false, abstract: false, final false
inline void OnPlayerRevive(::GlobalNamespace::GhostReactorManager*  manager) ;

/// @brief Method OnSetMothershipDataComplete, addr 0x58a5cfc, size 0x8, virtual false, abstract: false, final false
inline void OnSetMothershipDataComplete(bool  success) ;

/// @brief Method OnSetMothershipUserDataFail, addr 0x58a5dac, size 0xec, virtual false, abstract: false, final false
inline void OnSetMothershipUserDataFail(::GlobalNamespace::MothershipError*  error, int32_t  status) ;

/// @brief Method OnSetMothershipUserDataSuccess, addr 0x58a5d04, size 0xa8, virtual false, abstract: false, final false
inline void OnSetMothershipUserDataSuccess(::GlobalNamespace::SetUserDataResponse*  response) ;

/// @brief Method OnShiftCreditCapChanged, addr 0x58a15cc, size 0x128, virtual false, abstract: false, final false
inline void OnShiftCreditCapChanged(::StringW  targetMothershipId, int32_t  newCap, int32_t  newCapMax) ;

/// @brief Method OnShiftCreditCapData, addr 0x58a1994, size 0x1c, virtual false, abstract: false, final false
inline void OnShiftCreditCapData(::StringW  targetMothershipId, int32_t  shiftCreditCapNumberOfIncreases, int32_t  shiftCreditMaxNumberOfIncreases) ;

/// @brief Method OnShiftCreditChanged, addr 0x58a16f4, size 0x2a0, virtual false, abstract: false, final false
inline void OnShiftCreditChanged(::StringW  targetMothershipId, int32_t  newShiftCredits) ;

/// @brief Method PlayHitFx, addr 0x58a2030, size 0x834, virtual false, abstract: false, final false
inline void PlayHitFx(::UnityEngine::Vector3  attackLocation) ;

/// [ContextMenu("Refresh Damage Vignette Visual")]
/// @brief Method RefreshDamageVignetteVisual, addr 0x58a08ec, size 0xe4, virtual false, abstract: false, final false
inline void RefreshDamageVignetteVisual() ;

/// @brief Method RefreshPlayerVisuals, addr 0x58a0dc4, size 0x808, virtual false, abstract: false, final false
inline void RefreshPlayerVisuals() ;

/// @brief Method RefreshShuttles, addr 0x58a4d8c, size 0xdc, virtual false, abstract: false, final false
inline void RefreshShuttles() ;

/// @brief Method RemoveFrozen, addr 0x58a56bc, size 0xc4, virtual false, abstract: false, final false
inline void RemoveFrozen() ;

/// @brief Method RequestFetchMothershipUserData, addr 0x58a5e98, size 0x244, virtual false, abstract: false, final false
inline void RequestFetchMothershipUserData(::StringW  key) ;

/// @brief Method RequestSetMothershipUserData, addr 0x58a5a64, size 0x298, virtual false, abstract: false, final false
inline void RequestSetMothershipUserData(::StringW  keyName, ::StringW  value) ;

/// @brief Method Reset, addr 0x58a0d5c, size 0x68, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetGameTelemetryTracking, addr 0x58a3634, size 0x1a8, virtual false, abstract: false, final false
inline void ResetGameTelemetryTracking() ;

/// @brief Method ResetSynchronizedSessionStats, addr 0x58a5a20, size 0x44, virtual false, abstract: false, final false
inline void ResetSynchronizedSessionStats() ;

/// @brief Method ResetTelemetryTracking, addr 0x58a474c, size 0x1ec, virtual false, abstract: false, final false
inline void ResetTelemetryTracking(::StringW  newGameId, float_t  timeSinceShiftStart) ;

/// @brief Method SaveMyProgression, addr 0x58a632c, size 0x60, virtual false, abstract: false, final false
inline void SaveMyProgression() ;

/// @brief Method SendCreditsRefilledTelemetry, addr 0x58a4608, size 0x144, virtual false, abstract: false, final false
inline void SendCreditsRefilledTelemetry(int32_t  shinyRocksSpent, int32_t  finalCredits) ;

/// @brief Method SendFloorEndedTelemetry, addr 0x58a3bc8, size 0x2ac, virtual false, abstract: false, final false
inline void SendFloorEndedTelemetry(bool  isShiftActuallyEnding, float_t  shiftStartTime, ::GlobalNamespace::ZoneClearReason  zoneClearReason, int32_t  currentFloor, ::StringW  floorPreset, ::StringW  floorModifier, bool  objectivesCompleted, ::StringW  section, int32_t  xpGained) ;

/// @brief Method SendFloorStartedTelemetry, addr 0x58a3a24, size 0x1a4, virtual false, abstract: false, final false
inline void SendFloorStartedTelemetry(float_t  timeIntoShift, bool  wasPlayerInAtStart, int32_t  currentFloor, ::StringW  floorPreset, ::StringW  floorModifier) ;

/// @brief Method SendGameEndedTelemetry, addr 0x58a37dc, size 0x248, virtual false, abstract: false, final false
inline void SendGameEndedTelemetry(bool  isShiftActuallyEnding, ::GlobalNamespace::ZoneClearReason  zoneClearReason) ;

/// @brief Method SendGameStartedTelemetry, addr 0x58a34ac, size 0x188, virtual false, abstract: false, final false
inline void SendGameStartedTelemetry(float_t  timeIntoShift, bool  wasPlayerInAtStart, int32_t  currentFloor) ;

/// @brief Method SendJuiceCollectedTelemetry, addr 0x58a43c4, size 0x74, virtual false, abstract: false, final false
inline void SendJuiceCollectedTelemetry(int32_t  juiceCollected, int32_t  coresProcessedByOverdrive) ;

/// @brief Method SendOverdrivePurchasedTelemetry, addr 0x58a4438, size 0x144, virtual false, abstract: false, final false
inline void SendOverdrivePurchasedTelemetry(int32_t  shinyRocksUsed, int32_t  seedsInQueue) ;

/// @brief Method SendPodUpgradeTelemetry, addr 0x58a457c, size 0x8c, virtual false, abstract: false, final false
inline void SendPodUpgradeTelemetry(::StringW  toolName, int32_t  level, int32_t  shinyRocksSpent, int32_t  juiceSpent) ;

/// @brief Method SendRankUpTelemetry, addr 0x58a3fd0, size 0x134, virtual false, abstract: false, final false
inline void SendRankUpTelemetry(::StringW  newRank) ;

/// @brief Method SendSeedDepositedTelemetry, addr 0x58a4280, size 0x144, virtual false, abstract: false, final false
inline void SendSeedDepositedTelemetry(::StringW  unlockTime, int32_t  seedsInQueue) ;

/// @brief Method SendToolPurchasedTelemetry, addr 0x58a3e74, size 0x15c, virtual false, abstract: false, final false
inline void SendToolPurchasedTelemetry(::StringW  toolName, int32_t  toolLevel, int32_t  coresSpent, int32_t  shinyRocksSpent) ;

/// @brief Method SendToolUpgradeTelemetry, addr 0x58a4104, size 0x17c, virtual false, abstract: false, final false
inline void SendToolUpgradeTelemetry(::StringW  upgradeType, ::StringW  toolName, int32_t  newLevel, int32_t  juiceSpent, int32_t  griftSpent, int32_t  coresSpent) ;

/// @brief Method SerializeNetworkState, addr 0x58a301c, size 0x138, virtual false, abstract: false, final false
inline void SerializeNetworkState(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SetAsFrozen, addr 0x58a52b4, size 0x408, virtual false, abstract: false, final false
inline void SetAsFrozen(float_t  duration) ;

/// @brief Method SetGooParticleSystemEnabled, addr 0x58a5214, size 0xa0, virtual false, abstract: false, final false
inline void SetGooParticleSystemEnabled(bool  bIsLeftHand, bool  newEnableState) ;

/// @brief Method SetHp, addr 0x58a08d4, size 0xc, virtual false, abstract: false, final false
inline void SetHp(int32_t  newHp) ;

/// @brief Method SetProgressionData, addr 0x58a3450, size 0x5c, virtual false, abstract: false, final false
inline void SetProgressionData(int32_t  _points, int32_t  _redeemedPoints, bool  saveProgression) ;

/// @brief Method SetShieldHp, addr 0x58a08e0, size 0xc, virtual false, abstract: false, final false
inline void SetShieldHp(int32_t  newShieldHp) ;

/// @brief Method SetSynchronizedSessionStat, addr 0x58a59f0, size 0x30, virtual false, abstract: false, final false
inline void SetSynchronizedSessionStat(::GlobalNamespace::GRPlayer_SynchronizedSessionStat  stat, float_t  amt) ;

/// @brief Method Start, addr 0x58a09d8, size 0x324, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SubtractShiftCredit, addr 0x58a19b0, size 0x7c, virtual false, abstract: false, final false
inline void SubtractShiftCredit(int32_t  shiftCreditDelta) ;

/// @brief Method Tick, addr 0x58a5780, size 0x238, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method TryActivateShield, addr 0x58a2e10, size 0x164, virtual false, abstract: false, final false
inline bool TryActivateShield(int32_t  shieldHitpoints, int32_t  shieldFlags) ;

constexpr int32_t const& __cordl_internal_get__ShiftCreditCapIncreasesMax_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ShiftCreditCapIncreasesMax_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ShiftCreditCapIncreases_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ShiftCreditCapIncreases_k__BackingField() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_applyEnemyHitLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_applyEnemyHitLimiter() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_attachEnemy() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_attachEnemy() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::GlobalNamespace::GRBadge> const& __cordl_internal_get_badge() const;

constexpr ::UnityW<::GlobalNamespace::GRBadge>& __cordl_internal_get_badge() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_badgeBodyAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_badgeBodyAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_badgeBodyStringAttach() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_badgeBodyStringAttach() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bodyCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bodyCenter() ;

constexpr bool const& __cordl_internal_get_caughtByAnomaly() const;

constexpr bool& __cordl_internal_get_caughtByAnomaly() ;

constexpr int32_t const& __cordl_internal_get_coresCollectedByGroup() const;

constexpr int32_t& __cordl_internal_get_coresCollectedByGroup() ;

constexpr int32_t const& __cordl_internal_get_coresCollectedByPlayer() const;

constexpr int32_t& __cordl_internal_get_coresCollectedByPlayer() ;

constexpr int32_t const& __cordl_internal_get_coresSpentByGroup() const;

constexpr int32_t& __cordl_internal_get_coresSpentByGroup() ;

constexpr int32_t const& __cordl_internal_get_coresSpentByPlayer() const;

constexpr int32_t& __cordl_internal_get_coresSpentByPlayer() ;

constexpr int32_t const& __cordl_internal_get_currentHealthVisualValue() const;

constexpr int32_t& __cordl_internal_get_currentHealthVisualValue() ;

constexpr ::GlobalNamespace::GRPlayer_ProgressionData const& __cordl_internal_get_currentProgression() const;

constexpr ::GlobalNamespace::GRPlayer_ProgressionData& __cordl_internal_get_currentProgression() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayerDamageEffects> const& __cordl_internal_get_damageEffects() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayerDamageEffects>& __cordl_internal_get_damageEffects() ;

constexpr int32_t const& __cordl_internal_get_damageOverlayMaxHp() const;

constexpr int32_t& __cordl_internal_get_damageOverlayMaxHp() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_DamageOverlayValues>* const& __cordl_internal_get_damageOverlayValues() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_DamageOverlayValues>*& __cordl_internal_get_damageOverlayValues() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_deathAmbientLightColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_deathAmbientLightColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_deathTintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_deathTintColor() ;

constexpr int32_t const& __cordl_internal_get_deaths() const;

constexpr int32_t& __cordl_internal_get_deaths() ;

constexpr int32_t const& __cordl_internal_get_dropPodChasisLevel() const;

constexpr int32_t& __cordl_internal_get_dropPodChasisLevel() ;

constexpr int32_t const& __cordl_internal_get_dropPodLevel() const;

constexpr int32_t& __cordl_internal_get_dropPodLevel() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_fireShieldLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_fireShieldLimiter() ;

constexpr float_t const& __cordl_internal_get_freezeDuration() const;

constexpr float_t& __cordl_internal_get_freezeDuration() ;

constexpr ::StringW const& __cordl_internal_get_gameId() const;

constexpr ::StringW& __cordl_internal_get_gameId() ;

constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& __cordl_internal_get_gamePlayer() const;

constexpr ::UnityW<::GlobalNamespace::GamePlayer>& __cordl_internal_get_gamePlayer() ;

constexpr float_t const& __cordl_internal_get_gameStartTime() const;

constexpr float_t& __cordl_internal_get_gameStartTime() ;

constexpr int32_t const& __cordl_internal_get_gatesUnlocked() const;

constexpr int32_t& __cordl_internal_get_gatesUnlocked() ;

constexpr bool const& __cordl_internal_get_hasPulledEquipment() const;

constexpr bool& __cordl_internal_get_hasPulledEquipment() ;

constexpr int32_t const& __cordl_internal_get_hp() const;

constexpr int32_t& __cordl_internal_get_hp() ;

constexpr bool const& __cordl_internal_get_inStealthMode() const;

constexpr bool& __cordl_internal_get_inStealthMode() ;

constexpr bool const& __cordl_internal_get_isEmployee() const;

constexpr bool& __cordl_internal_get_isEmployee() ;

constexpr bool const& __cordl_internal_get_isFirstShift() const;

constexpr bool& __cordl_internal_get_isFirstShift() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_itemTypesHeldThisShift() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_itemTypesHeldThisShift() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>* const& __cordl_internal_get_itemsHeldThisShift() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*& __cordl_internal_get_itemsHeldThisShift() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_itemsPurchased() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_itemsPurchased() ;

constexpr double_t const& __cordl_internal_get_lastLeftWithBadgeAttachedTime() const;

constexpr double_t& __cordl_internal_get_lastLeftWithBadgeAttachedTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPlayerPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPlayerPosition() ;

constexpr int32_t const& __cordl_internal_get_lastShiftCut() const;

constexpr int32_t& __cordl_internal_get_lastShiftCut() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_levelsUnlocked() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_levelsUnlocked() ;

constexpr int32_t const& __cordl_internal_get_lowHealthTintPropertyId() const;

constexpr int32_t& __cordl_internal_get_lowHealthTintPropertyId() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_lowHealthVisualPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_lowHealthVisualPropertyBlock() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_lowHeathVisualCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_lowHeathVisualCoroutine() ;

constexpr int32_t const& __cordl_internal_get_maxHp() const;

constexpr int32_t& __cordl_internal_get_maxHp() ;

constexpr int32_t const& __cordl_internal_get_maxNumberOfPlayersInShift() const;

constexpr int32_t& __cordl_internal_get_maxNumberOfPlayersInShift() ;

constexpr int32_t const& __cordl_internal_get_maxNumberOfPlayersIngame() const;

constexpr int32_t& __cordl_internal_get_maxNumberOfPlayersIngame() ;

constexpr int32_t const& __cordl_internal_get_maxShieldHp() const;

constexpr int32_t& __cordl_internal_get_maxShieldHp() ;

constexpr ::StringW const& __cordl_internal_get_mothershipId() const;

constexpr ::StringW& __cordl_internal_get_mothershipId() ;

constexpr int32_t const& __cordl_internal_get_numShiftsPlayed() const;

constexpr int32_t& __cordl_internal_get_numShiftsPlayed() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_playerDamageAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_playerDamageAudioSource() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_playerDamageEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_playerDamageEffect() ;

constexpr float_t const& __cordl_internal_get_playerDamageOffsetDist() const;

constexpr float_t& __cordl_internal_get_playerDamageOffsetDist() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_playerDamageSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_playerDamageSound() ;

constexpr float_t const& __cordl_internal_get_playerDamageVolume() const;

constexpr float_t& __cordl_internal_get_playerDamageVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_playerFrozenSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_playerFrozenSound() ;

constexpr int32_t const& __cordl_internal_get_playerJuice() const;

constexpr int32_t& __cordl_internal_get_playerJuice() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_playerRevivedEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_playerRevivedEffect() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_playerRevivedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_playerRevivedSound() ;

constexpr float_t const& __cordl_internal_get_playerRevivedVolume() const;

constexpr float_t& __cordl_internal_get_playerRevivedVolume() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_playerStateChangeLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_playerStateChangeLimiter() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_playerTurnedGhostEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_playerTurnedGhostEffect() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_playerTurnedGhostSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_playerTurnedGhostSoundBank() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_progressionBroadcastLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_progressionBroadcastLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_promotionBotLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_promotionBotLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_reportBreakableBrokenLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_reportBreakableBrokenLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_reportLocalHitLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_reportLocalHitLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_requestChargeToolLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_requestChargeToolLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_requestCollectItemLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_requestCollectItemLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_requestDepositCurrencyLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_requestDepositCurrencyLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_requestShiftStartLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_requestShiftStartLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_requestToolPurchaseStationLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_requestToolPurchaseStationLimiter() ;

constexpr int32_t const& __cordl_internal_get_revives() const;

constexpr int32_t& __cordl_internal_get_revives() ;

constexpr bool const& __cordl_internal_get_saveEquipmentInProgress() const;

constexpr bool& __cordl_internal_get_saveEquipmentInProgress() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_scoreboardPageLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_scoreboardPageLimiter() ;

constexpr int32_t const& __cordl_internal_get_sentientCoresCollected() const;

constexpr int32_t& __cordl_internal_get_sentientCoresCollected() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_shieldActivatedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_shieldActivatedSound() ;

constexpr float_t const& __cordl_internal_get_shieldActivatedVolume() const;

constexpr float_t& __cordl_internal_get_shieldActivatedVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shieldBodyVisual() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shieldBodyVisual() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_shieldColorHeal() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_shieldColorHeal() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_shieldColorLight() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_shieldColorLight() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_shieldColorNormal() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_shieldColorNormal() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_shieldColorStealth() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_shieldColorStealth() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_shieldDamagedEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_shieldDamagedEffect() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_shieldDamagedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_shieldDamagedSound() ;

constexpr float_t const& __cordl_internal_get_shieldDamagedVolume() const;

constexpr float_t& __cordl_internal_get_shieldDamagedVolume() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_shieldDestroyedEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_shieldDestroyedEffect() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_shieldDestroyedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_shieldDestroyedSound() ;

constexpr float_t const& __cordl_internal_get_shieldDestroyedVolume() const;

constexpr float_t& __cordl_internal_get_shieldDestroyedVolume() ;

constexpr int32_t const& __cordl_internal_get_shieldFlags() const;

constexpr int32_t& __cordl_internal_get_shieldFlags() ;

constexpr ::UnityW<::GlobalNamespace::GameLight> const& __cordl_internal_get_shieldGameLight() const;

constexpr ::UnityW<::GlobalNamespace::GameLight>& __cordl_internal_get_shieldGameLight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shieldHeadVisual() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shieldHeadVisual() ;

constexpr int32_t const& __cordl_internal_get_shieldHp() const;

constexpr int32_t& __cordl_internal_get_shieldHp() ;

constexpr float_t const& __cordl_internal_get_shieldStealthModeDuration() const;

constexpr float_t& __cordl_internal_get_shieldStealthModeDuration() ;

constexpr double_t const& __cordl_internal_get_shieldStealthModeEndTime() const;

constexpr double_t& __cordl_internal_get_shieldStealthModeEndTime() ;

constexpr int32_t const& __cordl_internal_get_shiftCreditCache() const;

constexpr int32_t& __cordl_internal_get_shiftCreditCache() ;

constexpr double_t const& __cordl_internal_get_shiftJoinTime() const;

constexpr double_t& __cordl_internal_get_shiftJoinTime() ;

constexpr float_t const& __cordl_internal_get_shiftPlayTime() const;

constexpr float_t& __cordl_internal_get_shiftPlayTime() ;

constexpr ::GlobalNamespace::GRPlayer_ShuttleData* const& __cordl_internal_get_shuttleData() const;

constexpr ::GlobalNamespace::GRPlayer_ShuttleData*& __cordl_internal_get_shuttleData() ;

constexpr ::GlobalNamespace::GhostReactorSoak* const& __cordl_internal_get_soak() const;

constexpr ::GlobalNamespace::GhostReactorSoak*& __cordl_internal_get_soak() ;

constexpr int32_t const& __cordl_internal_get_startingShiftCreditCache() const;

constexpr int32_t& __cordl_internal_get_startingShiftCreditCache() ;

constexpr ::GlobalNamespace::GRPlayer_GRPlayerState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRPlayer_GRPlayerState& __cordl_internal_get_state() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_synchronizedSessionStats() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_synchronizedSessionStats() ;

constexpr float_t const& __cordl_internal_get_timeIntoGameAtJoin() const;

constexpr float_t& __cordl_internal_get_timeIntoGameAtJoin() ;

constexpr float_t const& __cordl_internal_get_timeIntoShiftAtJoin() const;

constexpr float_t& __cordl_internal_get_timeIntoShiftAtJoin() ;

constexpr int32_t const& __cordl_internal_get_totalCoresCollectedByGroup() const;

constexpr int32_t& __cordl_internal_get_totalCoresCollectedByGroup() ;

constexpr int32_t const& __cordl_internal_get_totalCoresCollectedByPlayer() const;

constexpr int32_t& __cordl_internal_get_totalCoresCollectedByPlayer() ;

constexpr int32_t const& __cordl_internal_get_totalCoresSpentByGroup() const;

constexpr int32_t& __cordl_internal_get_totalCoresSpentByGroup() ;

constexpr int32_t const& __cordl_internal_get_totalCoresSpentByPlayer() const;

constexpr int32_t& __cordl_internal_get_totalCoresSpentByPlayer() ;

constexpr int32_t const& __cordl_internal_get_totalDeaths() const;

constexpr int32_t& __cordl_internal_get_totalDeaths() ;

constexpr int32_t const& __cordl_internal_get_totalGatesUnlocked() const;

constexpr int32_t& __cordl_internal_get_totalGatesUnlocked() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_totalItemTypesHeldThisShift() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_totalItemTypesHeldThisShift() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>* const& __cordl_internal_get_totalItemsHeldThisShift() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*& __cordl_internal_get_totalItemsHeldThisShift() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_totalItemsPurchased() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_totalItemsPurchased() ;

constexpr int32_t const& __cordl_internal_get_totalRevives() const;

constexpr int32_t& __cordl_internal_get_totalRevives() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_vrRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_vrRig() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_vrRigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_vrRigs() ;

constexpr bool const& __cordl_internal_get_wasPlayerInAtGameStart() const;

constexpr bool& __cordl_internal_get_wasPlayerInAtGameStart() ;

constexpr bool const& __cordl_internal_get_wasPlayerInAtShiftStart() const;

constexpr bool& __cordl_internal_get_wasPlayerInAtShiftStart() ;

constexpr int32_t const& __cordl_internal_get_xRayVisionRefCount() const;

constexpr int32_t& __cordl_internal_get_xRayVisionRefCount() ;

constexpr void __cordl_internal_set__ShiftCreditCapIncreasesMax_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ShiftCreditCapIncreases_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_applyEnemyHitLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_attachEnemy(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_badge(::UnityW<::GlobalNamespace::GRBadge>  value) ;

constexpr void __cordl_internal_set_badgeBodyAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_badgeBodyStringAttach(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_bodyCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_caughtByAnomaly(bool  value) ;

constexpr void __cordl_internal_set_coresCollectedByGroup(int32_t  value) ;

constexpr void __cordl_internal_set_coresCollectedByPlayer(int32_t  value) ;

constexpr void __cordl_internal_set_coresSpentByGroup(int32_t  value) ;

constexpr void __cordl_internal_set_coresSpentByPlayer(int32_t  value) ;

constexpr void __cordl_internal_set_currentHealthVisualValue(int32_t  value) ;

constexpr void __cordl_internal_set_currentProgression(::GlobalNamespace::GRPlayer_ProgressionData  value) ;

constexpr void __cordl_internal_set_damageEffects(::UnityW<::GlobalNamespace::GRPlayerDamageEffects>  value) ;

constexpr void __cordl_internal_set_damageOverlayMaxHp(int32_t  value) ;

constexpr void __cordl_internal_set_damageOverlayValues(::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_DamageOverlayValues>*  value) ;

constexpr void __cordl_internal_set_deathAmbientLightColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_deathTintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_deaths(int32_t  value) ;

constexpr void __cordl_internal_set_dropPodChasisLevel(int32_t  value) ;

constexpr void __cordl_internal_set_dropPodLevel(int32_t  value) ;

constexpr void __cordl_internal_set_fireShieldLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_freezeDuration(float_t  value) ;

constexpr void __cordl_internal_set_gameId(::StringW  value) ;

constexpr void __cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GamePlayer>  value) ;

constexpr void __cordl_internal_set_gameStartTime(float_t  value) ;

constexpr void __cordl_internal_set_gatesUnlocked(int32_t  value) ;

constexpr void __cordl_internal_set_hasPulledEquipment(bool  value) ;

constexpr void __cordl_internal_set_hp(int32_t  value) ;

constexpr void __cordl_internal_set_inStealthMode(bool  value) ;

constexpr void __cordl_internal_set_isEmployee(bool  value) ;

constexpr void __cordl_internal_set_isFirstShift(bool  value) ;

constexpr void __cordl_internal_set_itemTypesHeldThisShift(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_itemsHeldThisShift(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*  value) ;

constexpr void __cordl_internal_set_itemsPurchased(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_lastLeftWithBadgeAttachedTime(double_t  value) ;

constexpr void __cordl_internal_set_lastPlayerPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastShiftCut(int32_t  value) ;

constexpr void __cordl_internal_set_levelsUnlocked(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_lowHealthTintPropertyId(int32_t  value) ;

constexpr void __cordl_internal_set_lowHealthVisualPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_lowHeathVisualCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_maxHp(int32_t  value) ;

constexpr void __cordl_internal_set_maxNumberOfPlayersInShift(int32_t  value) ;

constexpr void __cordl_internal_set_maxNumberOfPlayersIngame(int32_t  value) ;

constexpr void __cordl_internal_set_maxShieldHp(int32_t  value) ;

constexpr void __cordl_internal_set_mothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_numShiftsPlayed(int32_t  value) ;

constexpr void __cordl_internal_set_playerDamageAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_playerDamageEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_playerDamageOffsetDist(float_t  value) ;

constexpr void __cordl_internal_set_playerDamageSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_playerDamageVolume(float_t  value) ;

constexpr void __cordl_internal_set_playerFrozenSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_playerJuice(int32_t  value) ;

constexpr void __cordl_internal_set_playerRevivedEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_playerRevivedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_playerRevivedVolume(float_t  value) ;

constexpr void __cordl_internal_set_playerStateChangeLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_playerTurnedGhostEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_playerTurnedGhostSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_progressionBroadcastLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_promotionBotLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_reportBreakableBrokenLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_reportLocalHitLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_requestChargeToolLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_requestCollectItemLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_requestDepositCurrencyLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_requestShiftStartLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_requestToolPurchaseStationLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_revives(int32_t  value) ;

constexpr void __cordl_internal_set_saveEquipmentInProgress(bool  value) ;

constexpr void __cordl_internal_set_scoreboardPageLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_sentientCoresCollected(int32_t  value) ;

constexpr void __cordl_internal_set_shieldActivatedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_shieldActivatedVolume(float_t  value) ;

constexpr void __cordl_internal_set_shieldBodyVisual(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shieldColorHeal(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_shieldColorLight(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_shieldColorNormal(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_shieldColorStealth(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_shieldDamagedEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_shieldDamagedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_shieldDamagedVolume(float_t  value) ;

constexpr void __cordl_internal_set_shieldDestroyedEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_shieldDestroyedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_shieldDestroyedVolume(float_t  value) ;

constexpr void __cordl_internal_set_shieldFlags(int32_t  value) ;

constexpr void __cordl_internal_set_shieldGameLight(::UnityW<::GlobalNamespace::GameLight>  value) ;

constexpr void __cordl_internal_set_shieldHeadVisual(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_shieldHp(int32_t  value) ;

constexpr void __cordl_internal_set_shieldStealthModeDuration(float_t  value) ;

constexpr void __cordl_internal_set_shieldStealthModeEndTime(double_t  value) ;

constexpr void __cordl_internal_set_shiftCreditCache(int32_t  value) ;

constexpr void __cordl_internal_set_shiftJoinTime(double_t  value) ;

constexpr void __cordl_internal_set_shiftPlayTime(float_t  value) ;

constexpr void __cordl_internal_set_shuttleData(::GlobalNamespace::GRPlayer_ShuttleData*  value) ;

constexpr void __cordl_internal_set_soak(::GlobalNamespace::GhostReactorSoak*  value) ;

constexpr void __cordl_internal_set_startingShiftCreditCache(int32_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRPlayer_GRPlayerState  value) ;

constexpr void __cordl_internal_set_synchronizedSessionStats(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_timeIntoGameAtJoin(float_t  value) ;

constexpr void __cordl_internal_set_timeIntoShiftAtJoin(float_t  value) ;

constexpr void __cordl_internal_set_totalCoresCollectedByGroup(int32_t  value) ;

constexpr void __cordl_internal_set_totalCoresCollectedByPlayer(int32_t  value) ;

constexpr void __cordl_internal_set_totalCoresSpentByGroup(int32_t  value) ;

constexpr void __cordl_internal_set_totalCoresSpentByPlayer(int32_t  value) ;

constexpr void __cordl_internal_set_totalDeaths(int32_t  value) ;

constexpr void __cordl_internal_set_totalGatesUnlocked(int32_t  value) ;

constexpr void __cordl_internal_set_totalItemTypesHeldThisShift(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_totalItemsHeldThisShift(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*  value) ;

constexpr void __cordl_internal_set_totalItemsPurchased(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_totalRevives(int32_t  value) ;

constexpr void __cordl_internal_set_vrRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_vrRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_wasPlayerInAtGameStart(bool  value) ;

constexpr void __cordl_internal_set_wasPlayerInAtShiftStart(bool  value) ;

constexpr void __cordl_internal_set_xRayVisionRefCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x58a638c, size 0x2a4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

/// @brief Method get_CurrentProgression, addr 0x58a03fc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRPlayer_ProgressionData get_CurrentProgression() ;

/// @brief Method get_Hp, addr 0x58a03b4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Hp() ;

/// @brief Method get_InStealthMode, addr 0x58a03cc, size 0x8, virtual false, abstract: false, final false
inline bool get_InStealthMode() ;

/// @brief Method get_Juice, addr 0x58a0364, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Juice() ;

/// @brief Method get_LastShiftCut, addr 0x58a03ec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LastShiftCut() ;

/// @brief Method get_MaxHp, addr 0x58a03a4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxHp() ;

/// @brief Method get_MaxShieldHp, addr 0x58a03ac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxShieldHp() ;

/// @brief Method get_MyRig, addr 0x58a03d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_MyRig() ;

/// @brief Method get_ShieldFlags, addr 0x58a03c4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ShieldFlags() ;

/// @brief Method get_ShieldHp, addr 0x58a03bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ShieldHp() ;

/// [CompilerGenerated]
/// @brief Method get_ShiftCreditCapIncreases, addr 0x58a036c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ShiftCreditCapIncreases() ;

/// [CompilerGenerated]
/// @brief Method get_ShiftCreditCapIncreasesMax, addr 0x58a037c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ShiftCreditCapIncreasesMax() ;

/// @brief Method get_ShiftCredits, addr 0x58a038c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ShiftCredits() ;

/// @brief Method get_ShiftPlayTime, addr 0x58a03dc, size 0x8, virtual false, abstract: false, final false
inline float_t get_ShiftPlayTime() ;

/// @brief Method get_State, addr 0x58a035c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRPlayer_GRPlayerState get_State() ;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

/// @brief Method set_CurrentProgression, addr 0x58a0404, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentProgression(::GlobalNamespace::GRPlayer_ProgressionData  value) ;

/// @brief Method set_LastShiftCut, addr 0x58a03f4, size 0x8, virtual false, abstract: false, final false
inline void set_LastShiftCut(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShiftCreditCapIncreases, addr 0x58a0374, size 0x8, virtual false, abstract: false, final false
inline void set_ShiftCreditCapIncreases(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShiftCreditCapIncreasesMax, addr 0x58a0384, size 0x8, virtual false, abstract: false, final false
inline void set_ShiftCreditCapIncreasesMax(int32_t  value) ;

/// @brief Method set_ShiftPlayTime, addr 0x58a03e4, size 0x8, virtual false, abstract: false, final false
inline void set_ShiftPlayTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRPlayer(GRPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRPlayer(GRPlayer const& ) = delete;

/// @brief Field MAX_CURRENCY offset 0xffffffff size 0x4
static constexpr int32_t  MAX_CURRENCY{static_cast<int32_t>(0x1f4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2008};

/// @brief Field gamePlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GamePlayer>  ___gamePlayer;

/// @brief Field state, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::GRPlayer_GRPlayerState  ___state;

/// @brief Field shiftCreditCache, offset: 0x34, size: 0x4, def value: None
 int32_t  ___shiftCreditCache;

/// @brief Field startingShiftCreditCache, offset: 0x38, size: 0x4, def value: None
 int32_t  ___startingShiftCreditCache;

/// @brief Field playerJuice, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___playerJuice;

/// [CompilerGenerated]
/// @brief Field <ShiftCreditCapIncreases>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____ShiftCreditCapIncreases_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ShiftCreditCapIncreasesMax>k__BackingField, offset: 0x44, size: 0x4, def value: None
 int32_t  ____ShiftCreditCapIncreasesMax_k__BackingField;

/// @brief Field shiftJoinTime, offset: 0x48, size: 0x8, def value: None
 double_t  ___shiftJoinTime;

/// @brief Field isEmployee, offset: 0x50, size: 0x1, def value: None
 bool  ___isEmployee;

/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [Header("Hit / Revive Effects")]
/// @brief Field playerTurnedGhostEffect, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___playerTurnedGhostEffect;

/// @brief Field playerTurnedGhostSoundBank, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___playerTurnedGhostSoundBank;

/// @brief Field playerRevivedEffect, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___playerRevivedEffect;

/// @brief Field playerRevivedSound, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___playerRevivedSound;

/// @brief Field playerRevivedVolume, offset: 0x80, size: 0x4, def value: None
 float_t  ___playerRevivedVolume;

/// @brief Field playerDamageAudioSource, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___playerDamageAudioSource;

/// @brief Field bodyCenter, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___bodyCenter;

/// @brief Field playerDamageEffect, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___playerDamageEffect;

/// @brief Field playerDamageVolume, offset: 0xa0, size: 0x4, def value: None
 float_t  ___playerDamageVolume;

/// @brief Field playerDamageSound, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___playerDamageSound;

/// @brief Field playerDamageOffsetDist, offset: 0xb0, size: 0x4, def value: None
 float_t  ___playerDamageOffsetDist;

/// [ColorUsage(true, true)]
/// [SerializeField]
/// @brief Field deathTintColor, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Color  ___deathTintColor;

/// [ColorUsage(true, true)]
/// [SerializeField]
/// @brief Field deathAmbientLightColor, offset: 0xc4, size: 0x10, def value: None
 ::UnityEngine::Color  ___deathAmbientLightColor;

/// @brief Field shieldGameLight, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameLight>  ___shieldGameLight;

/// [Header("Attach")]
/// @brief Field attachEnemy, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___attachEnemy;

/// [Header("Shield")]
/// @brief Field shieldHeadVisual, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shieldHeadVisual;

/// @brief Field shieldBodyVisual, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shieldBodyVisual;

/// @brief Field shieldActivatedSound, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___shieldActivatedSound;

/// @brief Field shieldActivatedVolume, offset: 0x100, size: 0x4, def value: None
 float_t  ___shieldActivatedVolume;

/// @brief Field shieldDamagedEffect, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___shieldDamagedEffect;

/// @brief Field shieldDamagedSound, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___shieldDamagedSound;

/// @brief Field shieldDamagedVolume, offset: 0x118, size: 0x4, def value: None
 float_t  ___shieldDamagedVolume;

/// @brief Field shieldDestroyedEffect, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___shieldDestroyedEffect;

/// @brief Field shieldDestroyedSound, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___shieldDestroyedSound;

/// @brief Field shieldDestroyedVolume, offset: 0x130, size: 0x4, def value: None
 float_t  ___shieldDestroyedVolume;

/// @brief Field shieldStealthModeDuration, offset: 0x134, size: 0x4, def value: None
 float_t  ___shieldStealthModeDuration;

/// @brief Field shieldStealthModeEndTime, offset: 0x138, size: 0x8, def value: None
 double_t  ___shieldStealthModeEndTime;

/// @brief Field shieldColorNormal, offset: 0x140, size: 0x10, def value: None
 ::UnityEngine::Color  ___shieldColorNormal;

/// @brief Field shieldColorLight, offset: 0x150, size: 0x10, def value: None
 ::UnityEngine::Color  ___shieldColorLight;

/// @brief Field shieldColorStealth, offset: 0x160, size: 0x10, def value: None
 ::UnityEngine::Color  ___shieldColorStealth;

/// @brief Field shieldColorHeal, offset: 0x170, size: 0x10, def value: None
 ::UnityEngine::Color  ___shieldColorHeal;

/// @brief Field xRayVisionRefCount, offset: 0x180, size: 0x4, def value: None
 int32_t  ___xRayVisionRefCount;

/// [Header("Badge")]
/// @brief Field badgeBodyAnchor, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___badgeBodyAnchor;

/// [SerializeField]
/// @brief Field badgeBodyStringAttach, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___badgeBodyStringAttach;

/// @brief Field lastLeftWithBadgeAttachedTime, offset: 0x198, size: 0x8, def value: None
 double_t  ___lastLeftWithBadgeAttachedTime;

/// [Header("Health")]
/// [SerializeField]
/// @brief Field maxHp, offset: 0x1a0, size: 0x4, def value: None
 int32_t  ___maxHp;

/// [SerializeField]
/// @brief Field maxShieldHp, offset: 0x1a4, size: 0x4, def value: None
 int32_t  ___maxShieldHp;

/// @brief Field mothershipId, offset: 0x1a8, size: 0x8, def value: None
 ::StringW  ___mothershipId;

/// @brief Field hp, offset: 0x1b0, size: 0x4, def value: None
 int32_t  ___hp;

/// @brief Field shieldHp, offset: 0x1b4, size: 0x4, def value: None
 int32_t  ___shieldHp;

/// @brief Field shieldFlags, offset: 0x1b8, size: 0x4, def value: None
 int32_t  ___shieldFlags;

/// @brief Field inStealthMode, offset: 0x1bc, size: 0x1, def value: None
 bool  ___inStealthMode;

/// [Header("Damage Vignette")]
/// [SerializeField]
/// [Tooltip("First entry is 1 hp, second entry is 2 hp, etc.")]
/// @brief Field damageOverlayValues, offset: 0x1c0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_DamageOverlayValues>*  ___damageOverlayValues;

/// [SerializeField]
/// @brief Field damageOverlayMaxHp, offset: 0x1c8, size: 0x4, def value: None
 int32_t  ___damageOverlayMaxHp;

/// [HideInInspector]
/// @brief Field badge, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBadge>  ___badge;

/// @brief Field requestCollectItemLimiter, offset: 0x1d8, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___requestCollectItemLimiter;

/// @brief Field requestChargeToolLimiter, offset: 0x1e0, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___requestChargeToolLimiter;

/// @brief Field requestDepositCurrencyLimiter, offset: 0x1e8, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___requestDepositCurrencyLimiter;

/// @brief Field requestShiftStartLimiter, offset: 0x1f0, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___requestShiftStartLimiter;

/// @brief Field requestToolPurchaseStationLimiter, offset: 0x1f8, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___requestToolPurchaseStationLimiter;

/// @brief Field applyEnemyHitLimiter, offset: 0x200, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___applyEnemyHitLimiter;

/// @brief Field reportLocalHitLimiter, offset: 0x208, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___reportLocalHitLimiter;

/// @brief Field reportBreakableBrokenLimiter, offset: 0x210, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___reportBreakableBrokenLimiter;

/// @brief Field playerStateChangeLimiter, offset: 0x218, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___playerStateChangeLimiter;

/// @brief Field promotionBotLimiter, offset: 0x220, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___promotionBotLimiter;

/// @brief Field progressionBroadcastLimiter, offset: 0x228, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___progressionBroadcastLimiter;

/// @brief Field scoreboardPageLimiter, offset: 0x230, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___scoreboardPageLimiter;

/// @brief Field fireShieldLimiter, offset: 0x238, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___fireShieldLimiter;

/// @brief Field vrRig, offset: 0x240, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___vrRig;

/// @brief Field vrRigs, offset: 0x248, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___vrRigs;

/// @brief Field gameId, offset: 0x250, size: 0x8, def value: None
 ::StringW  ___gameId;

/// @brief Field coresCollectedByPlayer, offset: 0x258, size: 0x4, def value: None
 int32_t  ___coresCollectedByPlayer;

/// @brief Field coresCollectedByGroup, offset: 0x25c, size: 0x4, def value: None
 int32_t  ___coresCollectedByGroup;

/// @brief Field coresSpentByPlayer, offset: 0x260, size: 0x4, def value: None
 int32_t  ___coresSpentByPlayer;

/// @brief Field coresSpentByGroup, offset: 0x264, size: 0x4, def value: None
 int32_t  ___coresSpentByGroup;

/// @brief Field gatesUnlocked, offset: 0x268, size: 0x4, def value: None
 int32_t  ___gatesUnlocked;

/// @brief Field deaths, offset: 0x26c, size: 0x4, def value: None
 int32_t  ___deaths;

/// @brief Field caughtByAnomaly, offset: 0x270, size: 0x1, def value: None
 bool  ___caughtByAnomaly;

/// @brief Field itemsPurchased, offset: 0x278, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___itemsPurchased;

/// @brief Field levelsUnlocked, offset: 0x280, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___levelsUnlocked;

/// @brief Field timeIntoShiftAtJoin, offset: 0x288, size: 0x4, def value: None
 float_t  ___timeIntoShiftAtJoin;

/// @brief Field wasPlayerInAtShiftStart, offset: 0x28c, size: 0x1, def value: None
 bool  ___wasPlayerInAtShiftStart;

/// @brief Field sentientCoresCollected, offset: 0x290, size: 0x4, def value: None
 int32_t  ___sentientCoresCollected;

/// @brief Field maxNumberOfPlayersInShift, offset: 0x294, size: 0x4, def value: None
 int32_t  ___maxNumberOfPlayersInShift;

/// @brief Field revives, offset: 0x298, size: 0x4, def value: None
 int32_t  ___revives;

/// @brief Field synchronizedSessionStats, offset: 0x2a0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___synchronizedSessionStats;

/// @brief Field itemsHeldThisShift, offset: 0x2a8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*  ___itemsHeldThisShift;

/// @brief Field itemTypesHeldThisShift, offset: 0x2b0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___itemTypesHeldThisShift;

/// @brief Field totalCoresCollectedByPlayer, offset: 0x2b8, size: 0x4, def value: None
 int32_t  ___totalCoresCollectedByPlayer;

/// @brief Field totalCoresCollectedByGroup, offset: 0x2bc, size: 0x4, def value: None
 int32_t  ___totalCoresCollectedByGroup;

/// @brief Field totalCoresSpentByPlayer, offset: 0x2c0, size: 0x4, def value: None
 int32_t  ___totalCoresSpentByPlayer;

/// @brief Field totalCoresSpentByGroup, offset: 0x2c4, size: 0x4, def value: None
 int32_t  ___totalCoresSpentByGroup;

/// @brief Field totalGatesUnlocked, offset: 0x2c8, size: 0x4, def value: None
 int32_t  ___totalGatesUnlocked;

/// @brief Field totalDeaths, offset: 0x2cc, size: 0x4, def value: None
 int32_t  ___totalDeaths;

/// @brief Field totalItemsPurchased, offset: 0x2d0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___totalItemsPurchased;

/// @brief Field timeIntoGameAtJoin, offset: 0x2d8, size: 0x4, def value: None
 float_t  ___timeIntoGameAtJoin;

/// @brief Field wasPlayerInAtGameStart, offset: 0x2dc, size: 0x1, def value: None
 bool  ___wasPlayerInAtGameStart;

/// @brief Field maxNumberOfPlayersIngame, offset: 0x2e0, size: 0x4, def value: None
 int32_t  ___maxNumberOfPlayersIngame;

/// @brief Field totalRevives, offset: 0x2e4, size: 0x4, def value: None
 int32_t  ___totalRevives;

/// @brief Field numShiftsPlayed, offset: 0x2e8, size: 0x4, def value: None
 int32_t  ___numShiftsPlayed;

/// @brief Field gameStartTime, offset: 0x2ec, size: 0x4, def value: None
 float_t  ___gameStartTime;

/// @brief Field isFirstShift, offset: 0x2f0, size: 0x1, def value: None
 bool  ___isFirstShift;

/// @brief Field totalItemsHeldThisShift, offset: 0x2f8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*  ___totalItemsHeldThisShift;

/// @brief Field totalItemTypesHeldThisShift, offset: 0x300, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___totalItemTypesHeldThisShift;

/// @brief Field damageEffects, offset: 0x308, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayerDamageEffects>  ___damageEffects;

/// @brief Field lowHealthVisualPropertyBlock, offset: 0x310, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___lowHealthVisualPropertyBlock;

/// @brief Field lowHealthTintPropertyId, offset: 0x318, size: 0x4, def value: None
 int32_t  ___lowHealthTintPropertyId;

/// @brief Field currentHealthVisualValue, offset: 0x31c, size: 0x4, def value: None
 int32_t  ___currentHealthVisualValue;

/// @brief Field lowHeathVisualCoroutine, offset: 0x320, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___lowHeathVisualCoroutine;

/// @brief Field playerFrozenSound, offset: 0x328, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___playerFrozenSound;

/// @brief Field shuttleData, offset: 0x330, size: 0x8, def value: None
 ::GlobalNamespace::GRPlayer_ShuttleData*  ___shuttleData;

/// @brief Field currentProgression, offset: 0x338, size: 0x8, def value: None
 ::GlobalNamespace::GRPlayer_ProgressionData  ___currentProgression;

/// @brief Field shiftPlayTime, offset: 0x340, size: 0x4, def value: None
 float_t  ___shiftPlayTime;

/// @brief Field lastShiftCut, offset: 0x344, size: 0x4, def value: None
 int32_t  ___lastShiftCut;

/// @brief Field soak, offset: 0x348, size: 0x8, def value: None
 ::GlobalNamespace::GhostReactorSoak*  ___soak;

/// @brief Field freezeDuration, offset: 0x350, size: 0x4, def value: None
 float_t  ___freezeDuration;

/// @brief Field lastPlayerPosition, offset: 0x354, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPlayerPosition;

/// @brief Field saveEquipmentInProgress, offset: 0x360, size: 0x1, def value: None
 bool  ___saveEquipmentInProgress;

/// @brief Field hasPulledEquipment, offset: 0x361, size: 0x1, def value: None
 bool  ___hasPulledEquipment;

/// @brief Field dropPodLevel, offset: 0x364, size: 0x4, def value: None
 int32_t  ___dropPodLevel;

/// @brief Field dropPodChasisLevel, offset: 0x368, size: 0x4, def value: None
 int32_t  ___dropPodChasisLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer, ___gamePlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___state) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shiftCreditCache) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___startingShiftCreditCache) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerJuice) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ____ShiftCreditCapIncreases_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ____ShiftCreditCapIncreasesMax_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shiftJoinTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___isEmployee) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerTurnedGhostEffect) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerTurnedGhostSoundBank) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerRevivedEffect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerRevivedSound) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerRevivedVolume) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerDamageAudioSource) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___bodyCenter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerDamageEffect) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerDamageVolume) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerDamageSound) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerDamageOffsetDist) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___deathTintColor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___deathAmbientLightColor) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldGameLight) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___attachEnemy) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldHeadVisual) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldBodyVisual) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldActivatedSound) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldActivatedVolume) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldDamagedEffect) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldDamagedSound) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldDamagedVolume) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldDestroyedEffect) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldDestroyedSound) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldDestroyedVolume) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldStealthModeDuration) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldStealthModeEndTime) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldColorNormal) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldColorLight) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldColorStealth) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldColorHeal) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___xRayVisionRefCount) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___badgeBodyAnchor) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___badgeBodyStringAttach) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___lastLeftWithBadgeAttachedTime) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___maxHp) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___maxShieldHp) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___mothershipId) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___hp) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldHp) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shieldFlags) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___inStealthMode) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___damageOverlayValues) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___damageOverlayMaxHp) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___badge) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___requestCollectItemLimiter) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___requestChargeToolLimiter) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___requestDepositCurrencyLimiter) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___requestShiftStartLimiter) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___requestToolPurchaseStationLimiter) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___applyEnemyHitLimiter) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___reportLocalHitLimiter) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___reportBreakableBrokenLimiter) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerStateChangeLimiter) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___promotionBotLimiter) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___progressionBroadcastLimiter) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___scoreboardPageLimiter) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___fireShieldLimiter) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___vrRig) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___vrRigs) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___gameId) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___coresCollectedByPlayer) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___coresCollectedByGroup) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___coresSpentByPlayer) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___coresSpentByGroup) == 0x264, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___gatesUnlocked) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___deaths) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___caughtByAnomaly) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___itemsPurchased) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___levelsUnlocked) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___timeIntoShiftAtJoin) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___wasPlayerInAtShiftStart) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___sentientCoresCollected) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___maxNumberOfPlayersInShift) == 0x294, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___revives) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___synchronizedSessionStats) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___itemsHeldThisShift) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___itemTypesHeldThisShift) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalCoresCollectedByPlayer) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalCoresCollectedByGroup) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalCoresSpentByPlayer) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalCoresSpentByGroup) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalGatesUnlocked) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalDeaths) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalItemsPurchased) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___timeIntoGameAtJoin) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___wasPlayerInAtGameStart) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___maxNumberOfPlayersIngame) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalRevives) == 0x2e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___numShiftsPlayed) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___gameStartTime) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___isFirstShift) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalItemsHeldThisShift) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___totalItemTypesHeldThisShift) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___damageEffects) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___lowHealthVisualPropertyBlock) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___lowHealthTintPropertyId) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___currentHealthVisualValue) == 0x31c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___lowHeathVisualCoroutine) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___playerFrozenSound) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shuttleData) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___currentProgression) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___shiftPlayTime) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___lastShiftCut) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___soak) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___freezeDuration) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___lastPlayerPosition) == 0x354, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___saveEquipmentInProgress) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___hasPulledEquipment) == 0x361, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___dropPodLevel) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer, ___dropPodChasisLevel) == 0x368, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer) == 0x370, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRPlayer/<LowHeathVisualCoroutine>d__215
class CORDL_TYPE GRPlayer__LowHeathVisualCoroutine_d__215 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GRPlayer>  __4__this;

/// @brief Field <index>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__index_5__2, put=__cordl_internal_set__index_5__2)) int32_t  _index_5__2;

/// @brief Field <startTime>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__3, put=__cordl_internal_set__startTime_5__3)) float_t  _startTime_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x58a66d0, size 0x228, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58a68f8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x58a6900, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x58a6938, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x58a66cc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__index_5__2() const;

constexpr int32_t& __cordl_internal_get__index_5__2() ;

constexpr float_t const& __cordl_internal_get__startTime_5__3() const;

constexpr float_t& __cordl_internal_get__startTime_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set__index_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__startTime_5__3(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x58a51ec, size 0x28, virtual false, abstract: false, final false
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
constexpr GRPlayer__LowHeathVisualCoroutine_d__215() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRPlayer__LowHeathVisualCoroutine_d__215", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRPlayer__LowHeathVisualCoroutine_d__215(GRPlayer__LowHeathVisualCoroutine_d__215 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRPlayer__LowHeathVisualCoroutine_d__215", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRPlayer__LowHeathVisualCoroutine_d__215(GRPlayer__LowHeathVisualCoroutine_d__215 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2007};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  _____4__this;

/// @brief Field <index>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____index_5__2;

/// @brief Field <startTime>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____startTime_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215, ____index_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215, ____startTime_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GRPlayer::ShuttleState, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRPlayer/ShuttleData
class CORDL_TYPE GRPlayer_ShuttleData : public ::System::Object {
public:
// Declarations
/// @brief Field currShuttleId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currShuttleId, put=__cordl_internal_set_currShuttleId)) int32_t  currShuttleId;

/// @brief Field ownerUserId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerUserId, put=__cordl_internal_set_ownerUserId)) ::StringW  ownerUserId;

/// @brief Field state, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRPlayer_ShuttleState  state;

/// @brief Field stateStartTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) double_t  stateStartTime;

/// @brief Field targetLevel, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetLevel, put=__cordl_internal_set_targetLevel)) int32_t  targetLevel;

/// @brief Field targetShuttleId, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetShuttleId, put=__cordl_internal_set_targetShuttleId)) int32_t  targetShuttleId;

static inline ::GlobalNamespace::GRPlayer_ShuttleData* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_currShuttleId() const;

constexpr int32_t& __cordl_internal_get_currShuttleId() ;

constexpr ::StringW const& __cordl_internal_get_ownerUserId() const;

constexpr ::StringW& __cordl_internal_get_ownerUserId() ;

constexpr ::GlobalNamespace::GRPlayer_ShuttleState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRPlayer_ShuttleState& __cordl_internal_get_state() ;

constexpr double_t const& __cordl_internal_get_stateStartTime() const;

constexpr double_t& __cordl_internal_get_stateStartTime() ;

constexpr int32_t const& __cordl_internal_get_targetLevel() const;

constexpr int32_t& __cordl_internal_get_targetLevel() ;

constexpr int32_t const& __cordl_internal_get_targetShuttleId() const;

constexpr int32_t& __cordl_internal_get_targetShuttleId() ;

constexpr void __cordl_internal_set_currShuttleId(int32_t  value) ;

constexpr void __cordl_internal_set_ownerUserId(::StringW  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRPlayer_ShuttleState  value) ;

constexpr void __cordl_internal_set_stateStartTime(double_t  value) ;

constexpr void __cordl_internal_set_targetLevel(int32_t  value) ;

constexpr void __cordl_internal_set_targetShuttleId(int32_t  value) ;

/// @brief Method .ctor, addr 0x58a09d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRPlayer_ShuttleData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRPlayer_ShuttleData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRPlayer_ShuttleData(GRPlayer_ShuttleData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRPlayer_ShuttleData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRPlayer_ShuttleData(GRPlayer_ShuttleData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2004};

/// @brief Field ownerUserId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ownerUserId;

/// @brief Field currShuttleId, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currShuttleId;

/// @brief Field targetShuttleId, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___targetShuttleId;

/// @brief Field targetLevel, offset: 0x20, size: 0x4, def value: None
 int32_t  ___targetLevel;

/// @brief Field state, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::GRPlayer_ShuttleState  ___state;

/// @brief Field stateStartTime, offset: 0x28, size: 0x8, def value: None
 double_t  ___stateStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer_ShuttleData, ___ownerUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_ShuttleData, ___currShuttleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_ShuttleData, ___targetShuttleId) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_ShuttleData, ___targetLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_ShuttleData, ___state) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_ShuttleData, ___stateStartTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer_ShuttleData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
